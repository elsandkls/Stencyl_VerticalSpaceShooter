// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
#ifndef INCLUDED_mbs_core_MbsType
#include <mbs/core/MbsType.h>
#endif
#ifndef INCLUDED_mbs_core_MbsTypes
#include <mbs/core/MbsTypes.h>
#endif
#ifndef INCLUDED_mbs_io_MbsDynamicHelper
#include <mbs/io/MbsDynamicHelper.h>
#endif
#ifndef INCLUDED_mbs_io_MbsDynamicList
#include <mbs/io/MbsDynamicList.h>
#endif
#ifndef INCLUDED_mbs_io_MbsIO
#include <mbs/io/MbsIO.h>
#endif
#ifndef INCLUDED_mbs_io_MbsListBase
#include <mbs/io/MbsListBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d58f5a234c989875_162_new,"mbs.io.MbsDynamicList","new",0x2cb9fbc9,"mbs.io.MbsDynamicList.new","mbs/io/MbsListBase.hx",162,0xffa24d09)
HX_LOCAL_STACK_FRAME(_hx_pos_d58f5a234c989875_166_readObject,"mbs.io.MbsDynamicList","readObject",0xc9f1666c,"mbs.io.MbsDynamicList.readObject","mbs/io/MbsListBase.hx",166,0xffa24d09)
HX_LOCAL_STACK_FRAME(_hx_pos_d58f5a234c989875_173_readObjectUsingPool,"mbs.io.MbsDynamicList","readObjectUsingPool",0x03f86034,"mbs.io.MbsDynamicList.readObjectUsingPool","mbs/io/MbsListBase.hx",173,0xffa24d09)
HX_LOCAL_STACK_FRAME(_hx_pos_d58f5a234c989875_180_writeObject,"mbs.io.MbsDynamicList","writeObject",0xbe460d67,"mbs.io.MbsDynamicList.writeObject","mbs/io/MbsListBase.hx",180,0xffa24d09)
namespace mbs{
namespace io{

void MbsDynamicList_obj::__construct(::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_d58f5a234c989875_162_new)
HXDLIN( 162)		super::__construct(data,::mbs::core::MbsTypes_obj::DYNAMIC);
            	}

Dynamic MbsDynamicList_obj::__CreateEmpty() { return new MbsDynamicList_obj; }

void *MbsDynamicList_obj::_hx_vtable = 0;

Dynamic MbsDynamicList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsDynamicList_obj > _hx_result = new MbsDynamicList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MbsDynamicList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x43ce8cdb) {
		if (inClassId<=(int)0x17b72d64) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x17b72d64;
		} else {
			return inClassId==(int)0x43ce8cdb;
		}
	} else {
		return inClassId==(int)0x51c3cd0d;
	}
}

 ::Dynamic MbsDynamicList_obj::readObject(){
            	HX_STACKFRAME(&_hx_pos_d58f5a234c989875_166_readObject)
HXLINE( 167)		 ::Dynamic obj = ::mbs::io::MbsDynamicHelper_obj::readDynamic(this->data,this->elementAddress);
HXLINE( 168)		 ::mbs::io::MbsDynamicList _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 168)		_hx_tmp->elementAddress = (_hx_tmp->elementAddress + this->elementSize);
HXLINE( 169)		return obj;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsDynamicList_obj,readObject,return )

 ::Dynamic MbsDynamicList_obj::readObjectUsingPool( ::haxe::ds::ObjectMap pool){
            	HX_STACKFRAME(&_hx_pos_d58f5a234c989875_173_readObjectUsingPool)
HXLINE( 174)		 ::Dynamic obj = ::mbs::io::MbsDynamicHelper_obj::readDynamicUsingPool(this->data,this->elementAddress,pool);
HXLINE( 175)		 ::mbs::io::MbsDynamicList _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)		_hx_tmp->elementAddress = (_hx_tmp->elementAddress + this->elementSize);
HXLINE( 176)		return obj;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsDynamicList_obj,readObjectUsingPool,return )

void MbsDynamicList_obj::writeObject( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_d58f5a234c989875_180_writeObject)
HXLINE( 181)		::mbs::io::MbsDynamicHelper_obj::writeDynamic(this->data,this->elementAddress,o);
HXLINE( 182)		 ::mbs::io::MbsDynamicList _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)		_hx_tmp->elementAddress = (_hx_tmp->elementAddress + this->elementSize);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsDynamicList_obj,writeObject,(void))


hx::ObjectPtr< MbsDynamicList_obj > MbsDynamicList_obj::__new(::Dynamic data) {
	hx::ObjectPtr< MbsDynamicList_obj > __this = new MbsDynamicList_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< MbsDynamicList_obj > MbsDynamicList_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic data) {
	MbsDynamicList_obj *__this = (MbsDynamicList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsDynamicList_obj), true, "mbs.io.MbsDynamicList"));
	*(void **)__this = MbsDynamicList_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

MbsDynamicList_obj::MbsDynamicList_obj()
{
}

hx::Val MbsDynamicList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"readObject") ) { return hx::Val( readObject_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeObject") ) { return hx::Val( writeObject_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"readObjectUsingPool") ) { return hx::Val( readObjectUsingPool_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MbsDynamicList_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *MbsDynamicList_obj_sStaticStorageInfo = 0;
#endif

static ::String MbsDynamicList_obj_sMemberFields[] = {
	HX_HCSTRING("readObject","\xb5","\x62","\xbb","\x0e"),
	HX_HCSTRING("readObjectUsingPool","\xcb","\x12","\x4b","\x81"),
	HX_HCSTRING("writeObject","\xfe","\xd0","\x38","\xaa"),
	::String(null()) };

static void MbsDynamicList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsDynamicList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsDynamicList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsDynamicList_obj::__mClass,"__mClass");
};

#endif

hx::Class MbsDynamicList_obj::__mClass;

void MbsDynamicList_obj::__register()
{
	hx::Object *dummy = new MbsDynamicList_obj;
	MbsDynamicList_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mbs.io.MbsDynamicList","\x57","\x63","\xb4","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MbsDynamicList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsDynamicList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsDynamicList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsDynamicList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsDynamicList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsDynamicList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mbs
} // end namespace io