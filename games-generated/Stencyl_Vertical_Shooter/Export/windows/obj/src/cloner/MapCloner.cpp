// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cloner_Cloner
#include <cloner/Cloner.h>
#endif
#ifndef INCLUDED_cloner_MapCloner
#include <cloner/MapCloner.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_414b8e8d8857e874_11_new,"cloner.MapCloner","new",0x485bf3ca,"cloner.MapCloner.new","cloner/MapCloner.hx",11,0xe3599067)
HX_LOCAL_STACK_FRAME(_hx_pos_414b8e8d8857e874_17_clone,"cloner.MapCloner","clone",0xbd4a6547,"cloner.MapCloner.clone","cloner/MapCloner.hx",17,0xe3599067)
namespace cloner{

void MapCloner_obj::__construct( ::cloner::Cloner cloner1,hx::Class type){
            	HX_STACKFRAME(&_hx_pos_414b8e8d8857e874_11_new)
HXLINE(  12)		this->cloner = cloner1;
HXLINE(  13)		this->type = type;
HXLINE(  14)		this->noArgs = ::cpp::VirtualArray_obj::__new(0);
            	}

Dynamic MapCloner_obj::__CreateEmpty() { return new MapCloner_obj; }

void *MapCloner_obj::_hx_vtable = 0;

Dynamic MapCloner_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MapCloner_obj > _hx_result = new MapCloner_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MapCloner_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ea38afc;
}

::Dynamic MapCloner_obj::clone(::Dynamic inValue){
            	HX_STACKFRAME(&_hx_pos_414b8e8d8857e874_17_clone)
HXLINE(  18)		::Dynamic inMap = inValue;
HXLINE(  19)		::Dynamic map = ::Type_obj::createInstance(this->type,this->noArgs);
HXLINE(  20)		{
HXLINE(  20)			 ::Dynamic key = ::haxe::IMap_obj::keys(inMap);
HXDLIN(  20)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  20)				 ::Dynamic key1 = key->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)();
HXLINE(  21)				 ::cloner::Cloner _hx_tmp = this->cloner;
HXDLIN(  21)				::haxe::IMap_obj::set(map,key1,_hx_tmp->_clone(::haxe::IMap_obj::get(inMap,key1)));
            			}
            		}
HXLINE(  23)		return map;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MapCloner_obj,clone,return )


hx::ObjectPtr< MapCloner_obj > MapCloner_obj::__new( ::cloner::Cloner cloner1,hx::Class type) {
	hx::ObjectPtr< MapCloner_obj > __this = new MapCloner_obj();
	__this->__construct(cloner1,type);
	return __this;
}

hx::ObjectPtr< MapCloner_obj > MapCloner_obj::__alloc(hx::Ctx *_hx_ctx, ::cloner::Cloner cloner1,hx::Class type) {
	MapCloner_obj *__this = (MapCloner_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MapCloner_obj), true, "cloner.MapCloner"));
	*(void **)__this = MapCloner_obj::_hx_vtable;
	__this->__construct(cloner1,type);
	return __this;
}

MapCloner_obj::MapCloner_obj()
{
}

void MapCloner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapCloner);
	HX_MARK_MEMBER_NAME(cloner,"cloner");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(noArgs,"noArgs");
	HX_MARK_END_CLASS();
}

void MapCloner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cloner,"cloner");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(noArgs,"noArgs");
}

hx::Val MapCloner_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cloner") ) { return hx::Val( cloner ); }
		if (HX_FIELD_EQ(inName,"noArgs") ) { return hx::Val( noArgs ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MapCloner_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< hx::Class >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cloner") ) { cloner=inValue.Cast<  ::cloner::Cloner >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noArgs") ) { noArgs=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapCloner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cloner","\x75","\xde","\x4d","\x0e"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("noArgs","\x3e","\xce","\x09","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MapCloner_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cloner::Cloner*/ ,(int)offsetof(MapCloner_obj,cloner),HX_HCSTRING("cloner","\x75","\xde","\x4d","\x0e")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(MapCloner_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(MapCloner_obj,noArgs),HX_HCSTRING("noArgs","\x3e","\xce","\x09","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MapCloner_obj_sStaticStorageInfo = 0;
#endif

static ::String MapCloner_obj_sMemberFields[] = {
	HX_HCSTRING("cloner","\x75","\xde","\x4d","\x0e"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("noArgs","\x3e","\xce","\x09","\x10"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void MapCloner_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapCloner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MapCloner_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapCloner_obj::__mClass,"__mClass");
};

#endif

hx::Class MapCloner_obj::__mClass;

void MapCloner_obj::__register()
{
	hx::Object *dummy = new MapCloner_obj;
	MapCloner_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cloner.MapCloner","\xd8","\x06","\x98","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MapCloner_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MapCloner_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapCloner_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MapCloner_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MapCloner_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MapCloner_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cloner