# README.md

[![Build Status](https://github.com/michaelfournier064/leetcode-solution-silo/actions/workflows/ci.yml/badge.svg)](https://github.com/michaelfournier064/leetcode-solution-silo/actions)  
[![Coverage Status](https://github.com/michaelfournier064/leetcode-solution-silo/badge.svg?branch=main)](https://github.com/michaelfournier064/leetcode-solution-silo?branch=main)

## LeetCode Solution Silo

A curated collection of my personal solutions for LeetCode problems. For detailed problem descriptions and constraints, visit the corresponding LeetCode problem page.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [Code of Conduct](#code-of-conduct)
- [License](#license)

## Installation

1. **Clone the repository**  

   ```bash
   git clone https://github.com/michaelfournier064/leetcode-solution-silo.git
   cd leetcode-solution-silo
   ```

2. **Install dependencies**  
   - **CMake** (version ≥ 3.15)  

     ```bash
     sudo apt update && sudo apt install cmake
     ```  

   - **Google Test**  
     Install from package  

     ```bash
     sudo apt install libgtest-dev
     cd /usr/src/gtest && sudo cmake . && sudo make install
     ```  

3. **Configure and build**  

   ```bash
   cmake -S . -B build -G Ninja
   cmake --build build
   ```

## Usage

- **Run all tests**  

  ```bash
  cmake --build build --target check
  ```

- **Run a specific test executable**  

  ```bash
  ./build/cpp/two_sum_test
  ```

## Contributing

Please see [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines.

## Code of Conduct

This project follows the [Contributor Covenant Code of Conduct](CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code.

## License

MIT © Michael Fournier
