// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.

#include "PyTransform.h"

namespace OCIO_NAMESPACE
{
namespace 
{

std::vector<float> getVarsStdVec(const AllocationTransformRcPtr & p) 
{
    std::vector<float> vars;
    vars.resize(p->getNumVars());
    p->getVars(vars.data());
    return vars;
}

void setVars(const AllocationTransformRcPtr & p, const std::vector<float> & vars)
{
    if (vars.size() < 2 || vars.size() > 3)
    {
        throw Exception("vars must be a float array, size 2 or 3");
    }
    p->setVars((int)vars.size(), vars.data());
}

} // namespace

void bindPyAllocationTransform(py::module & m)
{
    AllocationTransformRcPtr DEFAULT = AllocationTransform::Create();

    py::class_<AllocationTransform, 
               AllocationTransformRcPtr /* holder */, 
               Transform /* base */>(m, "AllocationTransform", DS(AllocationTransform))
        .def(py::init(&AllocationTransform::Create), DS(AllocationTransform, AllocationTransform))
        .def(py::init([](Allocation allocation, 
                         const std::vector<float> & vars, 
                         TransformDirection dir) 
            {
                AllocationTransformRcPtr p = AllocationTransform::Create();
                p->setAllocation(allocation);
                setVars(p, vars);
                p->setDirection(dir);
                p->validate();
                return p;
            }),
             DS(AllocationTransform, AllocationTransform, 2),
             "allocation"_a = DEFAULT->getAllocation(), 
             "vars"_a = getVarsStdVec(DEFAULT),
             "dir"_a = DEFAULT->getDirection())

        .def("getAllocation", &AllocationTransform::getAllocation, DS(AllocationTransform, getAllocation))
        .def("setAllocation", &AllocationTransform::setAllocation, DS(AllocationTransform, setAllocation), "allocation"_a)
        .def("getVars", [](AllocationTransformRcPtr & self)
            {
                return getVarsStdVec(self);
            },
            DS(AllocationTransform, getVars))
        .def("setVars", [](AllocationTransformRcPtr self, const std::vector<float> & vars)
            { 
                setVars(self, vars);
            },
            DS(AllocationTransform, setVars),
             "vars"_a);
}

// MISSING
// createEditableCopy
// getDirection
// getNumVars
// getVars
// setDirection
// setVars
// validate

} // namespace OCIO_NAMESPACE