# #!/bin/bash

output_string=""

current_dir=$(pwd)
for file in "${current_dir}/7Eleven_00123"*; do
    if [ -e "$file" ]; then
        file_name=$(basename "$file")
        new_string="${file_name}:"
        output_string="${output_string}${new_string}\n"

        output=$(cut -d ',' -f 2 < "$file" | sort | uniq -c | sort -r | head -n 3)
        output_string="${output_string}${output}\n"
    fi
done

echo -e "$output_string" | head -n -1