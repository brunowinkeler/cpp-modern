# Include function to configure
include(build_example)

set(SOURCE_FOLDER   ${CMAKE_SOURCE_DIR}/src)

# Loop through each subdirectory in SOURCE_FOLDER
file(GLOB CHILD_DIRS RELATIVE ${SOURCE_FOLDER} ${SOURCE_FOLDER}/*)
message("CHILD_DIRS = ${CHILD_DIRS}")

foreach(dir ${CHILD_DIRS})
    if(IS_DIRECTORY ${SOURCE_FOLDER}/${dir})
        configure_exec(${dir})
    endif()
endforeach()