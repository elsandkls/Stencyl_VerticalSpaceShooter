// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSourceImpl
#include <lime/_internal/backend/native/NativeAudioSourceImpl.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif

namespace lime{
namespace _internal{
namespace backend{
namespace native{


static ::String NativeAudioSourceImpl_obj_sMemberFields[] = {
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("getCurrentTime","\xf0","\xf7","\x2c","\x0d"),
	HX_HCSTRING("setCurrentTime","\x64","\xe0","\x4c","\x2d"),
	HX_HCSTRING("getGain","\x35","\xa0","\xe1","\x16"),
	HX_HCSTRING("setGain","\x41","\x31","\xe3","\x09"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("setLength","\x28","\x0a","\xaf","\xfe"),
	HX_HCSTRING("getLoops","\x19","\x01","\xd1","\xd8"),
	HX_HCSTRING("setLoops","\x8d","\x5a","\x2e","\x87"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	::String(null()) };

static void NativeAudioSourceImpl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeAudioSourceImpl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeAudioSourceImpl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeAudioSourceImpl_obj::__mClass,"__mClass");
};

#endif

hx::Class NativeAudioSourceImpl_obj::__mClass;

void NativeAudioSourceImpl_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.backend.native.NativeAudioSourceImpl","\xa8","\x96","\x2d","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = NativeAudioSourceImpl_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(NativeAudioSourceImpl_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x712cf8b6 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeAudioSourceImpl_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native