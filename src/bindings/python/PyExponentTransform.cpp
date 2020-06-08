// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.

#include "PyTransform.h"

namespace OCIO_NAMESPACE
{

void bindPyExponentTransform(py::module & m)
{
    ExponentTransformRcPtr DEFAULT = ExponentTransform::Create();

    std::array<double, 4> DEFAULT_VEC4;
    DEFAULT->getValue(*reinterpret_cast<double(*)[4]>(DEFAULT_VEC4.data()));

    py::class_<ExponentTransform, 
               ExponentTransformRcPtr /* holder */, 
               Transform /* base */>(m, "ExponentTransform", DS(ExponentTransform))
        .def(py::init(&ExponentTransform::Create), DS(ExponentTransform, Create))
        .def(py::init([](const std::array<double, 4> & vec4,
                         NegativeStyle negativeStyle, 
                         TransformDirection dir)
            {
                ExponentTransformRcPtr p = ExponentTransform::Create();
                p->setValue(*reinterpret_cast<const double(*)[4]>(vec4.data()));
                p->setNegativeStyle(negativeStyle);
                p->setDirection(dir);
                p->validate();
                return p;
            }),
             DS(ExponentTransform, ExponentTransform),
             "vec4"_a = DEFAULT_VEC4,
             "negativeStyle"_a = DEFAULT->getNegativeStyle(),
             "dir"_a = DEFAULT->getDirection())

        .def("getFormatMetadata", 
             (FormatMetadata & (ExponentTransform::*)()) &ExponentTransform::getFormatMetadata,
             DS(ExponentTransform, getFormatMetadata),
             py::return_value_policy::reference_internal)
        .def("getFormatMetadata", 
             (const FormatMetadata & (ExponentTransform::*)() const) 
             &ExponentTransform::getFormatMetadata,
             DS(ExponentTransform, getFormatMetadata, 2),
             py::return_value_policy::reference_internal)
        .def("equals", &ExponentTransform::equals, DS(ExponentTransform, equals), "other"_a)
        .def("getValue", [](ExponentTransformRcPtr self)
            {
                std::array<double, 4> vec4;
                self->getValue(*reinterpret_cast<double(*)[4]>(vec4.data()));
                return vec4;
            },
             DS(ExponentTransform, getValue))
        .def("setValue", [](ExponentTransformRcPtr self, const std::array<double, 4> & vec4)
            { 
                self->setValue(*reinterpret_cast<const double(*)[4]>(vec4.data()));
            },
             DS(ExponentTransform, setValue),
             "vec4"_a)
        .def("getNegativeStyle", &ExponentTransform::getNegativeStyle, DS(ExponentTransform, getNegativeStyle))
        .def("setNegativeStyle", &ExponentTransform::setNegativeStyle, DS(ExponentTransform, setNegativeStyle), "style"_a);
}

} // namespace OCIO_NAMESPACE
