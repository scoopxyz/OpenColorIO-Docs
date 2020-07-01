..
  SPDX-License-Identifier: CC-BY-4.0
  Copyright Contributors to the OpenColorIO Project.

FileRules
=========

.. doxygenclass:: OpenColorIO::FileRules


Initialization
**************

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::FileRules::Create

        .. doxygenfunction:: OpenColorIO::FileRules::createEditableCopy

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.FileRules.__init__

Methods
*******

.. tabs::

    .. group-tab:: C++

        .. doxygenfunction:: OpenColorIO::FileRules::getName

        **Pattern**

        .. doxygenfunction:: OpenColorIO::FileRules::getPattern

        .. doxygenfunction:: OpenColorIO::FileRules::setPattern

        **Extension**

        .. doxygenfunction:: OpenColorIO::FileRules::getExtension

        .. doxygenfunction:: OpenColorIO::FileRules::setExtension

        **Regex**

        .. doxygenfunction:: OpenColorIO::FileRules::getRegex

        .. doxygenfunction:: OpenColorIO::FileRules::setRegex

        **ColorSpace**

        .. doxygenfunction:: OpenColorIO::FileRules::getColorSpace

        .. doxygenfunction:: OpenColorIO::FileRules::setColorSpace

        .. doxygenfunction:: OpenColorIO::FileRules::setDefaultRuleColorSpace

        **Keys**

        .. doxygenfunction:: OpenColorIO::FileRules::getNumCustomKeys

        .. doxygenfunction:: OpenColorIO::FileRules::getCustomKeyName

        .. doxygenfunction:: OpenColorIO::FileRules::getCustomKeyValue

        .. doxygenfunction:: OpenColorIO::FileRules::setCustomKey

        **Rules**

        .. doxygenfunction:: OpenColorIO::FileRules::insertRule

        .. doxygenfunction:: OpenColorIO::FileRules::insertPathSearchRule

        .. doxygenfunction:: OpenColorIO::FileRules::removeRule

        .. doxygenfunction:: OpenColorIO::FileRules::increaseRulePriority

        .. doxygenfunction:: OpenColorIO::FileRules::decreaseRulePriority

        .. doxygenfunction:: OpenColorIO::FileRules::getNumEntries

        .. doxygenfunction:: OpenColorIO::FileRules::getIndexForRule

    .. group-tab:: Python

        .. automethod:: PyOpenColorIO.FileRules.getName

        **Pattern**

        .. automethod:: PyOpenColorIO.FileRules.getPattern

        .. automethod:: PyOpenColorIO.FileRules.setPattern

        **Extension**

        .. automethod:: PyOpenColorIO.FileRules.getExtension

        .. automethod:: PyOpenColorIO.FileRules.setExtension

        **Regex**

        .. automethod:: PyOpenColorIO.FileRules.getRegex

        .. automethod:: PyOpenColorIO.FileRules.setRegex

        **ColorSpace**

        .. automethod:: PyOpenColorIO.FileRules.getColorSpace

        .. automethod:: PyOpenColorIO.FileRules.setColorSpace

        .. automethod:: PyOpenColorIO.FileRules.setDefaultRuleColorSpace

        **Keys**

        .. automethod:: PyOpenColorIO.FileRules.getNumCustomKeys

        .. automethod:: PyOpenColorIO.FileRules.getCustomKeyName

        .. automethod:: PyOpenColorIO.FileRules.getCustomKeyValue

        .. automethod:: PyOpenColorIO.FileRules.setCustomKey

        **Rules**

        .. automethod:: PyOpenColorIO.FileRules.insertRule

        .. automethod:: PyOpenColorIO.FileRules.insertPathSearchRule

        .. automethod:: PyOpenColorIO.FileRules.removeRule

        .. automethod:: PyOpenColorIO.FileRules.increaseRulePriority

        .. automethod:: PyOpenColorIO.FileRules.decreaseRulePriority

        .. automethod:: PyOpenColorIO.FileRules.getNumEntries

        .. automethod:: PyOpenColorIO.FileRules.getIndexForRule