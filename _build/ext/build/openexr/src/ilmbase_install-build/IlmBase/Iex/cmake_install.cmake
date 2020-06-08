# Install script for directory: /home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/dist")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install-build/IlmBase/Iex/libIex-2_4.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenEXR" TYPE FILE FILES
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/IexBaseExc.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/IexMathExc.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/IexThrowErrnoExc.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/IexErrnoExc.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/IexMacros.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/Iex.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/IexNamespace.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/IexExport.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Iex/IexForward.h"
    )
endif()

