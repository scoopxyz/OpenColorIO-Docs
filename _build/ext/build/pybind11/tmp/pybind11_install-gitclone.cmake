
if(NOT "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install-stamp/pybind11_install-gitinfo.txt" IS_NEWER_THAN "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install-stamp/pybind11_install-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install-stamp/pybind11_install-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --depth 1 --no-single-branch "https://github.com/pybind/pybind11.git" "pybind11_install"
    WORKING_DIRECTORY "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/pybind/pybind11.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout v2.4.3 --
  WORKING_DIRECTORY "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'v2.4.3'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install-stamp/pybind11_install-gitinfo.txt"
    "/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install-stamp/pybind11_install-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/fawlty/temp_dev/OpenColorIO-2/_build/ext/build/pybind11/src/pybind11_install-stamp/pybind11_install-gitclone-lastrun.txt'")
endif()

