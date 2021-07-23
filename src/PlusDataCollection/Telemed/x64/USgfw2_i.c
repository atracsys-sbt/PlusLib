

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for USgfw2.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IUsgDataView,0xBFEF8670,0xDBC1,0x4B47,0xBC,0x01,0xBB,0xBC,0xA1,0x74,0xDD,0x31);


MIDL_DEFINE_GUID(IID, IID_IUsgScanMode,0xB8CBA727,0xD104,0x416E,0xB0,0xCC,0xC6,0x2E,0x9C,0xF9,0xB1,0xF9);


MIDL_DEFINE_GUID(IID, IID_IUsgDataStream,0xEDF488C3,0x5BE4,0x4D32,0xB9,0x6F,0xD9,0xBD,0xDF,0xC7,0x7C,0x43);


MIDL_DEFINE_GUID(IID, IID_IUsgMixerControl,0xB7C94539,0xA65A,0x42F3,0x8B,0x65,0xF8,0x3D,0x11,0x4F,0xF4,0xC8);


MIDL_DEFINE_GUID(IID, IID_IUsgData,0x4363F1DB,0x1261,0x4BD6,0x99,0xE5,0xB4,0x83,0xEC,0xB3,0x52,0x18);


MIDL_DEFINE_GUID(IID, IID_IUsgGraph,0x739FDDCE,0x29FF,0x44D9,0x9C,0x3C,0x3E,0x68,0x13,0xA6,0x79,0x69);


MIDL_DEFINE_GUID(IID, IID_IUsgDeviceChangeSink,0x9717780E,0xAAAF,0x4FD2,0x83,0x5A,0x80,0x91,0x0E,0x1E,0x80,0x3E);


MIDL_DEFINE_GUID(IID, IID_IScanDepth,0x7391AEBB,0x13BB,0x4ffe,0xAE,0x84,0x48,0xCD,0x63,0xB5,0x23,0xA0);


MIDL_DEFINE_GUID(IID, IID_IUsgfw2,0xAAE0C833,0xBFE6,0x4594,0x98,0x4E,0x8B,0x9F,0xD4,0x8C,0xA4,0x87);


MIDL_DEFINE_GUID(IID, IID_IProbesCollection,0x1C3AF9E8,0x2597,0x4A1C,0xAD,0xEA,0x6F,0x9A,0x17,0x64,0x5A,0x16);


MIDL_DEFINE_GUID(IID, IID_IUsgCollection,0xEAA864EC,0xF0B8,0x49EF,0xBF,0x78,0x09,0xB8,0x37,0x9D,0x0D,0x62);


MIDL_DEFINE_GUID(IID, IID_IProbe,0x264096B1,0x8393,0x4060,0x90,0x7B,0x91,0x7C,0x39,0x5F,0xF9,0x7C);


MIDL_DEFINE_GUID(IID, IID_IProbe2,0x7500FEC3,0xE775,0x4d0c,0x91,0xD8,0x59,0xDF,0x9C,0x3E,0xD7,0xEB);


MIDL_DEFINE_GUID(IID, IID_IBeamformer,0x1AF2973E,0x1991,0x4A7A,0x86,0xAF,0x7E,0xA0,0x15,0x0C,0x69,0x25);


MIDL_DEFINE_GUID(IID, IID_IScanModes,0x60C480B7,0xF1E7,0x403C,0x8A,0xF3,0x8D,0xCE,0xD9,0x9A,0x25,0x60);


MIDL_DEFINE_GUID(IID, IID_IUsgControl,0x5748CA80,0x1710,0x489F,0xBC,0x13,0x28,0xF2,0xC0,0x12,0x2B,0x49);


MIDL_DEFINE_GUID(IID, IID_IUsgGain,0xA18F0D3F,0xDD69,0x4BDE,0x8F,0x26,0x4F,0x54,0xD6,0x7B,0x57,0xD0);


MIDL_DEFINE_GUID(IID, IID_IUsgValues,0x95D11D2B,0xEC05,0x4A2E,0xB3,0x1B,0x13,0x86,0xC4,0x84,0xAE,0x16);


MIDL_DEFINE_GUID(IID, IID_IUsgPower,0xF23DC92E,0x60CB,0x4EAE,0x8C,0xD1,0xBD,0x72,0x9E,0x8D,0x78,0x5C);


MIDL_DEFINE_GUID(IID, IID_IUsgDynamicRange,0xB3194B41,0x4E87,0x4787,0x8E,0x79,0x25,0x63,0x3A,0x75,0x96,0xD9);


MIDL_DEFINE_GUID(IID, IID_IUsgFrameAvg,0x3FD666AF,0xC2B5,0x4A5D,0xAF,0xCA,0x30,0xED,0xE0,0x34,0x27,0xE2);


MIDL_DEFINE_GUID(IID, IID_IUsgRejection2,0x3FE7E792,0x42A5,0x45D1,0xB0,0x54,0x7B,0xF4,0x7C,0x67,0xDB,0xFB);


MIDL_DEFINE_GUID(IID, IID_IUsgProbeFrequency2,0x53FCF15D,0x3C94,0x4AB3,0x9B,0x8E,0x0C,0xD6,0x7D,0x73,0x3A,0x24);


MIDL_DEFINE_GUID(IID, IID_IUsgDepth,0x812D829E,0x9D55,0x406A,0xB8,0x9D,0x31,0xA4,0x10,0x83,0x9F,0x87);


MIDL_DEFINE_GUID(IID, IID_IUsgImageOrientation,0x859BCBDB,0x015C,0x4439,0x97,0x02,0xF0,0xCB,0x0F,0xDF,0x80,0x59);


MIDL_DEFINE_GUID(IID, IID_IUsgImageEnhancement,0x90C02711,0x657D,0x436C,0xB8,0x65,0xDA,0x76,0xE7,0xB5,0xEA,0x76);


MIDL_DEFINE_GUID(IID, IID_IUsgViewArea,0x0F5EAEE8,0x9C4E,0x4714,0x8F,0x85,0x17,0xD3,0x1C,0xD2,0x5F,0xC6);


MIDL_DEFINE_GUID(IID, IID_IUsgLineDensity,0x118427F8,0xBAAC,0x4F29,0xB8,0x5C,0xDC,0xFC,0xD6,0x35,0x73,0xFE);


MIDL_DEFINE_GUID(IID, IID_IUsgFocus,0x53502AB7,0xC0FB,0x4B31,0xA4,0xEB,0x23,0xC0,0x92,0xD6,0xD1,0x3A);


MIDL_DEFINE_GUID(IID, IID_IUsgTgc,0x5AA2CBAF,0x30F9,0x4F20,0xA7,0xF8,0xBB,0x77,0xA7,0xC8,0x6D,0x71);


MIDL_DEFINE_GUID(IID, IID_IUsgClearView,0x5B07F59F,0xE2B9,0x4045,0x9C,0x23,0xBB,0xAA,0x62,0x88,0x60,0x78);


MIDL_DEFINE_GUID(IID, IID_IUsgPaletteCalculator,0x537B5EA9,0x246B,0x4AF5,0xA1,0x99,0x58,0x93,0xED,0x41,0x62,0x0E);


MIDL_DEFINE_GUID(IID, IID_IUsgPalette,0x39F0DB4B,0x5197,0x4E11,0xAB,0xB6,0x7C,0x87,0x35,0xE6,0xB7,0xAE);


MIDL_DEFINE_GUID(IID, IID_IUsgImageProperties,0x27C0A0A4,0x475B,0x423C,0xBF,0x8B,0x82,0xFC,0x56,0xAD,0x75,0x73);


MIDL_DEFINE_GUID(IID, IID_IUsgControlChangeSink,0x9E38438A,0x733B,0x4784,0x8C,0x68,0x60,0x24,0x1E,0xD4,0x98,0x59);


MIDL_DEFINE_GUID(IID, IID_IUsgCtrlChangeCommon,0xAFA64E76,0x249A,0x4606,0x8E,0xEF,0xE4,0xFD,0x80,0x2A,0xE9,0xEF);


MIDL_DEFINE_GUID(IID, IID_IUsgScanLine,0xAC0CEFF6,0x21E9,0x472F,0xB1,0xA3,0xFA,0xF1,0x85,0x57,0xA0,0x37);


MIDL_DEFINE_GUID(IID, IID_IUsgScanLine2,0xB521CD25,0xEC30,0x486b,0xB1,0xB7,0xBE,0x22,0x97,0x35,0xAA,0xBD);


MIDL_DEFINE_GUID(IID, IID_IUsgScanLineProperties,0xEF1D6EDE,0x1AB3,0x429B,0x83,0x48,0x6B,0xEA,0x1A,0x43,0x50,0x0E);


MIDL_DEFINE_GUID(IID, IID_IUsgScanLineProperties2,0xA4F7329D,0x51A7,0x4a61,0xA9,0xA8,0xCF,0xE9,0x0A,0x90,0xC9,0x04);


MIDL_DEFINE_GUID(IID, IID_IUsgScanLineSelector,0x3BFE461D,0x4240,0x40AC,0xB5,0xFF,0x29,0x2A,0x6C,0x25,0x3A,0x4C);


MIDL_DEFINE_GUID(IID, IID_IUsgSweepMode,0x4DD0E32D,0x23BF,0x4591,0xB7,0x6D,0x2C,0x97,0x1B,0xB8,0x95,0x07);


MIDL_DEFINE_GUID(IID, IID_IUsgQualProp,0x0DF080D7,0x1180,0x4c94,0x90,0x03,0x16,0x81,0x74,0xCD,0x3A,0xCD);


MIDL_DEFINE_GUID(IID, IID_IUsgSweepSpeed,0x481482A0,0xB0E1,0x460E,0x92,0xB9,0x31,0x59,0xED,0x9E,0x27,0x48);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerColorMap,0x39B7413A,0x07E4,0x492D,0x8A,0x38,0x5A,0x5E,0x78,0x8E,0x30,0xD1);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerColorPriority,0x5134078D,0x9B3D,0x4DB4,0xB7,0xF6,0xBA,0xF5,0xC6,0x01,0x80,0xE0);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerSteerAngle,0x3373936B,0x1232,0x4E94,0x9B,0xA9,0x45,0x65,0xD7,0x36,0x63,0x5D);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerColorThreshold,0xCD490C38,0x98B9,0x487A,0x9B,0x91,0x65,0x3C,0x80,0x6F,0xFD,0x21);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerBaseLine,0xF78B3D8F,0xF0D9,0x4129,0xA0,0xC1,0xB9,0x97,0x75,0x77,0xBE,0xA2);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerPRF,0xD37B8F18,0x417C,0x406B,0x8E,0x5D,0xBA,0xEC,0x11,0x62,0x34,0x28);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerWindow,0x7D485326,0x1EAD,0x43C7,0xBC,0x9A,0xC5,0x7C,0xF2,0x51,0xD4,0xD3);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerWallFilter,0x6A62BE4A,0x23C3,0x4262,0xB1,0xC6,0xC2,0x09,0x33,0x61,0x5E,0x90);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerSignalScale,0x507BA161,0xF30F,0x4B86,0x9D,0xB2,0x10,0x7B,0x89,0x84,0x1A,0x0B);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerPacketSize,0xC500DFDD,0xACA3,0x4594,0xA0,0xEE,0x75,0xC0,0x89,0xB3,0x98,0x0C);


MIDL_DEFINE_GUID(IID, IID_IUsgPulsesNumber,0x629FA89F,0x7BDB,0x4B79,0xB3,0xF3,0xA5,0x5A,0xEA,0x07,0x8B,0xC0);


MIDL_DEFINE_GUID(IID, IID_IUsgCineloop,0xA2986CE3,0x3F1A,0x4361,0x89,0x0D,0x94,0x81,0x6E,0xD1,0xCC,0xF7);


MIDL_DEFINE_GUID(IID, IID_IUsgCineStream,0x5071C20D,0x306B,0x4EC2,0xAB,0xA0,0x1E,0x20,0xE7,0xD5,0xEA,0x7E);


MIDL_DEFINE_GUID(IID, IID_IUsgCineSink,0x04D658E8,0x6691,0x4034,0xAD,0xFD,0x39,0xEB,0xE7,0xA0,0x30,0xDA);


MIDL_DEFINE_GUID(IID, IID_IUsgCineSink2,0x9EB34740,0x8AA5,0x4373,0xA1,0xFF,0xAC,0x9A,0x86,0x4D,0x5A,0xBB);


MIDL_DEFINE_GUID(IID, IID_IUsgSpatialFilter,0x31BF1183,0x35D2,0x4EF3,0xA1,0xB1,0xAD,0xEB,0xDE,0xDD,0x81,0xA0);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerSampleVolume,0xF81C0C94,0xB620,0x46EA,0xB6,0xC3,0x5D,0x10,0xE4,0xD7,0xF0,0x6C);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerCorrectionAngle,0x2BFE46DC,0xDD1A,0x42C8,0x8B,0xDB,0xD0,0x34,0xD5,0xFA,0x04,0xDB);


MIDL_DEFINE_GUID(IID, IID_IUsgScanConverterPlugin,0xDD280DD5,0x674A,0x4837,0x9F,0x03,0x9F,0xDE,0x77,0x59,0x65,0x99);


MIDL_DEFINE_GUID(IID, IID_IUsgScanConverterPlugin2,0x2F84D02F,0xE381,0x4b94,0xAB,0x10,0x52,0xD6,0x40,0x13,0xAF,0x4C);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerSignalSmooth,0x4D2095BD,0xD9D0,0x421F,0x87,0x87,0xA0,0xC7,0x64,0xBE,0xD7,0x35);


MIDL_DEFINE_GUID(IID, IID_IUsgAudioVolume,0x17EBD173,0x3BBD,0x427C,0x98,0x44,0xF2,0x74,0x09,0x9B,0x05,0x62);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerSpectralAvg,0x7BAAC412,0x6FF0,0x42C0,0x85,0xA0,0x9D,0x67,0x9E,0x91,0xFF,0x6B);


MIDL_DEFINE_GUID(IID, IID_IUsgBioeffectsIndices,0x533907B0,0x42A7,0x474D,0xAB,0x97,0x34,0x2E,0xEB,0xDD,0x9A,0xA0);


MIDL_DEFINE_GUID(IID, IID_IUsgProbeFrequency3,0x491CFD05,0x2F69,0x42F4,0x95,0x14,0xAE,0x47,0x89,0x0B,0x6E,0x1E);


MIDL_DEFINE_GUID(IID, IID_IUsgDopplerColorTransparency,0xB27183A9,0x33AF,0x40AC,0xA1,0x32,0x11,0xF0,0x34,0xDE,0x78,0x17);


MIDL_DEFINE_GUID(IID, IID_IUsg3dVolumeSize,0x145E5DFC,0x246E,0x4B55,0x8E,0xB1,0x4C,0x95,0x6E,0x98,0x85,0x4F);


MIDL_DEFINE_GUID(IID, IID_IUsg3dVolumeDensity,0x42C2A978,0xC31B,0x4235,0x92,0x92,0xE5,0x37,0x26,0xE5,0xA6,0x1C);


MIDL_DEFINE_GUID(IID, IID_IUsgFileStorage,0x4CF81935,0xDCB3,0x4C19,0x9D,0xC9,0x76,0x53,0x06,0xA4,0x71,0x4F);


MIDL_DEFINE_GUID(IID, IID_IUsgfw2Debug,0x1E181F99,0x13FB,0x4570,0x99,0x34,0x09,0x4D,0x6D,0x52,0x74,0xA9);


MIDL_DEFINE_GUID(IID, IID_IUsgPlugin,0x19E2FD36,0x9D47,0x4A86,0xBF,0x5E,0xCD,0x92,0xA0,0x0F,0x16,0xD5);


MIDL_DEFINE_GUID(IID, IID_IBeamformerPowerState,0x9D1D0EB0,0xC497,0x42EE,0xBB,0x75,0xEB,0x0B,0xA5,0xF7,0x74,0xDC);


MIDL_DEFINE_GUID(IID, IID_IUsgScanType,0xEF4959EF,0xAE06,0x414B,0xB2,0x90,0x67,0x51,0x27,0xF0,0x03,0xD0);


MIDL_DEFINE_GUID(IID, IID_IUsgSteeringAngle,0xA0D966E1,0x6C45,0x44E3,0x98,0x87,0x14,0x2D,0xE3,0x07,0x68,0x9A);


MIDL_DEFINE_GUID(IID, IID_IUsgViewAngle,0xD3CAA86B,0x8D04,0x4FFD,0x8F,0x4E,0xF9,0xE1,0x58,0x05,0x1D,0x5B);


MIDL_DEFINE_GUID(IID, IID_IUsgCompoundFrames,0x2CB1500C,0x8196,0x47FF,0xBE,0xCF,0x61,0x94,0x7E,0x01,0x92,0xC5);


MIDL_DEFINE_GUID(IID, IID_IUsgCompoundAngle,0xEEA419CB,0x8B31,0x47A3,0xA0,0x70,0xA6,0x8C,0xEE,0x24,0xF3,0xF1);


MIDL_DEFINE_GUID(IID, IID_IUsgDeviceCapabilities,0x360D17D2,0xA12A,0x4bd0,0x80,0x51,0xDA,0x3C,0xCB,0xFB,0xB9,0xB7);


MIDL_DEFINE_GUID(IID, IID_IUsgUnits,0xE06602A1,0xEBE0,0x4E20,0xB3,0x9C,0xB9,0x38,0x06,0x04,0x34,0xBE);


MIDL_DEFINE_GUID(IID, IID_ISampleGrabberFilter,0x4591F5BF,0xFBB2,0x4D6E,0xBD,0xAD,0xE6,0x29,0xE0,0x63,0x5F,0xFB);


MIDL_DEFINE_GUID(IID, IID_IUsgWindowRF,0x5E2238EF,0x0DA8,0x48C4,0x84,0xC5,0xE5,0xE6,0x11,0x94,0x04,0x5D);


MIDL_DEFINE_GUID(IID, IID_IUsgStreamEnable,0x33857397,0xF4BB,0x4B97,0x97,0x76,0x39,0xC5,0x07,0x36,0xF8,0xBA);


MIDL_DEFINE_GUID(IID, IID_IUsgDataSourceRF,0x3D9B6FC0,0x2AB7,0x4CFE,0x8B,0x04,0x32,0xD9,0x39,0xF8,0x0D,0xFE);


MIDL_DEFINE_GUID(IID, IID_IUsgMultiBeam,0x5431298D,0x7FDF,0x439F,0x9D,0x23,0x1D,0xAF,0xDE,0x05,0x9F,0x19);


MIDL_DEFINE_GUID(IID, IID_IUsgFrameROI,0x525055A7,0xB4AD,0x4A89,0x85,0xE8,0x8F,0xCC,0xF5,0x1F,0x9D,0x38);


MIDL_DEFINE_GUID(IID, IID_IUsgProbeElementsTest,0x06AF0C84,0xB1E3,0x411a,0x93,0x63,0xE7,0x32,0xD1,0x65,0x9B,0xC0);


MIDL_DEFINE_GUID(IID, IID_IUsgTissueMotionDetector,0x7C9EB8CB,0x04DF,0x4F02,0xA2,0x54,0xE3,0xF6,0x3E,0xFE,0xD9,0xB5);


MIDL_DEFINE_GUID(IID, LIBID_Usgfw2Lib,0x9F73D9AE,0xFAE1,0x4C82,0xAA,0x35,0x34,0x2A,0x0A,0xB1,0x73,0xD8);


MIDL_DEFINE_GUID(CLSID, CLSID_Usgfw2,0x4185D3A0,0xFC5F,0x42D8,0x88,0x40,0xED,0x8E,0x1D,0x10,0x3C,0x1F);


MIDL_DEFINE_GUID(CLSID, CLSID_UsgPaletteCalculator,0x994320B8,0xA50D,0x476F,0xAA,0x50,0x50,0xD0,0xEF,0xF7,0x6E,0xD3);


MIDL_DEFINE_GUID(CLSID, CLSID_UsgControl,0x25ACD2F1,0x5350,0x4EA8,0xAE,0x84,0x67,0xC1,0x9C,0x7F,0x69,0x2B);


MIDL_DEFINE_GUID(CLSID, CLSID_UsgDataView,0x82CB5897,0xC237,0x42BB,0xBA,0xDD,0xF6,0xC6,0x96,0x6E,0xE9,0x29);


MIDL_DEFINE_GUID(CLSID, CLSID_Usgfw2Debug,0x8E094E9D,0xFE44,0x431D,0x88,0x81,0x6B,0x30,0x87,0x79,0x30,0x4E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



