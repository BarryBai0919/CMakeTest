# set bin path
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE})
# include directories
include_directories(
    ./inc
    ${PROJECT_SOURCE_DIR}/point/inc
)
message(STATUS "Include header done")

# collect source
aux_source_directory(./src SRC) 
message(STATUS "aux source directory done")

# add the shared lib
add_library(Element SHARED ${SRC}) 
message(STATUS "Shared lib done")
