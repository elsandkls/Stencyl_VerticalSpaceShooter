// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_mbs_game_MbsCollisionPair
#include <com/stencyl/io/mbs/game/MbsCollisionPair.h>
#endif
#ifndef INCLUDED_mbs_core_ComposedType
#include <mbs/core/ComposedType.h>
#endif
#ifndef INCLUDED_mbs_core_MbsField
#include <mbs/core/MbsField.h>
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
#ifndef INCLUDED_mbs_io_MbsIO
#include <mbs/io/MbsIO.h>
#endif
#ifndef INCLUDED_mbs_io_MbsList
#include <mbs/io/MbsList.h>
#endif
#ifndef INCLUDED_mbs_io_MbsListBase
#include <mbs/io/MbsListBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_40_new,"com.stencyl.io.mbs.game.MbsCollisionPair","new",0x442bca73,"com.stencyl.io.mbs.game.MbsCollisionPair.new","com/stencyl/io/mbs/game/MbsCollisionPair.hx",40,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_35_getMbsType,"com.stencyl.io.mbs.game.MbsCollisionPair","getMbsType",0x192f05af,"com.stencyl.io.mbs.game.MbsCollisionPair.getMbsType","com/stencyl/io/mbs/game/MbsCollisionPair.hx",35,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_45_allocateNew,"com.stencyl.io.mbs.game.MbsCollisionPair","allocateNew",0x849a0eb6,"com.stencyl.io.mbs.game.MbsCollisionPair.allocateNew","com/stencyl/io/mbs/game/MbsCollisionPair.hx",45,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_50_getGroup1,"com.stencyl.io.mbs.game.MbsCollisionPair","getGroup1",0xe3a5f79b,"com.stencyl.io.mbs.game.MbsCollisionPair.getGroup1","com/stencyl/io/mbs/game/MbsCollisionPair.hx",50,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_55_setGroup1,"com.stencyl.io.mbs.game.MbsCollisionPair","setGroup1",0xc6f6e3a7,"com.stencyl.io.mbs.game.MbsCollisionPair.setGroup1","com/stencyl/io/mbs/game/MbsCollisionPair.hx",55,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_60_getGroup2,"com.stencyl.io.mbs.game.MbsCollisionPair","getGroup2",0xe3a5f79c,"com.stencyl.io.mbs.game.MbsCollisionPair.getGroup2","com/stencyl/io/mbs/game/MbsCollisionPair.hx",60,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_65_setGroup2,"com.stencyl.io.mbs.game.MbsCollisionPair","setGroup2",0xc6f6e3a8,"com.stencyl.io.mbs.game.MbsCollisionPair.setGroup2","com/stencyl/io/mbs/game/MbsCollisionPair.hx",65,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_21_initializeType,"com.stencyl.io.mbs.game.MbsCollisionPair","initializeType",0xd063a0f7,"com.stencyl.io.mbs.game.MbsCollisionPair.initializeType","com/stencyl/io/mbs/game/MbsCollisionPair.hx",21,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_18_initializeType,"com.stencyl.io.mbs.game.MbsCollisionPair","initializeType",0xd063a0f7,"com.stencyl.io.mbs.game.MbsCollisionPair.initializeType","com/stencyl/io/mbs/game/MbsCollisionPair.hx",18,0x153b98bc)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1229a02a24d5b3_30_new_MbsCollisionPair_list,"com.stencyl.io.mbs.game.MbsCollisionPair","new_MbsCollisionPair_list",0xbcd10003,"com.stencyl.io.mbs.game.MbsCollisionPair.new_MbsCollisionPair_list","com/stencyl/io/mbs/game/MbsCollisionPair.hx",30,0x153b98bc)
namespace com{
namespace stencyl{
namespace io{
namespace mbs{
namespace game{

void MbsCollisionPair_obj::__construct(::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_40_new)
HXDLIN(  40)		super::__construct(data);
            	}

Dynamic MbsCollisionPair_obj::__CreateEmpty() { return new MbsCollisionPair_obj; }

void *MbsCollisionPair_obj::_hx_vtable = 0;

Dynamic MbsCollisionPair_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsCollisionPair_obj > _hx_result = new MbsCollisionPair_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MbsCollisionPair_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17b72d64) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x17b72d64;
	} else {
		return inClassId==(int)0x2f706e8d;
	}
}

 ::mbs::core::MbsType MbsCollisionPair_obj::getMbsType(){
            	HX_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_35_getMbsType)
HXDLIN(  35)		return ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR;
            	}


void MbsCollisionPair_obj::allocateNew(){
            	HX_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_45_allocateNew)
HXDLIN(  45)		::Dynamic _hx_tmp = this->data;
HXDLIN(  45)		this->setAddress(::mbs::io::MbsIO_obj::allocate(_hx_tmp,::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR->getSize()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCollisionPair_obj,allocateNew,(void))

int MbsCollisionPair_obj::getGroup1(){
            	HX_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_50_getGroup1)
HXDLIN(  50)		::Dynamic _hx_tmp = this->data;
HXDLIN(  50)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::group1->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCollisionPair_obj,getGroup1,return )

void MbsCollisionPair_obj::setGroup1(int _val){
            	HX_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_55_setGroup1)
HXDLIN(  55)		::Dynamic _hx_tmp = this->data;
HXDLIN(  55)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::group1->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCollisionPair_obj,setGroup1,(void))

int MbsCollisionPair_obj::getGroup2(){
            	HX_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_60_getGroup2)
HXDLIN(  60)		::Dynamic _hx_tmp = this->data;
HXDLIN(  60)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::group2->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCollisionPair_obj,getGroup2,return )

void MbsCollisionPair_obj::setGroup2(int _val){
            	HX_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_65_setGroup2)
HXDLIN(  65)		::Dynamic _hx_tmp = this->data;
HXDLIN(  65)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::group2->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCollisionPair_obj,setGroup2,(void))

 ::mbs::core::MbsField MbsCollisionPair_obj::group1;

 ::mbs::core::MbsField MbsCollisionPair_obj::group2;

 ::mbs::core::ComposedType MbsCollisionPair_obj::MBS_COLLISION_PAIR;

void MbsCollisionPair_obj::initializeType(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::mbs::core::MbsObject _hx_run(::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_21_initializeType)
HXLINE(  21)			return  ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::__alloc( HX_CTX ,data);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_18_initializeType)
HXLINE(  19)		if (hx::IsNotNull( ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR )) {
HXLINE(  19)			return;
            		}
HXLINE(  20)		::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR =  ::mbs::core::ComposedType_obj::__alloc( HX_CTX ,HX_("MbsCollisionPair",6e,1b,24,d8));
HXLINE(  21)		::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR->setInstantiator( ::Dynamic(new _hx_Closure_0()));
HXLINE(  23)		::com::stencyl::io::mbs::game::MbsCollisionPair_obj::group1 = ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR->createField(HX_("group1",12,24,28,1c),::mbs::core::MbsTypes_obj::INTEGER);
HXLINE(  24)		::com::stencyl::io::mbs::game::MbsCollisionPair_obj::group2 = ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR->createField(HX_("group2",13,24,28,1c),::mbs::core::MbsTypes_obj::INTEGER);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MbsCollisionPair_obj,initializeType,(void))

 ::mbs::io::MbsList MbsCollisionPair_obj::new_MbsCollisionPair_list(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_9f1229a02a24d5b3_30_new_MbsCollisionPair_list)
HXDLIN(  30)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR;
HXDLIN(  30)		return  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::__alloc( HX_CTX ,data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MbsCollisionPair_obj,new_MbsCollisionPair_list,return )


hx::ObjectPtr< MbsCollisionPair_obj > MbsCollisionPair_obj::__new(::Dynamic data) {
	hx::ObjectPtr< MbsCollisionPair_obj > __this = new MbsCollisionPair_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< MbsCollisionPair_obj > MbsCollisionPair_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic data) {
	MbsCollisionPair_obj *__this = (MbsCollisionPair_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsCollisionPair_obj), true, "com.stencyl.io.mbs.game.MbsCollisionPair"));
	*(void **)__this = MbsCollisionPair_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

MbsCollisionPair_obj::MbsCollisionPair_obj()
{
}

hx::Val MbsCollisionPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getGroup1") ) { return hx::Val( getGroup1_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGroup1") ) { return hx::Val( setGroup1_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGroup2") ) { return hx::Val( getGroup2_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGroup2") ) { return hx::Val( setGroup2_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMbsType") ) { return hx::Val( getMbsType_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocateNew") ) { return hx::Val( allocateNew_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MbsCollisionPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"group1") ) { outValue = ( group1 ); return true; }
		if (HX_FIELD_EQ(inName,"group2") ) { outValue = ( group2 ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeType") ) { outValue = initializeType_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MBS_COLLISION_PAIR") ) { outValue = ( MBS_COLLISION_PAIR ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"new_MbsCollisionPair_list") ) { outValue = new_MbsCollisionPair_list_dyn(); return true; }
	}
	return false;
}

bool MbsCollisionPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"group1") ) { group1=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		if (HX_FIELD_EQ(inName,"group2") ) { group2=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MBS_COLLISION_PAIR") ) { MBS_COLLISION_PAIR=ioValue.Cast<  ::mbs::core::ComposedType >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MbsCollisionPair_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MbsCollisionPair_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCollisionPair_obj::group1,HX_HCSTRING("group1","\x12","\x24","\x28","\x1c")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCollisionPair_obj::group2,HX_HCSTRING("group2","\x13","\x24","\x28","\x1c")},
	{hx::fsObject /*::mbs::core::ComposedType*/ ,(void *) &MbsCollisionPair_obj::MBS_COLLISION_PAIR,HX_HCSTRING("MBS_COLLISION_PAIR","\x68","\xd9","\x85","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MbsCollisionPair_obj_sMemberFields[] = {
	HX_HCSTRING("getMbsType","\x62","\x47","\xf5","\xa1"),
	HX_HCSTRING("allocateNew","\xa3","\x49","\x4d","\xa9"),
	HX_HCSTRING("getGroup1","\x48","\xad","\x7e","\x98"),
	HX_HCSTRING("setGroup1","\x54","\x99","\xcf","\x7b"),
	HX_HCSTRING("getGroup2","\x49","\xad","\x7e","\x98"),
	HX_HCSTRING("setGroup2","\x55","\x99","\xcf","\x7b"),
	::String(null()) };

static void MbsCollisionPair_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsCollisionPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MbsCollisionPair_obj::group1,"group1");
	HX_MARK_MEMBER_NAME(MbsCollisionPair_obj::group2,"group2");
	HX_MARK_MEMBER_NAME(MbsCollisionPair_obj::MBS_COLLISION_PAIR,"MBS_COLLISION_PAIR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsCollisionPair_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsCollisionPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MbsCollisionPair_obj::group1,"group1");
	HX_VISIT_MEMBER_NAME(MbsCollisionPair_obj::group2,"group2");
	HX_VISIT_MEMBER_NAME(MbsCollisionPair_obj::MBS_COLLISION_PAIR,"MBS_COLLISION_PAIR");
};

#endif

hx::Class MbsCollisionPair_obj::__mClass;

static ::String MbsCollisionPair_obj_sStaticFields[] = {
	HX_HCSTRING("group1","\x12","\x24","\x28","\x1c"),
	HX_HCSTRING("group2","\x13","\x24","\x28","\x1c"),
	HX_HCSTRING("MBS_COLLISION_PAIR","\x68","\xd9","\x85","\xdf"),
	HX_HCSTRING("initializeType","\x2a","\x38","\x98","\x50"),
	HX_HCSTRING("new_MbsCollisionPair_list","\xb0","\x9f","\xe8","\x83"),
	::String(null())
};

void MbsCollisionPair_obj::__register()
{
	hx::Object *dummy = new MbsCollisionPair_obj;
	MbsCollisionPair_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.mbs.game.MbsCollisionPair","\x01","\x15","\x5b","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MbsCollisionPair_obj::__GetStatic;
	__mClass->mSetStaticField = &MbsCollisionPair_obj::__SetStatic;
	__mClass->mMarkFunc = MbsCollisionPair_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MbsCollisionPair_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsCollisionPair_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsCollisionPair_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsCollisionPair_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsCollisionPair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsCollisionPair_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace game
