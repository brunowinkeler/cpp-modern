# Include function to configure
include(build_example)

# Set CPP Versions
set(CPP_VERSION_11      11)
set(CPP_VERSION_14      14)
set(CPP_VERSION_17      17)

# Set programs' names and configure

# CPP 11
set(PROGRAM_11_NUM01      1-hello-world)
configure_exec("${PROGRAM_11_NUM01}" "${CPP_VERSION_11}")
set(PROGRAM_11_NUM02      2-uniform-initialization)
configure_exec("${PROGRAM_11_NUM02}" "${CPP_VERSION_11}")

# CPP 14
set(PROGRAM_14_NUM01      1-generics-lambdas)
configure_exec("${PROGRAM_14_NUM01}" "${CPP_VERSION_14}")

# CPP 17
set(PROGRAM_17_NUM01      1-filesystem)
configure_exec("${PROGRAM_17_NUM01}" "${CPP_VERSION_17}")
set(PROGRAM_17_NUM02      2-constexpr-if)
configure_exec("${PROGRAM_17_NUM02}" "${CPP_VERSION_17}")
set(PROGRAM_17_NUM03      3-optional)
configure_exec("${PROGRAM_17_NUM03}" "${CPP_VERSION_17}")
set(PROGRAM_17_NUM04      4-solid-principles)
configure_exec("${PROGRAM_17_NUM04}" "${CPP_VERSION_17}")
set(PROGRAM_17_NUM05      5-rule-of-5)
configure_exec("${PROGRAM_17_NUM05}" "${CPP_VERSION_17}")