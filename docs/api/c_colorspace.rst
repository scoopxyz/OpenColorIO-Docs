..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

ColorSpace
==========

.. doxygenclass:: OpenColorIO::ColorSpace

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::ColorSpace::Create

        .. doxygenfunction:: OpenColorIO::ColorSpace::createEditableCopy

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.ColorSpace.__init__


Methods
*******

.. tabs::

    .. group-tab:: C++

        **Name**

        .. doxygenfunction:: OpenColorIO::ColorSpace::getName

        .. doxygenfunction:: OpenColorIO::ColorSpace::setName

        **Family**

        .. doxygenfunction:: OpenColorIO::ColorSpace::getFamily

        .. doxygenfunction:: OpenColorIO::ColorSpace::setFamily

        **Equality Group**

        .. doxygenfunction:: OpenColorIO::ColorSpace::getEqualityGroup

        .. doxygenfunction:: OpenColorIO::ColorSpace::setEqualityGroup

        **Description**

        .. doxygenfunction:: OpenColorIO::ColorSpace::getDescription

        .. doxygenfunction:: OpenColorIO::ColorSpace::setDescription

        **Bit Depth**

        .. doxygenfunction:: OpenColorIO::ColorSpace::getBitDepth

        .. doxygenfunction:: OpenColorIO::ColorSpace::setBitDepth

        **Categories**

        .. doxygenfunction:: OpenColorIO::ColorSpace::hasCategory

        .. doxygenfunction:: OpenColorIO::ColorSpace::addCategory

        .. doxygenfunction:: OpenColorIO::ColorSpace::removeCategory

        .. doxygenfunction:: OpenColorIO::ColorSpace::getCategories

        .. doxygenfunction:: OpenColorIO::ColorSpace::clearCategories

        **Data**

        .. doxygenfunction:: OpenColorIO::ColorSpace::isData

        .. doxygenfunction:: OpenColorIO::ColorSpace::setIsData

        **Reference Space**

        .. doxygenfunction:: OpenColorIO::ColorSpace::getReferenceSpaceType

        **Allocation**

        .. doxygenfunction:: OpenColorIO::ColorSpace::getAllocation

        .. doxygenfunction:: OpenColorIO::ColorSpace::setAllocation

        .. doxygenfunction:: OpenColorIO::ColorSpace::getAllocationVars

        .. doxygenfunction:: OpenColorIO::ColorSpace::setAllocationVars

        **Transform**

        .. doxygenfunction:: OpenColorIO::ColorSpace::getTransform

        .. doxygenfunction:: OpenColorIO::ColorSpace::setTransform

    .. group-tab:: Python

        **Name**

        .. automethod:: PyOpenColorIO.ColorSpace.getName

        .. automethod:: PyOpenColorIO.ColorSpace.setName

        **Family**

        .. automethod:: PyOpenColorIO.ColorSpace.getFamily

        .. automethod:: PyOpenColorIO.ColorSpace.setFamily

        **Equality Group**

        .. automethod:: PyOpenColorIO.ColorSpace.getEqualityGroup

        .. automethod:: PyOpenColorIO.ColorSpace.setEqualityGroup

        **Description**

        .. automethod:: PyOpenColorIO.ColorSpace.getDescription

        .. automethod:: PyOpenColorIO.ColorSpace.setDescription

        **Bit Depth**

        .. automethod:: PyOpenColorIO.ColorSpace.getBitDepth

        .. automethod:: PyOpenColorIO.ColorSpace.setBitDepth

        **Categories**

        .. automethod:: PyOpenColorIO.ColorSpace.hasCategory

        .. automethod:: PyOpenColorIO.ColorSpace.addCategory

        .. automethod:: PyOpenColorIO.ColorSpace.removeCategory

        .. automethod:: PyOpenColorIO.ColorSpace.getCategories

        .. automethod:: PyOpenColorIO.ColorSpace.clearCategories

        **Data**

        .. automethod:: PyOpenColorIO.ColorSpace.isData

        .. automethod:: PyOpenColorIO.ColorSpace.setIsData

        **Reference Space**

        .. automethod:: PyOpenColorIO.ColorSpace.getReferenceSpaceType

        **Allocation**

        .. automethod:: PyOpenColorIO.ColorSpace.getAllocation

        .. automethod:: PyOpenColorIO.ColorSpace.setAllocation

        .. automethod:: PyOpenColorIO.ColorSpace.getAllocationVars

        .. automethod:: PyOpenColorIO.ColorSpace.setAllocationVars

        **Transform**

        .. automethod:: PyOpenColorIO.ColorSpace.getTransform

        .. automethod:: PyOpenColorIO.ColorSpace.setTransform
