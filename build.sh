#!/usr/bin/env bash

keeb="$1"
map="$2"

if [[ 2 -eq "$#" ]]; then
        sudo docker run -v "$PWD":/qmk -e keymap="${map}" -e keyboard="${keeb}" qmk
else
        echo "Usage: build.sh <keyboard> <keymap>"
        exit 1
fi

