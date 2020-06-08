# Install script for directory: /home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install-build/IlmBase/Imath/libImath-2_4.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenEXR" TYPE FILE FILES
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathBoxAlgo.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathBox.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathColorAlgo.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathColor.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathEuler.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathExc.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathExport.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathForward.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathFrame.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathFrustum.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathFrustumTest.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathFun.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathGL.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathGLU.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathHalfLimits.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathInt64.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathInterval.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathLimits.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathLineAlgo.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathLine.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathMath.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathMatrixAlgo.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathMatrix.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathNamespace.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathPlane.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathPlatform.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathQuat.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathRandom.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathRoots.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathShear.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathSphere.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathVecAlgo.h"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/openexr/src/ilmbase_install/IlmBase/Imath/ImathVec.h"
    )
endif()

