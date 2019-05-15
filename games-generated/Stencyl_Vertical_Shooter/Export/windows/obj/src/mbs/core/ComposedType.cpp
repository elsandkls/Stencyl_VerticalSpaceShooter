// Generated by Haxe 3.4.7
#include <hxcpp.h>

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
#ifndef INCLUDED_mbs_io_MbsIO
#include <mbs/io/MbsIO.h>
#endif
#ifndef INCLUDED_mbs_io_MbsList
#include <mbs/io/MbsList.h>
#endif
#ifndef INCLUDED_mbs_io_MbsListBase
#include <mbs/io/MbsListBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc7dac805d910911_14_new,"mbs.core.ComposedType","new",0x8ef024fd,"mbs.core.ComposedType.new","mbs/core/ComposedType.hx",14,0xe3afd8b3)
HX_LOCAL_STACK_FRAME(_hx_pos_cc7dac805d910911_20_inherit,"mbs.core.ComposedType","inherit",0x49948b18,"mbs.core.ComposedType.inherit","mbs/core/ComposedType.hx",20,0xe3afd8b3)
HX_LOCAL_STACK_FRAME(_hx_pos_cc7dac805d910911_26_createField,"mbs.core.ComposedType","createField",0x492c85bb,"mbs.core.ComposedType.createField","mbs/core/ComposedType.hx",26,0xe3afd8b3)
HX_LOCAL_STACK_FRAME(_hx_pos_cc7dac805d910911_35_getParent,"mbs.core.ComposedType","getParent",0x6111b6bd,"mbs.core.ComposedType.getParent","mbs/core/ComposedType.hx",35,0xe3afd8b3)
HX_LOCAL_STACK_FRAME(_hx_pos_cc7dac805d910911_40_getFields,"mbs.core.ComposedType","getFields",0xf422400c,"mbs.core.ComposedType.getFields","mbs/core/ComposedType.hx",40,0xe3afd8b3)
HX_LOCAL_STACK_FRAME(_hx_pos_cc7dac805d910911_47_setInstantiator,"mbs.core.ComposedType","setInstantiator",0x06bfba1d,"mbs.core.ComposedType.setInstantiator","mbs/core/ComposedType.hx",47,0xe3afd8b3)
HX_LOCAL_STACK_FRAME(_hx_pos_cc7dac805d910911_52_createInstance,"mbs.core.ComposedType","createInstance",0xcd5e0534,"mbs.core.ComposedType.createInstance","mbs/core/ComposedType.hx",52,0xe3afd8b3)
HX_LOCAL_STACK_FRAME(_hx_pos_cc7dac805d910911_60_createList,"mbs.core.ComposedType","createList",0xb887067d,"mbs.core.ComposedType.createList","mbs/core/ComposedType.hx",60,0xe3afd8b3)
namespace mbs{
namespace core{

void ComposedType_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_cc7dac805d910911_14_new)
HXLINE(  15)		super::__construct(name,(int)0);
HXLINE(  16)		this->fields = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic ComposedType_obj::__CreateEmpty() { return new ComposedType_obj; }

void *ComposedType_obj::_hx_vtable = 0;

Dynamic ComposedType_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComposedType_obj > _hx_result = new ComposedType_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComposedType_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x22c1a4e1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x22c1a4e1;
	} else {
		return inClassId==(int)0x7a6deafb;
	}
}

void ComposedType_obj::inherit( ::mbs::core::ComposedType type){
            	HX_STACKFRAME(&_hx_pos_cc7dac805d910911_20_inherit)
HXLINE(  21)		this->parent = type;
HXLINE(  22)		this->size = type->getSize();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComposedType_obj,inherit,(void))

 ::mbs::core::MbsField ComposedType_obj::createField(::String name, ::mbs::core::MbsType type){
            	HX_GC_STACKFRAME(&_hx_pos_cc7dac805d910911_26_createField)
HXLINE(  27)		 ::mbs::core::MbsField newField =  ::mbs::core::MbsField_obj::__alloc( HX_CTX ,name,type,this->size);
HXLINE(  28)		this->fields->push(newField);
HXLINE(  29)		 ::mbs::core::ComposedType _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  29)		int _hx_tmp1 = _hx_tmp->size;
HXDLIN(  29)		_hx_tmp->size = (_hx_tmp1 + type->getSize());
HXLINE(  30)		return newField;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComposedType_obj,createField,return )

 ::mbs::core::ComposedType ComposedType_obj::getParent(){
            	HX_STACKFRAME(&_hx_pos_cc7dac805d910911_35_getParent)
HXDLIN(  35)		return this->parent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComposedType_obj,getParent,return )

::Array< ::Dynamic> ComposedType_obj::getFields(){
            	HX_STACKFRAME(&_hx_pos_cc7dac805d910911_40_getFields)
HXDLIN(  40)		return this->fields;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComposedType_obj,getFields,return )

void ComposedType_obj::setInstantiator( ::Dynamic instantiator){
            	HX_STACKFRAME(&_hx_pos_cc7dac805d910911_47_setInstantiator)
HXDLIN(  47)		this->instantiator = instantiator;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComposedType_obj,setInstantiator,(void))

 ::mbs::core::MbsObject ComposedType_obj::createInstance(::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_cc7dac805d910911_52_createInstance)
HXDLIN(  52)		if (hx::IsNotNull( this->instantiator )) {
HXLINE(  53)			return ( ( ::mbs::core::MbsObject)(this->instantiator(data)) );
            		}
            		else {
HXLINE(  55)			return this->super::createInstance(data);
            		}
HXLINE(  52)		return null();
            	}


 ::mbs::io::MbsList ComposedType_obj::createList(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_cc7dac805d910911_60_createList)
HXDLIN(  60)		return  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,hx::ObjectPtr<OBJ_>(this),this->createInstance(data));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComposedType_obj,createList,return )


hx::ObjectPtr< ComposedType_obj > ComposedType_obj::__new(::String name) {
	hx::ObjectPtr< ComposedType_obj > __this = new ComposedType_obj();
	__this->__construct(name);
	return __this;
}

hx::ObjectPtr< ComposedType_obj > ComposedType_obj::__alloc(hx::Ctx *_hx_ctx,::String name) {
	ComposedType_obj *__this = (ComposedType_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComposedType_obj), true, "mbs.core.ComposedType"));
	*(void **)__this = ComposedType_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

ComposedType_obj::ComposedType_obj()
{
}

void ComposedType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComposedType);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(fields,"fields");
	HX_MARK_MEMBER_NAME(instantiator,"instantiator");
	 ::mbs::core::MbsType_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComposedType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(fields,"fields");
	HX_VISIT_MEMBER_NAME(instantiator,"instantiator");
	 ::mbs::core::MbsType_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ComposedType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"fields") ) { return hx::Val( fields ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inherit") ) { return hx::Val( inherit_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getParent") ) { return hx::Val( getParent_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFields") ) { return hx::Val( getFields_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createList") ) { return hx::Val( createList_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createField") ) { return hx::Val( createField_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"instantiator") ) { return hx::Val( instantiator ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { return hx::Val( createInstance_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setInstantiator") ) { return hx::Val( setInstantiator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ComposedType_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::mbs::core::ComposedType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fields") ) { fields=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"instantiator") ) { instantiator=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComposedType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ComposedType_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::mbs::core::ComposedType*/ ,(int)offsetof(ComposedType_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ComposedType_obj,fields),HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ComposedType_obj,instantiator),HX_HCSTRING("instantiator","\x3e","\x9b","\x32","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ComposedType_obj_sStaticStorageInfo = 0;
#endif

static ::String ComposedType_obj_sMemberFields[] = {
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("inherit","\xfb","\x23","\x55","\x2e"),
	HX_HCSTRING("createField","\x1e","\xcc","\x0e","\x2a"),
	HX_HCSTRING("getParent","\x60","\x8e","\xd4","\x69"),
	HX_HCSTRING("getFields","\xaf","\x17","\xe5","\xfc"),
	HX_HCSTRING("instantiator","\x3e","\x9b","\x32","\xef"),
	HX_HCSTRING("setInstantiator","\x00","\x6e","\xe8","\x0d"),
	HX_HCSTRING("createInstance","\xb1","\x9e","\x1b","\xac"),
	HX_HCSTRING("createList","\x7a","\xdd","\x40","\x5a"),
	::String(null()) };

static void ComposedType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComposedType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComposedType_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComposedType_obj::__mClass,"__mClass");
};

#endif

hx::Class ComposedType_obj::__mClass;

void ComposedType_obj::__register()
{
	hx::Object *dummy = new ComposedType_obj;
	ComposedType_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mbs.core.ComposedType","\x8b","\xe2","\x68","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ComposedType_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ComposedType_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComposedType_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComposedType_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComposedType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComposedType_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mbs
} // end namespace core