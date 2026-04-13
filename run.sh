#!/usr/bin/env bash

set -e

cyanbg='\033[0;46m'
cyan='\033[0;36m'
magenta='\033[0;35m'
yellow='\033[1;33m'
# green='\033[0;32m'
# green='\033[46;38;5;46;1m'
# Текст: зеленый (46), Фон: циановый (51), Стиль: жирный (1)
green_on_cyan='\033[1;38;5;46;48;5;51m'
# Текст: зеленый (46), Фон: темно-голубой (31)
dcyan='\033[1;38;5;46;48;5;26m'
orange='\033[1;38;5;208;48;5;26m'

bold='\033[1m'
reset='\033[0m'
bg='\033[48;5;26m'
# run_bg='\r\033[48;5;57m'
# run_bg='\r\033[48;5;28m'
# orange='\033[38;5;208m'
# test = '\033[0;30;48;5;208m'

banner() {
  local name="$1"
  local width=50
  local padding=$(( (width - ${#name} - 4) / 2 ))
  local line
  line=$(printf '=%.0s' $(seq 1 $width))
  local pad
  pad=$(printf ' %.0s' $(seq 1 $padding))

  echo -e "${bg}"
  echo -e "${bold}${orange}${line}${bg}"
  echo -e "${bold}${orange}|${bg}${pad}${dcyan}${bold} ${name} ${bg}${pad}${bold}${orange}>${bg}"
  echo -e "${bold}${orange}${line}${reset}"
}

start_time=$(date +%s)

banner "🚀 Launching FULL List Benchmark"
sh ./list/full/run.sh

echo
banner "⚡ Launching FAST List Benchmark"
sh ./list/fast/run.sh
end_time=$(date +%s)
elapsed=$(( end_time - start_time ))

echo -e "${reset}"
echo -e "${bold}${green}✓ All benchmarks completed in ${elapsed}s${reset}"
echo