..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

Processor
=========

.. doxygenclass:: OpenColorIO::Processor

Methods
*******

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::Processor::getWriteFormats
        .. doxygenfunction:: OpenColorIO::Processor::isNoOp
        .. doxygenfunction:: OpenColorIO::Processor::hasChannelCrosstalk
        .. doxygenfunction:: OpenColorIO::Processor::getCacheID
        .. doxygenfunction:: OpenColorIO::Processor::getProcessorMetadata
        .. doxygenfunction:: OpenColorIO::Processor::getFormatMetadata
        .. doxygenfunction:: OpenColorIO::Processor::getTransformFormatMetadata
        .. doxygenfunction:: OpenColorIO::Processor::createGroupTransform
        .. doxygenfunction:: OpenColorIO::Processor::write
        .. doxygenfunction:: OpenColorIO::Processor::getDynamicProperty
        .. doxygenfunction:: OpenColorIO::Processor::hasDynamicProperty
        .. doxygenfunction:: OpenColorIO::Processor::getOptimizedProcessor

        **CPU**

        .. doxygenfunction:: OpenColorIO::Processor::getDefaultGPUProcessor
        .. doxygenfunction:: OpenColorIO::Processor::getOptimizedGPUProcessor

        **GPU**

        .. doxygenfunction:: OpenColorIO::Processor::getDefaultCPUProcessor
        .. doxygenfunction:: OpenColorIO::Processor::getOptimizedCPUProcessor


    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.Processor.getWriteFormats
        .. automethod:: PyOpenColorIO.Processor.isNoOp
        .. automethod:: PyOpenColorIO.Processor.hasChannelCrosstalk
        .. automethod:: PyOpenColorIO.Processor.getCacheID
        .. automethod:: PyOpenColorIO.Processor.getProcessorMetadata
        .. automethod:: PyOpenColorIO.Processor.getFormatMetadata
        .. automethod:: PyOpenColorIO.Processor.getTransformFormatMetadata
        .. automethod:: PyOpenColorIO.Processor.createGroupTransform
        .. automethod:: PyOpenColorIO.Processor.write
        .. automethod:: PyOpenColorIO.Processor.getDynamicProperty
        .. automethod:: PyOpenColorIO.Processor.hasDynamicProperty
        .. automethod:: PyOpenColorIO.Processor.getOptimizedProcessor

        **CPU**

        .. automethod:: PyOpenColorIO.Processor.getDefaultGPUProcessor
        .. automethod:: PyOpenColorIO.Processor.getOptimizedGPUProcessor

        **GPU**

        .. automethod:: PyOpenColorIO.Processor.getDefaultCPUProcessor
        .. automethod:: PyOpenColorIO.Processor.getOptimizedCPUProcessor


ProcessorMetadata
=================

.. doxygenclass:: OpenColorIO::ProcessorMetadata

Methods
*******

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::ProcessorMetadata::getFiles
        .. doxygenfunction:: OpenColorIO::ProcessorMetadata::getLooks
        .. doxygenfunction:: OpenColorIO::ProcessorMetadata::addFile
        .. doxygenfunction:: OpenColorIO::ProcessorMetadata::addLook

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.ProcessorMetadata.getFiles
        .. automethod:: PyOpenColorIO.ProcessorMetadata.getLooks
        .. automethod:: PyOpenColorIO.ProcessorMetadata.addFile
        .. automethod:: PyOpenColorIO.ProcessorMetadata.addLook
