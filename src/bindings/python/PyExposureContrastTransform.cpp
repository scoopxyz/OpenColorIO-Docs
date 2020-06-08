// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.

#include "PyTransform.h"

namespace OCIO_NAMESPACE
{

void bindPyExposureContrastTransform(py::module & m)
{
    ExposureContrastTransformRcPtr DEFAULT = ExposureContrastTransform::Create();

    py::class_<ExposureContrastTransform, 
               ExposureContrastTransformRcPtr /* holder */, 
               Transform /* base */>(m, "ExposureContrastTransform", DS(ExposureContrastTransform))
        .def(py::init(&ExposureContrastTransform::Create), DS(ExposureContrastTransform, Create))
        .def(py::init([](ExposureContrastStyle style,
                         double exposure,
                         double contrast,
                         double gamma,
                         double pivot,
                         double logExposureStep,
                         double logMidGray,
                         bool dynamicExposure,
                         bool dynamicContrast,
                         bool dynamicGamma,
                         TransformDirection dir) 
            {
                ExposureContrastTransformRcPtr p = ExposureContrastTransform::Create();
                p->setExposure(exposure);
                p->setContrast(contrast);
                p->setGamma(gamma);
                p->setPivot(pivot);
                p->setLogExposureStep(logExposureStep);
                p->setLogMidGray(logMidGray);
                if (dynamicExposure) { p->makeExposureDynamic(); }
                if (dynamicContrast) { p->makeContrastDynamic(); }
                if (dynamicGamma)    { p->makeGammaDynamic(); }
                p->setDirection(dir);
                p->validate();
                return p;
            }),
             DS(ExposureContrastTransform, ExposureContrastTransform),
             "style"_a = DEFAULT->getStyle(),
             "exposure"_a = DEFAULT->getExposure(), 
             "contrast"_a = DEFAULT->getContrast(),
             "gamma"_a = DEFAULT->getGamma(),
             "pivot"_a = DEFAULT->getPivot(),
             "logExposureStep"_a = DEFAULT->getLogExposureStep(),
             "logMidGray"_a = DEFAULT->getLogMidGray(),
             "dynamicExposure"_a = DEFAULT->isExposureDynamic(),
             "dynamicContrast"_a = DEFAULT->isContrastDynamic(),
             "dynamicGamma"_a = DEFAULT->isGammaDynamic(),
             "dir"_a = DEFAULT->getDirection())

        .def("getFormatMetadata", 
             (FormatMetadata & (ExposureContrastTransform::*)()) 
             &ExposureContrastTransform::getFormatMetadata,
             DS(ExposureContrastTransform, getFormatMetadata),
             py::return_value_policy::reference_internal)
        .def("getFormatMetadata", 
             (const FormatMetadata & (ExposureContrastTransform::*)() const) 
             &ExposureContrastTransform::getFormatMetadata,
             DS(ExposureContrastTransform, getFormatMetadata),
             py::return_value_policy::reference_internal)
        .def("equals", &ExposureContrastTransform::equals,
             DS(ExposureContrastTransform, equals),
             "other"_a)
        .def("getStyle", &ExposureContrastTransform::getStyle,
             DS(ExposureContrastTransform, getStyle))
        .def("setStyle", &ExposureContrastTransform::setStyle,
             DS(ExposureContrastTransform, setStyle),
             "style"_a)
        .def("getExposure", &ExposureContrastTransform::getExposure,
             DS(ExposureContrastTransform, getExposure))
        .def("setExposure", &ExposureContrastTransform::setExposure,
             DS(ExposureContrastTransform, setExposure),
             "exposure"_a)
        .def("isExposureDynamic", &ExposureContrastTransform::isExposureDynamic,
             DS(ExposureContrastTransform, isExposureDynamic))
        .def("makeExposureDynamic", &ExposureContrastTransform::makeExposureDynamic,
             DS(ExposureContrastTransform, makeExposureDynamic))
        .def("getContrast", &ExposureContrastTransform::getContrast,
             DS(ExposureContrastTransform, getContrast))
        .def("setContrast", &ExposureContrastTransform::setContrast,
             DS(ExposureContrastTransform, setContrast),
             "contrast"_a)
        .def("isContrastDynamic", &ExposureContrastTransform::isContrastDynamic,
             DS(ExposureContrastTransform, isContrastDynamic))
        .def("makeContrastDynamic", &ExposureContrastTransform::makeContrastDynamic,
             DS(ExposureContrastTransform, makeContrastDynamic))
        .def("getGamma", &ExposureContrastTransform::getGamma,
             DS(ExposureContrastTransform, getGamma))
        .def("setGamma", &ExposureContrastTransform::setGamma,
             DS(ExposureContrastTransform, setGamma),
             "gamma"_a)
        .def("isGammaDynamic", &ExposureContrastTransform::isGammaDynamic,
             DS(ExposureContrastTransform, isGammaDynamic))
        .def("makeGammaDynamic", &ExposureContrastTransform::makeGammaDynamic,
             DS(ExposureContrastTransform, makeGammaDynamic))
        .def("getPivot", &ExposureContrastTransform::getPivot,
             DS(ExposureContrastTransform, getPivot))
        .def("setPivot", &ExposureContrastTransform::setPivot,
             DS(ExposureContrastTransform, setPivot),
             "pivot"_a)
        .def("getLogExposureStep", &ExposureContrastTransform::getLogExposureStep,
             DS(ExposureContrastTransform, getLogExposureStep))
        .def("setLogExposureStep", &ExposureContrastTransform::setLogExposureStep,
             DS(ExposureContrastTransform, setLogExposureStep),
             "logExposureStep"_a)
        .def("getLogMidGray", &ExposureContrastTransform::getLogMidGray,
             DS(ExposureContrastTransform, getLogMidGray))
        .def("setLogMidGray", &ExposureContrastTransform::setLogMidGray,
             DS(ExposureContrastTransform, setLogMidGray),
             "logMidGray"_a);
}

} // namespace OCIO_NAMESPACE
