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

Getters/Setters
***************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::Baker::getConfig

        .. doxygenfunction:: OpenColorIO::Baker::setConfig

        .. doxygenfunction:: OpenColorIO::Baker::getFormat

        .. doxygenfunction:: OpenColorIO::Baker::setFormat

        .. doxygenfunction:: OpenColorIO::Baker::getFormatMetadata

        .. doxygenfunction:: OpenColorIO::Baker::getInputSpace

        .. doxygenfunction:: OpenColorIO::Baker::setInputSpace

        .. doxygenfunction:: OpenColorIO::Baker::getShaperSpace

        .. doxygenfunction:: OpenColorIO::Baker::setShaperSpace

        .. doxygenfunction:: OpenColorIO::Baker::getLooks

        .. doxygenfunction:: OpenColorIO::Baker::setLooks

        .. doxygenfunction:: OpenColorIO::Baker::getTargetSpace

        .. doxygenfunction:: OpenColorIO::Baker::setTargetSpace

        .. doxygenfunction:: OpenColorIO::Baker::getShaperSize

        .. doxygenfunction:: OpenColorIO::Baker::setShaperSize

        .. doxygenfunction:: OpenColorIO::Baker::getCubeSize

        .. doxygenfunction:: OpenColorIO::Baker::setCubeSize

        .. doxygenfunction:: OpenColorIO::Baker::getNumFormats

        .. doxygenfunction:: OpenColorIO::Baker::getFormatNameByIndex

        .. doxygenfunction:: OpenColorIO::Baker::getFormatExtensionByIndex

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.Baker.getFormats

        .. automethod:: PyOpenColorIO.Baker.getConfig

        .. automethod:: PyOpenColorIO.Baker.setConfig

        .. automethod:: PyOpenColorIO.Baker.getFormat

        .. automethod:: PyOpenColorIO.Baker.setFormat

        .. automethod:: PyOpenColorIO.Baker.getFormatMetadata

        .. automethod:: PyOpenColorIO.Baker.getInputSpace

        .. automethod:: PyOpenColorIO.Baker.setInputSpace

        .. automethod:: PyOpenColorIO.Baker.getShaperSpace

        .. automethod:: PyOpenColorIO.Baker.setShaperSpace

        .. automethod:: PyOpenColorIO.Baker.getLooks

        .. automethod:: PyOpenColorIO.Baker.setLooks

        .. automethod:: PyOpenColorIO.Baker.getTargetSpace

        .. automethod:: PyOpenColorIO.Baker.setTargetSpace

        .. automethod:: PyOpenColorIO.Baker.getShaperSize

        .. automethod:: PyOpenColorIO.Baker.setShaperSize

        .. automethod:: PyOpenColorIO.Baker.getCubeSize

        .. automethod:: PyOpenColorIO.Baker.setCubeSize

Execute
*******

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::Baker::bake

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.Baker.bake