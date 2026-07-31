# gstats

A lightweight statistics library written in **C++** with **Python bindings** using **pybind11**.

Gstats is designed to provide fast and reliable statistical functions while serving as a practical example of modern C++ library development and Python interoperability.

---

## Features

* Written in modern C++
* Python bindings using pybind11
* Built with CMake
* Easy to extend with new statistical methods
* Open source

---

## Available Functions

| Function               | Description                                        | Status |
| ---------------------- | -------------------------------------------------- | :----: |
| `average()`            | Computes the arithmetic mean of a list of numbers. |    ✅   |
| `median()`             | Computes the median of a list of numbers.          |    ✅   |
| `mode()`               | Computes the mode of a list of numbers.            |    ✅  |
| `variance()`           | Computes the variance.                             |    ⏳   |
| `standard_deviation()` | Computes the standard deviation.                   |    ⏳   |
| `range()`              | Computes the numerical range.                      |    ⏳   |
| `quartiles()`          | Computes the quartiles of a dataset.               |    ⏳   |
| `percentile()`         | Computes arbitrary percentiles.                    |    ⏳   |

Legend:

* ✅ Implemented
* 🚧 In progress
* ⏳ Planned

---

## Installation

### Clone the repository

```bash
git clone https://github.com/GaurabKcc/Gstats.git
cd Gstats
```

### Install locally

```bash
python3 -m pip install --user --break-system-packages -e .
```

---

## Example

```python
import gstats

numbers = [1, 2, 3, 4, 5]

print(gstats.average(numbers))
print(gstats.median(numbers))
```

Output

```text
3.0
3.0
```

---

## Building

Configure the project

```bash
mkdir build
cd build
cmake ..
```

Compile

```bash
cmake --build .
```

---

## Project Structure

```text
Gstats/
│
├── include/          C++ header files
├── src/              C++ implementations and Python bindings
├── docs/             Documentation
├── build/            Build directory (generated)
├── CMakeLists.txt
├── pyproject.toml
└── README.md
```

---

## Contributing

Contributions are welcome.

To contribute:

1. Fork the repository.
2. Create a new branch.
3. Implement your changes.
4. Build and test the project.
5. Open a Pull Request.

---

## Roadmap

### Version 0.1

* [x] Average
* [x] Median
* [ ] Mode
* [ ] Variance
* [ ] Standard Deviation

### Version 0.2

* [ ] Quartiles
* [ ] Percentiles
* [ ] Covariance
* [ ] Correlation

### Future

* Unit tests
* Performance benchmarks
* NumPy interoperability
* Complete statistical toolkit
* Publish stable releases on PyPI

---

## License

This project is licensed under the MIT License.
