..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

PackedImageDesc
===============

.. doxygenclass:: OpenColorIO::PackedImageDesc

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::PackedImageDesc

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.PackedImageDesc.__init__

Methods
*******

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getChannelOrder

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getBitDepth

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getRData

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getGData

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getBData

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getAData

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getWidth

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getHeight

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getNumChannels

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getChanStrideBytes

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getXStrideBytes

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::getYStrideBtytes

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::isRGBAPacked

        .. doxygenfunction:: OpenColorIO::PackedImageDesc::isFloat

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.PackedImageDesc.__init__

        .. automethod:: PyOpenColorIO.PackedImageDesc.getAData

        .. automethod:: PyOpenColorIO.PackedImageDesc.getChannelOrder

        .. automethod:: PyOpenColorIO.PackedImageDesc.getNumChannels

        .. automethod:: PyOpenColorIO.PackedImageDesc.getChanStrideBytes