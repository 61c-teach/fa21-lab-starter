#!/bin/bash
set -eu

lab00_start_ref="lab00-start"
git fetch --tags starter

current_commit="$(git rev-parse HEAD)"
lab00_start_commit="$(git rev-parse "${lab00_start_ref}")"

if [ "$current_commit" != "$lab00_start_commit" ]; then
  echo "Your repo appears to have additional commits beyond the start of lab 0."
  echo "You can reset your repo, but all of your work will be reset."
  echo "If you are sure, run 'git reset --hard ${lab00_start_ref} && git push -f origin main'."
  echo "Otherwise, ask course staff for help."
  exit 1
fi

git reset -q --hard "${lab00_start_ref}~"

echo "Finished setup"
