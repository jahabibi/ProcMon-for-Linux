
add_library(storage-lib STATIC
    "${CMAKE_CURRENT_SOURCE_DIR}/mock_storage_engine.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/sqlite3_storage_engine.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/storage_proxy.cpp"
)

# target_link_libraries(
#     storage-lib
#     sqlite3-static
# )

# Create test target for sqlite3 storage engine.
# add_executable(test-sqlite3-storage "${CMAKE_CURRENT_SOURCE_DIR}/test_sqlite3_storage_engine.cpp")
# target_link_libraries(
#     test-sqlite3-storage
#     storage-lib
#     logging-lib
#     Catch2
# )

add_test(NAME test-procmon-sqlite3-storage COMMAND test-sqlite3-storage)