// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_mbs_core_MbsType
#include <mbs/core/MbsType.h>
#endif
#ifndef INCLUDED_mbs_io_MbsIO
#include <mbs/io/MbsIO.h>
#endif

namespace mbs{
namespace io{


static ::String MbsIO_obj_sMemberFields[] = {
	HX_HCSTRING("readBool","\xa0","\x5e","\x13","\x69"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeBool","\xa9","\x78","\xcf","\x49"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeString","\x10","\x7b","\x29","\xa6"),
	HX_HCSTRING("isReader","\xcd","\x40","\xfb","\x54"),
	HX_HCSTRING("isWriter","\x3d","\x72","\x4f","\xd6"),
	HX_HCSTRING("allocate","\xbd","\xd2","\xea","\x90"),
	HX_HCSTRING("writeTypecode","\xe6","\x28","\x58","\x87"),
	HX_HCSTRING("readTypecode","\x5d","\xd6","\xeb","\xfe"),
	::String(null()) };

static void MbsIO_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsIO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsIO_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsIO_obj::__mClass,"__mClass");
};

#endif

hx::Class MbsIO_obj::__mClass;

void MbsIO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mbs.io.MbsIO","\x2c","\x6f","\x5e","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = MbsIO_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsIO_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x692ab760 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsIO_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mbs
} // end namespace io