#set executable path
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE})

# configure a file to pass the version number 
configure_file(./inc/test1_config.h.in ./inc/test1_config.h) 
message(STATUS "Pass version number done")

# include directories
include_directories(
    ./inc
    ${PROJECT_SOURCE_DIR}/element/inc
    ${PROJECT_SOURCE_DIR}/point/inc
    ${PROJECT_SOURCE_DIR}/build/main/inc
)
message(STATUS "Include header done")

# collect source
aux_source_directory(./src SRC) 
message(STATUS "aux source directory done")

# add the executable
add_executable(Test1 ${SRC}) 
message(STATUS "Executable file done") 

# link targets 
target_link_libraries(Test1 Element Point) 
