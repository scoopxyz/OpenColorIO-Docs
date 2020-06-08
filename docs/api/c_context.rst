..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

Context
=======

.. doxygenclass:: OpenColorIO::Context

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::Context::Create

        .. doxygenfunction:: OpenColorIO::Context::createEditableCopy

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.Context.__init__


Getters/Setters
***************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::Context::getCacheID

        .. doxygenfunction:: OpenColorIO::Context::setSearchPath

        .. doxygenfunction:: OpenColorIO::Context::getSearchPath

        .. doxygenfunction:: OpenColorIO::Context::getNumSearchPaths

        .. doxygenfunction:: OpenColorIO::Context::clearSearchPaths

        .. doxygenfunction:: OpenColorIO::Context::addSearchPath

        .. doxygenfunction:: OpenColorIO::Context::setWorkingDir

        .. doxygenfunction:: OpenColorIO::Context::getWorkingDir

        .. doxygenfunction:: OpenColorIO::Context::setStringVar

        .. doxygenfunction:: OpenColorIO::Context::getStringVar

        .. doxygenfunction:: OpenColorIO::Context::getNumStringVars

        .. doxygenfunction:: OpenColorIO::Context::getStringVarNameByIndex

        .. doxygenfunction:: OpenColorIO::Context::clearStringVars

        .. doxygenfunction:: OpenColorIO::Context::setEnvironmentMode

        .. doxygenfunction:: OpenColorIO::Context::getEnvironmentMode

        .. doxygenfunction:: OpenColorIO::Context::loadEnvironment

        .. doxygenfunction:: OpenColorIO::Context::resolveStringVar

        .. doxygenfunction:: OpenColorIO::Context::resolveFileLocation

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.Context.getCacheID

        .. automethod:: PyOpenColorIO.Context.getSearchPath

        .. automethod:: PyOpenColorIO.Context.setSearchPath

        .. automethod:: PyOpenColorIO.Context.getSearchPaths

        .. automethod:: PyOpenColorIO.Context.clearSearchPaths

        .. automethod:: PyOpenColorIO.Context.addSearchPath

        .. automethod:: PyOpenColorIO.Context.getWorkingDir

        .. automethod:: PyOpenColorIO.Context.setWorkingDir

        .. automethod:: PyOpenColorIO.Context.getStringVars

        .. automethod:: PyOpenColorIO.Context.clearStringVars

        .. automethod:: PyOpenColorIO.Context.getEnvironmentMode

        .. automethod:: PyOpenColorIO.Context.setEnvironmentMode

        .. automethod:: PyOpenColorIO.Context.loadEnvironment

        .. automethod:: PyOpenColorIO.Context.resolveStringVar

        .. automethod:: PyOpenColorIO.Context.resolveFileLocation