# Include the directory itself as a path to include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
 

# Create a variable called netonomy_SOURCES containing all .cpp files:
set(netanomy_SOURCES master.cpp)
 
# For a large number of source files you can create it in a simpler way
# using file() function:
# file(GLOB netonomy_SOURCES *.cpp)
 
# Create an executable file called netonomy from sources:
add_executable(netanomy ${netanomy_SOURCES})

SET(ZMQ_INCLUDE ${ZMQ_INCLUDE} CACHE STRING "Location of ZeroMQ headers.")
SET(ZMQ_LIBRARY ${ZMQ_LIBRARY} CACHE STRING "ZeroMQ libraries to link in.")

#find_package(ZeroMQ REQUIRED)
#include_directories(${ZeroMQ++_INCLUDE_DIRS})
include_directories(${ZMQ_INCLUDE})
#include_directories(${ZMQ_INCLUDE})
#set(LIBS ${LIBS} ${ZeroMQ_LIBRARIES})
#set(LIBS lib/lib/*)

#link_directories(lib)

target_link_libraries(netanomy ${ZMQ_LIBRARY})
