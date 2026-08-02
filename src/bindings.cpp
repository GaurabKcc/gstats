#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "average.hpp"
#include "median.hpp"
#include "mode.hpp"
#include "quartile.hpp"

namespace py = pybind11;

PYBIND11_MODULE(gstats, m)
{
    m.doc() = "Statistics library";

    m.def(
        "average",
        &avg,
        "Calculate the arithmetic mean of a list of numbers."
    );

    m.def(
        "median",
        &median,
        "Calculate the median from a list of numbers."
    );
    m.def(
        "mode",
        &mode,
        "Calculate the mode from a list of numbers."
    );
    m.def(
        "quartile",
        &quartile,
        "Calculate the nth quartile from a list of numbers."
    );
}
