// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.

#include "PyTransform.h"

namespace OCIO_NAMESPACE
{

void bindPyColorSpaceTransform(py::module & m)
{
    ColorSpaceTransformRcPtr DEFAULT = ColorSpaceTransform::Create();

    py::class_<ColorSpaceTransform, 
               ColorSpaceTransformRcPtr /* holder */, 
               Transform /* base */>(m, "ColorSpaceTransform", DS(ColorSpaceTransform))
        .def(py::init(&ColorSpaceTransform::Create), DS(ColorSpaceTransform, ColorSpaceTransform))
        .def(py::init([](const std::string & src, 
                         const std::string & dst, 
                         TransformDirection dir) 
            {
                ColorSpaceTransformRcPtr p = ColorSpaceTransform::Create();
                if (!src.empty()) { p->setSrc(src.c_str()); }
                if (!dst.empty()) { p->setDst(dst.c_str()); }
                p->setDirection(dir);
                p->validate();
                return p;
            }),
             DS(ColorSpaceTransform, ColorSpaceTransform, 2), 
             "src"_a = DEFAULT->getSrc(), 
             "dst"_a = DEFAULT->getDst(),
             "dir"_a = DEFAULT->getDirection())

        .def("getSrc", &ColorSpaceTransform::getSrc, DS(ColorSpaceTransform, getSrc))
        .def("setSrc", &ColorSpaceTransform::setSrc, DS(ColorSpaceTransform, setSrc), "src"_a)
        .def("getDst", &ColorSpaceTransform::getDst, DS(ColorSpaceTransform, getDst))
        .def("setDst", &ColorSpaceTransform::setDst, DS(ColorSpaceTransform, setDst), "dst"_a);
}

} // namespace OCIO_NAMESPACE
