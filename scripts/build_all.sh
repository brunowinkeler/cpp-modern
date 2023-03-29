#!/bin/bash

# ============= SETTING VARIABLES =============
MAIN_ROOT_PATH=`pwd`

FILE_CHECK=README.md

if ! test -f "$FILE_CHECK"; then
    echo "$FILE_CHECK does not exists."
    exit
fi

if [ "$(uname)" == "Darwin" ]; then
    SO_MODEL=MAC
elif [ "$(expr substr $(uname -s) 1 5)" == "Linux" ]; then
    SO_MODEL=LINUX
elif [ "$(expr substr $(uname -s) 1 10)" == "MINGW32_NT" ]; then
    SO_MODEL=WINDOWS
elif [ "$(expr substr $(uname -s) 1 10)" == "MINGW64_NT" ]; then
    SO_MODEL=WINDOWS
elif [ "$(expr substr $(uname -s) 1 9)" == "CYGWIN_NT" ]; then
    SO_MODEL=WINDOWS
fi

# ============= PATHS DEFINITION =============
PATH_ROOT_SCRIPTS=$MAIN_ROOT_PATH/scripts

# # ============= BUILDING MDM_EXAMPLES (C) =============
. $PATH_ROOT_SCRIPTS/build.sh $MAIN_ROOT_PATH

cd $MAIN_ROOT_PATH
