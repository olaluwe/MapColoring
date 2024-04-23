<p align="center">
  <a href="https://github.com/olaluwe/MapColoring" rel="noopener">
 <img src="https://i.imgur.com/AZ2iWek.png" alt="Project logo"></a>
</p>
<h3 align="center">Map Coloring Project</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)](https://github.com/olaluwe/MapColoring)
[![GitHub Issues](https://img.shields.io/github/issues/olaluwe/MapColoring.svg)](https://github.com/olaluwe/MapColoring/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/olaluwe/MapColoring.svg)](https://github.com/olaluwe/MapColoring/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/olaluwe/MapColoring/blob/master/LICENSE.md)

</div>

---

<p align="center"> This project implements a map coloring algorithm that assigns colors to different regions on a map ensuring no two adjacent regions share the same color.
    <br> 
</p>

## 📝 Table of Contents

- [Problem Statement](#problem_statement)
- [Idea / Solution](#idea)
- [Dependencies / Limitations](#limitations)
- [Future Scope](#future_scope)
- [Setting up a local environment](#getting_started)
- [Usage](#usage)
- [Technology Stack](#tech_stack)
- [Contributing](../CONTRIBUTING.md)
- [Authors](#authors)

## 🧐 Problem Statement <a name = "problem_statement"></a>

The goal of the Map Coloring Project is to demonstrate the practical application of constraint satisfaction using a backtracking algorithm.

- **IDEAL:** Efficiently color a map using a minimum number of colors without two adjacent regions sharing the same color.
- **REALITY:** Currently, the algorithm is limited to pre-defined regions and colors.
- **CONSEQUENCES:** Without improvement, the algorithm cannot adapt to dynamic maps or variable regions and color requirements.

## 💡 Idea / Solution <a name = "idea"></a>

The map coloring solution leverages a classic backtracking approach to assign colors to map regions under the constraints that no adjacent regions share the same color.

## ⛓️ Dependencies / Limitations <a name = "limitations"></a>

- C++ Compiler (g++)
- Standard C++ libraries
- No current limitations regarding platform compatibility.

## 🚀 Future Scope <a name = "future_scope"></a>

- Extend the algorithm to handle dynamic inputs and larger datasets.
- Improve the algorithm to optimize the number of colors used.

## 🏁 Getting Started <a name = "getting_started"></a>

Follow these instructions to set up the project locally. For detailed instructions on how to compile and run the project, refer to the section on compilation.

### Prerequisites

You need to have a modern C++ compiler supporting C++11 or later. For example, GCC or Clang.

### Installing

Clone the repository to your local machine:

```bash
git clone https://github.com/olaluwe/MapColoring.git
cd MapColoring
make
./bin/MapColors
```
### Clean make
```bash
make clean
make
```
