
add_library(display-static STATIC
    "${CMAKE_CURRENT_SOURCE_DIR}/screen.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/column.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/headless.cpp"
)