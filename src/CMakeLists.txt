# Set CPP Versions
set(CPP_VERSION_11      11)
set(CPP_VERSION_14      14)
set(CPP_VERSION_17      17)

# Set programs' names
set(PROGRAM_11_NUM01      1-hello-world)
set(PROGRAM_11_NUM02      2-uniform-initialization)

set(PROGRAM_17_NUM01      1-filesystem)

# Include function to configure
include(build_example)

# Execute configuration

set (CMAKE_CXX_STANDARD 11)
configure_exec("${PROGRAM_11_NUM01}" "${CPP_VERSION_11}")
configure_exec("${PROGRAM_11_NUM02}" "${CPP_VERSION_11}")

set (CMAKE_CXX_STANDARD 17)
configure_exec("${PROGRAM_17_NUM01}" "${CPP_VERSION_17}")
