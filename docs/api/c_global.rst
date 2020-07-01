..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

Globals
=======

.. doxygenclass:: OpenColorIO::Look


Methods
*******

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::ClearAllCaches
        .. doxygenfunction:: OpenColorIO::GetVersion
        .. doxygenfunction:: OpenColorIO::GetVersionHex
        .. doxygenfunction:: OpenColorIO::GetLoggingLevel
        .. doxygenfunction:: OpenColorIO::SetLoggingLevel
        .. doxygenfunction:: OpenColorIO::SetLoggingFunction
        .. doxygenfunction:: OpenColorIO::ResetToDefaultLoggingFunction
        .. doxygenfunction:: OpenColorIO::LogMessage
        .. doxygenfunction:: OpenColorIO::GetEnvVariable
        .. doxygenfunction:: OpenColorIO::SetEnvVariable

        **Exceptions**

        .. doxygenfunction:: OpenColorIO::Exception
        .. doxygenfunction:: OpenColorIO::ExceptionMissingFile

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.ClearAllCaches
        .. automethod:: PyOpenColorIO.GetVersion
        .. automethod:: PyOpenColorIO.GetVersionHex
        .. automethod:: PyOpenColorIO.GetLoggingLevel
        .. automethod:: PyOpenColorIO.SetLoggingLevel
        .. automethod:: PyOpenColorIO.SetLoggingFunction
        .. automethod:: PyOpenColorIO.ResetToDefaultLoggingFunction
        .. automethod:: PyOpenColorIO.LogMessage
        .. automethod:: PyOpenColorIO.GetEnvVariable
        .. automethod:: PyOpenColorIO.SetEnvVariable

        **Exceptions**

        .. automethod:: PyOpenColorIO.Exception
        .. automethod:: PyOpenColorIO.ExceptionMissingFile
