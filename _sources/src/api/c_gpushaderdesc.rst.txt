..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

GpuShaderDesc
=============

.. doxygenclass:: OpenColorIO::GpuShaderDesc

Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::CreateLegacyShaderDesc

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::CreateShaderDesc

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::clone

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.GpuShaderDesc.CreateLegacyShaderDesc

        .. automethod:: PyOpenColorIO.GpuShaderCreator.CreateShaderDesc

Getters/Setters
***************

.. tabs::
    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::getNumUniforms

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::getUniform

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::getNumTextures

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::getTexture

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::getTextureValues

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::getNum3DTextures

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::get3DTexture

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::get3DTextureValues

        .. doxygenfunction:: OpenColorIO::GpuShaderDesc::getShaderText

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.GpuShaderDesc.addUniform

        .. automethod:: PyOpenColorIO.GpuShaderDesc.getUniforms

        .. automethod:: PyOpenColorIO.GpuShaderDesc.getNumTextures

        .. automethod:: PyOpenColorIO.GpuShaderDesc.addTexture

        .. automethod:: PyOpenColorIO.GpuShaderDesc.getTextures

        .. automethod:: PyOpenColorIO.GpuShaderDesc.getTextureValues

        .. automethod:: PyOpenColorIO.GpuShaderDesc.getNum3DTextures

        .. automethod:: PyOpenColorIO.GpuShaderDesc.add3DTexture

        .. automethod:: PyOpenColorIO.GpuShaderDesc.get3DTexture

        .. automethod:: PyOpenColorIO.GpuShaderDesc.get3DTextureValues

        Helper Classes
        --------------

        .. autoclass:: PyOpenColorIO.Texture
           :members:

        .. autoclass:: PyOpenColorIO.Texture3D
           :members:
