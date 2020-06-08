..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

GpuShaderCreator
================

.. doxygenclass:: OpenColorIO::GpuShaderCreator

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::GpuShaderCreator

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::clone

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.GpuShaderCreator.CreateLegacyShaderDesc

        .. automethod:: PyOpenColorIO.GpuShaderCreator.CreateShaderDesc


Getters/Setters
***************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::getUniqueID

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::setUniqueID

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::getLanguage

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::setLanguage

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::getFunctionName

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::setFunctionName

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::getPixelName

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::setPixelName

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::getResourcePrefix

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::setResourcePrefix

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::getCacheID

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::setTextureMaxWidth

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::getTextureMaxWidth

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::getResourceIndex

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::begin

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::end

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.GpuShaderCreator.getUniforms

        .. automethod:: PyOpenColorIO.GpuShaderCreator.getNumTextures

        .. automethod:: PyOpenColorIO.GpuShaderCreator.getNumTextures

        .. automethod:: PyOpenColorIO.GpuShaderCreator.getTextureValues

        .. automethod:: PyOpenColorIO.GpuShaderCreator.getNum3DTextures

        .. automethod:: PyOpenColorIO.GpuShaderCreator.get3DTextures

        .. automethod:: PyOpenColorIO.GpuShaderCreator.get3DTextureValues

        Helper Classes
        --------------

        .. autoclass:: PyOpenColorIO.Texture
           :members:

        .. autoclass:: PyOpenColorIO.Texture3D
           :members:



Modify Shader Code
******************

.. tabs::
    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::addUniform

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::addTexture

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::add3DTexture

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::addToDeclareShaderCode

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::addToHelperShaderCode

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::addToFunctionHeaderShaderCode

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::addToFunctionHeaderShaderCode

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::addToFunctionFooterShaderCode

        .. doxygenenum:: OpenColorIO::GpuShaderCreator::TextureType
        
    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.GpuShaderCreator.addUniform

        .. automethod:: PyOpenColorIO.GpuShaderCreator.addTexture

        .. automethod:: PyOpenColorIO.GpuShaderCreator.add3DTexture
Execute
*******

.. tabs::
    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::createShaderText

        .. doxygenfunction:: OpenColorIO::GpuShaderCreator::finalize