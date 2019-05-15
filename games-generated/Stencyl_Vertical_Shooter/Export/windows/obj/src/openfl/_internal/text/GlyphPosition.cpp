// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl__internal_text_GlyphPosition
#include <openfl/_internal/text/GlyphPosition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da1ef37d0e5fbdd1_23_new,"openfl._internal.text.GlyphPosition","new",0x52b187f6,"openfl._internal.text.GlyphPosition.new","openfl/_internal/text/GlyphPosition.hx",23,0xa350dbb9)
namespace openfl{
namespace _internal{
namespace text{

void GlyphPosition_obj::__construct(int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset){
            	HX_GC_STACKFRAME(&_hx_pos_da1ef37d0e5fbdd1_23_new)
HXLINE(  25)		this->glyph = glyph;
HXLINE(  26)		this->advance = advance;
HXLINE(  28)		if (hx::IsNotNull( offset )) {
HXLINE(  30)			this->offset = offset;
            		}
            		else {
HXLINE(  34)			this->offset =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
            	}

Dynamic GlyphPosition_obj::__CreateEmpty() { return new GlyphPosition_obj; }

void *GlyphPosition_obj::_hx_vtable = 0;

Dynamic GlyphPosition_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlyphPosition_obj > _hx_result = new GlyphPosition_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GlyphPosition_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a210fc4;
}


hx::ObjectPtr< GlyphPosition_obj > GlyphPosition_obj::__new(int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset) {
	hx::ObjectPtr< GlyphPosition_obj > __this = new GlyphPosition_obj();
	__this->__construct(glyph,advance,offset);
	return __this;
}

hx::ObjectPtr< GlyphPosition_obj > GlyphPosition_obj::__alloc(hx::Ctx *_hx_ctx,int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset) {
	GlyphPosition_obj *__this = (GlyphPosition_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GlyphPosition_obj), true, "openfl._internal.text.GlyphPosition"));
	*(void **)__this = GlyphPosition_obj::_hx_vtable;
	__this->__construct(glyph,advance,offset);
	return __this;
}

GlyphPosition_obj::GlyphPosition_obj()
{
}

void GlyphPosition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlyphPosition);
	HX_MARK_MEMBER_NAME(advance,"advance");
	HX_MARK_MEMBER_NAME(glyph,"glyph");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void GlyphPosition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advance,"advance");
	HX_VISIT_MEMBER_NAME(glyph,"glyph");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

hx::Val GlyphPosition_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { return hx::Val( glyph ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return hx::Val( advance ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GlyphPosition_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { glyph=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { advance=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlyphPosition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"));
	outFields->push(HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GlyphPosition_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphPosition_obj,advance),HX_HCSTRING("advance","\x82","\x08","\x0c","\xef")},
	{hx::fsInt,(int)offsetof(GlyphPosition_obj,glyph),HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphPosition_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GlyphPosition_obj_sStaticStorageInfo = 0;
#endif

static ::String GlyphPosition_obj_sMemberFields[] = {
	HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"),
	HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	::String(null()) };

static void GlyphPosition_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlyphPosition_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlyphPosition_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlyphPosition_obj::__mClass,"__mClass");
};

#endif

hx::Class GlyphPosition_obj::__mClass;

void GlyphPosition_obj::__register()
{
	hx::Object *dummy = new GlyphPosition_obj;
	GlyphPosition_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.GlyphPosition","\x04","\x15","\xad","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GlyphPosition_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlyphPosition_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlyphPosition_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlyphPosition_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlyphPosition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlyphPosition_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text