#!/bin/bash

# ============= SETTING VARIABLES =============
MAIN_ROOT_PATH=`pwd`

FILE_CHECK=README.md

if ! test -f "$FILE_CHECK"; then
    echo "$FILE_CHECK does not exists."
    exit
fi

# # ============= BUILDING MDM_CORE (C) =============
echo "Cleaning INSTALL folder..."
rm -rf $MAIN_ROOT_PATH/install

echo "Cleaning BUILD folder..."
rm -rf $MAIN_ROOT_PATH/build
