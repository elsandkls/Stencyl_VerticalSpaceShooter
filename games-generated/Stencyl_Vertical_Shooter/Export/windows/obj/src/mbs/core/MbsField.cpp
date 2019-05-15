// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_mbs_core_MbsField
#include <mbs/core/MbsField.h>
#endif
#ifndef INCLUDED_mbs_core_MbsType
#include <mbs/core/MbsType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4bdae6113d351ea_10_new,"mbs.core.MbsField","new",0x86b92aed,"mbs.core.MbsField.new","mbs/core/MbsField.hx",10,0x660590c3)
HX_LOCAL_STACK_FRAME(_hx_pos_f4bdae6113d351ea_18_getName,"mbs.core.MbsField","getName",0x781c470e,"mbs.core.MbsField.getName","mbs/core/MbsField.hx",18,0x660590c3)
HX_LOCAL_STACK_FRAME(_hx_pos_f4bdae6113d351ea_23_getType,"mbs.core.MbsField","getType",0x7c25c77d,"mbs.core.MbsField.getType","mbs/core/MbsField.hx",23,0x660590c3)
HX_LOCAL_STACK_FRAME(_hx_pos_f4bdae6113d351ea_28_getAddress,"mbs.core.MbsField","getAddress",0x698fb8d1,"mbs.core.MbsField.getAddress","mbs/core/MbsField.hx",28,0x660590c3)
namespace mbs{
namespace core{

void MbsField_obj::__construct(::String name, ::mbs::core::MbsType type,int address){
            	HX_STACKFRAME(&_hx_pos_f4bdae6113d351ea_10_new)
HXLINE(  11)		this->name = name;
HXLINE(  12)		this->type = type;
HXLINE(  13)		this->address = address;
            	}

Dynamic MbsField_obj::__CreateEmpty() { return new MbsField_obj; }

void *MbsField_obj::_hx_vtable = 0;

Dynamic MbsField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsField_obj > _hx_result = new MbsField_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MbsField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fdd0535;
}

::String MbsField_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_f4bdae6113d351ea_18_getName)
HXDLIN(  18)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsField_obj,getName,return )

 ::mbs::core::MbsType MbsField_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_f4bdae6113d351ea_23_getType)
HXDLIN(  23)		return this->type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsField_obj,getType,return )

int MbsField_obj::getAddress(){
            	HX_STACKFRAME(&_hx_pos_f4bdae6113d351ea_28_getAddress)
HXDLIN(  28)		return this->address;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsField_obj,getAddress,return )


hx::ObjectPtr< MbsField_obj > MbsField_obj::__new(::String name, ::mbs::core::MbsType type,int address) {
	hx::ObjectPtr< MbsField_obj > __this = new MbsField_obj();
	__this->__construct(name,type,address);
	return __this;
}

hx::ObjectPtr< MbsField_obj > MbsField_obj::__alloc(hx::Ctx *_hx_ctx,::String name, ::mbs::core::MbsType type,int address) {
	MbsField_obj *__this = (MbsField_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsField_obj), true, "mbs.core.MbsField"));
	*(void **)__this = MbsField_obj::_hx_vtable;
	__this->__construct(name,type,address);
	return __this;
}

MbsField_obj::MbsField_obj()
{
}

void MbsField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MbsField);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(address,"address");
	HX_MARK_END_CLASS();
}

void MbsField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(address,"address");
}

hx::Val MbsField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"address") ) { return hx::Val( address ); }
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getAddress") ) { return hx::Val( getAddress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MbsField_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::mbs::core::MbsType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"address") ) { address=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MbsField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("address","\xb4","\x71","\x0b","\x9d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MbsField_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(MbsField_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::mbs::core::MbsType*/ ,(int)offsetof(MbsField_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(MbsField_obj,address),HX_HCSTRING("address","\xb4","\x71","\x0b","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MbsField_obj_sStaticStorageInfo = 0;
#endif

static ::String MbsField_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("address","\xb4","\x71","\x0b","\x9d"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("getAddress","\xbe","\xf7","\x6c","\xec"),
	::String(null()) };

static void MbsField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsField_obj::__mClass,"__mClass");
};

#endif

hx::Class MbsField_obj::__mClass;

void MbsField_obj::__register()
{
	hx::Object *dummy = new MbsField_obj;
	MbsField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mbs.core.MbsField","\x7b","\x30","\xdc","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MbsField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsField_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mbs
} // end namespace core