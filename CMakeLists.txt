PROJECT(CatCoder CXX)
cmake_minimum_required (VERSION 2.6.0)

SET ( CMAKE_CXX_FLAGS "-std=c++11")
SET ( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
SET ( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
SET ( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory( training )
add_subdirectory( CCC2018 )
