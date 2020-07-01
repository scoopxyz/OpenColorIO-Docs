..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

Look
====

.. doxygenclass:: OpenColorIO::Look


Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::Look::Create
        .. doxygenfunction:: OpenColorIO::Look::createEditableCopy

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.Look.__init__


Methods
*******

.. tabs::

    .. group-tab:: C++
        
        .. doxygenfunction:: OpenColorIO::Look::getName
        
        .. doxygenfunction:: OpenColorIO::Look::setName
        
        .. doxygenfunction:: OpenColorIO::Look::getProcessSpace
        
        .. doxygenfunction:: OpenColorIO::Look::setProcessSpace
        
        .. doxygenfunction:: OpenColorIO::Look::getTransform
        
        .. doxygenfunction:: OpenColorIO::Look::setTransform
        
        .. doxygenfunction:: OpenColorIO::Look::getInverseTransform
        
        .. doxygenfunction:: OpenColorIO::Look::setInverseTransform
        
        .. doxygenfunction:: OpenColorIO::Look::getDescription
        
        .. doxygenfunction:: OpenColorIO::Look::setDescription

    .. group-tab:: Python
        
        .. automethod:: PyOpenColorIO.Look.getName
        
        .. automethod:: PyOpenColorIO.Look.setName
        
        .. automethod:: PyOpenColorIO.Look.getProcessSpace
        
        .. automethod:: PyOpenColorIO.Look.setProcessSpace
        
        .. automethod:: PyOpenColorIO.Look.getTransform
        
        .. automethod:: PyOpenColorIO.Look.setTransform
        
        .. automethod:: PyOpenColorIO.Look.getInverseTransform
        
        .. automethod:: PyOpenColorIO.Look.setInverseTransform
        
        .. automethod:: PyOpenColorIO.Look.getDescription
        
        .. automethod:: PyOpenColorIO.Look.setDescription
    
        