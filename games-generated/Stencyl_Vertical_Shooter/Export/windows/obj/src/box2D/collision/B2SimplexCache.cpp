// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2SimplexCache
#include <box2D/collision/B2SimplexCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec958d87d13fd367_25_new,"box2D.collision.B2SimplexCache","new",0x3b50aa0b,"box2D.collision.B2SimplexCache.new","box2D/collision/B2SimplexCache.hx",25,0x405c6a43)
namespace box2D{
namespace collision{

void B2SimplexCache_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ec958d87d13fd367_25_new)
HXLINE(  43)		this->useCache = false;
HXLINE(  30)		this->indexA = ::Array_obj< int >::__new();
HXLINE(  31)		this->indexB = ::Array_obj< int >::__new();
            	}

Dynamic B2SimplexCache_obj::__CreateEmpty() { return new B2SimplexCache_obj; }

void *B2SimplexCache_obj::_hx_vtable = 0;

Dynamic B2SimplexCache_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2SimplexCache_obj > _hx_result = new B2SimplexCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2SimplexCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0de5ad21;
}


B2SimplexCache_obj::B2SimplexCache_obj()
{
}

void B2SimplexCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2SimplexCache);
	HX_MARK_MEMBER_NAME(metric,"metric");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(indexA,"indexA");
	HX_MARK_MEMBER_NAME(indexB,"indexB");
	HX_MARK_MEMBER_NAME(useCache,"useCache");
	HX_MARK_END_CLASS();
}

void B2SimplexCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(metric,"metric");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(indexA,"indexA");
	HX_VISIT_MEMBER_NAME(indexB,"indexB");
	HX_VISIT_MEMBER_NAME(useCache,"useCache");
}

hx::Val B2SimplexCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return hx::Val( count ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"metric") ) { return hx::Val( metric ); }
		if (HX_FIELD_EQ(inName,"indexA") ) { return hx::Val( indexA ); }
		if (HX_FIELD_EQ(inName,"indexB") ) { return hx::Val( indexB ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useCache") ) { return hx::Val( useCache ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2SimplexCache_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"metric") ) { metric=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexA") ) { indexA=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexB") ) { indexB=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useCache") ) { useCache=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2SimplexCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("metric","\x30","\x88","\x62","\x09"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("indexA","\xef","\x14","\xf3","\x93"));
	outFields->push(HX_HCSTRING("indexB","\xf0","\x14","\xf3","\x93"));
	outFields->push(HX_HCSTRING("useCache","\x7b","\xfc","\x7f","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2SimplexCache_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(B2SimplexCache_obj,metric),HX_HCSTRING("metric","\x30","\x88","\x62","\x09")},
	{hx::fsInt,(int)offsetof(B2SimplexCache_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(B2SimplexCache_obj,indexA),HX_HCSTRING("indexA","\xef","\x14","\xf3","\x93")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(B2SimplexCache_obj,indexB),HX_HCSTRING("indexB","\xf0","\x14","\xf3","\x93")},
	{hx::fsBool,(int)offsetof(B2SimplexCache_obj,useCache),HX_HCSTRING("useCache","\x7b","\xfc","\x7f","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2SimplexCache_obj_sStaticStorageInfo = 0;
#endif

static ::String B2SimplexCache_obj_sMemberFields[] = {
	HX_HCSTRING("metric","\x30","\x88","\x62","\x09"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("indexA","\xef","\x14","\xf3","\x93"),
	HX_HCSTRING("indexB","\xf0","\x14","\xf3","\x93"),
	HX_HCSTRING("useCache","\x7b","\xfc","\x7f","\x08"),
	::String(null()) };

static void B2SimplexCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2SimplexCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2SimplexCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2SimplexCache_obj::__mClass,"__mClass");
};

#endif

hx::Class B2SimplexCache_obj::__mClass;

void B2SimplexCache_obj::__register()
{
	hx::Object *dummy = new B2SimplexCache_obj;
	B2SimplexCache_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.collision.B2SimplexCache","\x99","\x48","\x82","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2SimplexCache_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2SimplexCache_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2SimplexCache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2SimplexCache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2SimplexCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2SimplexCache_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace collision
