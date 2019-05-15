// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_B2FilterData
#include <box2D/dynamics/B2FilterData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_affdd35c7e59d0dc_31_new,"box2D.dynamics.B2FilterData","new",0xe06b204d,"box2D.dynamics.B2FilterData.new","box2D/dynamics/B2FilterData.hx",31,0xa4738be3)
HX_LOCAL_STACK_FRAME(_hx_pos_affdd35c7e59d0dc_39_copy,"box2D.dynamics.B2FilterData","copy",0x76135b28,"box2D.dynamics.B2FilterData.copy","box2D/dynamics/B2FilterData.hx",39,0xa4738be3)
namespace box2D{
namespace dynamics{

void B2FilterData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_affdd35c7e59d0dc_31_new)
HXLINE(  33)		this->categoryBits = (int)1;
HXLINE(  34)		this->maskBits = (int)65535;
HXLINE(  35)		this->groupIndex = (int)0;
            	}

Dynamic B2FilterData_obj::__CreateEmpty() { return new B2FilterData_obj; }

void *B2FilterData_obj::_hx_vtable = 0;

Dynamic B2FilterData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2FilterData_obj > _hx_result = new B2FilterData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2FilterData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x34780a03;
}

 ::box2D::dynamics::B2FilterData B2FilterData_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_affdd35c7e59d0dc_39_copy)
HXLINE(  40)		 ::box2D::dynamics::B2FilterData copy =  ::box2D::dynamics::B2FilterData_obj::__alloc( HX_CTX );
HXLINE(  41)		copy->categoryBits = this->categoryBits;
HXLINE(  42)		copy->maskBits = this->maskBits;
HXLINE(  43)		copy->groupIndex = this->groupIndex;
HXLINE(  44)		return copy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2FilterData_obj,copy,return )


B2FilterData_obj::B2FilterData_obj()
{
}

hx::Val B2FilterData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maskBits") ) { return hx::Val( maskBits ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"groupIndex") ) { return hx::Val( groupIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"categoryBits") ) { return hx::Val( categoryBits ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2FilterData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"maskBits") ) { maskBits=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"groupIndex") ) { groupIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"categoryBits") ) { categoryBits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2FilterData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("categoryBits","\x24","\xa9","\x80","\x13"));
	outFields->push(HX_HCSTRING("maskBits","\x12","\x4e","\xf7","\xde"));
	outFields->push(HX_HCSTRING("groupIndex","\x53","\x33","\xe0","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2FilterData_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(B2FilterData_obj,categoryBits),HX_HCSTRING("categoryBits","\x24","\xa9","\x80","\x13")},
	{hx::fsInt,(int)offsetof(B2FilterData_obj,maskBits),HX_HCSTRING("maskBits","\x12","\x4e","\xf7","\xde")},
	{hx::fsInt,(int)offsetof(B2FilterData_obj,groupIndex),HX_HCSTRING("groupIndex","\x53","\x33","\xe0","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2FilterData_obj_sStaticStorageInfo = 0;
#endif

static ::String B2FilterData_obj_sMemberFields[] = {
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("categoryBits","\x24","\xa9","\x80","\x13"),
	HX_HCSTRING("maskBits","\x12","\x4e","\xf7","\xde"),
	HX_HCSTRING("groupIndex","\x53","\x33","\xe0","\x34"),
	::String(null()) };

static void B2FilterData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2FilterData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2FilterData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2FilterData_obj::__mClass,"__mClass");
};

#endif

hx::Class B2FilterData_obj::__mClass;

void B2FilterData_obj::__register()
{
	hx::Object *dummy = new B2FilterData_obj;
	B2FilterData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.B2FilterData","\xdb","\xf5","\x4f","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2FilterData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2FilterData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2FilterData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2FilterData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2FilterData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2FilterData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics