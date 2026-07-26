#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "average.hpp"

namespace py = pybind11;

PYBIND11_MODULE(statslib, m)
{
    m.doc() = "Statistics library";

    m.def(
        "average",
        &avg,
        "Calculate the arithmetic mean of a list of numbers."
    );
}
