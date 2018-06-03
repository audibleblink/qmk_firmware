#!/usr/bin/env bash

keeb="$1"
map="$2"

if [[ 2 -eq "$#" ]]; then
        docker run --rm -v "$PWD":/qmk_firmware -e km="${map}" -e kb="${keeb}" qmk
else
        echo "Usage: build.sh <keyboard> <keymap>"
        exit 1
fi

