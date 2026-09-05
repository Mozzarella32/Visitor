cmake_minimum_required(VERSION 3.16)

project(Visitor LANGUAGES CXX)

add_library(VisitorHeaders INTERFACE)
add_library(Visitor::Headers ALIAS VisitorHeaders)

target_include_directories(VisitorHeaders
    INTERFACE
        "${CMAKE_CURRENT_SOURCE_DIR}"
)
