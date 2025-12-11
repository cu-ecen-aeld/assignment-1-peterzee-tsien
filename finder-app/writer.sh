!#/bin/bash

writefile=$1
writestr=$2


if [ -z "$writefile" ] || [ -z "$writestr" ]; then
    echo "Error: Two arguments are required."
    echo "Usage: ./writer.sh <writefile> <writestr>"
    exit 1
fi

writedir=$(dirname "$writefile")
mkdir -p "$writedir"

echo "$writestr" > "$writefile"

if [ $? -ne 0 ]; then
    echo "Error: Could not create file '$writefile'."
    exit 1
fi

exit 0
