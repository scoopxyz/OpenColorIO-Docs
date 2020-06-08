/*
  This file contains docstrings for the Python bindings.
  Do not edit! These were automatically extracted by mkdoc.py
 */

#define __EXPAND(x)                                      x
#define __COUNT(_1, _2, _3, _4, _5, _6, _7, COUNT, ...)  COUNT
#define __VA_SIZE(...)                                   __EXPAND(__COUNT(__VA_ARGS__, 7, 6, 5, 4, 3, 2, 1))
#define __CAT1(a, b)                                     a ## b
#define __CAT2(a, b)                                     __CAT1(a, b)
#define __DOC1(n1)                                       __doc_##n1
#define __DOC2(n1, n2)                                   __doc_##n1##_##n2
#define __DOC3(n1, n2, n3)                               __doc_##n1##_##n2##_##n3
#define __DOC4(n1, n2, n3, n4)                           __doc_##n1##_##n2##_##n3##_##n4
#define __DOC5(n1, n2, n3, n4, n5)                       __doc_##n1##_##n2##_##n3##_##n4##_##n5
#define __DOC6(n1, n2, n3, n4, n5, n6)                   __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6
#define __DOC7(n1, n2, n3, n4, n5, n6, n7)               __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6##_##n7
#define DOC(...)                                         __EXPAND(__EXPAND(__CAT2(__DOC, __VA_SIZE(__VA_ARGS__)))(__VA_ARGS__))

#if defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif


static const char *__doc_OpenColorIO_v2_0dev_Allocation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform =
R"doc(Forward direction wraps the 'expanded' range into the specified, often
compressed, range.)doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_AllocationTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_AllocationTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_getAllocation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_getDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_getNumVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_getVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_setAllocation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_setDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_setVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_AllocationTransform_validate = R"doc(Will throw if data is not valid.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Allocation_ALLOCATION_LG2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Allocation_ALLOCATION_UNIFORM = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Allocation_ALLOCATION_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker =
R"doc(In certain situations it is necessary to serialize transforms into a
variety of application specific LUT formats. Note that not all file
formats that may be read also support baking.

**Usage Example:** *Bake a CSP sRGB viewer LUT*

```
{.cpp}
   OCIO::ConstConfigRcPtr config = OCIO::Config::CreateFromEnv();
   OCIO::BakerRcPtr baker = OCIO::Baker::Create();
   baker->setConfig(config);
   baker->setFormat("csp");
   baker->setInputSpace("lnf");
   baker->setShaperSpace("log");
   baker->setTargetSpace("sRGB");
   auto & metadata = baker->getFormatMetadata();
   metadata.addChildElement(OCIO::METADATA_DESCRIPTION, "A first comment");
   metadata.addChildElement(OCIO::METADATA_DESCRIPTION, "A second comment");
   std::ostringstream out;
   baker->bake(out); // fresh bread anyone!
   std::cout << out.str();
```

```
{.py}
x = OpenColorIO.Baker()
x.setConfig()
x.setFormat("csp")
```)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_Baker = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_Baker_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_Create = R"doc(Create a new Baker.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_bake = R"doc(Bake the LUT into the output stream.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_createEditableCopy = R"doc(Create a copy of this Baker.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getConfig = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getCubeSize = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getFormat = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getFormatExtensionByIndex =
R"doc(Get the LUT baker format extension at index, return empty string if an
invalid index is specified.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getFormatMetadata_2 =
R"doc(Get editable *optional* format metadata. The metadata that will be
used varies based on the capability of the given file format. Formats
such as CSP, IridasCube, and ResolveCube will create comments in the
file header using the value of any first-level children elements of
the formatMetadata. The CLF/CTF formats will make use of the top-level
"id" and "name" attributes and children elements "Description",
"InputDescriptor", "OutputDescriptor", and "Info".)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getFormatNameByIndex =
R"doc(Get the LUT baker format name at index, return empty string if an
invalid index is specified.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getInputSpace = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getLooks = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getNumFormats = R"doc(Get the number of LUT bakers.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getShaperSize = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getShaperSpace = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_getTargetSpace = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_setConfig = R"doc(Set the config to use.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_setCubeSize = R"doc(Override the default cube sample size. default: <format specific>)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_setFormat = R"doc(Set the LUT output format.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_setInputSpace =
R"doc(Set the input ColorSpace that the LUT will be applied to.

Parameter ``inputSpace``:
    The input ColorSpace to use.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_setLooks =
R"doc(Set the looks to be applied during baking. Looks is a potentially
comma (or colon) delimited list of lookNames, where +/- prefixes are
optionally allowed to denote forward/inverse look specification. (And
forward is assumed in the absence of either).)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_setShaperSize =
R"doc(Override the default shaper LUT size. Default value is -1, which
allows each format to use its own most appropriate size. For the CLF
format, the default uses a half-domain LUT1D (which is ideal for
scene-linear inputs).)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_setShaperSpace =
R"doc(Set an *optional* ColorSpace to be used to shape / transfer the input
colorspace. This is mostly used to allocate an HDR luminance range
into an LDR one. If a shaper space is not explicitly specified, and
the file format supports one, the ColorSpace Allocation will be used
(not implemented for all formats).)doc";

static const char *__doc_OpenColorIO_v2_0dev_Baker_setTargetSpace = R"doc(Set the target device colorspace for the LUT.)doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth =
R"doc(Used in a configuration file to indicate the bit-depth of a color
space, and by the :cpp:class`Processor` to specify the input and
output bit-depths of images to process. Note that
:cpp:class`Processor` only supports: UINT8, UINT10, UINT12, UINT16,
F16 and F32.)doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepthFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepthIsFloat = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepthToInt = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepthToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_F16 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_F32 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_UINT10 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_UINT12 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_UINT14 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_UINT16 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_UINT32 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_UINT8 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BitDepth_BIT_DEPTH_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BoolFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BoolToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform =
R"doc(A built-in transform is similar to a FileTransform, but without the
file. OCIO knows how to build a set of commonly used transforms on-
demand, thus avoiding the need for external files and simplifying
config authoring.)doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry =
R"doc(The built-in transform registry contains all the existing built-in
transforms which can be used by a configuration (version 2 or higher
only).)doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry_BuiltinTransformRegistry = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry_BuiltinTransformRegistry_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry_Get = R"doc(Get the current built-in transform registry.)doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry_getBuiltinDescription = R"doc(Get the description string for the i-th built-in transform.)doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry_getBuiltinStyle =
R"doc(Get the style string for the i-th built-in transform. The style is the
ID string that identifies a given transform.)doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry_getNumBuiltins = R"doc(Get the number of built-in transforms available.)doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransformRegistry_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform_BuiltinTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform_BuiltinTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform_getDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform_getStyle = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_BuiltinTransform_setStyle =
R"doc(Select an existing built-in transform style from the list accessible
through :cpp:class:`BuiltinTransformRegistry`. The style is the ID
string that identifies which transform to apply.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLStyle = R"doc(Enumeration of the :cpp:class:`CDLTransform` transform algorithms.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLStyleFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLStyleToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLStyle_CDL_ASC = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLStyle_CDL_NO_CLAMP = R"doc(//! ASC CDL specification v1.2)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLStyle_CDL_TRANSFORM_DEFAULT = R"doc(//! CDL that does not clamp)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform =
R"doc(An implementation of the ASC Color Decision List (CDL), based on the
ASC v1.2 specification.

\note If the config version is 1, negative values are clamped if the
power is not 1.0. For config version 2 and higher, the negative
handling is controlled by the CDL style.

\note **ASC_SOP** out = clamp( (in * slope) + offset ) ^ power)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_CDLTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_CDLTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_CreateFromFile =
R"doc(Load the CDL from the src .cc or .ccc file. If a .ccc is used, the
cccid must also be specified src must be an absolute path reference,
no relative directory or envvar resolution is performed.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_equals = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getDescription =
R"doc(Deprecated. Use `getFormatMetadata`. First textual description of
color correction (stored on the SOP). If there is already a
description, the setter will replace it with the supplied text.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getID = R"doc(Unique Identifier for this correction.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getOffset = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getPower = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getSOP = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getSat = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getSatLumaCoefs = R"doc(These are hard-coded, by spec, to r709.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getSlope = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getStyle = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_getXML = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setDescription = R"doc(Deprecated. Use `getFormatMetadata`.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setID = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setOffset = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setPower = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setSOP = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setSat = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setSlope = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setStyle =
R"doc(Use CDL_ASC to clamp values to [0,1] per the ASC spec. Use NO_CLAMP to
never clamp values (regardless of whether power is 1.0). The NO_CLAMP
option passes negatives through unchanged (like the NEGATIVE_PASS_THRU
style of ExponentTransform). The default style is CDL_NO_CLAMP.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CDLTransform_setXML = R"doc(The default style is CDL_NO_CLAMP.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_CPUProcessor = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_CPUProcessor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_apply =
R"doc(Apply to an image with any kind of channel ordering while respecting
the input and output bit-depths.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_apply_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_applyRGB =
R"doc(Apply to a single pixel respecting that the input and output bit-
depths be 32-bit float and the image buffer be packed RGB/RGBA.

\note This is not as efficient as applying to an entire image at once.
If you are processing multiple pixels, and have the flexibility, use
the above function instead.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_applyRGBA = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_getCacheID = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_getDynamicProperty = R"doc(Refer to GPUProcessor::getDynamicProperty`.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_getInputBitDepth = R"doc(Bit-depth of the input pixel buffer.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_getOutputBitDepth = R"doc(Bit-depth of the output pixel buffer.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_hasChannelCrosstalk = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_isIdentity =
R"doc(Equivalent to isNoOp from the underlying Processor, i.e., it ignores
in/out bit-depth differences.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_isNoOp = R"doc(The in and out bit-depths must be equal for isNoOp to be true.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_CPUProcessor_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ChannelOrdering =
R"doc(Used by :cpp:class`PackedImageDesc` to indicate the channel ordering
of the image to process.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ChannelOrdering_CHANNEL_ORDERING_ABGR = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ChannelOrdering_CHANNEL_ORDERING_BGR = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ChannelOrdering_CHANNEL_ORDERING_BGRA = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ChannelOrdering_CHANNEL_ORDERING_RGB = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ChannelOrdering_CHANNEL_ORDERING_RGBA = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ClearAllCaches =
R"doc(OpenColorIO, during normal usage, tends to cache certain information
(such as the contents of LUTs on disk, intermediate results, etc.).
Calling this function will flush all such information. Under normal
usage, this is not necessary, but it can be helpful in particular
instances, such as designing OCIO profiles, and wanting to re-read
luts without restarting.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace =
R"doc(The *ColorSpace* is the state of an image with respect to colorimetry
and color encoding. Transforming images between different
*ColorSpaces* is the primary motivation for this library.

While a complete discussion of color spaces is beyond the scope of
header documentation, traditional uses would be to have *ColorSpaces*
corresponding to: physical capture devices (known cameras, scanners),
and internal 'convenience' spaces (such as scene linear, logarithmic).

*ColorSpaces* are specific to a particular image precision (float32,
uint8, etc.), and the set of ColorSpaces that provide equivalent
mappings (at different precisions) are referred to as a 'family'.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceDirectionFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceDirectionToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceDirection_COLORSPACE_DIR_FROM_REFERENCE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceDirection_COLORSPACE_DIR_TO_REFERENCE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceDirection_COLORSPACE_DIR_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet =
R"doc(The *ColorSpaceSet* is a set of color spaces (i.e. no color space
duplication) which could be the result of Config::getColorSpaces` or
built from scratch.

\note The color spaces are decoupled from the config ones, i.e., any
changes to the set itself or to its color spaces do not affect the
original color spaces from the configuration. If needed, use
Config::addColorSpace` to update the configuration.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_ColorSpaceSet = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_ColorSpaceSet_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_Create = R"doc(Create an empty set of color spaces.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_addColorSpace =
R"doc(Add color space(s).

\note If another color space is already registered with the same name,
this will overwrite it. This stores a copy of the specified color
space(s).)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_addColorSpaces = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_clearColorSpaces = R"doc(Clear all color spaces.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_createEditableCopy = R"doc(Create a set containing a copy of all the color spaces.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_getColorSpace =
R"doc(\note These fcns only accept color space names (i.e. no role name).
Will return null if the name is not found.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_getColorSpaceByIndex =
R"doc(Return the color space using its index. This will be empty if an
invalid index is specified.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_getColorSpaceIndex = R"doc(Will return -1 if the name is not found.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_getColorSpaceNameByIndex =
R"doc(Return the color space name using its index. This will be null if an
invalid index is specified.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_getNumColorSpaces = R"doc(Return the number of color spaces.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_hasColorSpace = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_operator_eq =
R"doc(Return true if the two sets are equal. \note The comparison is done on
the color space names (not a deep comparison).)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_operator_ne = R"doc(Return true if the two sets are different.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_removeColorSpace =
R"doc(Remove color space(s) using color space names (i.e. no role name).

\note The removal of a missing color space does nothing.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceSet_removeColorSpaces = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_ColorSpaceTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_ColorSpaceTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_getDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_getDst = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_getSrc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_setDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_setDst = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_setSrc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceTransform_validate = R"doc(Will throw if data is not valid.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceVisibility = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceVisibility_COLORSPACE_ACTIVE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceVisibility_COLORSPACE_ALL = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpaceVisibility_COLORSPACE_INACTIVE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_ColorSpace = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_ColorSpace_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_ColorSpace_3 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_Create_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_addCategory =
R"doc(Add a single category. \note Will do nothing if the category already
exists.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_clearCategories = R"doc(Clear all the categories.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getAllocation =
R"doc(If this colorspace needs to be transferred to a limited dynamic range
coding space (such as during display with a GPU path), use this
allocation to maximize bit efficiency.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getAllocationNumVars =
R"doc(Specify the optional variable values to configure the allocation. If
no variables are specified, the defaults are used.

ALLOCATION_UNIFORM::

2 vars: [min, max]

ALLOCATION_LG2::

2 vars: [lg2min, lg2max] 3 vars: [lg2min, lg2max, linear_offset])doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getAllocationVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getCategory =
R"doc(Return the category name using its index \note Will be null if the
index is invalid.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getEqualityGroup =
R"doc(Get the ColorSpace group name (used for equality comparisons) This
allows no-op transforms between different colorspaces. If an
equalityGroup is not defined (an empty string), it will be considered
unique (i.e., it will not compare as equal to other ColorSpaces with
an empty equality group). This is often, though not always, set to the
same value as 'family'.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getFamily =
R"doc(Get the family, for use in user interfaces (optional) The family
string could use a '/' separator to indicate levels to be used by
hierarchical menus.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getNumCategories = R"doc(Get the number of categories.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getReferenceSpaceType = R"doc(A display color space will use the display-referred reference space.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_getTransform =
R"doc(If a transform in the specified direction has been specified, return
it. Otherwise return a null ConstTransformRcPtr)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_hasCategory = R"doc(Return true if the category is present.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_isData =
R"doc(ColorSpaces that are data are treated a bit special. Basically, any
colorspace transforms you try to apply to them are ignored. (Think of
applying a gamut mapping transform to an ID pass). Also, the
`DisplayTransform` process obeys special 'data min' and 'data max'
args.

This is traditionally used for pixel data that represents non-color
pixel data, such as normals, point positions, ID information, etc.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_removeCategory = R"doc(Remove a category. \note Will do nothing if the category is missing.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setAllocation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setAllocationVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setEqualityGroup = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setFamily = R"doc(Set the family, for use in user interfaces (optional))doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setIsData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ColorSpace_setTransform =
R"doc(Specify the transform for the appropriate direction. Setting the
transform to null will clear it.)doc";

static const char *__doc_OpenColorIO_v2_0dev_CombineTransformDirections = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config =
R"doc(A config defines all the color spaces to be available at runtime.

The color configuration Config is the main object for interacting with
this library. It encapsulates all of the information necessary to use
customized `ColorSpaceTransform` and `DisplayTransform` operations.

See the user-guide for more information on selecting, creating, and
working with custom color configurations.

For applications interested in using only one color config at a time
(this is the vast majority of apps), their API would traditionally get
the global configuration and use that, as opposed to creating a new
one. This simplifies the use case for plugins and bindings, as it
alleviates the need to pass around configuration handles.

An example of an application where this would not be sufficient would
be a multi-threaded image proxy server (daemon), which wished to
handle multiple show configurations in a single process concurrently.
This app would need to keep multiple configurations alive, and to
manage them appropriately.

Roughly speaking, a novice user should select a default configuration
that most closely approximates the use case (animation, visual
effects, etc.), and set the :envvar:`OCIO` environment variable to
point at the root of that configuration.

\note Initialization using environment variables is typically
preferable in a multi-app ecosystem, as it allows all applications to
be consistently configured.

See developers-usageexamples)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_Config = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_Config_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_Create = R"doc(Create a default empty configuration.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_CreateFromEnv =
R"doc(Create a configuration using the OCIO environment variable. If the
variable is missing or empty, returns the same result as
Config::CreateRaw`.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_CreateFromFile = R"doc(Create a configuration using a specific config file.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_CreateFromStream = R"doc(Create a configuration using a stream.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_CreateRaw =
R"doc(Create a fall-back config. This may be useful to allow client apps to
launch in cases when the supplied config path is not loadable.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_GetProcessor =
R"doc(Get a processor to convert between color spaces in two separate
configs.

This relies on both configs having the aces_interchange role (when
srcName is scene-referred) or the role cie_xyz_d65_interchange (when
srcName is display-referred) defined. An exception is thrown if that
is not the case.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_GetProcessor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_GetProcessor_3 =
R"doc(The srcInterchangeName and dstInterchangeName must refer to a pair of
color spaces in the two configs that are the same. A role name may
also be used.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_GetProcessor_4 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_addColorSpace =
R"doc(Add a color space to the configuration.

\note If another color space is already present with the same name,
this will overwrite it. This stores a copy of the specified color
space. \note Adding a color space to a `Config` does not affect any
`ColorSpaceSet` sets that have already been created.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_addDisplay =
R"doc(For the (display, view) pair, specify which color space and look to
use. If a look is not desired, then just pass a null or empty string.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_addDisplay_2 =
R"doc(For the (display, view) pair, specify a viewTransform +
displayColorSpace to use. (Looks work the same as above.))doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_addEnvironmentVar = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_addLook = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_addSearchPath =
R"doc(Add a single search path to the end of the list. Paths may be either
absolute or relative. Relative paths are relative to the working
directory. Forward slashes will be normalized to reverse for Windows.
Environment (context) variables may be used in paths.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_addViewTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_clearColorSpaces =
R"doc(Remove all the color spaces from the configuration.

\note Removing color spaces from a `Config` does not affect any
`ColorSpaceSet` sets that have already been created.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_clearDisplays = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_clearEnvironmentVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_clearLooks = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_clearSearchPaths = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_clearViewTransforms = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_filepathOnlyMatchesDefaultRule =
R"doc(Returns true if the only rule matched by filePath is the default rule.
This is a convenience method for applications that want to require the
user to manually choose a color space when strictParsing is true and
no other rules match.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getActiveDisplays = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getActiveViews = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getCacheID =
R"doc(This will produce a hash of the all colorspace definitions, etc. All
external references, such as files used in FileTransforms, etc., will
be incorporated into the cacheID. While the contents of the files are
not read, the file system is queried for relevant information (mtime,
inode) so that the config's cacheID will change when the underlying
luts are updated. If a context is not provided, the current Context
will be used. If a null context is provided, file references will not
be taken into account (this is essentially a hash of
Config::serialize).)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getCacheID_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getColorSpace =
R"doc(Get the color space from all the color spaces (i.e. active and
inactive) and return null if the name is not found.

\note The fcn accepts either a color space OR role name. (Color space
names take precedence over roles.))doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getColorSpaceFromFilepath = R"doc(Get the color space of the first rule that matched filePath.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getColorSpaceFromFilepath_2 =
R"doc(Most applications will use the preceding method, but this method may
be used for applications that want to know which was the highest
priority rule to match filePath. The FileRules::getNumCustomKeys and
custom keys methods may then be used to get additional information
about the matching rule.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getColorSpaceNameByIndex =
R"doc(Work on the color spaces selected by the reference color space type
and visibility (active or inactive). Return empty for invalid index.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getColorSpaceNameByIndex_2 =
R"doc(Work on the active color spaces only and return null for invalid
index.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getColorSpaces =
R"doc(Get all active color spaces having a specific category in the order
they appear in the config file.

\note If the category is null or empty, the method returns all the
active color spaces like Config::getNumColorSpaces` and
Config::getColorSpaceNameByIndex` do.

\note It's worth noticing that the method returns a copy of the
selected color spaces decoupling the result from the config. Hence,
any changes on the config do not affect the existing color space sets,
and vice-versa.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getCurrentContext = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDefaultDisplay = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDefaultLumaCoefs =
R"doc(Get the default coefficients for computing luma.

\note There is no "1 size fits all" set of luma coefficients. (The
values are typically different for each colorspace, and the
application of them may be nonsensical depending on the intensity
coding anyways). Thus, the 'right' answer is to make these functions
on the `Config` class. However, it's often useful to have a config-
wide default so here it is. We will add the colorspace specific luma
call if/when another client is interesting in using it.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDefaultSceneToDisplayViewTransform =
R"doc(The default transform to use for scene-referred to display-referred
reference space conversions is the first scene-referred view transform
listed in that section of the config (the one with the lowest index).
Returns a null ConstTransformRcPtr if there isn't one.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDefaultView = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDisplay = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDisplayColorSpaceName =
R"doc(Returns the colorspace attribute of the (display, view) pair. (Note
that this may be either a color space or a display color space.))doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDisplayLooks = R"doc(Returns the looks attribute of a (display, view) pair.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getDisplayViewTransformName = R"doc(Returns the view_transform attribute of the (display, view) pair.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getEnvironmentMode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getEnvironmentVarDefault = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getEnvironmentVarNameByIndex = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getFamilySeparator =
R"doc(If not empty or null a single character to separate the family string
in levels.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getFileRules = R"doc(Get read-only version of the file rules.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getInactiveColorSpaces = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getIndexForColorSpace =
R"doc(Get an index from the active color spaces only and return -1 if the
name is not found.

\note The fcn accepts either a color space OR role name. (Color space
names take precedence over roles.))doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getLook = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getLookNameByIndex = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getMajorVersion = R"doc(Get the configuration major version)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getMinorVersion = R"doc(Get the configuration minor version)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumColorSpaces =
R"doc(Work on the color spaces selected by the reference color space type
and visibility.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumColorSpaces_2 = R"doc(Work on the active color spaces only.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumDisplays = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumEnvironmentVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumLooks = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumRoles = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumSearchPaths = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumViewTransforms = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getNumViews = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor =
R"doc(Get the processor to apply a ColorSpaceTransform from a source to a
destination color space.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor_3 =
R"doc(\note Names can be colorspace name, role name, or a combination of
both.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor_4 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor_5 =
R"doc(Get the processor to apply a DisplayTransform for a display and view.
Refer to the Display/View Registration section above for more info on
the display and view arguments.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor_6 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor_7 =
R"doc(Get the processor for the specified transform.

Not often needed, but will allow for the re-use of atomic OCIO
functionality (such as to apply an individual LUT file).)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor_8 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getProcessor_9 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getRoleColorSpace =
R"doc(Get the role color space at index. Return empty string if index is out
of range.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getRoleName =
R"doc(Get the role name at index, this will return values like
'scene_linear', 'compositing_log'. Return empty string if index is out
of range.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getSearchPath = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getSearchPath_2 =
R"doc(Get a search path from the list. The paths are in the order they will
be searched (that is, highest to lowest priority).)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getView = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getViewTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getViewTransformNameByIndex = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_getWorkingDir = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_hasRole = R"doc(Return true if the role has been defined.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_isColorSpaceUsed =
R"doc(Return true if the color space is used by a transform, a role, or a
look.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_isStrictParsingEnabled = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_loadEnvironment = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_parseColorSpaceFromString =
R"doc(Given the specified string, get the longest, right-most, colorspace
substring that appears.

* If strict parsing is enabled, and no color space is found, return an
empty string. * If strict parsing is disabled, return ROLE_DEFAULT (if
defined). * If the default role is not defined, return an empty
string.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_removeColorSpace =
R"doc(Remove a color space from the configuration.

\note It does not throw an exception if the color space is not present
or used by an existing role. Role name arguments are ignored. \note
Removing a color space to a `Config` does not affect any
`ColorSpaceSet` sets that have already been created.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_removeDisplay =
R"doc(Remove the view and the display if no more views. It does not remove
the associated color space.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_sanityCheck =
R"doc(This will throw an exception if the config is malformed. The most
common error occurs when references are made to colorspaces that do
not exist.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_serialize =
R"doc(Returns the string representation of the Config in YAML text form.
This is typically stored on disk in a file with the extension .ocio.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setActiveDisplays =
R"doc(Comma-delimited list of names to filter and order the active displays.
.. note:: The setter does not override the envvar. The getter does not
take into account the envvar value and thus may not represent what the
user is seeing.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setActiveViews =
R"doc(Comma-delimited list of names to filter and order the active views.
\note The setter does not override the envvar. The getter does not
take into account the envvar value and thus may not represent what the
user is seeing.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setDefaultLumaCoefs = R"doc(These should be normalized (sum to 1.0 exactly).)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setEnvironmentMode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setFamilySeparator =
R"doc(Succeeds if the characters is null or a valid character from the ASCII
table i.e. from value 32 (i.e. space) to 126 (i.e. '~'); otherwise, it
throws an exception.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setFileRules = R"doc(Set file rules. \note The argument is cloned.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setInactiveColorSpaces =
R"doc(Set/get a list of inactive color space names.

* The inactive spaces are color spaces that should not appear in
application menus. * These color spaces will still work in
Config::getProcessor calls. * The argument is a comma-delimited
string. A null or empty string empties the list. * The environment
variable OCIO_INACTIVE_COLORSPACES may also be used to set the
inactive color space list. * The env. var. takes precedence over the
inactive_colorspaces list in the config file. * Setting the list via
the API takes precedence over either the env. var. or the config file
list. * Roles may not be used.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setMajorVersion = R"doc(Set the configuration major version)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setMinorVersion = R"doc(Set the configuration minor version)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setRole = R"doc(\note Setting the colorSpaceName name to a null string unsets it.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setSearchPath =
R"doc(Set all search paths as a concatenated string, using ':' to separate
the paths. See addSearchPath for a more robust and platform-agnostic
method of setting the search paths.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setStrictParsingEnabled = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_setWorkingDir =
R"doc(The working directory defaults to the location of the config file. It
is used to convert any relative paths to absolute. If no search paths
have been set, the working directory will be used as the fallback
search path. No environment (context) variables may be used in the
working directory.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Config_upgradeToLatestVersion = R"doc(Allows an older config to be serialized as the current version.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Context = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_Context = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_Context_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_addSearchPath = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_clearSearchPaths = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_clearStringVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getCacheID = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getEnvironmentMode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getNumSearchPaths = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getNumStringVars = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getSearchPath = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getSearchPath_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getStringVar = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getStringVarNameByIndex = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_getWorkingDir = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_loadEnvironment = R"doc(Seed all string vars with the current environment.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_resolveFileLocation =
R"doc(Do a file lookup.

Evaluate all variables (as needed). Also, walk the full search path
until the file is found. If the filename cannot be found, an exception
will be thrown.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_resolveStringVar =
R"doc(Do a file lookup.

Evaluate the specified variable (as needed). Will not throw
exceptions.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_setEnvironmentMode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_setSearchPath = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_setStringVar = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Context_setWorkingDir = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_DisplayTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_DisplayTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getChannelView = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getColorTimingCC = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getDisplay = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getDisplayCC = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getInputColorSpaceName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getLinearCC = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getLooksOverride = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getLooksOverrideEnabled = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_getView = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setChannelView = R"doc(Step 3: Apply the Channel Viewing Swizzle (mtx).)doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setColorTimingCC = R"doc(Step 2: Apply a color correction, in ROLE_COLOR_TIMING.)doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setDisplay = R"doc(Step 4: Apply the output display transform)doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setDisplayCC = R"doc(Step 5: Apply a post display transform color correction)doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setInputColorSpaceName = R"doc(Step 0. Specify the incoming color space.)doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setLinearCC = R"doc(Step 1: Apply a Color Correction, in ROLE_SCENE_LINEAR.)doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setLooksOverride =
R"doc(A user can optionally override the looks that are, by default, used
with the expected display / view combination. A common use case for
this functionality is in an image viewing app, where per-shot looks
are supported. If for some reason a per-shot look is not defined for
the current Context, the Config::getProcessor fcn will not succeed by
default. Thus, with this mechanism the viewing app could override to
looks = "", and this will allow image display to continue (though
hopefully) the interface would reflect this fallback option.)

Looks is a potentially comma (or colon) delimited list of lookNames,
Where +/- prefixes are optionally allowed to denote forward/inverse
look specification. (And forward is assumed in the absence of either))doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setLooksOverrideEnabled =
R"doc(Specify whether the lookOverride should be used, or not. This is a
separate flag, as it's often useful to override "looks" to an empty
string.)doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_setView = R"doc(Specify which view transform to use)doc";

static const char *__doc_OpenColorIO_v2_0dev_DisplayTransform_validate = R"doc(Will throw if data is not valid.)doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty =
R"doc(Allows transform parameter values to be set on-the-fly (after
finalization). For example, to modify the exposure in a viewport.)doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicPropertyType = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicPropertyType_DYNAMIC_PROPERTY_CONTRAST = R"doc(//! Image exposure value (double floating point value))doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicPropertyType_DYNAMIC_PROPERTY_EXPOSURE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicPropertyType_DYNAMIC_PROPERTY_GAMMA = R"doc(//! Image contrast value (double floating point value))doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicPropertyValueType = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicPropertyValueType_DYNAMIC_PROPERTY_BOOL = R"doc(//! Value is a double)doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicPropertyValueType_DYNAMIC_PROPERTY_DOUBLE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_DynamicProperty = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_DynamicProperty_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_getDoubleValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_getType = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_getValueType = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_isDynamic = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicProperty_setValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_DynamicPtrCast = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_EnvironmentMode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_EnvironmentModeFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_EnvironmentModeToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_EnvironmentMode_ENV_ENVIRONMENT_LOAD_ALL = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_EnvironmentMode_ENV_ENVIRONMENT_LOAD_PREDEFINED = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_EnvironmentMode_ENV_ENVIRONMENT_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Exception =
R"doc(An exception class to throw for errors detected at runtime.

\note All functions in the Config class can potentially throw this
exception.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Exception_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExceptionMissingFile =
R"doc(An exception class for errors detected at runtime, thrown when OCIO
cannot find a file that is expected to exist.

This is provided as a custom type to distinguish cases where one wants
to continue looking for missing files, but wants to properly fail for
other error conditions.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExceptionMissingFile_ExceptionMissingFile = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExceptionMissingFile_ExceptionMissingFile_2 = R"doc(Constructor that takes a string as the exception message.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExceptionMissingFile_ExceptionMissingFile_3 = R"doc(Constructor that takes an existing exception.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExceptionMissingFile_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Exception_Exception = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Exception_Exception_2 = R"doc(Constructor that takes a string as the exception message.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Exception_Exception_3 = R"doc(Constructor that takes an existing exception.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Exception_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform =
R"doc(Represents exponent transform: pow( clamp(color), value ).

​\note For configs with version == 1: Negative style is ignored and if
the exponent is 1.0, this will not clamp. Otherwise, the input color
will be clamped between [0.0, inf]. For configs with version > 1:
Negative value handling may be specified via setNegativeStyle.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_ExponentTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_ExponentTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_getNegativeStyle =
R"doc(Specifies how negative values are handled. Legal values:

* NEGATIVE_CLAMP -- Clamp negative values (default). * NEGATIVE_MIRROR
-- Positive curve is rotated 180 degrees around the origin to handle
negatives. * NEGATIVE_PASS_THRU -- Negative values are passed through
unchanged.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_getValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_setNegativeStyle = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentTransform_setValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform =
R"doc(Represents power functions with a linear section in the shadows such
as sRGB and L*.

The basic formula is::

pow( (x + offset)/(1 + offset), gamma ) with the breakpoint at
offset/(gamma - 1).

Negative values are never clamped.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_ExponentWithLinearTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_ExponentWithLinearTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_getGamma = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_getNegativeStyle =
R"doc(Specifies how negative values are handled. Legal values:

* NEGATIVE_LINEAR -- Linear segment continues into negatives
(default). * NEGATIVE_MIRROR -- Positive curve is rotated 180 degrees
around the origin to handle negatives.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_getOffset = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_setGamma =
R"doc(Set the exponent value for the power function for R, G, B, A.

\note The gamma values must be in the range of [1, 10]. Set the
transform direction to inverse to obtain the effect of values less
than 1.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_setNegativeStyle = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExponentWithLinearTransform_setOffset =
R"doc(Set the offset value for the power function for R, G, B, A.

\note The offset values must be in the range [0, 0.9].)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastStyle =
R"doc(Enumeration of the :cpp:class:`ExposureContrastTransform` transform
algorithms.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastStyleFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastStyleToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastStyle_EXPOSURE_CONTRAST_LINEAR = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastStyle_EXPOSURE_CONTRAST_LOGARITHMIC = R"doc(//! E/C to be applied to a video space image)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastStyle_EXPOSURE_CONTRAST_VIDEO = R"doc(//! E/C to be applied to a linear space image)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform =
R"doc(Applies exposure, gamma, and pivoted contrast adjustments. Adjusts the
math to be appropriate for linear, logarithmic, or video color spaces.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_ExposureContrastTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_ExposureContrastTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getContrast = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getExposure = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getGamma = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getLogExposureStep = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getLogMidGray = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getPivot = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_getStyle = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_isContrastDynamic = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_isExposureDynamic = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_isGammaDynamic = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_makeContrastDynamic = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_makeExposureDynamic = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_makeGammaDynamic = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_setContrast =
R"doc(Applies a contrast/gamma adjustment around a pivot point. The contrast
and gamma are mathematically the same, but two controls are provided
to enable the use of separate dynamic parameters. Contrast is usually
a scene-referred adjustment that pivots around gray whereas gamma is
usually a display-referred adjustment that pivots around white.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_setExposure =
R"doc(Applies an exposure adjustment. The value is in units of stops
(regardless of style), for example, a value of -1 would be equivalent
to reducing the lighting by one half.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_setGamma = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_setLogExposureStep =
R"doc(Set the increment needed to move one stop for the log-style algorithm.
For example, ACEScct is 0.057, LogC is roughly 0.074, and Cineon is
roughly 90/1023 = 0.088. The default value is 0.088.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_setLogMidGray =
R"doc(Set the position of 18% gray for use by the log-style algorithm. For
example, ACEScct is about 0.41, LogC is about 0.39, and ADX10 is
445/1023 = 0.435. The default value is 0.435.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_setPivot =
R"doc(Set the pivot point around which the contrast and gamma controls will
work. Regardless of whether linear/video/log-style is being used, the
pivot is always expressed in linear. In other words, a pivot of 0.18
is always mid-gray.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ExposureContrastTransform_setStyle = R"doc(Select the algorithm for linear, video or log color spaces.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules =
R"doc(The File Rules are a set of filepath to color space mappings that are
evaluated from first to last. The first rule to match is what
determines which color space is returned. There are four types of
rules available. Each rule type has a name key that may be used by
applications to refer to that rule. Name values must be unique i.e.
using a case insensitive comparison. The other keys depend on the rule
type:

- Basic Rule: This is the basic rule type that uses Unix glob style
pattern matching and is thus very easy to use. It contains the keys:

* name: Name of the rule

* colorspace: Color space name to be returned.

* pattern: Glob pattern to be used for the main part of the name/path.

* extension: Glob pattern to be used for the file extension. Note that
if glob tokens are not used, the extension will be used in a non-case-
sensitive way by default.

- Regex Rule: This is similar to the basic rule but allows additional
capabilities for power-users. It contains the keys:

* name: Name of the rule

* colorspace: Color space name to be returned.

* regex: Regular expression to be evaluated.

- OCIO v1 style Rule: This rule allows the use of the OCIO v1 style,
where the string is searched for color space names from the config.
This rule may occur 0 or 1 times in the list. The position in the list
prioritizes it with respect to the other rules. StrictParsing is not
used. If no color space is found in the path, the rule will not match
and the next rule will be considered. See
FileRules::insertPathSearchRule`. It has the key:

* name: Must be "ColorSpaceNamePathSearch".

- Default Rule: The file_rules must always end with this rule. If no
prior rules match, this rule specifies the color space applications
will use. See FileRules::setDefaultRuleColorSpace`. It has the keys:

* name: must be "Default".

* colorspace : Color space name to be returned.

Custom string keys and associated string values may be used to convey
app or workflow-specific information, e.g. whether the color space
should be left as is or converted into a working space.

Getters and setters are using the rule position, they will throw if
the position is not valid. If the rule at the specified position does
not implement the requested property getter will return NULL and
setter will throw.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_Create =
R"doc(Creates FileRules for a Config. File rules will contain the default
rule using the default role. The default rule cannot be removed.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_FileRules = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_FileRules_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_createEditableCopy = R"doc(The method clones the content decoupling the two instances.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_decreaseRulePriority = R"doc(Move a rule closer to the end of the list by one position.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getColorSpace = R"doc(Set the rule's color space (may also be a role).)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getCustomKeyName = R"doc(Get name of key.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getCustomKeyValue = R"doc(Get name of value.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getExtension = R"doc(Setting extension will erase regex.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getIndexForRule = R"doc(Get the index from the rule name.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getName = R"doc(Get name of the rule.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getNumCustomKeys = R"doc(Get number of key/value pairs.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getNumEntries = R"doc(Does include default rule. Result will be at least 1.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getPattern = R"doc(Setting pattern will erase regex.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_getRegex = R"doc(Setting a regex will erase pattern & extension.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_increaseRulePriority = R"doc(Move a rule closer to the start of the list by one position.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_insertPathSearchRule =
R"doc(Helper function to insert a rule that uses
cpp:func:'Config:parseColorSpaceFromString` to search the path for any
of the color spaces named in the config (as per OCIO v1).)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_insertRule =
R"doc(Insert a rule at a given ruleIndex. Rule currently at ruleIndex will
be pushed to index: ruleIndex + 1. Name must be unique. - "Default" is
a reserved name for the default rule. The default rule is
automatically added and can't be removed. (see
FileRules::setDefaultRuleColorSpace`). - "ColorSpaceNamePathSearch" is
also a reserved name (see FileRules::insertPathSearchRule`).

Will throw if ruleIndex is not less than FileRules::getNumEntries`.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_insertRule_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_removeRule =
R"doc(Default rule can't be removed. Will throw if ruleIndex + 1 is not less
than FileRules::getNumEntries`.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_setColorSpace = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_setCustomKey =
R"doc(Adds a key/value or replace value if key exists. Setting a NULL or an
empty value will erase the key.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_setDefaultRuleColorSpace = R"doc(Helper function tp set the color space for the default rule.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_setExtension = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_setPattern = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileRules_setRegex = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_FileTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_FileTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getCCCId = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getCDLStyle = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getFormatExtensionByIndex =
R"doc(Get the LUT reader extension at index, return empty string if an
invalid index is specified.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getFormatNameByIndex =
R"doc(Get the LUT readers at index, return empty string if an invalid index
is specified.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getInterpolation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getNumFormats = R"doc(Get the number of LUT readers.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_getSrc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_setCCCId = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_setCDLStyle =
R"doc(Can be used with CDL, CC & CCC formats to specify the clamping
behavior of the CDLTransform. Default is CDL_NO_CLAMP.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_setDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_setInterpolation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_setSrc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FileTransform_validate = R"doc(Will throw if data is not valid.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle =
R"doc(Enumeration of the :cpp:class:`FixedFunctionTransform` transform
algorithms.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyleFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyleToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_ACES_DARK_TO_DIM_10 = R"doc(//! Glow function (ACES 1.0))doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_ACES_GLOW_03 = R"doc(//! Red modifier (ACES 1.0))doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_ACES_GLOW_10 = R"doc(//! Glow function (ACES 0.3/0.7))doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_ACES_RED_MOD_03 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_ACES_RED_MOD_10 = R"doc(//! Red modifier (ACES 0.3/0.7))doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_REC2100_SURROUND = R"doc(//! Dark to dim surround correction (ACES 1.0))doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_RGB_TO_HSV =
R"doc(//! Rec.2100 surround correction (takes one double for the gamma
param))doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_XYZ_TO_LUV = R"doc(//! CIE XYZ to 1976 u'v' chromaticity coordinates)doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_XYZ_TO_uvY = R"doc(//! CIE XYZ to 1931 xy chromaticity coordinates)doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionStyle_FIXED_FUNCTION_XYZ_TO_xyY = R"doc(//! Classic RGB to HSV function)doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform =
R"doc(Provides a set of hard-coded algorithmic building blocks that are
needed to accurately implement various common color transformations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_FixedFunctionTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_FixedFunctionTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_getNumParams = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_getParams = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_getStyle = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_setParams = R"doc(Set the parameters (for functions that require them).)doc";

static const char *__doc_OpenColorIO_v2_0dev_FixedFunctionTransform_setStyle = R"doc(Select which algorithm to use.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata =
R"doc(The FormatMetadata class is intended to be a generic container to hold
metadata from various file formats.

This class provides a hierarchical metadata container. A metadata
object is similar to an element in XML. It contains:

* A name string (e.g. "Description"). * A value string (e.g. "updated
viewing LUT"). * A list of attributes (name, value) string pairs (e.g.
"version", "1.5"). * And a list of child sub-elements, which are also
objects implementing FormatMetadata.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_FormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_FormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_addAttribute =
R"doc(Add an attribute with a given name and value. If an attribute with the
same name already exists, the value is replaced.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_addChildElement =
R"doc(Add a child element with a given name and value. Name has to be non-
empty. Value may be empty, particularly if this element will have
children. Return a reference to the added element.)doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_clear = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_getAttributeName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_getAttributeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_getChildElement = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_getChildElement_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_getName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_getNumAttributes = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_getNumChildrenElements = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_getValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_setName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_FormatMetadata_setValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_GPUProcessor = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_GPUProcessor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_extractGpuShaderInfo =
R"doc(Extract & Store the shader information to implement the color
processing.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_extractGpuShaderInfo_2 =
R"doc(Extract the shader information using a custom `GpuShaderCreator`
class.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_getCacheID = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_getDynamicProperty =
R"doc(The returned pointer may be used to set the value of any dynamic
properties of the requested type. Throws if the requested property is
not found. Note that if the processor contains several ops that
support the requested property, only ones for which dynamic has been
enabled will be controlled.

\note The dynamic properties in this object are decoupled from the
ones in the Processor it was generated from.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_hasChannelCrosstalk = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_isNoOp = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GPUProcessor_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GetCurrentConfig = R"doc(Get the current configuration.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GetEnvVariable =
R"doc(Another call modifies the string obtained from a previous call as the
method always uses the same memory buffer. \note Not thread safe.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GetInverseTransformDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GetLoggingLevel =
R"doc(Get the global logging level. You can override this at runtime using
the :envvar:`OCIO_LOGGING_LEVEL` environment variable. The client
application that sets this should use SetLoggingLevel, and not the
environment variable. The default value is INFO.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GetVersion =
R"doc(Get the version number for the library, as a dot-delimited string
(e.g., "1.0.0"). This is also available at compile time as
OCIO_VERSION.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GetVersionHex =
R"doc(Get the version number for the library, as a single 4-byte hex number
(e.g., 0x01050200 for "1.5.2"), to be used for numeric comparisons.
This is also available at compile time as OCIO_VERSION_HEX.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguage = R"doc(Used when there is a choice of hardware shader language.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguageFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguageToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguage_GPU_LANGUAGE_CG = R"doc(< Nvidia Cg shader)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguage_GPU_LANGUAGE_GLSL_1_0 = R"doc(< OpenGL Shading Language)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguage_GPU_LANGUAGE_GLSL_1_3 = R"doc(< OpenGL Shading Language)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguage_GPU_LANGUAGE_GLSL_4_0 = R"doc(< OpenGL Shading Language)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguage_GPU_LANGUAGE_HLSL_DX11 = R"doc(< DirectX Shading Language)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuLanguage_GPU_LANGUAGE_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator =
R"doc(Inherit from the class to fully customize the implementation of a GPU
shader program from a color transformation.

When no customizations are needed then the `GpuShaderDesc` is a better
choice.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_GpuShaderCreator = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_GpuShaderCreator_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_TextureType = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_TextureType_TEXTURE_RED_CHANNEL = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_TextureType_TEXTURE_RGB_CHANNEL = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_add3DTexture = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_addTexture = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_addToDeclareShaderCode =
R"doc(Methods to specialize parts of a OCIO shader program.

**An OCIO shader program could contain:**

1. A declaration part e.g., uniform sampled3D tex3;

2. Some helper methods

3. The OCIO shader function may be broken down as:

1. The function header e.g., void OCIODisplay(in vec4 inColor) { 2.
The function body e.g., vec4 outColor.rgb = texture3D(tex3,
inColor.rgb).rgb; 3. The function footer e.g., return outColor; }

**Usage Example:**

Below is a code snippet to highlight the different parts of the OCIO
shader program.

.. code-block:: cpp

// All global declarations uniform sampled3D tex3;

// All helper methods vec3 computePosition(vec3 color) { vec3 coords =
color; // Some processing... return coords; }

// The shader function vec4 OCIODisplay(in vec4 inColor) // { //
Function Header vec4 outColor = inColor; //

outColor.rgb = texture3D(tex3, computePosition(inColor.rgb)).rgb;

return outColor; // Function Footer } //)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_addToFunctionFooterShaderCode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_addToFunctionHeaderShaderCode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_addToFunctionShaderCode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_addToHelperShaderCode = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_addUniform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_begin = R"doc(Start to collect the shader data.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_clone = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_createShaderText =
R"doc(Create the OCIO shader program

\note The OCIO shader program is decomposed to allow a specific
implementation to change some parts. Some product integrations add the
color processing within a client shader program, imposing constraints
requiring this flexibility.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_end = R"doc(End to collect the shader data.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_finalize = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getCacheID = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getFunctionName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getLanguage = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getNextResourceIndex =
R"doc(To avoid texture/unform name clashes always append an increasing
number to the resource name.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getPixelName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getResourcePrefix =
R"doc(\note Some applications require that textures, uniforms, and helper
methods be uniquely named because several processor instances could
coexist.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getTextureMaxWidth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_getUniqueID = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_setFunctionName = R"doc(Set the function name of the shader program.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_setLanguage = R"doc(Set the shader program language.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_setPixelName = R"doc(Set the pixel name variable holding the color values.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_setResourcePrefix = R"doc(Set a prefix to the resource name)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_setTextureMaxWidth = R"doc(Some graphic cards could have 1D & 2D textures with size limitations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderCreator_setUniqueID = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_CreateLegacyShaderDesc = R"doc(Create the legacy shader description.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_CreateShaderDesc = R"doc(Create the default shader description.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_GpuShaderDesc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_GpuShaderDesc_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_clone = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_get3DTexture = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_get3DTextureValues = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_getNum3DTextures = R"doc(3D lut related methods)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_getNumTextures = R"doc(1D lut related methods)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_getNumUniforms = R"doc(Dynamic Property related methods.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_getShaderText = R"doc(Get the complete OCIO shader program.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_getTexture = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_getTextureValues = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_getUniform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GpuShaderDesc_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_GroupTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_GroupTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_appendTransform = R"doc(Adds a transform to the end of the group.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_getDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_getNumTransforms = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_getTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_getTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_prependTransform = R"doc(Add a transform at the beginning of the group.)doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_setDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_GroupTransform_validate = R"doc(Will throw if data is not valid.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc =
R"doc(This is a light-weight wrapper around an image, that provides a
context for pixel access. This does NOT claim ownership of the pixels
or copy image data.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_ImageDesc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_ImageDesc_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getAData =
R"doc(Get a pointer to the alpha channel of the first pixel or null as alpha
channel is optional.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getBData = R"doc(Get a pointer to the blue channel of the first pixel.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getBitDepth = R"doc(Get the bit-depth.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getGData = R"doc(Get a pointer to the green channel of the first pixel.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getHeight =
R"doc(Get the height to process (where y position starts at 0 and ends at
height-1).)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getRData = R"doc(Get a pointer to the red channel of the first pixel.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getWidth =
R"doc(Get the width to process (where x position starts at 0 and ends at
width-1).)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getXStrideBytes =
R"doc(Get the step in bytes to find the same color channel of the next
pixel.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_getYStrideBytes =
R"doc(Get the step in bytes to find the same color channel of the pixel at
the same position in the next line.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_isFloat = R"doc(Is the image buffer 32-bit float?)doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_isRGBAPacked =
R"doc(Is the image buffer in packed mode with the 4 color channels?
("Packed" here means that XStrideBytes is 4x the bytes per channel, so
it is more specific than simply any PackedImageDesc.))doc";

static const char *__doc_OpenColorIO_v2_0dev_ImageDesc_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Interpolation =
R"doc(Specify the interpolation type to use If the specified interpolation
type is not supported in the requested context (for example, using
tetrahedral interpolationon 1D LUTs) an exception will be thrown.

INTERP_DEFAULT will choose the default interpolation type for the
requested context:

1D LUT INTERP_DEFAULT: LINEAR 3D LUT INTERP_DEFAULT: LINEAR

INTERP_BEST will choose the best interpolation type for the requested
context:

1D LUT INTERP_BEST: LINEAR 3D LUT INTERP_BEST: TETRAHEDRAL

\note INTERP_BEST and INTERP_DEFAULT are subject to change in minor
releases, so if you care about locking off on a specific interpolation
type, we'd recommend directly specifying it.)doc";

static const char *__doc_OpenColorIO_v2_0dev_InterpolationFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_InterpolationToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Interpolation_INTERP_BEST = R"doc(//! the default interpolation type)doc";

static const char *__doc_OpenColorIO_v2_0dev_Interpolation_INTERP_CUBIC = R"doc(//! tetrahedral interpolation in all directions)doc";

static const char *__doc_OpenColorIO_v2_0dev_Interpolation_INTERP_DEFAULT = R"doc(//! cubic interpolation in all dimensions)doc";

static const char *__doc_OpenColorIO_v2_0dev_Interpolation_INTERP_LINEAR = R"doc(//! nearest neighbor in all dimensions)doc";

static const char *__doc_OpenColorIO_v2_0dev_Interpolation_INTERP_NEAREST = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Interpolation_INTERP_TETRAHEDRAL = R"doc(//! linear interpolation in all dimensions)doc";

static const char *__doc_OpenColorIO_v2_0dev_Interpolation_INTERP_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform =
R"doc(Applies a logarithm with an affine transform before and after.
Represents the Cineon lin-to-log type transforms::

logSideSlope * log( linSideSlope * color + linSideOffset, base) +
logSideOffset

* Default values are: 1. * log( 1. * color + 0., 2.) + 0. * The alpha
channel is not affected.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_LogAffineTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_LogAffineTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_getBase = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_getLinSideOffsetValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_getLinSideSlopeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_getLogSideOffsetValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_getLogSideSlopeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_setBase = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_setLinSideOffsetValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_setLinSideSlopeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_setLogSideOffsetValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogAffineTransform_setLogSideSlopeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform =
R"doc(Same as LogAffineTransform but with the addition of a linear segment
near black. This formula is used for many camera logs (e.g., LogC) as
well as ACEScct.

* The linSideBreak specifies the point on the linear axis where the
log and linear segments meet. It must be set (there is no default). *
The linearSlope specifies the slope of the linear segment of the
forward (linToLog) transform. By default it is set equal to the slope
of the log curve at the break point.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_LogCameraTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_LogCameraTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getBase = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getLinSideBreakValue = R"doc(Return true if LinSideBreak values were set, false if they were not.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getLinSideOffsetValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getLinSideSlopeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getLinearSlopeValue = R"doc(Return true if LinearSlope values were set, false if they were not.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getLogSideOffsetValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_getLogSideSlopeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_setBase = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_setLinSideBreakValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_setLinSideOffsetValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_setLinSideSlopeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_setLinearSlopeValue =
R"doc(Set LinearSlope value. Note: You must call setLinSideBreakValue before
calling this.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_setLogSideOffsetValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_setLogSideSlopeValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogCameraTransform_unsetLinearSlopeValue = R"doc(Remove LinearSlope values so that default values are used.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogMessage = R"doc(Log a message using the library logging function.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform =
R"doc(Represents log transform: log(color, base)

* The input will be clamped for negative numbers. * Default base is
2.0. * The alpha channel is not affected.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_LogTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_LogTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_getBase = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LogTransform_setBase = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevel = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevelFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevelToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevel_LOGGING_LEVEL_DEBUG = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevel_LOGGING_LEVEL_DEFAULT = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevel_LOGGING_LEVEL_INFO = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevel_LOGGING_LEVEL_NONE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevel_LOGGING_LEVEL_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LoggingLevel_LOGGING_LEVEL_WARNING = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look =
R"doc(The *Look* is an 'artistic' image modification, in a specified image
state. The processSpace defines the ColorSpace the image is required
to be in, for the math to apply correctly.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_LookTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_LookTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_getDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_getDst = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_getLooks = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_getSrc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_setDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_setDst = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_setLooks =
R"doc(Specify looks to apply. Looks is a potentially comma (or colon)
delimited list of look names, Where +/- prefixes are optionally
allowed to denote forward/inverse look specification. (And forward is
assumed in the absence of either))doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_setSrc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_LookTransform_validate = R"doc(Will throw if data is not valid.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_Look = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_Look_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_getDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_getInverseTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_getName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_getProcessSpace = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_getTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_setDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_setInverseTransform = R"doc(Setting a transform to a non-null call makes it allowed.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_setName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_setProcessSpace = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Look_setTransform = R"doc(Setting a transform to a non-null call makes it allowed.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DHueAdjust =
R"doc(Used by :cpp:class`Lut1DTransform` to control optional hue restoration
algorithm.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DHueAdjust_HUE_DW3 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DHueAdjust_HUE_NONE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform = R"doc(Represents a 1D-LUT transform.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_Create = R"doc(Create an identity 1D-LUT of length two.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_Create_2 =
R"doc(Create an identity 1D-LUT with specific length and half-domain
setting. Will throw for lengths longer than 1024x1024.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_Lut1DTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_Lut1DTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getFileOutputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getHueAdjust = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getInputHalfDomain = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getInterpolation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getLength = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getOutputRawHalfs = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_getValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_setFileOutputBitDepth =
R"doc(Get the bit-depth associated with the LUT values read from a file or
set the bit-depth of values to be written to a file (for file formats
such as CLF that support multiple bit-depths). However, note that the
values stored in the object are always normalized.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_setHueAdjust =
R"doc(The 1D-LUT transform optionally supports a hue adjustment feature that
was used in some versions of ACES. This adjusts the hue of the result
to approximately match the input.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_setInputHalfDomain =
R"doc(In a half-domain LUT, the contents of the LUT specify the desired
value of the function for each half-float value. Therefore, the length
of the LUT must be 65536 entries or else validate() will throw.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_setInterpolation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_setLength =
R"doc(Changing the length will reset the LUT to identity. Will throw for
lengths longer than 1024x1024.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_setOutputRawHalfs =
R"doc(Set OutputRawHalfs to true if you want to output the LUT contents as
16-bit floating point values expressed as unsigned 16-bit integers
representing the equivalent bit pattern. For example, the value 1.0
would be written as the integer 15360 because it has the same bit-
pattern. Note that this implies the values will be quantized to a
16-bit float. Note that this setting only controls the output
formatting (where supported) and not the values for getValue/setValue.
The only file formats that currently support this are CLF and CTF.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut1DTransform_setValue =
R"doc(Set the values of a LUT1D. Will throw if the index is outside of the
range from 0 to (length-1).

The LUT values are always for the "forward" LUT, regardless of how the
transform direction is set.

These values are normalized relative to what may be stored in any
given LUT files. For example in a CLF file using a "10i" output depth,
a value of 1023 in the file is normalized to 1.0. The values here are
unclamped and may extend outside [0,1].

LUTs in various file formats may only provide values for one channel
where R, G, B are the same. Even in that case, you should provide
three equal values to the setter.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform = R"doc(Represents a 3D-LUT transform.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_Create = R"doc(Create an identity 3D-LUT of size 2x2x2.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_Create_2 =
R"doc(Create an identity 3D-LUT with specific grid size. Will throw for grid
size larger than 129.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_Lut3DTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_Lut3DTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_getFileOutputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_getGridSize = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_getInterpolation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_getValue = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_setFileOutputBitDepth =
R"doc(Get the bit-depth associated with the LUT values read from a file or
set the bit-depth of values to be written to a file (for file formats
such as CLF that support multiple bit-depths). However, note that the
values stored in the object are always normalized.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_setGridSize =
R"doc(Changing the grid size will reset the LUT to identity. Will throw for
grid sizes larger than 129.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_setInterpolation = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Lut3DTransform_setValue =
R"doc(Set the values of a 3D-LUT. Will throw if an index is outside of the
range from 0 to (gridSize-1).

The LUT values are always for the "forward" LUT, regardless of how the
transform direction is set.

These values are normalized relative to what may be stored in any
given LUT files. For example in a CLF file using a "10i" output depth,
a value of 1023 in the file is normalized to 1.0. The values here are
unclamped and may extend outside [0,1].)doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform =
R"doc(Represents an MX+B Matrix transform.

For singular matrices, an inverse direction will throw an exception
during finalization.)doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_Fit = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_Identity = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_MatrixTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_MatrixTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_Sat = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_Scale = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_View = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_equals = R"doc(Checks if this exactly equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_getFileInputBitDepth =
R"doc(Get the bit-depths associated with the matrix values read from a file
or set the bit-depths of values to be written to a file (for file
formats such as CLF that support multiple bit-depths).

In a format such as CLF, the matrix values are scaled to take pixels
at the specified inBitDepth to pixels at the specified outBitDepth.
This complicates the interpretation of the matrix values and so this
object always holds normalized values and scaling is done on the way
from or to file formats such as CLF.)doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_getFileOutputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_getMatrix = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_getOffset = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_setFileInputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_setFileOutputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_setMatrix =
R"doc(Get or set the values of a Matrix. Expects 16 values, where the first
four are the coefficients to generate the R output channel from R, G,
B, A input channels.

The Matrix values are always for the "forward" Matrix, regardless of
how the transform direction is set.

These values are normalized relative to what may be stored in file
formats such as CLF. For example in a CLF file using a "32f" input
depth and "10i" output depth, a value of 1023 in the file is
normalized to 1.0. The values here are unclamped and may extend
outside [0,1].)doc";

static const char *__doc_OpenColorIO_v2_0dev_MatrixTransform_setOffset =
R"doc(Get or set the R, G, B, A offsets to be applied after the matrix.

These values are normalized relative to what may be stored in file
formats such as CLF. For example, in a CLF file using a "10i" output
depth, a value of 1023 in the file is normalized to 1.0. The values
here are unclamped and may extend outside [0,1].)doc";

static const char *__doc_OpenColorIO_v2_0dev_NegativeStyle =
R"doc(Negative values handling style for :cpp:class:`ExponentTransform` and
:cpp:class:`ExponentWithLinearTransform` transform algorithms.)doc";

static const char *__doc_OpenColorIO_v2_0dev_NegativeStyleFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_NegativeStyleToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_NegativeStyle_NEGATIVE_CLAMP = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_NegativeStyle_NEGATIVE_LINEAR = R"doc(//! Negative values are passed through unchanged.)doc";

static const char *__doc_OpenColorIO_v2_0dev_NegativeStyle_NEGATIVE_MIRROR = R"doc(//! Clamp negative values)doc";

static const char *__doc_OpenColorIO_v2_0dev_NegativeStyle_NEGATIVE_PASS_THRU =
R"doc(//! Positive curve is rotated 180 degrees around the origin to handle
negatives.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags =
R"doc(Provides control over how the ops in a Processor are combined in order
to improve performance.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_ALL = R"doc(Apply all possible optimizations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_COMP_EXPONENT = R"doc(Compose a pair of ops into a single op.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_COMP_GAMMA = R"doc(Compose a pair of ops into a single op.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_COMP_LUT1D = R"doc(Compose a pair of ops into a single op.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_COMP_LUT3D = R"doc(Compose a pair of ops into a single op.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_COMP_MATRIX = R"doc(Compose a pair of ops into a single op.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_COMP_RANGE = R"doc(Compose a pair of ops into a single op.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_COMP_SEPARABLE_PREFIX =
R"doc(For integer and half bit-depths only, replace separable ops (i.e. no
channel crosstalk ops) by a single 1D LUT of input bit-depth domain.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_DEFAULT = R"doc(For quite lossy optimizations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_DRAFT = R"doc(For quite lossy optimizations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_GOOD = R"doc(Apply all possible optimizations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_IDENTITY = R"doc(Replace identity ops (other than gamma).)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_IDENTITY_GAMMA = R"doc(Replace identity gamma ops.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_LOSSLESS = R"doc(Apply all possible optimizations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_LUT_INV_FAST =
R"doc(Implement inverse Lut1D and Lut3D evaluations using a a forward LUT
(faster but less accurate). Note that GPU evals always do FAST.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_NONE = R"doc(Do not optimize.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_NO_DYNAMIC_PROPERTIES =
R"doc(Turn off dynamic control of any ops that offer adjustment of parameter
values after finalization (e.g. ExposureContrast).)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_PAIR_IDENTITY_CDL = R"doc(Replace a pair of ops where one is the inverse of the other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_PAIR_IDENTITY_EXPOSURE_CONTRAST = R"doc(Replace a pair of ops where one is the inverse of the other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_PAIR_IDENTITY_FIXED_FUNCTION = R"doc(Replace a pair of ops where one is the inverse of the other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_PAIR_IDENTITY_GAMMA = R"doc(Replace a pair of ops where one is the inverse of the other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_PAIR_IDENTITY_LOG = R"doc(Replace a pair of ops where one is the inverse of the other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_PAIR_IDENTITY_LUT1D = R"doc(Replace a pair of ops where one is the inverse of the other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_PAIR_IDENTITY_LUT3D = R"doc(Replace a pair of ops where one is the inverse of the other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_OptimizationFlags_OPTIMIZATION_VERY_GOOD = R"doc(Apply all possible optimizations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc =
R"doc(All the constructors expect a pointer to packed image data (such as
rgbrgbrgb or rgbargbargba) starting at the first color channel of the
first pixel to process (which does not need to be the first pixel of
the image). The number of channels must be greater than or equal to 3.
If a 4th channel is specified, it is assumed to be alpha information.
Channels > 4 will be ignored.

\note The methods assume the CPUProcessor bit-depth type for the data
pointer.)doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_PackedImageDesc = R"doc(\note numChannels must be 3 (RGB) or 4 (RGBA).)doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_PackedImageDesc_2 = R"doc(\note numChannels must be 3 (RGB) or 4 (RGBA).)doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_PackedImageDesc_3 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_PackedImageDesc_4 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_PackedImageDesc_5 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_PackedImageDesc_6 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getAData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getBData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getBitDepth = R"doc(Get the bit-depth.)doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getChanStrideBytes = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getChannelOrder = R"doc(Get the channel ordering of all the pixels.)doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getData = R"doc(Get a pointer to the first color channel of the first pixel.)doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getGData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getHeight = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getNumChannels = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getRData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getWidth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getXStrideBytes = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_getYStrideBytes = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_isFloat = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_isRGBAPacked = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PackedImageDesc_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc =
R"doc(All the constructors expect pointers to the specified image planes
(i.e. rrrr gggg bbbb) starting at the first color channel of the first
pixel to process (which need not be the first pixel of the image).
Pass NULL for aData if no alpha exists (r/g/bData must not be NULL).

\note The methods assume the CPUProcessor bit-depth type for the
R/G/B/A data pointers.)doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_PlanarImageDesc = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_PlanarImageDesc_2 =
R"doc(\note that although PlanarImageDesc is powerful enough to also
describe all PackedImageDesc scenarios, it is recommended to use a
PackedImageDesc where possible since that allows for additional
optimizations.)doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_PlanarImageDesc_3 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_PlanarImageDesc_4 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getAData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getBData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getBitDepth = R"doc(Get the bit-depth.)doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getGData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getHeight = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getRData = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getWidth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getXStrideBytes = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_getYStrideBytes = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_isFloat = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_isRGBAPacked = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_PlanarImageDesc_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor =
R"doc(The *Processor* represents a specific color transformation which is
the result of Config::getProcessor`.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata =
R"doc(This class contains meta information about the process that generated
this processor. The results of these functions do not impact the pixel
processing.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_ProcessorMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_ProcessorMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_addFile = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_addLook = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_getFile = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_getLook = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_getNumFiles = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_getNumLooks = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ProcessorMetadata_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_Processor = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_Processor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_createGroupTransform =
R"doc(Return a GroupTransform that contains a copy of the transforms that
comprise the processor. (Changes to it will not modify the original
processor.))doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getCacheID = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getDefaultCPUProcessor =
R"doc(Get an optimized `CPUProcessor` instance.

\note This may provide higher fidelity than anticipated due to
internal optimizations. For example, if the inputColorSpace and the
outputColorSpace are members of the same family, no conversion will be
applied, even though strictly speaking quantization should be added.
\note The typical use case to apply color processing to an image is:

```
OCIO::ConstConfigRcPtr config = OCIO::GetCurrentConfig();

    OCIO::ConstProcessorRcPtr processor
        = config->getProcessor(colorSpace1, colorSpace2);

    OCIO::ConstCPUProcessorRcPtr cpuProcessor
        = processor->getDefaultCPUProcessor();

    OCIO::PackedImageDesc img(imgDataPtr, imgWidth, imgHeight, imgChannels);
    cpuProcessor->apply(img);
```)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getDefaultGPUProcessor = R"doc(Get an optimized GPUProcessor instance.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getDynamicProperty = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getFormatExtensionByIndex = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getFormatMetadata =
R"doc(Get a FormatMetadata containing the top level metadata for the
processor. For a processor from a CLF file, this corresponds to the
ProcessList metadata.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getFormatNameByIndex =
R"doc(Get the writer at index, return empty string if an invalid index is
specified.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getNumTransforms =
R"doc(Get the number of transforms that comprise the processor. Each
transform has a (potentially empty) FormatMetadata.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getNumWriteFormats = R"doc(Get the number of writers.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getOptimizedCPUProcessor = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getOptimizedCPUProcessor_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getOptimizedGPUProcessor = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getOptimizedProcessor =
R"doc(Run the optimizer on a Processor to create a new Processor. It is
usually not necessary to call this since getting a CPUProcessor or
GPUProcessor will also optimize. However if you need both, calling
this method first makes getting a CPU and GPU Processor faster since
the optimization is effectively only done once.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getOptimizedProcessor_2 =
R"doc(Create a Processor that is optimized for a specific in and out bit-
depth (as CPUProcessor would do). This method is provided primarily
for diagnostic purposes.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getProcessorMetadata =
R"doc(The ProcessorMetadata contains technical information such as the
number of files and looks used in the processor.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_getTransformFormatMetadata =
R"doc(Get a FormatMetadata containing the metadata for a transform within
the processor. For a processor from a CLF file, this corresponds to
the metadata associated with an individual process node.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_hasChannelCrosstalk =
R"doc(True if the image transformation is non-separable. For example, if a
change in red may also cause a change in green or blue.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_hasDynamicProperty = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_isNoOp = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Processor_write =
R"doc(Write the transforms comprising the processor to the stream. Writing
(as opposed to Baking) is a lossless process. An exception is thrown
if the processor cannot be losslessly written to the specified file
format.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeStyle = R"doc(A RangeTransform may be set to clamp the values, or not.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeStyleFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeStyleToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeStyle_RANGE_CLAMP = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeStyle_RANGE_NO_CLAMP = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform =
R"doc(Represents a range transform

The Range is used to apply an affine transform (scale & offset) and
clamps values to min/max bounds on all color components except the
alpha. The scale and offset values are computed from the input and
output bounds.

Refer to section 7.2.4 in specification S-2014-006 "A Common File
Format for Look-Up Tables" from the Academy of Motion Picture Arts and
Sciences and the American Society of Cinematographers.

The "noClamp" style described in the specification S-2014-006 becomes
a MatrixOp at the processor level.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_Create = R"doc(Creates an instance of RangeTransform.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_RangeTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_RangeTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_equals = R"doc(Checks if this equals other.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getFileInputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getFileOutputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getFormatMetadata = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getFormatMetadata_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getMaxInValue = R"doc(Get the maximum value for the input.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getMaxOutValue = R"doc(Get the maximum value for the output.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getMinInValue = R"doc(Get the minimum value for the input.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getMinOutValue = R"doc(Get the minimum value for the output.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_getStyle = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_hasMaxInValue = R"doc(Is the maximum value for the input set?)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_hasMaxOutValue = R"doc(Is the maximum value for the output set?)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_hasMinInValue = R"doc(Is the minimum value for the input set?)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_hasMinOutValue = R"doc(Is the minimum value for the output set?)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_setFileInputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_setFileOutputBitDepth = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_setMaxInValue = R"doc(Set the maximum value for the input.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_setMaxOutValue = R"doc(Set the maximum value for the output.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_setMinInValue = R"doc(Set the minimum value for the input.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_setMinOutValue = R"doc(Set the minimum value for the output.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_setStyle = R"doc(Set the Range style to clamp or not input values.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_unsetMaxInValue = R"doc(Unset the maximum value for the input.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_unsetMaxOutValue = R"doc(Unset the maximum value for the output.)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_unsetMinInValue = R"doc(Unset the minimum value for the input)doc";

static const char *__doc_OpenColorIO_v2_0dev_RangeTransform_unsetMinOutValue = R"doc(Unset the minimum value for the output.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ReferenceSpaceType =
R"doc(OCIO does not mandate the image state of the main reference space and
it is not required to be scene-referred. This enum is used in
connection with the display color space and view transform features
which do assume that the main reference space is scene-referred and
the display reference space is display-referred. If a config used a
non-scene-referred reference space, presumably it would not use either
display color spaces or view transforms, so this enum becomes
irrelevant.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ReferenceSpaceType_REFERENCE_SPACE_DISPLAY = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ReferenceSpaceType_REFERENCE_SPACE_SCENE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ResetToDefaultLoggingFunction = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_SearchReferenceSpaceType = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_SearchReferenceSpaceType_SEARCH_REFERENCE_SPACE_ALL = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_SearchReferenceSpaceType_SEARCH_REFERENCE_SPACE_DISPLAY = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_SearchReferenceSpaceType_SEARCH_REFERENCE_SPACE_SCENE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_SetCurrentConfig =
R"doc(Set the current configuration. This will then store a copy of the
specified config.)doc";

static const char *__doc_OpenColorIO_v2_0dev_SetEnvVariable = R"doc(\note not thread safe.)doc";

static const char *__doc_OpenColorIO_v2_0dev_SetLoggingFunction =
R"doc(Set the logging function to use; otherwise, use the default (i.e.
std::cerr). \note The logging mechanism is thread-safe.)doc";

static const char *__doc_OpenColorIO_v2_0dev_SetLoggingLevel = R"doc(Set the global logging level.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform = R"doc(Base class for all the transform classes)doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_TransformDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_TransformDirectionFromString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_TransformDirectionToString = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_TransformDirection_TRANSFORM_DIR_FORWARD = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_TransformDirection_TRANSFORM_DIR_INVERSE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_TransformDirection_TRANSFORM_DIR_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform_Transform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform_Transform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform_getDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform_setDirection =
R"doc(Note that this only affects the evaluation and not the values stored
in the object.)doc";

static const char *__doc_OpenColorIO_v2_0dev_Transform_validate = R"doc(Will throw if data is not valid.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform =
R"doc(A *ViewTransform* provides a conversion from the main (usually scene-
referred) reference space to the display-referred reference space.
This allows splitting the conversion from the main reference space to
a display into two parts: the ViewTransform plus a display color
space.

It is also possible to provide a ViewTransform that converts from the
display-referred reference space back to that space. This is useful in
cases when a ViewTransform is needed when converting between displays
(such as HDR to SDR).

The ReferenceSpaceType indicates whether the ViewTransform converts
from scene-to-display reference or display-to-display reference.

The from_reference transform direction is the one that is used when
going out towards a display.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransformDirection = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransformDirection_VIEWTRANSFORM_DIR_FROM_REFERENCE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransformDirection_VIEWTRANSFORM_DIR_TO_REFERENCE = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransformDirection_VIEWTRANSFORM_DIR_UNKNOWN = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_Create = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_Impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_ViewTransform = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_ViewTransform_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_ViewTransform_3 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_addCategory = R"doc(See ColorSpace::addCategory.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_clearCategories = R"doc(See ColorSpace::clearCategories.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_createEditableCopy = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_deleter = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getCategory = R"doc(See ColorSpace::getCategory.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getFamily = R"doc(See ColorSpace::getFamily)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getImpl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getImpl_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getNumCategories = R"doc(See ColorSpace::getNumCategories.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getReferenceSpaceType = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_getTransform =
R"doc(If a transform in the specified direction has been specified, return
it. Otherwise return a null ConstTransformRcPtr)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_hasCategory = R"doc(See ColorSpace::hasCategory.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_m_impl = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_operator_assign = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_removeCategory = R"doc(See ColorSpace::removeCategory.)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_setDescription = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_setFamily = R"doc(See ColorSpace::setFamily)doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_setName = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_ViewTransform_setTransform =
R"doc(Specify the transform for the appropriate direction. Setting the
transform to null will clear it.)doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_land = R"doc(Perform the intersection of two sets.)doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lor = R"doc(Perform the union of two sets.)doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_2 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_3 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_4 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_5 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_6 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_7 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_8 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_9 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_10 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_11 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_12 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_13 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_14 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_15 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_16 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_17 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_18 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_19 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_20 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_21 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_22 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_23 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_24 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_25 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_lshift_26 = R"doc()doc";

static const char *__doc_OpenColorIO_v2_0dev_operator_sub = R"doc(Perform the difference of two sets.)doc";

#if defined(__GNUG__)
#pragma GCC diagnostic pop
#endif

