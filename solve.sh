#!/usr/bin/env bash

read -p "Enter problem: " problem
mkdir $problem
cd $problem
touch solution.py solution.cpp
cat ../config/template.cpp > solution.cpp
contest_id=$(echo $problem | rev | cut -c 2- | rev)
problem_index=$(echo $problem | rev | cut -c 1)
echo '```json' > README.md
curl -s "https://codeforces.com/api/problemset.problems" | jq --arg contest_id "$contest_id" --arg problem_index "$problem_index" '.result.problems[] | select(.contestId == ($contest_id | tonumber) and .index == $problem_index) | {name, tags}' >> README.md
echo '```' >> README.md
alias minify="../config/minify"
git add .
git commit -m "Initial commit for $problem"
vim solution.py
