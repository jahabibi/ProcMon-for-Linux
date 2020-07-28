
add_library(display-lib STATIC
    "${CMAKE_CURRENT_SOURCE_DIR}/screen.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/column.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/headless.cpp"
)