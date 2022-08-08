# o cmake desta aplicacao ainda não funciona corretamente
cmake_minimum_required(VERSION 3.22.1)
project(Histograma)
set(CMAKE_CXX_STANDARD 11)
add_executable(Histograma ../src/histograma.cpp)
#target_include_directories (Histograma PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/COPYING)
#target_include_directories (Histograma PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/README)

