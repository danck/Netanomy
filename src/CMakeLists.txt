# Include the directory itself as a path to include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
 

# Create a variable called netonomy_SOURCES containing all .cpp files:
set(netanomy_SOURCES master.cpp cppzmq/zmq.hpp)
 
# For a large number of source files you can create it in a simpler way
# using file() function:
# file(GLOB netonomy_SOURCES *.cpp)
 
# Create an executable file called netonomy from sources:
add_executable(netanomy ${netanomy_SOURCES})


find_package(ZeroMQ REQUIRED)
include_directories(${ZeroMQ++_INCLUDE_DIRS})
set(LIBS ${LIBS} ${ZeroMQ_LIBRARIES})

target_link_libraries(netanomy ${LIBS})
