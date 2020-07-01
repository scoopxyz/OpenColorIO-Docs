..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

ColorSpaceSet
=============

.. doxygenclass:: OpenColorIO::ColorSpaceSet

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::Create

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::createEditableCopy

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.ColorSpace.__init__


Methods
*******

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::getColorSpaceNames

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::getColorSpaces

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::getColorSpace

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::addColorSpace

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::removeColorSpace

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::removeColorSpaces

        .. doxygenfunction:: OpenColorIO::ColorSpaceSet::clearColorSpaces

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.ColorSpace.getColorSpaceNames

        .. automethod:: PyOpenColorIO.ColorSpace.getColorSpaces

        .. automethod:: PyOpenColorIO.ColorSpace.getColorSpace

        .. automethod:: PyOpenColorIO.ColorSpace.addColorSpace

        .. automethod:: PyOpenColorIO.ColorSpace.removeColorSpace

        .. automethod:: PyOpenColorIO.ColorSpace.removeColorSpaces

        .. automethod:: PyOpenColorIO.ColorSpace.clearColorSpaces