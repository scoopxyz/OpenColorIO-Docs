..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

Config
======

.. doxygenclass:: OpenColorIO::Config

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::Config::Create

        .. doxygenfunction:: OpenColorIO::Config::CreateRaw

        .. doxygenfunction:: OpenColorIO::Config::CreateFromEnv

        .. doxygenfunction:: OpenColorIO::Config::CreateFromFile

        .. doxygenfunction:: OpenColorIO::Config::CreateFromStream

        .. doxygenfunction:: OpenColorIO::Config::createEditableCopy

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.Config.__init__

        .. automethod:: PyOpenColorIO.Config.CreateRaw

        .. automethod:: PyOpenColorIO.Config.CreateFromEnv

        .. automethod:: PyOpenColorIO.Config.CreateFromFile

        .. automethod:: PyOpenColorIO.Config.CreateFromStream

Methods
*******

.. tabs::

    .. group-tab:: C++

        **Versioning**

        .. doxygenfunction:: OpenColorIO::Config::getMajorVersion

        .. doxygenfunction:: OpenColorIO::Config::setMajorVersion

        .. doxygenfunction:: OpenColorIO::Config::getMinorVersion

        .. doxygenfunction:: OpenColorIO::Config::setMinorVersion

        .. doxygenfunction:: OpenColorIO::Config::upgradeToLatestVersion

        **Serialization**

        .. doxygenfunction:: OpenColorIO::Config::sanityCheck

        .. doxygenfunction:: OpenColorIO::Config::serialize

        **Family Separator**

        .. doxygenfunction:: OpenColorIO::Config::getFamilySeparator

        .. doxygenfunction:: OpenColorIO::Config::setFamilySeparator

        **Description**

        .. doxygenfunction:: OpenColorIO::Config::getDescription

        .. doxygenfunction:: OpenColorIO::Config::setDescription

        **Cache**

        .. doxygenfunction:: OpenColorIO::Config::getCacheID

        **Resources**

        .. doxygenfunction:: OpenColorIO::Config::getCurrentContext

        .. doxygenfunction:: OpenColorIO::Config::addEnvironmentVar

        .. doxygenfunction:: OpenColorIO::Config::addEnvironmentVarNames

        .. doxygenfunction:: OpenColorIO::Config::addEnvironmentVarDefault

        .. doxygenfunction:: OpenColorIO::Config::clearEnvironmentVars

        .. doxygenfunction:: OpenColorIO::Config::getEnvironmentMode

        .. doxygenfunction:: OpenColorIO::Config::setEnvironmentMode

        .. doxygenfunction:: OpenColorIO::Config::loadEnvironment

        .. doxygenfunction:: OpenColorIO::Config::getSearchPath

        .. doxygenfunction:: OpenColorIO::Config::getSearchPaths

        .. doxygenfunction:: OpenColorIO::Config::setSearchPath

        .. doxygenfunction:: OpenColorIO::Config::clearSearchPaths

        .. doxygenfunction:: OpenColorIO::Config::addSearchPath

        .. doxygenfunction:: OpenColorIO::Config::getWorkingDir

        .. doxygenfunction:: OpenColorIO::Config::setWorkingDir

        **Color Spaces**

        .. doxygenfunction:: OpenColorIO::Config::getColorSpace

        .. doxygenfunction:: OpenColorIO::Config::getColorSpaces

        .. doxygenfunction:: OpenColorIO::Config::getColorSpaceNames

        .. doxygenfunction:: OpenColorIO::Config::addColorSpace

        .. doxygenfunction:: OpenColorIO::Config::removeColorSpace

        .. doxygenfunction:: OpenColorIO::Config::clearColorSpaces

        .. doxygenfunction:: OpenColorIO::Config::parseColorSpaceFromString

        .. doxygenfunction:: OpenColorIO::Config::isStrictParsingEnabled

        .. doxygenfunction:: OpenColorIO::Config::isColorSpaceUsed

        .. doxygenfunction:: OpenColorIO::Config::getInactiveColorSpaces

        .. doxygenfunction:: OpenColorIO::Config::setInactiveColorSpaces

        **Roles**

        .. doxygenfunction:: OpenColorIO::Config::getRoles

        .. doxygenfunction:: OpenColorIO::Config::getRoleNames

        .. doxygenfunction:: OpenColorIO::Config::hasRole

        .. doxygenfunction:: OpenColorIO::Config::setRole

        **Display**

        .. doxygenfunction:: OpenColorIO::Config::getDefaultDisplay

        .. doxygenfunction:: OpenColorIO::Config::getDisplays

        .. doxygenfunction:: OpenColorIO::Config::getDefaultView

        .. doxygenfunction:: OpenColorIO::Config::getViews

        .. doxygenfunction:: OpenColorIO::Config::getDisplayViewTransformName

        .. doxygenfunction:: OpenColorIO::Config::getDisplayColorSpaceName

        .. doxygenfunction:: OpenColorIO::Config::getDisplayLooks

        .. doxygenfunction:: OpenColorIO::Config::addDisplay

        .. doxygenfunction:: OpenColorIO::Config::removeDisplay

        .. doxygenfunction:: OpenColorIO::Config::clearDisplays

        .. doxygenfunction:: OpenColorIO::Config::setActiveDisplays

        .. doxygenfunction:: OpenColorIO::Config::getActiveDisplays

        .. doxygenfunction:: OpenColorIO::Config::setActiveViews

        .. doxygenfunction:: OpenColorIO::Config::getActiveViews

        **Views**

        .. doxygenfunction:: OpenColorIO::Config::getViewTransform

        .. doxygenfunction:: OpenColorIO::Config::getViewTransforms
    
        .. doxygenfunction:: OpenColorIO::Config::getViewTransformNames

        .. doxygenfunction:: OpenColorIO::Config::addViewTransform

        .. doxygenfunction:: OpenColorIO::Config::getDefaultSceneToDisplayViewTransform

        .. doxygenfunction:: OpenColorIO::Config::clearViewTransforms

        **Looks**

        .. doxygenfunction:: OpenColorIO::Config::getLook

        .. doxygenfunction:: OpenColorIO::Config::getLooks

        .. doxygenfunction:: OpenColorIO::Config::getLookNames

        .. doxygenfunction:: OpenColorIO::Config::addLook

        .. doxygenfunction:: OpenColorIO::Config::clearLooks

        **Luma**

        .. doxygenfunction:: OpenColorIO::Config::getDeafultLumaCoefs

        .. doxygenfunction:: OpenColorIO::Config::setDefaultLumaCoefs

        **File Rules**

        .. doxygenfunction:: OpenColorIO::Config::getFileRules

        .. doxygenfunction:: OpenColorIO::Config::setFileRules

        .. doxygenfunction:: OpenColorIO::Config::getColorSpaceFromFilepath

        .. doxygenfunction:: OpenColorIO::Config::filepathOnlyMatchesDefaultRule

        **Processors**

        .. doxygenfunction:: OpenColorIO::Config::getProcessor

        .. doxygenfunction:: OpenColorIO::Config::GetProcessor

    .. group-tab:: Python

        **Versioning**

        .. automethod:: PyOpenColorIO.Config.getMajorVersion

        .. automethod:: PyOpenColorIO.Config.setMajorVersion

        .. automethod:: PyOpenColorIO.Config.getMinorVersion

        .. automethod:: PyOpenColorIO.Config.setMinorVersion

        .. automethod:: PyOpenColorIO.Config.upgradeToLatestVersion

        **Serialization**

        .. automethod:: PyOpenColorIO.Config.sanityCheck

        .. automethod:: PyOpenColorIO.Config.serialize

        **Family Separator**

        .. automethod:: PyOpenColorIO.Config.getFamilySeparator

        .. automethod:: PyOpenColorIO.Config.setFamilySeparator

        **Description**

        .. automethod:: PyOpenColorIO.Config.getDescription

        .. automethod:: PyOpenColorIO.Config.setDescription

        **Cache**

        .. automethod:: PyOpenColorIO.Config.getCacheID

        **Resources**

        .. automethod:: PyOpenColorIO.Config.getCurrentContext

        .. automethod:: PyOpenColorIO.Config.addEnvironmentVar

        .. automethod:: PyOpenColorIO.Config.addEnvironmentVarNames

        .. automethod:: PyOpenColorIO.Config.addEnvironmentVarDefault

        .. automethod:: PyOpenColorIO.Config.clearEnvironmentVars

        .. automethod:: PyOpenColorIO.Config.getEnvironmentMode

        .. automethod:: PyOpenColorIO.Config.setEnvironmentMode

        .. automethod:: PyOpenColorIO.Config.loadEnvironment

        .. automethod:: PyOpenColorIO.Config.getSearchPath

        .. automethod:: PyOpenColorIO.Config.getSearchPaths

        .. automethod:: PyOpenColorIO.Config.setSearchPath

        .. automethod:: PyOpenColorIO.Config.clearSearchPaths

        .. automethod:: PyOpenColorIO.Config.addSearchPath

        .. automethod:: PyOpenColorIO.Config.getWorkingDir

        .. automethod:: PyOpenColorIO.Config.setWorkingDir

        **Color Spaces**

        .. automethod:: PyOpenColorIO.Config.getColorSpace

        .. automethod:: PyOpenColorIO.Config.getColorSpaces

        .. automethod:: PyOpenColorIO.Config.getColorSpaceNames

        .. automethod:: PyOpenColorIO.Config.addColorSpace

        .. automethod:: PyOpenColorIO.Config.removeColorSpace

        .. automethod:: PyOpenColorIO.Config.clearColorSpaces

        .. automethod:: PyOpenColorIO.Config.parseColorSpaceFromString

        .. automethod:: PyOpenColorIO.Config.isStrictParsingEnabled

        .. automethod:: PyOpenColorIO.Config.isColorSpaceUsed

        .. automethod:: PyOpenColorIO.Config.getInactiveColorSpaces

        .. automethod:: PyOpenColorIO.Config.setInactiveColorSpaces

        **Roles**

        .. automethod:: PyOpenColorIO.Config.getRoles

        .. automethod:: PyOpenColorIO.Config.getRoleNames

        .. automethod:: PyOpenColorIO.Config.hasRole

        .. automethod:: PyOpenColorIO.Config.setRole

        **Display**

        .. automethod:: PyOpenColorIO.Config.getDefaultDisplay

        .. automethod:: PyOpenColorIO.Config.getDisplays

        .. automethod:: PyOpenColorIO.Config.getDefaultView

        .. automethod:: PyOpenColorIO.Config.getViews

        .. automethod:: PyOpenColorIO.Config.getDisplayViewTransformName

        .. automethod:: PyOpenColorIO.Config.getDisplayColorSpaceName

        .. automethod:: PyOpenColorIO.Config.getDisplayLooks

        .. automethod:: PyOpenColorIO.Config.addDisplay

        .. automethod:: PyOpenColorIO.Config.removeDisplay

        .. automethod:: PyOpenColorIO.Config.clearDisplays

        .. automethod:: PyOpenColorIO.Config.setActiveDisplays

        .. automethod:: PyOpenColorIO.Config.getActiveDisplays

        .. automethod:: PyOpenColorIO.Config.setActiveViews

        .. automethod:: PyOpenColorIO.Config.getActiveViews

        **Views**

        .. automethod:: PyOpenColorIO.Config.getViewTransform

        .. automethod:: PyOpenColorIO.Config.getViewTransforms
    
        .. automethod:: PyOpenColorIO.Config.getViewTransformNames

        .. automethod:: PyOpenColorIO.Config.addViewTransform

        .. automethod:: PyOpenColorIO.Config.getDefaultSceneToDisplayViewTransform

        .. automethod:: PyOpenColorIO.Config.clearViewTransforms

        **Looks**

        .. automethod:: PyOpenColorIO.Config.getLook

        .. automethod:: PyOpenColorIO.Config.getLooks

        .. automethod:: PyOpenColorIO.Config.getLookNames

        .. automethod:: PyOpenColorIO.Config.addLook

        .. automethod:: PyOpenColorIO.Config.clearLooks

        **Luma**

        .. automethod:: PyOpenColorIO.Config.getDeafultLumaCoefs

        .. automethod:: PyOpenColorIO.Config.setDefaultLumaCoefs

        **File Rules**

        .. automethod:: PyOpenColorIO.Config.getFileRules

        .. automethod:: PyOpenColorIO.Config.setFileRules

        .. automethod:: PyOpenColorIO.Config.getColorSpaceFromFilepath

        .. automethod:: PyOpenColorIO.Config.filepathOnlyMatchesDefaultRule

        **Processors**

        .. automethod:: PyOpenColorIO.Config.getProcessor

        .. automethod:: PyOpenColorIO.Config.GetProcessor
