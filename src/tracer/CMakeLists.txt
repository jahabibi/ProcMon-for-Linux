
add_library(tracer-lib 
    "${CMAKE_CURRENT_SOURCE_DIR}/mock_tracer_engine.cpp"
)

add_subdirectory(ebpf)