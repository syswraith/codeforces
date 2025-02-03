#!/usr/bin/env bash

read -p "Enter problem: " problem
mkdir $problem
cd $problem
touch solution.py solution.cpp
cat ../templates/template.cpp > solution.cpp
contest_id=$(echo $problem | rev | cut -c 2- | rev)
problem_index=$(echo $problem | rev | cut -c 1)
curl -s "https://codeforces.com/api/problemset.problems" | jq --arg contest_id "$contest_id" --arg problem_index "$problem_index" '.result.problems[] | select(.contestId == ($contest_id | tonumber) and .index == $problem_index) | {name, tags}' > README.md
git add .
git commit -m "Initial commit"
git push
vim solution.py
