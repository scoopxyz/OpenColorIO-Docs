..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

ImageDesc
=========

.. doxygenclass:: OpenColorIO::ImageDesc

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::ImageDesc::ImageDesc

    .. group-tab:: Python

        .. autoclass:: PyOpenColorIO.ImageDesc.__init__

Getters/Setters
***************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::ImageDesc::getRData

        .. doxygenfunction:: OpenColorIO::ImageDesc::getGData

        .. doxygenfunction:: OpenColorIO::ImageDesc::getBData

        .. doxygenfunction:: OpenColorIO::ImageDesc::getAData

        .. doxygenfunction:: OpenColorIO::ImageDesc::getBitDepth

        .. doxygenfunction:: OpenColorIO::ImageDesc::getWidth

        .. doxygenfunction:: OpenColorIO::ImageDesc::getHeight

        .. doxygenfunction:: OpenColorIO::ImageDesc::getXStrideBytes

        .. doxygenfunction:: OpenColorIO::ImageDesc::getYStrideBytes

        .. doxygenfunction:: OpenColorIO::ImageDesc::isRGBAPacked

        .. doxygenfunction:: OpenColorIO::ImageDesc::isFloat

    .. group-tab:: Python

        .. autoclass:: PyOpenColorIO.ImageDesc.getBitDepth

        .. autoclass:: PyOpenColorIO.ImageDesc.getWidth

        .. autoclass:: PyOpenColorIO.ImageDesc.getHeight

        .. autoclass:: PyOpenColorIO.ImageDesc.getXStrideBytes

        .. autoclass:: PyOpenColorIO.ImageDesc.getYStrideBytes

        .. autoclass:: PyOpenColorIO.ImageDesc.isRGBAPacked

        .. autoclass:: PyOpenColorIO.ImageDesc.isFloat
