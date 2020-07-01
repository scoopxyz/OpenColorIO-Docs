..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

Baker
=====

.. doxygenclass:: OpenColorIO::Baker

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::Baker::Create

        .. doxygenfunction:: OpenColorIO::Baker::createEditableCopy

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.Baker.__init__

Methods
**********

.. tabs::

    .. group-tab:: C++

        **Config**

        .. doxygenfunction:: OpenColorIO::Baker::getConfig

        .. doxygenfunction:: OpenColorIO::Baker::setConfig

        **Format**

        .. doxygenfunction:: OpenColorIO::Baker::getFormat

        .. doxygenfunction:: OpenColorIO::Baker::setFormat

        .. doxygenfunction:: OpenColorIO::Baker::getFormatMetadata

        .. doxygenfunction:: OpenColorIO::Baker::getFormatNameByIndex

        .. doxygenfunction:: OpenColorIO::Baker::getFormatExtensionByIndex

        .. doxygenfunction:: OpenColorIO::Baker::getNumFormats

        **Input Space**

        .. doxygenfunction:: OpenColorIO::Baker::getInputSpace

        .. doxygenfunction:: OpenColorIO::Baker::setInputSpace

        **Shaper Space**

        .. doxygenfunction:: OpenColorIO::Baker::getShaperSpace

        .. doxygenfunction:: OpenColorIO::Baker::setShaperSpace

        **Looks**

        .. doxygenfunction:: OpenColorIO::Baker::getLooks

        .. doxygenfunction:: OpenColorIO::Baker::setLooks

        **Target Space**

        .. doxygenfunction:: OpenColorIO::Baker::getTargetSpace

        .. doxygenfunction:: OpenColorIO::Baker::setTargetSpace

        **Shaper Space**

        .. doxygenfunction:: OpenColorIO::Baker::getShaperSize

        .. doxygenfunction:: OpenColorIO::Baker::setShaperSize

        **Cube Size**

        .. doxygenfunction:: OpenColorIO::Baker::getCubeSize

        .. doxygenfunction:: OpenColorIO::Baker::setCubeSize
  
        **Execute**

        .. doxygenfunction:: OpenColorIO::Baker::bake

    .. group-tab:: Python

        **Config**

        .. automethod:: PyOpenColorIO.Baker.getConfig

        .. automethod:: PyOpenColorIO.Baker.setConfig

        **Format**

        .. automethod:: PyOpenColorIO.Baker.getFormats

        .. automethod:: PyOpenColorIO.Baker.getFormat

        .. automethod:: PyOpenColorIO.Baker.setFormat

        .. automethod:: PyOpenColorIO.Baker.getFormatMetadata

        **Input Space**

        .. automethod:: PyOpenColorIO.Baker.getInputSpace

        .. automethod:: PyOpenColorIO.Baker.setInputSpace

        **Shaper Space**

        .. automethod:: PyOpenColorIO.Baker.getShaperSpace

        .. automethod:: PyOpenColorIO.Baker.setShaperSpace

        **Looks**

        .. automethod:: PyOpenColorIO.Baker.getLooks

        .. automethod:: PyOpenColorIO.Baker.setLooks

        **Target Space**

        .. automethod:: PyOpenColorIO.Baker.getTargetSpace

        .. automethod:: PyOpenColorIO.Baker.setTargetSpace

        **Shaper Space**

        .. automethod:: PyOpenColorIO.Baker.getShaperSize

        .. automethod:: PyOpenColorIO.Baker.setShaperSize

        **Cube Size**

        .. automethod:: PyOpenColorIO.Baker.getCubeSize

        .. automethod:: PyOpenColorIO.Baker.setCubeSize

        **Execute**

        .. automethod:: PyOpenColorIO.Baker.bake
