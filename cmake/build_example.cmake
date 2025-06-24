function(configure_exec exec_name)
    set(CMAKE_CXX_STANDARD 20)
    set(EXAMPLE_SOURCES_PATH       ${PROJECT_SOURCES}/${exec_name})

    include_directories(${EXAMPLE_SOURCES_PATH})

    file(GLOB EXAMPLE_SOURCES
            "${EXAMPLE_SOURCES_PATH}/*.cpp"
    )

    add_executable(${exec_name} ${EXAMPLE_SOURCES})
    set_target_properties(${exec_name} PROPERTIES LINKER_LANGUAGE CXX)
    target_compile_options(${exec_name} PRIVATE -Wno-long-long -Wno-varargs -Wall -Werror)

    # Define installation folders
    install(TARGETS ${exec_name} 
            RUNTIME DESTINATION ${PROJECT_BINARIES}
            LIBRARY DESTINATION ${PROJECT_BINARIES}
            ARCHIVE DESTINATION ${PROJECT_LIBS})

endfunction(configure_exec exec_name)
