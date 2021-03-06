// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.

#include "PyTransform.h"

namespace OCIO_NAMESPACE
{

void bindPyDisplayTransform(py::module & m)
{
    DisplayTransformRcPtr DEFAULT = DisplayTransform::Create();

    py::class_<DisplayTransform, 
               DisplayTransformRcPtr /* holder */, 
               Transform /* base */>(m, "DisplayTransform", DS(DisplayTransform))
        .def(py::init(&DisplayTransform::Create), DS(DisplayTransform, Create))
        .def(py::init([](const std::string & inputColorSpaceName,
                         TransformRcPtr linearCC,
                         TransformRcPtr colorTimingCC,
                         TransformRcPtr channelView,
                         const std::string & display,
                         const std::string & view,
                         TransformRcPtr displayCC,
                         const std::string & looksOverride,
                         bool looksOverrideEnabled,
                         TransformDirection dir) 
            {
                DisplayTransformRcPtr p = DisplayTransform::Create();
                if (!inputColorSpaceName.empty())
                { 
                    p->setInputColorSpaceName(inputColorSpaceName.c_str());
                }
                if (linearCC)               { p->setLinearCC(linearCC); }
                if (colorTimingCC)          { p->setColorTimingCC(colorTimingCC); }
                if (channelView)            { p->setChannelView(channelView); }
                if (!display.empty())       { p->setDisplay(display.c_str()); }
                if (!view.empty())          { p->setView(view.c_str()); }
                if (displayCC)              { p->setDisplayCC(displayCC); }
                if (!looksOverride.empty()) { p->setLooksOverride(looksOverride.c_str()); }
                p->setLooksOverrideEnabled(looksOverrideEnabled);
                p->setDirection(dir);
                p->validate();
                return p;
            }),
             DS(DisplayTransform, DisplayTransform),
             "inputColorSpaceName"_a = DEFAULT->getInputColorSpaceName(),
             "linearCC"_a = DEFAULT->getLinearCC(),
             "colorTimingCC"_a = DEFAULT->getColorTimingCC(),
             "channelView"_a = DEFAULT->getChannelView(),
             "display"_a = DEFAULT->getDisplay(),
             "view"_a = DEFAULT->getView(),
             "displayCC"_a = DEFAULT->getDisplayCC(),
             "looksOvveride"_a = DEFAULT->getLooksOverride(),
             "looksOverrideEnabled"_a = DEFAULT->getLooksOverrideEnabled(),
             "dir"_a = DEFAULT->getDirection())

        .def("getInputColorSpaceName", &DisplayTransform::getInputColorSpaceName,
             DS(DisplayTransform, getInputColorSpaceName))
        .def("setInputColorSpaceName", &DisplayTransform::setInputColorSpaceName,
             DS(DisplayTransform, setInputColorSpaceName),
             "name"_a)
        .def("getLinearCC", &DisplayTransform::getLinearCC, DS(DisplayTransform, getLinearCC))
        .def("setLinearCC", &DisplayTransform::setLinearCC, DS(DisplayTransform, setLinearCC), "cc"_a)
        .def("getColorTimingCC", &DisplayTransform::getColorTimingCC, DS(DisplayTransform, getColorTimingCC))
        .def("setColorTimingCC", &DisplayTransform::setColorTimingCC, DS(DisplayTransform, setColorTimingCC), "cc"_a)
        .def("getChannelView", &DisplayTransform::getChannelView, DS(DisplayTransform, getChannelView))
        .def("setChannelView", &DisplayTransform::setChannelView, DS(DisplayTransform, setChannelView), "transform"_a)
        .def("getDisplay", &DisplayTransform::getDisplay, DS(DisplayTransform, getDisplay))
        .def("setDisplay", &DisplayTransform::setDisplay, DS(DisplayTransform, setDisplay), "display"_a)
        .def("getView", &DisplayTransform::getView, DS(DisplayTransform, getView))
        .def("setView", &DisplayTransform::setView, DS(DisplayTransform, setView), "view"_a)
        .def("getDisplayCC", &DisplayTransform::getDisplayCC, DS(DisplayTransform, getDisplayCC))
        .def("setDisplayCC", &DisplayTransform::setDisplayCC, DS(DisplayTransform, setDisplayCC), "cc"_a)
        .def("getLooksOverride", &DisplayTransform::getLooksOverride, DS(DisplayTransform, getLooksOverride))
        .def("setLooksOverride", &DisplayTransform::setLooksOverride, DS(DisplayTransform, setLooksOverride), "looks"_a)
        .def("getLooksOverrideEnabled", &DisplayTransform::getLooksOverrideEnabled,
             DS(DisplayTransform, getLooksOverrideEnabled))
        .def("setLooksOverrideEnabled", &DisplayTransform::setLooksOverrideEnabled,
             DS(DisplayTransform, setLooksOverrideEnabled), "enabled"_a);
}

} // namespace OCIO_NAMESPACE
