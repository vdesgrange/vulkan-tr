# Install script for directory: /Users/vdesgrange/Development/C_projects/vulkan-tr/tracy

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/build/libTracyClient.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTracyClient.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTracyClient.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTracyClient.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tracy" TYPE FILE FILES
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/tracy/TracyC.h"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/tracy/Tracy.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/tracy/TracyD3D11.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/tracy/TracyD3D12.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/tracy/TracyLua.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/tracy/TracyOpenCL.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/tracy/TracyOpenGL.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/tracy/TracyVulkan.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/client" TYPE FILE FILES
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/tracy_concurrentqueue.h"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/tracy_rpmalloc.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/tracy_SPSCQueue.h"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyArmCpuTable.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyCallstack.h"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyCallstack.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyDebug.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyDxt1.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyFastVector.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyLock.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyProfiler.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyRingBuffer.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyScoped.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyStringHelpers.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracySysTime.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracySysTrace.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/client/TracyThread.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/common" TYPE FILE FILES
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/tracy_lz4.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/tracy_lz4hc.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyAlign.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyAlloc.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyApi.h"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyColor.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyForceInline.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyMutex.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyProtocol.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyQueue.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracySocket.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyStackFrames.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracySystem.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyUwp.hpp"
    "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/public/common/TracyYield.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake"
         "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/build/CMakeFiles/Export/7430802ac276f58e70c46cf34d169c6f/TracyConfig.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Tracy" TYPE FILE FILES "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/build/CMakeFiles/Export/7430802ac276f58e70c46cf34d169c6f/TracyConfig.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Tracy" TYPE FILE FILES "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/build/CMakeFiles/Export/7430802ac276f58e70c46cf34d169c6f/TracyConfig-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/vdesgrange/Development/C_projects/vulkan-tr/tracy/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
