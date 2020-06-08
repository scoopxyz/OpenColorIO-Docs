..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

PlanarImageDesc
===============

.. doxygenclass:: OpenColorIO::PlanarImageDesc

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::PlanarImageDesc

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.PlanarImageDesc.__init__

Getters/Setters
***************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getRData

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getGData

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getBData

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getAData

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getBitDepth

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getWidth

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getHeight

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getXStrideBytes

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::getYStrideBytes

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::isRGBAPacked

        .. doxygenfunction:: OpenColorIO::PlanarImageDesc::isFloat

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.PlanarImageDesc.getRData

        .. automethod:: PyOpenColorIO.PlanarImageDesc.getGData

        .. automethod:: PyOpenColorIO.PlanarImageDesc.getBData

        .. automethod:: PyOpenColorIO.PlanarImageDesc.getAData
