// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
#ifndef INCLUDED_mbs_core_MbsType
#include <mbs/core/MbsType.h>
#endif
#ifndef INCLUDED_mbs_io_MbsIO
#include <mbs/io/MbsIO.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a1acec9c37fe8953_11_new,"mbs.core.MbsType","new",0x9609eb8b,"mbs.core.MbsType.new","mbs/core/MbsType.hx",11,0x5435a2a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a1acec9c37fe8953_18_getName,"mbs.core.MbsType","getName",0x581caeac,"mbs.core.MbsType.getName","mbs/core/MbsType.hx",18,0x5435a2a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a1acec9c37fe8953_23_getSize,"mbs.core.MbsType","getSize",0x5b70dd22,"mbs.core.MbsType.getSize","mbs/core/MbsType.hx",23,0x5435a2a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a1acec9c37fe8953_28_toString,"mbs.core.MbsType","toString",0x030f59a1,"mbs.core.MbsType.toString","mbs/core/MbsType.hx",28,0x5435a2a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a1acec9c37fe8953_33_createInstance,"mbs.core.MbsType","createInstance",0x61dccd66,"mbs.core.MbsType.createInstance","mbs/core/MbsType.hx",33,0x5435a2a5)
namespace mbs{
namespace core{

void MbsType_obj::__construct(::String name,int size){
            	HX_STACKFRAME(&_hx_pos_a1acec9c37fe8953_11_new)
HXLINE(  12)		this->name = name;
HXLINE(  13)		this->size = size;
            	}

Dynamic MbsType_obj::__CreateEmpty() { return new MbsType_obj; }

void *MbsType_obj::_hx_vtable = 0;

Dynamic MbsType_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsType_obj > _hx_result = new MbsType_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MbsType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a6deafb;
}

::String MbsType_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_a1acec9c37fe8953_18_getName)
HXDLIN(  18)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsType_obj,getName,return )

int MbsType_obj::getSize(){
            	HX_STACKFRAME(&_hx_pos_a1acec9c37fe8953_23_getSize)
HXDLIN(  23)		return this->size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsType_obj,getSize,return )

::String MbsType_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a1acec9c37fe8953_28_toString)
HXDLIN(  28)		return ((HX_("MbsType [name=",3f,6b,30,fd) + this->getName()) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsType_obj,toString,return )

 ::mbs::core::MbsObject MbsType_obj::createInstance(::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_a1acec9c37fe8953_33_createInstance)
HXDLIN(  33)		HX_STACK_DO_THROW((HX_("Can't create an instance of type ",b6,fd,53,50) + this->name));
HXDLIN(  33)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsType_obj,createInstance,return )


hx::ObjectPtr< MbsType_obj > MbsType_obj::__new(::String name,int size) {
	hx::ObjectPtr< MbsType_obj > __this = new MbsType_obj();
	__this->__construct(name,size);
	return __this;
}

hx::ObjectPtr< MbsType_obj > MbsType_obj::__alloc(hx::Ctx *_hx_ctx,::String name,int size) {
	MbsType_obj *__this = (MbsType_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsType_obj), true, "mbs.core.MbsType"));
	*(void **)__this = MbsType_obj::_hx_vtable;
	__this->__construct(name,size);
	return __this;
}

MbsType_obj::MbsType_obj()
{
}

void MbsType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MbsType);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void MbsType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(size,"size");
}

hx::Val MbsType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return hx::Val( getSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { return hx::Val( createInstance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MbsType_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MbsType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MbsType_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(MbsType_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(MbsType_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MbsType_obj_sStaticStorageInfo = 0;
#endif

static ::String MbsType_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getSize","\x77","\x50","\xd6","\x1e"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("createInstance","\xb1","\x9e","\x1b","\xac"),
	::String(null()) };

static void MbsType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsType_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsType_obj::__mClass,"__mClass");
};

#endif

hx::Class MbsType_obj::__mClass;

void MbsType_obj::__register()
{
	hx::Object *dummy = new MbsType_obj;
	MbsType_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mbs.core.MbsType","\x19","\xca","\x1c","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MbsType_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsType_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsType_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsType_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsType_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mbs
} // end namespace core