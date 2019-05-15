// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_mbs_game_MbsCollisionGroup
#include <com/stencyl/io/mbs/game/MbsCollisionGroup.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e1e1e1b194df185f_40_new,"com.stencyl.io.mbs.game.MbsCollisionGroup","new",0xc6c0816a,"com.stencyl.io.mbs.game.MbsCollisionGroup.new","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",40,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_35_getMbsType,"com.stencyl.io.mbs.game.MbsCollisionGroup","getMbsType",0xdde92b98,"com.stencyl.io.mbs.game.MbsCollisionGroup.getMbsType","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",35,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_45_allocateNew,"com.stencyl.io.mbs.game.MbsCollisionGroup","allocateNew",0xe2c114ad,"com.stencyl.io.mbs.game.MbsCollisionGroup.allocateNew","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",45,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_50_getId,"com.stencyl.io.mbs.game.MbsCollisionGroup","getId",0x5123199b,"com.stencyl.io.mbs.game.MbsCollisionGroup.getId","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",50,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_55_setId,"com.stencyl.io.mbs.game.MbsCollisionGroup","setId",0x39f20fa7,"com.stencyl.io.mbs.game.MbsCollisionGroup.setId","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",55,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_60_getName,"com.stencyl.io.mbs.game.MbsCollisionGroup","getName",0x369d200b,"com.stencyl.io.mbs.game.MbsCollisionGroup.getName","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",60,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_65_setName,"com.stencyl.io.mbs.game.MbsCollisionGroup","setName",0x299eb117,"com.stencyl.io.mbs.game.MbsCollisionGroup.setName","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",65,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_21_initializeType,"com.stencyl.io.mbs.game.MbsCollisionGroup","initializeType",0x75f16f60,"com.stencyl.io.mbs.game.MbsCollisionGroup.initializeType","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",21,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_18_initializeType,"com.stencyl.io.mbs.game.MbsCollisionGroup","initializeType",0x75f16f60,"com.stencyl.io.mbs.game.MbsCollisionGroup.initializeType","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",18,0x8adcd807)
HX_LOCAL_STACK_FRAME(_hx_pos_e1e1e1b194df185f_30_new_MbsCollisionGroup_list,"com.stencyl.io.mbs.game.MbsCollisionGroup","new_MbsCollisionGroup_list",0xa535c267,"com.stencyl.io.mbs.game.MbsCollisionGroup.new_MbsCollisionGroup_list","com/stencyl/io/mbs/game/MbsCollisionGroup.hx",30,0x8adcd807)
namespace com{
namespace stencyl{
namespace io{
namespace mbs{
namespace game{

void MbsCollisionGroup_obj::__construct(::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_e1e1e1b194df185f_40_new)
HXDLIN(  40)		super::__construct(data);
            	}

Dynamic MbsCollisionGroup_obj::__CreateEmpty() { return new MbsCollisionGroup_obj; }

void *MbsCollisionGroup_obj::_hx_vtable = 0;

Dynamic MbsCollisionGroup_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsCollisionGroup_obj > _hx_result = new MbsCollisionGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MbsCollisionGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17b72d64) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x17b72d64;
	} else {
		return inClassId==(int)0x2f96456c;
	}
}

 ::mbs::core::MbsType MbsCollisionGroup_obj::getMbsType(){
            	HX_STACKFRAME(&_hx_pos_e1e1e1b194df185f_35_getMbsType)
HXDLIN(  35)		return ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP;
            	}


void MbsCollisionGroup_obj::allocateNew(){
            	HX_STACKFRAME(&_hx_pos_e1e1e1b194df185f_45_allocateNew)
HXDLIN(  45)		::Dynamic _hx_tmp = this->data;
HXDLIN(  45)		this->setAddress(::mbs::io::MbsIO_obj::allocate(_hx_tmp,::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP->getSize()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCollisionGroup_obj,allocateNew,(void))

int MbsCollisionGroup_obj::getId(){
            	HX_STACKFRAME(&_hx_pos_e1e1e1b194df185f_50_getId)
HXDLIN(  50)		::Dynamic _hx_tmp = this->data;
HXDLIN(  50)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::id->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCollisionGroup_obj,getId,return )

void MbsCollisionGroup_obj::setId(int _val){
            	HX_STACKFRAME(&_hx_pos_e1e1e1b194df185f_55_setId)
HXDLIN(  55)		::Dynamic _hx_tmp = this->data;
HXDLIN(  55)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::id->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCollisionGroup_obj,setId,(void))

::String MbsCollisionGroup_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_e1e1e1b194df185f_60_getName)
HXDLIN(  60)		::Dynamic _hx_tmp = this->data;
HXDLIN(  60)		return ::mbs::io::MbsIO_obj::readString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::name->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCollisionGroup_obj,getName,return )

void MbsCollisionGroup_obj::setName(::String _val){
            	HX_STACKFRAME(&_hx_pos_e1e1e1b194df185f_65_setName)
HXDLIN(  65)		::Dynamic _hx_tmp = this->data;
HXDLIN(  65)		::mbs::io::MbsIO_obj::writeString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::name->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCollisionGroup_obj,setName,(void))

 ::mbs::core::MbsField MbsCollisionGroup_obj::id;

 ::mbs::core::MbsField MbsCollisionGroup_obj::name;

 ::mbs::core::ComposedType MbsCollisionGroup_obj::MBS_COLLISION_GROUP;

void MbsCollisionGroup_obj::initializeType(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::mbs::core::MbsObject _hx_run(::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_e1e1e1b194df185f_21_initializeType)
HXLINE(  21)			return  ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::__alloc( HX_CTX ,data);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_e1e1e1b194df185f_18_initializeType)
HXLINE(  19)		if (hx::IsNotNull( ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP )) {
HXLINE(  19)			return;
            		}
HXLINE(  20)		::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP =  ::mbs::core::ComposedType_obj::__alloc( HX_CTX ,HX_("MbsCollisionGroup",6b,dd,19,24));
HXLINE(  21)		::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP->setInstantiator( ::Dynamic(new _hx_Closure_0()));
HXLINE(  23)		::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::id = ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP->createField(HX_("id",db,5b,00,00),::mbs::core::MbsTypes_obj::INTEGER);
HXLINE(  24)		::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::name = ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP->createField(HX_("name",4b,72,ff,48),::mbs::core::MbsTypes_obj::STRING);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MbsCollisionGroup_obj,initializeType,(void))

 ::mbs::io::MbsList MbsCollisionGroup_obj::new_MbsCollisionGroup_list(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_e1e1e1b194df185f_30_new_MbsCollisionGroup_list)
HXDLIN(  30)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP;
HXDLIN(  30)		return  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::__alloc( HX_CTX ,data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MbsCollisionGroup_obj,new_MbsCollisionGroup_list,return )


hx::ObjectPtr< MbsCollisionGroup_obj > MbsCollisionGroup_obj::__new(::Dynamic data) {
	hx::ObjectPtr< MbsCollisionGroup_obj > __this = new MbsCollisionGroup_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< MbsCollisionGroup_obj > MbsCollisionGroup_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic data) {
	MbsCollisionGroup_obj *__this = (MbsCollisionGroup_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsCollisionGroup_obj), true, "com.stencyl.io.mbs.game.MbsCollisionGroup"));
	*(void **)__this = MbsCollisionGroup_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

MbsCollisionGroup_obj::MbsCollisionGroup_obj()
{
}

hx::Val MbsCollisionGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return hx::Val( getId_dyn() ); }
		if (HX_FIELD_EQ(inName,"setId") ) { return hx::Val( setId_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		if (HX_FIELD_EQ(inName,"setName") ) { return hx::Val( setName_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMbsType") ) { return hx::Val( getMbsType_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocateNew") ) { return hx::Val( allocateNew_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MbsCollisionGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { outValue = ( id ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { outValue = ( name ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeType") ) { outValue = initializeType_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MBS_COLLISION_GROUP") ) { outValue = ( MBS_COLLISION_GROUP ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"new_MbsCollisionGroup_list") ) { outValue = new_MbsCollisionGroup_list_dyn(); return true; }
	}
	return false;
}

bool MbsCollisionGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MBS_COLLISION_GROUP") ) { MBS_COLLISION_GROUP=ioValue.Cast<  ::mbs::core::ComposedType >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MbsCollisionGroup_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MbsCollisionGroup_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCollisionGroup_obj::id,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCollisionGroup_obj::name,HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::mbs::core::ComposedType*/ ,(void *) &MbsCollisionGroup_obj::MBS_COLLISION_GROUP,HX_HCSTRING("MBS_COLLISION_GROUP","\x11","\x5a","\x3e","\x92")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MbsCollisionGroup_obj_sMemberFields[] = {
	HX_HCSTRING("getMbsType","\x62","\x47","\xf5","\xa1"),
	HX_HCSTRING("allocateNew","\xa3","\x49","\x4d","\xa9"),
	HX_HCSTRING("getId","\x11","\x92","\x60","\x91"),
	HX_HCSTRING("setId","\x1d","\x88","\x2f","\x7a"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("setName","\x0d","\xb3","\x83","\x0e"),
	::String(null()) };

static void MbsCollisionGroup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsCollisionGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MbsCollisionGroup_obj::id,"id");
	HX_MARK_MEMBER_NAME(MbsCollisionGroup_obj::name,"name");
	HX_MARK_MEMBER_NAME(MbsCollisionGroup_obj::MBS_COLLISION_GROUP,"MBS_COLLISION_GROUP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsCollisionGroup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsCollisionGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MbsCollisionGroup_obj::id,"id");
	HX_VISIT_MEMBER_NAME(MbsCollisionGroup_obj::name,"name");
	HX_VISIT_MEMBER_NAME(MbsCollisionGroup_obj::MBS_COLLISION_GROUP,"MBS_COLLISION_GROUP");
};

#endif

hx::Class MbsCollisionGroup_obj::__mClass;

static ::String MbsCollisionGroup_obj_sStaticFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("MBS_COLLISION_GROUP","\x11","\x5a","\x3e","\x92"),
	HX_HCSTRING("initializeType","\x2a","\x38","\x98","\x50"),
	HX_HCSTRING("new_MbsCollisionGroup_list","\x31","\x92","\xcb","\x4c"),
	::String(null())
};

void MbsCollisionGroup_obj::__register()
{
	hx::Object *dummy = new MbsCollisionGroup_obj;
	MbsCollisionGroup_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.mbs.game.MbsCollisionGroup","\x78","\x44","\xfd","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MbsCollisionGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &MbsCollisionGroup_obj::__SetStatic;
	__mClass->mMarkFunc = MbsCollisionGroup_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MbsCollisionGroup_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsCollisionGroup_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsCollisionGroup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsCollisionGroup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsCollisionGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsCollisionGroup_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace game