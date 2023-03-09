#!/bin/bash

# Add all changes to the git staging area
git add .

# Prompt the user to input a commit message
echo "Enter a commit message:"
read message

# Commit the changes with the specified message
git commit -m "$message"

# Push the changes to the remote repository
git push -u origin main
