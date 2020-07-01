..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

GPUProcessor
============

.. doxygenclass:: OpenColorIO::GPUProcessor


Methods
*******

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::GPUProcessor::isNoOp
    
        .. doxygenfunction:: OpenColorIO::GPUProcessor::hasChannelCrosstalk
    
        .. doxygenfunction:: OpenColorIO::GPUProcessor::getCacheID
    
        .. doxygenfunction:: OpenColorIO::GPUProcessor::getDynamicProperty
    
        .. doxygenfunction:: OpenColorIO::GPUProcessor::extractGpuShaderInfo

    .. group-tab:: Python
    
        .. automethod:: PyOpenColorIO.GPUProcessor.isNoOp
    
        .. automethod:: PyOpenColorIO.GPUProcessor.hasChannelCrosstalk
    
        .. automethod:: PyOpenColorIO.GPUProcessor.getCacheID
    
        .. automethod:: PyOpenColorIO.GPUProcessor.getDynamicProperty
    
        .. automethod:: PyOpenColorIO.GPUProcessor.extractGpuShaderInfo