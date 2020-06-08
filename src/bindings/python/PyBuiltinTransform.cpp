// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.

#include "PyTransform.h"

namespace OCIO_NAMESPACE
{

void bindPyBuiltinTransform(py::module & m)
{
    py::class_<BuiltinTransform, 
               BuiltinTransformRcPtr /* holder */, 
               Transform /* base */>(m, "BuiltinTransform")
        .def(py::init(&BuiltinTransform::Create), DS(BuiltinTransform))

        .def("setStyle",       &BuiltinTransform::setStyle, DS(BuiltinTransform, setStyle), "style"_a)
        .def("getStyle",       &BuiltinTransform::getStyle, DS(BuiltinTransform, getStyle))
        .def("getDescription", &BuiltinTransform::getDescription, DS(BuiltinTransform, getDescription));
}

} // namespace OCIO_NAMESPACE
