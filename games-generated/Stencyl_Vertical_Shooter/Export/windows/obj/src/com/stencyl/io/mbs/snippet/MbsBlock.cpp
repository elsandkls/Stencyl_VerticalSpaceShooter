// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_mbs_snippet_MbsBlock
#include <com/stencyl/io/mbs/snippet/MbsBlock.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d4ad96c796989b4a_42_new,"com.stencyl.io.mbs.snippet.MbsBlock","new",0x19fd99fb,"com.stencyl.io.mbs.snippet.MbsBlock.new","com/stencyl/io/mbs/snippet/MbsBlock.hx",42,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_37_getMbsType,"com.stencyl.io.mbs.snippet.MbsBlock","getMbsType",0x3c91b727,"com.stencyl.io.mbs.snippet.MbsBlock.getMbsType","com/stencyl/io/mbs/snippet/MbsBlock.hx",37,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_47_allocateNew,"com.stencyl.io.mbs.snippet.MbsBlock","allocateNew",0x5792a63e,"com.stencyl.io.mbs.snippet.MbsBlock.allocateNew","com/stencyl/io/mbs/snippet/MbsBlock.hx",47,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_52_getType,"com.stencyl.io.mbs.snippet.MbsBlock","getType",0x8b69d58b,"com.stencyl.io.mbs.snippet.MbsBlock.getType","com/stencyl/io/mbs/snippet/MbsBlock.hx",52,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_57_setType,"com.stencyl.io.mbs.snippet.MbsBlock","setType",0x7e6b6697,"com.stencyl.io.mbs.snippet.MbsBlock.setType","com/stencyl/io/mbs/snippet/MbsBlock.hx",57,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_62_getId,"com.stencyl.io.mbs.snippet.MbsBlock","getId",0xc044386c,"com.stencyl.io.mbs.snippet.MbsBlock.getId","com/stencyl/io/mbs/snippet/MbsBlock.hx",62,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_67_setId,"com.stencyl.io.mbs.snippet.MbsBlock","setId",0xa9132e78,"com.stencyl.io.mbs.snippet.MbsBlock.setId","com/stencyl/io/mbs/snippet/MbsBlock.hx",67,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_72_getBlockID,"com.stencyl.io.mbs.snippet.MbsBlock","getBlockID",0x2efc5837,"com.stencyl.io.mbs.snippet.MbsBlock.getBlockID","com/stencyl/io/mbs/snippet/MbsBlock.hx",72,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_77_setBlockID,"com.stencyl.io.mbs.snippet.MbsBlock","setBlockID",0x3279f6ab,"com.stencyl.io.mbs.snippet.MbsBlock.setBlockID","com/stencyl/io/mbs/snippet/MbsBlock.hx",77,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_22_initializeType,"com.stencyl.io.mbs.snippet.MbsBlock","initializeType",0x51886e6f,"com.stencyl.io.mbs.snippet.MbsBlock.initializeType","com/stencyl/io/mbs/snippet/MbsBlock.hx",22,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_19_initializeType,"com.stencyl.io.mbs.snippet.MbsBlock","initializeType",0x51886e6f,"com.stencyl.io.mbs.snippet.MbsBlock.initializeType","com/stencyl/io/mbs/snippet/MbsBlock.hx",19,0x93b013b4)
HX_LOCAL_STACK_FRAME(_hx_pos_d4ad96c796989b4a_32_new_MbsBlock_list,"com.stencyl.io.mbs.snippet.MbsBlock","new_MbsBlock_list",0xae02404a,"com.stencyl.io.mbs.snippet.MbsBlock.new_MbsBlock_list","com/stencyl/io/mbs/snippet/MbsBlock.hx",32,0x93b013b4)
namespace com{
namespace stencyl{
namespace io{
namespace mbs{
namespace snippet{

void MbsBlock_obj::__construct(::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_42_new)
HXDLIN(  42)		super::__construct(data);
            	}

Dynamic MbsBlock_obj::__CreateEmpty() { return new MbsBlock_obj; }

void *MbsBlock_obj::_hx_vtable = 0;

Dynamic MbsBlock_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsBlock_obj > _hx_result = new MbsBlock_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MbsBlock_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0d1c4ae7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0d1c4ae7;
	} else {
		return inClassId==(int)0x17b72d64;
	}
}

 ::mbs::core::MbsType MbsBlock_obj::getMbsType(){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_37_getMbsType)
HXDLIN(  37)		return ::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK;
            	}


void MbsBlock_obj::allocateNew(){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_47_allocateNew)
HXDLIN(  47)		::Dynamic _hx_tmp = this->data;
HXDLIN(  47)		this->setAddress(::mbs::io::MbsIO_obj::allocate(_hx_tmp,::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK->getSize()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsBlock_obj,allocateNew,(void))

::String MbsBlock_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_52_getType)
HXDLIN(  52)		::Dynamic _hx_tmp = this->data;
HXDLIN(  52)		return ::mbs::io::MbsIO_obj::readString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::snippet::MbsBlock_obj::type->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsBlock_obj,getType,return )

void MbsBlock_obj::setType(::String _val){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_57_setType)
HXDLIN(  57)		::Dynamic _hx_tmp = this->data;
HXDLIN(  57)		::mbs::io::MbsIO_obj::writeString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::snippet::MbsBlock_obj::type->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsBlock_obj,setType,(void))

int MbsBlock_obj::getId(){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_62_getId)
HXDLIN(  62)		::Dynamic _hx_tmp = this->data;
HXDLIN(  62)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::snippet::MbsBlock_obj::id->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsBlock_obj,getId,return )

void MbsBlock_obj::setId(int _val){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_67_setId)
HXDLIN(  67)		::Dynamic _hx_tmp = this->data;
HXDLIN(  67)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::snippet::MbsBlock_obj::id->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsBlock_obj,setId,(void))

int MbsBlock_obj::getBlockID(){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_72_getBlockID)
HXDLIN(  72)		::Dynamic _hx_tmp = this->data;
HXDLIN(  72)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::snippet::MbsBlock_obj::blockID->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsBlock_obj,getBlockID,return )

void MbsBlock_obj::setBlockID(int _val){
            	HX_STACKFRAME(&_hx_pos_d4ad96c796989b4a_77_setBlockID)
HXDLIN(  77)		::Dynamic _hx_tmp = this->data;
HXDLIN(  77)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::snippet::MbsBlock_obj::blockID->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsBlock_obj,setBlockID,(void))

 ::mbs::core::MbsField MbsBlock_obj::type;

 ::mbs::core::MbsField MbsBlock_obj::id;

 ::mbs::core::MbsField MbsBlock_obj::blockID;

 ::mbs::core::ComposedType MbsBlock_obj::MBS_BLOCK;

void MbsBlock_obj::initializeType(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::mbs::core::MbsObject _hx_run(::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_d4ad96c796989b4a_22_initializeType)
HXLINE(  22)			return  ::com::stencyl::io::mbs::snippet::MbsBlock_obj::__alloc( HX_CTX ,data);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_d4ad96c796989b4a_19_initializeType)
HXLINE(  20)		if (hx::IsNotNull( ::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK )) {
HXLINE(  20)			return;
            		}
HXLINE(  21)		::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK =  ::mbs::core::ComposedType_obj::__alloc( HX_CTX ,HX_("MbsBlock",0f,2d,98,62));
HXLINE(  22)		::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK->setInstantiator( ::Dynamic(new _hx_Closure_0()));
HXLINE(  24)		::com::stencyl::io::mbs::snippet::MbsBlock_obj::type = ::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK->createField(HX_("type",ba,f2,08,4d),::mbs::core::MbsTypes_obj::STRING);
HXLINE(  25)		::com::stencyl::io::mbs::snippet::MbsBlock_obj::id = ::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK->createField(HX_("id",db,5b,00,00),::mbs::core::MbsTypes_obj::INTEGER);
HXLINE(  26)		::com::stencyl::io::mbs::snippet::MbsBlock_obj::blockID = ::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK->createField(HX_("blockID",68,62,fe,44),::mbs::core::MbsTypes_obj::INTEGER);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MbsBlock_obj,initializeType,(void))

 ::mbs::io::MbsList MbsBlock_obj::new_MbsBlock_list(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_d4ad96c796989b4a_32_new_MbsBlock_list)
HXDLIN(  32)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::snippet::MbsBlock_obj::MBS_BLOCK;
HXDLIN(  32)		return  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::snippet::MbsBlock_obj::__alloc( HX_CTX ,data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MbsBlock_obj,new_MbsBlock_list,return )


hx::ObjectPtr< MbsBlock_obj > MbsBlock_obj::__new(::Dynamic data) {
	hx::ObjectPtr< MbsBlock_obj > __this = new MbsBlock_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< MbsBlock_obj > MbsBlock_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic data) {
	MbsBlock_obj *__this = (MbsBlock_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsBlock_obj), true, "com.stencyl.io.mbs.snippet.MbsBlock"));
	*(void **)__this = MbsBlock_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

MbsBlock_obj::MbsBlock_obj()
{
}

hx::Val MbsBlock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return hx::Val( getId_dyn() ); }
		if (HX_FIELD_EQ(inName,"setId") ) { return hx::Val( setId_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"setType") ) { return hx::Val( setType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMbsType") ) { return hx::Val( getMbsType_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBlockID") ) { return hx::Val( getBlockID_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBlockID") ) { return hx::Val( setBlockID_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocateNew") ) { return hx::Val( allocateNew_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MbsBlock_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { outValue = ( id ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { outValue = ( type ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blockID") ) { outValue = ( blockID ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MBS_BLOCK") ) { outValue = ( MBS_BLOCK ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeType") ) { outValue = initializeType_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"new_MbsBlock_list") ) { outValue = new_MbsBlock_list_dyn(); return true; }
	}
	return false;
}

bool MbsBlock_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blockID") ) { blockID=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MBS_BLOCK") ) { MBS_BLOCK=ioValue.Cast<  ::mbs::core::ComposedType >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MbsBlock_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MbsBlock_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsBlock_obj::type,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsBlock_obj::id,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsBlock_obj::blockID,HX_HCSTRING("blockID","\x68","\x62","\xfe","\x44")},
	{hx::fsObject /*::mbs::core::ComposedType*/ ,(void *) &MbsBlock_obj::MBS_BLOCK,HX_HCSTRING("MBS_BLOCK","\x4c","\x76","\xe5","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MbsBlock_obj_sMemberFields[] = {
	HX_HCSTRING("getMbsType","\x62","\x47","\xf5","\xa1"),
	HX_HCSTRING("allocateNew","\xa3","\x49","\x4d","\xa9"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("setType","\x7c","\x33","\x8d","\x12"),
	HX_HCSTRING("getId","\x11","\x92","\x60","\x91"),
	HX_HCSTRING("setId","\x1d","\x88","\x2f","\x7a"),
	HX_HCSTRING("getBlockID","\x72","\xe8","\x5f","\x94"),
	HX_HCSTRING("setBlockID","\xe6","\x86","\xdd","\x97"),
	::String(null()) };

static void MbsBlock_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsBlock_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MbsBlock_obj::type,"type");
	HX_MARK_MEMBER_NAME(MbsBlock_obj::id,"id");
	HX_MARK_MEMBER_NAME(MbsBlock_obj::blockID,"blockID");
	HX_MARK_MEMBER_NAME(MbsBlock_obj::MBS_BLOCK,"MBS_BLOCK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsBlock_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsBlock_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MbsBlock_obj::type,"type");
	HX_VISIT_MEMBER_NAME(MbsBlock_obj::id,"id");
	HX_VISIT_MEMBER_NAME(MbsBlock_obj::blockID,"blockID");
	HX_VISIT_MEMBER_NAME(MbsBlock_obj::MBS_BLOCK,"MBS_BLOCK");
};

#endif

hx::Class MbsBlock_obj::__mClass;

static ::String MbsBlock_obj_sStaticFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("blockID","\x68","\x62","\xfe","\x44"),
	HX_HCSTRING("MBS_BLOCK","\x4c","\x76","\xe5","\xdb"),
	HX_HCSTRING("initializeType","\x2a","\x38","\x98","\x50"),
	HX_HCSTRING("new_MbsBlock_list","\x6f","\xfd","\xd0","\x99"),
	::String(null())
};

void MbsBlock_obj::__register()
{
	hx::Object *dummy = new MbsBlock_obj;
	MbsBlock_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.mbs.snippet.MbsBlock","\x89","\x80","\x1c","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MbsBlock_obj::__GetStatic;
	__mClass->mSetStaticField = &MbsBlock_obj::__SetStatic;
	__mClass->mMarkFunc = MbsBlock_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MbsBlock_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsBlock_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsBlock_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsBlock_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsBlock_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsBlock_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace snippet
