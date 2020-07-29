
add_library(common-static STATIC
    "${CMAKE_CURRENT_SOURCE_DIR}/printable.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/cli_utils.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/event_formatter.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/kill_event_formatter.cpp"
)