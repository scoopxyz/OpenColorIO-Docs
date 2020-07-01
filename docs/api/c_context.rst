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


Methods
*******

.. tabs::

    .. group-tab:: C++

        **Cache**

        .. doxygenfunction:: OpenColorIO::Context::getCacheID

        **Search Paths**

        .. doxygenfunction:: OpenColorIO::Context::setSearchPath

        .. doxygenfunction:: OpenColorIO::Context::getSearchPath

        .. doxygenfunction:: OpenColorIO::Context::getNumSearchPaths

        .. doxygenfunction:: OpenColorIO::Context::clearSearchPaths

        .. doxygenfunction:: OpenColorIO::Context::addSearchPath

        **Working Directory**

        .. doxygenfunction:: OpenColorIO::Context::setWorkingDir

        .. doxygenfunction:: OpenColorIO::Context::getWorkingDir

        **String Vars**

        .. doxygenfunction:: OpenColorIO::Context::setStringVar

        .. doxygenfunction:: OpenColorIO::Context::getStringVar

        .. doxygenfunction:: OpenColorIO::Context::getNumStringVars

        .. doxygenfunction:: OpenColorIO::Context::getStringVarNameByIndex

        .. doxygenfunction:: OpenColorIO::Context::clearStringVars

        .. doxygenfunction:: OpenColorIO::Context::resolveStringVar

        .. doxygenfunction:: OpenColorIO::Context::resolveFileLocation

        **Environment Mode**

        .. doxygenfunction:: OpenColorIO::Context::setEnvironmentMode

        .. doxygenfunction:: OpenColorIO::Context::getEnvironmentMode

        .. doxygenfunction:: OpenColorIO::Context::loadEnvironment


    .. group-tab:: Python

        **Cache**

        .. automethod:: PyOpenColorIO.Context.getCacheID

        **Search Paths**

        .. automethod:: PyOpenColorIO.Context.getSearchPath

        .. automethod:: PyOpenColorIO.Context.setSearchPath

        .. automethod:: PyOpenColorIO.Context.getSearchPaths

        .. automethod:: PyOpenColorIO.Context.clearSearchPaths

        .. automethod:: PyOpenColorIO.Context.addSearchPath

        **Working Directory**

        .. automethod:: PyOpenColorIO.Context.getWorkingDir

        .. automethod:: PyOpenColorIO.Context.setWorkingDir

        **String Vars**

        .. automethod:: PyOpenColorIO.Context.getStringVars

        .. automethod:: PyOpenColorIO.Context.clearStringVars

        .. automethod:: PyOpenColorIO.Context.resolveStringVar

        .. automethod:: PyOpenColorIO.Context.resolveFileLocation

        **Environment Mode**

        .. automethod:: PyOpenColorIO.Context.getEnvironmentMode

        .. automethod:: PyOpenColorIO.Context.setEnvironmentMode

        .. automethod:: PyOpenColorIO.Context.loadEnvironment
