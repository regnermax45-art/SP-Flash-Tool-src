#!/bin/bash

# Enhanced SP Flash Tool Launch Script
# This script sets up the environment and launches the enhanced SP Flash Tool
# with dual scatter file support, modern UI, and device porting capabilities

# Set library path
export LD_LIBRARY_PATH="./Lib:$LD_LIBRARY_PATH"

# Launch the enhanced flash tool
echo "🚀 Launching Enhanced SP Flash Tool..."
echo "✨ Features:"
echo "   • Dual scatter file support"
echo "   • Modern UI with drag-and-drop"
echo "   • Device porting while flashing"
echo "   • Qt5 compatibility"
echo ""

./flash_tool "$@"

