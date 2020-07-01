..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

CPUProcessor
============

.. doxygenclass:: OpenColorIO::CPUProcessor


Methods
*******

.. tabs::

    .. group-tab:: C++

        **Metadata**

        .. doxygenfunction:: OpenColorIO::CPUProcessor::isNoOp

        .. doxygenfunction:: OpenColorIO::CPUProcessor::isIdentity

        .. doxygenfunction:: OpenColorIO::CPUProcessor::hasChannelCrosstalk

        .. doxygenfunction:: OpenColorIO::CPUProcessor::getCacheID

        .. doxygenfunction:: OpenColorIO::CPUProcessor::getInputBitDepth

        .. doxygenfunction:: OpenColorIO::CPUProcessor::getOutputBitDepth

        .. doxygenfunction:: OpenColorIO::CPUProcessor::getDynamicProperty

        **Apply**

        .. doxygenfunction:: OpenColorIO::CPUProcessor::apply

        .. doxygenfunction:: OpenColorIO::CPUProcessor::applyRGB

        .. doxygenfunction:: OpenColorIO::CPUProcessor::applyRGBA

    .. group-tab:: Python

        **Metadata**

        .. automethod:: PyOpenColorIO.CPUProcessor.isNoOp

        .. automethod:: PyOpenColorIO.CPUProcessor.isIdentity

        .. automethod:: PyOpenColorIO.CPUProcessor.hasChannelCrosstalk

        .. automethod:: PyOpenColorIO.CPUProcessor.getCacheID

        .. automethod:: PyOpenColorIO.CPUProcessor.getInputBitDepth

        .. automethod:: PyOpenColorIO.CPUProcessor.getOutputBitDepth

        .. automethod:: PyOpenColorIO.CPUProcessor.getDynamicProperty

        **Apply**

        .. automethod:: PyOpenColorIO.CPUProcessor.apply

        .. automethod:: PyOpenColorIO.CPUProcessor.applyRGB

        .. automethod:: PyOpenColorIO.CPUProcessor.applyRGBA

