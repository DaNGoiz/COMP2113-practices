#!/bin/bash

if [ $# -ge 2 ]; then
    echo "“Usage: ./trace.sh (ProductID)"
else
    product="$1"

    > "$product".log

    current_dir=$(pwd)
    for file in "${current_dir}/7Eleven"*; do
        if [ -e "$file" ]; then
            grep "$product" "$file" >> "$product".log
        fi
    done

    if [ -s "$product".log ]; then
        sort -o "$product".log "$product".log
        cat "$product".log
    else
        rm "$product".log
        echo "No records found for $product"
    fi 
fi