// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.

#include <fstream>
#include <sstream>

#include "PyOpenColorIO.h"
#include "PyUtils.h"

namespace OCIO_NAMESPACE
{
namespace
{

enum ConfigIterator
{
    IT_ENVIRONMENT_VAR_NAME = 0,
    IT_SEARCH_PATH,
    IT_COLOR_SPACE_NAME,
    IT_COLOR_SPACE,
    IT_ACTIVE_COLOR_SPACE_NAME,
    IT_ACTIVE_COLOR_SPACE,
    IT_ROLE_NAME,
    IT_ROLE_COLOR_SPACE,
    IT_DISPLAY,
    IT_VIEW,
    IT_LOOK_NAME,
    IT_LOOK,
    IT_VIEW_TRANSFORM_NAME,
    IT_VIEW_TRANSFORM
};

using EnvironmentVarNameIterator   = PyIterator<ConfigRcPtr, IT_ENVIRONMENT_VAR_NAME>;
using SearchPathIterator           = PyIterator<ConfigRcPtr, IT_SEARCH_PATH>;
using ColorSpaceNameIterator       = PyIterator<ConfigRcPtr, 
                                                IT_COLOR_SPACE_NAME, 
                                                SearchReferenceSpaceType,
                                                ColorSpaceVisibility>;
using ColorSpaceIterator           = PyIterator<ConfigRcPtr, 
                                                IT_COLOR_SPACE, 
                                                SearchReferenceSpaceType,
                                                ColorSpaceVisibility>;
using ActiveColorSpaceNameIterator = PyIterator<ConfigRcPtr, IT_ACTIVE_COLOR_SPACE_NAME>;
using ActiveColorSpaceIterator     = PyIterator<ConfigRcPtr, IT_ACTIVE_COLOR_SPACE>;
using RoleNameIterator             = PyIterator<ConfigRcPtr, IT_ROLE_NAME>;
using RoleColorSpaceIterator       = PyIterator<ConfigRcPtr, IT_ROLE_COLOR_SPACE>;
using DisplayIterator              = PyIterator<ConfigRcPtr, IT_DISPLAY>;
using ViewIterator                 = PyIterator<ConfigRcPtr, IT_VIEW, const char *>;
using LookNameIterator             = PyIterator<ConfigRcPtr, IT_LOOK_NAME>;
using LookIterator                 = PyIterator<ConfigRcPtr, IT_LOOK>;
using ViewTransformNameIterator    = PyIterator<ConfigRcPtr, IT_VIEW_TRANSFORM_NAME>;
using ViewTransformIterator        = PyIterator<ConfigRcPtr, IT_VIEW_TRANSFORM>;

} // namespace

void bindPyConfig(py::module & m)
{
    auto cls = py::class_<Config, ConfigRcPtr /* holder */>(m, "Config", DS(Config))
        .def(py::init(&Config::Create), DS(Config, Create))

        .def_static("CreateRaw", &Config::CreateRaw, DS(Config, CreateRaw))
        .def_static("CreateFromEnv", &Config::CreateFromEnv, DS(Config, CreateFromEnv))
        .def_static("CreateFromFile", &Config::CreateFromFile, DS(Config, CreateFromFile), "filename"_a)
        .def_static("CreateFromStream", [](const std::string & str) 
            {
                std::istringstream is(str);
                return Config::CreateFromStream(is);
            },
             DS(Config, CreateFromStream),
             "str"_a)
                    
        .def("getMajorVersion", &Config::getMajorVersion, DS(Config, getMajorVersion))
        .def("setMajorVersion", &Config::setMajorVersion, DS(Config, setMajorVersion), "major"_a)
        .def("getMinorVersion", &Config::getMinorVersion, DS(Config, getMinorVersion))
        .def("setMinorVersion", &Config::setMinorVersion, DS(Config, setMinorVersion), "minor"_a)
        .def("upgradeToLatestVersion", &Config::upgradeToLatestVersion, DS(Config, upgradeToLatestVersion))
        .def("sanityCheck", &Config::sanityCheck, DS(Config, sanityCheck))
        .def("getFamilySeparator", &Config::getFamilySeparator, DS(Config, getFamilySeparator))
        .def("setFamilySeparator", &Config::setFamilySeparator, DS(Config, setFamilySeparator), "separator"_a)
        .def("getDescription", &Config::getDescription, DS(Config, getDescription))
        .def("setDescription", &Config::setDescription, DS(Config, setDescription), "description"_a)
        .def("serialize", [](ConfigRcPtr & self, const std::string & fileName) 
            {
                std::ofstream f(fileName.c_str());
                self->serialize(f);
                f.close();
            },
             DS(Config, serialize),
             "fileName"_a)
        .def("serialize", [](ConfigRcPtr & self) 
            {
                std::ostringstream os;
                self->serialize(os);
                return os.str();
            },
             DS(Config, serialize))
        .def("getCacheID", (const char * (Config::*)() const) &Config::getCacheID, DS(Config, getCacheID))
        .def("getCacheID", 
             (const char * (Config::*)(const ConstContextRcPtr &) const) &Config::getCacheID, 
             DS(Config, getCacheID, 2),
             "context"_a)

        // Resources
        .def("getCurrentContext", &Config::getCurrentContext, DS(Config, getCurrentContext))
        .def("addEnvironmentVar", &Config::addEnvironmentVar, DS(Config, addEnvironmentVar), "name"_a, "defaultValue"_a)
        .def("getEnvironmentVarNames", [](ConfigRcPtr & self) 
            {
                return EnvironmentVarNameIterator(self);
            })
        .def("getEnvironmentVarDefault", &Config::getEnvironmentVarDefault, DS(Config, getEnvironmentVarDefault), "name"_a)
        .def("clearEnvironmentVars", &Config::clearEnvironmentVars, DS(Config, clearEnvironmentVars))
        .def("setEnvironmentMode", &Config::setEnvironmentMode, DS(Config, setEnvironmentMode), "mode"_a)
        .def("getEnvironmentMode", &Config::getEnvironmentMode, DS(Config, getEnvironmentMode))
        .def("loadEnvironment", &Config::loadEnvironment, DS(Config, loadEnvironment))
        .def("getSearchPath", (const char * (Config::*)() const) &Config::getSearchPath, DS(Config, getSearchPath))
        .def("setSearchPath", &Config::setSearchPath, DS(Config, setSearchPath), "path"_a)
        .def("getSearchPaths", [](ConfigRcPtr & self) { return SearchPathIterator(self); })
        .def("clearSearchPaths", &Config::clearSearchPaths, DS(Config, clearSearchPaths))
        .def("addSearchPath", &Config::addSearchPath, DS(Config, addSearchPath), "path"_a)
        .def("getWorkingDir", &Config::getWorkingDir, DS(Config, getWorkingDir))
        .def("setWorkingDir", &Config::setWorkingDir, DS(Config, setWorkingDir), "dirname"_a)

        // ColorSpaces
        .def("getColorSpaces", &Config::getColorSpaces, DS(Config, getColorSpaces), "category"_a)
        .def("getColorSpace", &Config::getColorSpace, DS(Config, getColorSpace), "name"_a)
        .def("getColorSpaceNames", [](ConfigRcPtr & self, 
                                      SearchReferenceSpaceType searchReferenceType, 
                                      ColorSpaceVisibility visibility) 
            {
                return ColorSpaceNameIterator(self, searchReferenceType, visibility);
            },
             "searchReferenceType"_a, "visibility"_a)
        .def("getColorSpaces", [](ConfigRcPtr & self, 
                                  SearchReferenceSpaceType searchReferenceType, 
                                  ColorSpaceVisibility visibility) 
            {
                return ColorSpaceIterator(self, searchReferenceType, visibility);
            },
             DS(Config, getColorSpaces),
             "searchReferenceType"_a, "visibility"_a)
        .def("getColorSpaceNames", [](ConfigRcPtr & self) 
            {
                return ActiveColorSpaceNameIterator(self);
            })
        .def("getColorSpaces", [](ConfigRcPtr & self) 
            {
                return ActiveColorSpaceIterator(self);
            })
        .def("addColorSpace", &Config::addColorSpace, DS(Config, addColorSpace), "cs"_a)
        .def("removeColorSpace", &Config::removeColorSpace, DS(Config, removeColorSpace), "name"_a)
        .def("isColorSpaceUsed", &Config::isColorSpaceUsed, DS(Config, isColorSpaceUsed), "name"_a)
        .def("clearColorSpaces", &Config::clearColorSpaces, DS(Config, clearColorSpaces))
        .def("parseColorSpaceFromString", &Config::parseColorSpaceFromString, DS(Config, parseColorSpaceFromString), "str"_a)
        .def("isStrictParsingEnabled", &Config::isStrictParsingEnabled, DS(Config, isStrictParsingEnabled))
        .def("setInactiveColorSpaces", &Config::setInactiveColorSpaces, DS(Config, setInactiveColorSpaces), "inactiveColorSpaces"_a)
        .def("getInactiveColorSpaces", &Config::getInactiveColorSpaces, DS(Config, getInactiveColorSpaces))

        // Roles
        .def("setRole", &Config::setRole, DS(Config, setRole), "role"_a, "colorSpaceName"_a)
        .def("hasRole", &Config::hasRole, DS(Config, hasRole), "role"_a)
        .def("getRoleNames", [](ConfigRcPtr & self) { return RoleNameIterator(self); })
        .def("getRoles", [](ConfigRcPtr & self) { return RoleColorSpaceIterator(self); })

        // Display/View Registration
        .def("getDefaultDisplay", &Config::getDefaultDisplay, DS(Config, getDefaultDisplay))
        .def("getDisplays", [](ConfigRcPtr & self) { return DisplayIterator(self); })
        .def("getDefaultView", &Config::getDefaultView, DS(Config, getDefaultView), "display"_a)
        .def("getViews", [](ConfigRcPtr & self, const std::string & display)
            {
                return ViewIterator(self, display.c_str());
            },
             "display"_a)
        .def("getDisplayViewTransformName", &Config::getDisplayViewTransformName, DS(Config, getDisplayViewTransformName),
             "display"_a, "view"_a)
        .def("getDisplayColorSpaceName", &Config::getDisplayColorSpaceName,
              DS(Config, getDisplayColorSpaceName),
              "display"_a,
              "view"_a)
        .def("getDisplayLooks", &Config::getDisplayLooks, DS(Config, getDisplayLooks), "display"_a, "view"_a)
        .def("addDisplay", 
             (void (Config::*)(const char *, const char *, const char *, const char *)) 
             &Config::addDisplay,
             DS(Config, addDisplay),
             "display"_a, "view"_a, "colorSpaceName"_a, "looks"_a)
        .def("addDisplay", 
             (void (Config::*)(const char *, 
                               const char *, 
                               const char *, 
                               const char *, 
                               const char *)) 
             &Config::addDisplay,
             DS(Config, addDisplay),
             "display"_a, "view"_a, "viewTransform"_a, "displayColorSpaceName"_a, "looks"_a)
        .def("removeDisplay", &Config::removeDisplay, DS(Config, removeDisplay), "display"_a, "view"_a)
        .def("clearDisplays", &Config::clearDisplays, DS(Config, clearDisplays))
        .def("setActiveDisplays", &Config::setActiveDisplays, DS(Config, setActiveDisplays), "displays"_a)
        .def("getActiveDisplays", &Config::getActiveDisplays, DS(Config, getActiveDisplays))
        .def("setActiveViews", &Config::setActiveViews, DS(Config, setActiveViews), "views"_a)
        .def("getActiveViews", &Config::getActiveViews, DS(Config, getActiveViews))

        // Luma
        .def("getDefaultLumaCoefs", [](ConfigRcPtr & self)
            {
                std::array<double, 3> rgb;
                self->getDefaultLumaCoefs(rgb.data());
                return rgb;
            },
            DS(Config, getDefaultLumaCoefs))
        .def("setDefaultLumaCoefs", [](ConfigRcPtr & self, const std::array<double, 3> & rgb)
            {
                self->setDefaultLumaCoefs(rgb.data());
            },
             DS(Config, setDefaultLumaCoefs),
             "rgb"_a)

        // Look
        .def("getLook", &Config::getLook, DS(Config, getLook), "name"_a)
        .def("getLookNames", [](ConfigRcPtr & self) { return LookNameIterator(self); })
        .def("getLooks", [](ConfigRcPtr & self) { return LookIterator(self); })
        .def("addLook", &Config::addLook, DS(Config, addLook), "look"_a)
        .def("clearLooks", &Config::clearLooks, DS(Config, clearLooks))

        // View Transforms
        .def("getViewTransform", &Config::getViewTransform, DS(Config, getViewTransform), "name"_a)
        .def("getViewTransformNames", [](ConfigRcPtr & self) 
            { 
                return ViewTransformNameIterator(self); 
            })
        .def("getViewTransforms", [](ConfigRcPtr & self) 
            { 
                return ViewTransformIterator(self); 
            })
        .def("addViewTransform", &Config::addViewTransform, DS(Config, addViewTransform), "viewTransform"_a)
        .def("getDefaultSceneToDisplayViewTransform", 
             &Config::getDefaultSceneToDisplayViewTransform,
             DS(Config, getDefaultSceneToDisplayViewTransform))
        .def("clearViewTransforms", &Config::clearViewTransforms, DS(Config, clearViewTransforms))

        // File Rules
        .def("getFileRules", &Config::getFileRules, DS(Config, getFileRules))
        .def("setFileRules", &Config::setFileRules, DS(Config, setFileRules), "fileRules"_a)
        .def("getColorSpaceFromFilepath",
             (const char * (Config::*)(const char *) const) &Config::getColorSpaceFromFilepath,
             DS(Config, getColorSpaceFromFilepath),
             "filePath"_a)
        .def("getColorSpaceFromFilepath",
             (const char * (Config::*)(const char *, size_t &) const) 
             &Config::getColorSpaceFromFilepath,
             DS(Config, getColorSpaceFromFilepath),
             "filePath"_a, "ruleIndex"_a)
        .def("filepathOnlyMatchesDefaultRule", &Config::filepathOnlyMatchesDefaultRule,
             DS(Config, filepathOnlyMatchesDefaultRule),
             "filePath"_a)

        // Processors
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const ConstColorSpaceRcPtr &, 
                                              const ConstColorSpaceRcPtr &) const) 
             &Config::getProcessor,
             DS(Config, getProcessor),
             "srcColorSpace"_a, "dstColorSpace"_a)
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const ConstContextRcPtr &, 
                                              const ConstColorSpaceRcPtr &, 
                                              const ConstColorSpaceRcPtr &) const) 
             &Config::getProcessor,
             DS(Config, getProcessor, 2),
             "context"_a, "srcColorSpace"_a, "dstColorSpace"_a)
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const char *, const char *) const) 
             &Config::getProcessor,
             DS(Config, getProcessor, 3),
             "srcName"_a, "dstName"_a)
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const ConstContextRcPtr &, 
                                              const char *, 
                                              const char *) const) 
             &Config::getProcessor,
             DS(Config, getProcessor, 4),
             "context"_a, "srcName"_a, "dstName"_a)
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const char *, const char *, const char *) const) 
             &Config::getProcessor,
             DS(Config, getProcessor, 5),
             "inputColorSpaceName"_a, "display"_a, "view"_a)
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const ConstContextRcPtr &, 
                                              const char *, 
                                              const char *, 
                                              const char *) const) 
             &Config::getProcessor,
             DS(Config, getProcessor, 6),
             "context"_a, "inputColorSpaceName"_a, "display"_a, "view"_a)
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const ConstTransformRcPtr &) const) 
             &Config::getProcessor,
             DS(Config, getProcessor, 7),
             "transform"_a)
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const ConstTransformRcPtr &, 
                                              TransformDirection) const) 
             &Config::getProcessor,
             DS(Config, getProcessor, 8),
             "transform"_a, "direction"_a)
        .def("getProcessor", 
             (ConstProcessorRcPtr (Config::*)(const ConstContextRcPtr &, 
                                              const ConstTransformRcPtr &, 
                                              TransformDirection) const) 
             &Config::getProcessor,
             DS(Config, getProcessor, 9),
             "context"_a, "transform"_a, "direction"_a)

        .def_static("GetProcessor", [](const ConstConfigRcPtr & srcConfig,
                                       const char * srcName,
                                       const ConstConfigRcPtr & dstConfig,
                                       const char * dstName) 
            {
                return Config::GetProcessor(srcConfig, srcName, dstConfig, dstName);
            },
             DS(Config, getProcessor, 9),
             "srcConfig"_a, "srcName"_a, "dstConfig"_a, "dstName"_a)
        .def_static("GetProcessor", [](const ConstContextRcPtr & srcContext,
                                       const ConstConfigRcPtr & srcConfig,
                                       const char * srcName,
                                       const ConstContextRcPtr & dstContext,
                                       const ConstConfigRcPtr & dstConfig,
                                       const char * dstName)
            {
                return Config::GetProcessor(srcContext, srcConfig, srcName, 
                                            dstContext, dstConfig, dstName);
            },
             DS(Config, getProcessor, 9),
             "srcContext"_a, "srcConfig"_a, "srcName"_a, 
             "dstContext"_a, "dstConfig"_a, "dstName"_a)
        .def_static("GetProcessor", [](const ConstConfigRcPtr & srcConfig,
                                       const char * srcName,
                                       const char * srcInterchangeName,
                                       const ConstConfigRcPtr & dstConfig,
                                       const char * dstName,
                                       const char * dstInterchangeName)
            {
                return Config::GetProcessor(srcConfig, srcName, srcInterchangeName,
                                            dstConfig, dstName, dstInterchangeName);
            },
             DS(Config, getProcessor, 9),
             "srcConfig"_a, "srcName"_a, "srcInterchangeName"_a, 
             "dstConfig"_a, "dstName"_a, "dstInterchangeName"_a)
        .def_static("GetProcessor", [](const ConstContextRcPtr & srcContext,
                                       const ConstConfigRcPtr & srcConfig,
                                       const char * srcName,
                                       const char * srcInterchangeName,
                                       const ConstContextRcPtr & dstContext,
                                       const ConstConfigRcPtr & dstConfig,
                                       const char * dstName,
                                       const char * dstInterchangeName)
            {
                return Config::GetProcessor(srcContext, srcConfig, srcName, srcInterchangeName,
                                            dstContext, dstConfig, dstName, dstInterchangeName);
            },
             DS(Config, getProcessor, 9),
             "srcContext"_a, "srcConfig"_a, "srcName"_a, "srcInterchangeName"_a, 
             "dstContext"_a, "dstConfig"_a, "dstName"_a, "dstInterchangeName"_a);

    defStr(cls);

    py::class_<EnvironmentVarNameIterator>(cls, "EnvironmentVarNameIterator")
        .def("__len__", [](EnvironmentVarNameIterator & it) 
            { 
                return it.m_obj->getNumEnvironmentVars(); 
            })
        .def("__getitem__", [](EnvironmentVarNameIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumEnvironmentVars());
                return it.m_obj->getEnvironmentVarNameByIndex(i);
            })
        .def("__iter__", [](EnvironmentVarNameIterator & it) -> EnvironmentVarNameIterator & 
            { 
                return it; 
            })
        .def("__next__", [](EnvironmentVarNameIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumEnvironmentVars());
                return it.m_obj->getEnvironmentVarNameByIndex(i);
            });

    py::class_<SearchPathIterator>(cls, "SearchPathIterator")
        .def("__len__", [](SearchPathIterator & it) 
            { 
                return it.m_obj->getNumSearchPaths(); 
            })
        .def("__getitem__", [](SearchPathIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumSearchPaths());
                return it.m_obj->getSearchPath(i);
            })
        .def("__iter__", [](SearchPathIterator & it) -> SearchPathIterator & { return it; })
        .def("__next__", [](SearchPathIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumSearchPaths());
                return it.m_obj->getSearchPath(i);
            });

    py::class_<ColorSpaceNameIterator>(cls, "ColorSpaceNameIterator")
        .def("__len__", [](ColorSpaceNameIterator & it) 
            { 
                return it.m_obj->getNumColorSpaces(std::get<0>(it.m_args), std::get<1>(it.m_args)); 
            })
        .def("__getitem__", [](ColorSpaceNameIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumColorSpaces(std::get<0>(it.m_args), 
                                                             std::get<1>(it.m_args)));
                return it.m_obj->getColorSpaceNameByIndex(std::get<0>(it.m_args), 
                                                          std::get<1>(it.m_args), 
                                                          i);
            })
        .def("__iter__", [](ColorSpaceNameIterator & it) -> ColorSpaceNameIterator & 
            { 
                return it; 
            })
        .def("__next__", [](ColorSpaceNameIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumColorSpaces(std::get<0>(it.m_args), 
                                                                 std::get<1>(it.m_args)));
                return it.m_obj->getColorSpaceNameByIndex(std::get<0>(it.m_args), 
                                                          std::get<1>(it.m_args), 
                                                          i);
            });

    py::class_<ColorSpaceIterator>(cls, "ColorSpaceIterator")
        .def("__len__", [](ColorSpaceIterator & it) 
            { 
                return it.m_obj->getNumColorSpaces(std::get<0>(it.m_args), std::get<1>(it.m_args)); 
            })
        .def("__getitem__", [](ColorSpaceIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumColorSpaces(std::get<0>(it.m_args), 
                                                             std::get<1>(it.m_args)));
                const char * name = it.m_obj->getColorSpaceNameByIndex(std::get<0>(it.m_args), 
                                                                       std::get<1>(it.m_args), 
                                                                       i);
                return it.m_obj->getColorSpace(name);
            })
        .def("__iter__", [](ColorSpaceIterator & it) -> ColorSpaceIterator & { return it; })
        .def("__next__", [](ColorSpaceIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumColorSpaces(std::get<0>(it.m_args), 
                                                                 std::get<1>(it.m_args)));
                const char * name = it.m_obj->getColorSpaceNameByIndex(std::get<0>(it.m_args), 
                                                                       std::get<1>(it.m_args), 
                                                                       i);
                return it.m_obj->getColorSpace(name);
            });

    py::class_<ActiveColorSpaceNameIterator>(cls, "ActiveColorSpaceNameIterator")
        .def("__len__", [](ActiveColorSpaceNameIterator & it) 
            { 
                return it.m_obj->getNumColorSpaces(); 
            })
        .def("__getitem__", [](ActiveColorSpaceNameIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumColorSpaces());
                return it.m_obj->getColorSpaceNameByIndex(i);
            })
        .def("__iter__", [](ActiveColorSpaceNameIterator & it) -> ActiveColorSpaceNameIterator & 
            { 
                return it; 
            })
        .def("__next__", [](ActiveColorSpaceNameIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumColorSpaces());
                return it.m_obj->getColorSpaceNameByIndex(i);
            });

    py::class_<ActiveColorSpaceIterator>(cls, "ActiveColorSpaceIterator")
        .def("__len__", [](ActiveColorSpaceIterator & it) 
            { 
                return it.m_obj->getNumColorSpaces(); 
            })
        .def("__getitem__", [](ActiveColorSpaceIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumColorSpaces());
                const char * name = it.m_obj->getColorSpaceNameByIndex(i);
                return it.m_obj->getColorSpace(name);
            })
        .def("__iter__", [](ActiveColorSpaceIterator & it) -> ActiveColorSpaceIterator & 
            { 
                return it; 
            })
        .def("__next__", [](ActiveColorSpaceIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumColorSpaces());
                const char * name = it.m_obj->getColorSpaceNameByIndex(i);
                return it.m_obj->getColorSpace(name);
            });

    py::class_<RoleNameIterator>(cls, "RoleNameIterator")
        .def("__len__", [](RoleNameIterator & it) { return it.m_obj->getNumRoles(); })
        .def("__getitem__", [](RoleNameIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumRoles());
                return it.m_obj->getRoleName(i);
            })
        .def("__iter__", [](RoleNameIterator & it) -> RoleNameIterator & { return it; })
        .def("__next__", [](RoleNameIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumRoles());
                return it.m_obj->getRoleName(i);
            });

    py::class_<RoleColorSpaceIterator>(cls, "RoleColorSpaceIterator")
        .def("__len__", [](RoleColorSpaceIterator & it) { return it.m_obj->getNumRoles(); })
        .def("__getitem__", [](RoleColorSpaceIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumRoles());
                return py::make_tuple(it.m_obj->getRoleName(i), 
                                      it.m_obj->getRoleColorSpace(i));
            })
        .def("__iter__", [](RoleColorSpaceIterator & it) -> RoleColorSpaceIterator & 
            { 
                return it; 
            })
        .def("__next__", [](RoleColorSpaceIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumRoles());
                return py::make_tuple(it.m_obj->getRoleName(i), 
                                      it.m_obj->getRoleColorSpace(i));
            });

    py::class_<DisplayIterator>(cls, "DisplayIterator")
        .def("__len__", [](DisplayIterator & it) { return it.m_obj->getNumDisplays(); })
        .def("__getitem__", [](DisplayIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumDisplays());
                return it.m_obj->getDisplay(i);
            })
        .def("__iter__", [](DisplayIterator & it) -> DisplayIterator & { return it; })
        .def("__next__", [](DisplayIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumDisplays());
                return it.m_obj->getDisplay(i);
            });

    py::class_<ViewIterator>(cls, "ViewIterator")
        .def("__len__", [](ViewIterator & it) { return it.m_obj->getNumViews(std::get<0>(it.m_args)); })
        .def("__getitem__", [](ViewIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumViews(std::get<0>(it.m_args)));
                return it.m_obj->getView(std::get<0>(it.m_args), i);
            })
        .def("__iter__", [](ViewIterator & it) -> ViewIterator & { return it; })
        .def("__next__", [](ViewIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumViews(std::get<0>(it.m_args)));
                return it.m_obj->getView(std::get<0>(it.m_args), i);
            });

    py::class_<LookNameIterator>(cls, "LookNameIterator")
        .def("__len__", [](LookNameIterator & it) { return it.m_obj->getNumLooks(); })
        .def("__getitem__", [](LookNameIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumLooks());
                return it.m_obj->getLookNameByIndex(i);
            })
        .def("__iter__", [](LookNameIterator & it) -> LookNameIterator & { return it; })
        .def("__next__", [](LookNameIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumLooks());
                return it.m_obj->getLookNameByIndex(i);
            });

    py::class_<LookIterator>(cls, "LookIterator")
        .def("__len__", [](LookIterator & it) { return it.m_obj->getNumLooks(); })
        .def("__getitem__", [](LookIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumLooks());
                const char * name = it.m_obj->getLookNameByIndex(i);
                return it.m_obj->getLook(name);
            })
        .def("__iter__", [](LookIterator & it) -> LookIterator & { return it; })
        .def("__next__", [](LookIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumLooks());
                const char * name = it.m_obj->getLookNameByIndex(i);
                return it.m_obj->getLook(name);
            });

    py::class_<ViewTransformNameIterator>(cls, "ViewTransformNameIterator")
        .def("__len__", [](ViewTransformNameIterator & it) 
            { 
                return it.m_obj->getNumViewTransforms(); 
            })
        .def("__getitem__", [](ViewTransformNameIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumViewTransforms());
                return it.m_obj->getViewTransformNameByIndex(i);
            })
        .def("__iter__", [](ViewTransformNameIterator & it) -> ViewTransformNameIterator & 
            { 
                return it; 
            })
        .def("__next__", [](ViewTransformNameIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumViewTransforms());
                return it.m_obj->getViewTransformNameByIndex(i);
            });

    py::class_<ViewTransformIterator>(cls, "ViewTransformIterator")
        .def("__len__", [](ViewTransformIterator & it) 
            { 
                return it.m_obj->getNumViewTransforms(); 
            })
        .def("__getitem__", [](ViewTransformIterator & it, int i) 
            { 
                it.checkIndex(i, it.m_obj->getNumViewTransforms());
                const char * name = it.m_obj->getViewTransformNameByIndex(i);
                return it.m_obj->getViewTransform(name);
            })
        .def("__iter__", [](ViewTransformIterator & it) -> ViewTransformIterator & { return it; })
        .def("__next__", [](ViewTransformIterator & it)
            {
                int i = it.nextIndex(it.m_obj->getNumViewTransforms());
                const char * name = it.m_obj->getViewTransformNameByIndex(i);
                return it.m_obj->getViewTransform(name);
            });

    m.def("GetCurrentConfig", &GetCurrentConfig);
    m.def("SetCurrentConfig", &SetCurrentConfig, "config"_a);
}

} // namespace OCIO_NAMESPACE
