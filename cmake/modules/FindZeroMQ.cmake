# - Try to find ZeroMQ headers and libraries
# - THANKS CUBIT FOR THIS FIND MODULE
#
# Usage of this module as follows:
#
#     find_package(ZeroMQ)
#
# Variables used by this module, they can change the default behaviour and need
# to be set before calling find_package:
#
#  ZeroMQ_ROOT_DIR  Set this variable to the root installation of
#                            ZeroMQ if the module has problems finding
#                            the proper installation path.
#
# Variables defined by this module:
#
#  ZEROMQ_FOUND              System has ZeroMQ libs/headers
#  ZeroMQ_LIBRARIES          The ZeroMQ libraries
#  ZeroMQ_INCLUDE_DIR        The location of ZeroMQ headers

#find_path(ZeroMQ_ROOT_DIR
#    NAMES include/zmq.hpp
#)
#
#find_library(ZeroMQ_LIBRARIES
#    NAMES zmq
#    HINTS ${ZeroMQ_ROOT_DIR}/lib
#)
#
#find_path(ZeroMQ_INCLUDE_DIR
#    NAMES zmq.hpp
#    HINTS ${ZeroMQ_ROOT_DIR}/include
#)
#
#include(FindPackageHandleStandardArgs)
#find_package_handle_standard_args(ZeroMQ DEFAULT_MSG
#    ZeroMQ_LIBRARIES
#    ZeroMQ_INCLUDE_DIR
#)
#
#mark_as_advanced(
#    ZeroMQ_ROOT_DIR
#    ZeroMQ_LIBRARIES
#    ZeroMQ_INCLUDE_DIR
#)

# - Try to find libzmq
# Once done, this will define
#
# ZeroMQ_FOUND - system has libzmq
# ZeroMQ_INCLUDE_DIRS - the libzmq include directories
# ZeroMQ_LIBRARIES - link these to use libzmq

include(LibFindMacros)

IF (UNIX)
        # Use pkg-config to get hints about paths
        libfind_pkg_check_modules(ZeroMQ_PKGCONF libzmq)

        # Include dir
        find_path(ZeroMQ_INCLUDE_DIR
         NAMES zmq.hpp
         PATHS ${ZEROMQ_ROOT}/include ${ZeroMQ_PKGCONF_INCLUDE_DIRS}
        )

        # Finally the library itself
        find_library(ZeroMQ_LIBRARY
         NAMES zmq
         PATHS ${ZEROMQ_ROOT}/lib ${ZeroMQ_PKGCONF_LIBRARY_DIRS}
        )
ELSEIF (WIN32)
        find_path(ZeroMQ_INCLUDE_DIR
         NAMES zmq.hpp
         PATHS ${ZEROMQ_ROOT}/include ${CMAKE_INCLUDE_PATH}
        )
        # Finally the library itself
        find_library(ZeroMQ_LIBRARY
         NAMES libzmq
         PATHS ${ZEROMQ_ROOT}/lib ${CMAKE_LIB_PATH}
        )
ENDIF()

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(ZeroMQ_PROCESS_INCLUDES ZeroMQ_INCLUDE_DIR ZeroMQ_INCLUDE_DIRS)
set(ZeroMQ_PROCESS_LIBS ZeroMQ_LIBRARY ZeroMQ_LIBRARIES)
libfind_process(ZeroMQ)
