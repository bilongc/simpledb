add_subdirectory(record)

add_library(simpledb STATIC ${ALL_OBJECT_FILES})

set(SIMPLEDB_LIBS
        simpledb_record
)

target_link_libraries(
    simpledb
    ${SIMPLEDB_LIBS}
)

target_include_directories(
    simpledb PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
