# Include function to configure
include(build_example)

# Set CPP Versions
set(CPP_VERSION_11      11)
set(CPP_VERSION_14      14)
set(CPP_VERSION_17      17)

# Set programs' names and configure

# CPP 11
set(PROGRAM_11_NUM01      1-hello-world)
set(PROGRAM_11_NUM02      2-uniform-initialization)
configure_exec("${PROGRAM_11_NUM01}" "${CPP_VERSION_11}")
configure_exec("${PROGRAM_11_NUM02}" "${CPP_VERSION_11}")

# CPP 14
set(PROGRAM_14_NUM01      1-generics-lambdas)
configure_exec("${PROGRAM_14_NUM01}" "${CPP_VERSION_14}")

# CPP 17
set(PROGRAM_17_NUM01      1-filesystem)
set(PROGRAM_17_NUM02      2-constexpr-if)
configure_exec("${PROGRAM_17_NUM01}" "${CPP_VERSION_17}")
configure_exec("${PROGRAM_17_NUM02}" "${CPP_VERSION_17}")
