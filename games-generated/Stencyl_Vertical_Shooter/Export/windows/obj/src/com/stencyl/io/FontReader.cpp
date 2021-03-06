// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_FontReader
#include <com/stencyl/io/FontReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_MbsFont
#include <com/stencyl/io/mbs/MbsFont.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_MbsResource
#include <com/stencyl/io/mbs/MbsResource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_mbs_core_ComposedType
#include <mbs/core/ComposedType.h>
#endif
#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
#ifndef INCLUDED_mbs_core_MbsType
#include <mbs/core/MbsType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4122f2a0d55692ce_11_new,"com.stencyl.io.FontReader","new",0xa7043c9d,"com.stencyl.io.FontReader.new","com/stencyl/io/FontReader.hx",11,0xe00d65d4)
HX_LOCAL_STACK_FRAME(_hx_pos_4122f2a0d55692ce_16_accepts,"com.stencyl.io.FontReader","accepts",0xbf81e328,"com.stencyl.io.FontReader.accepts","com/stencyl/io/FontReader.hx",16,0xe00d65d4)
HX_LOCAL_STACK_FRAME(_hx_pos_4122f2a0d55692ce_20_read,"com.stencyl.io.FontReader","read",0x7f559479,"com.stencyl.io.FontReader.read","com/stencyl/io/FontReader.hx",20,0xe00d65d4)
namespace com{
namespace stencyl{
namespace io{

void FontReader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4122f2a0d55692ce_11_new)
            	}

Dynamic FontReader_obj::__CreateEmpty() { return new FontReader_obj; }

void *FontReader_obj::_hx_vtable = 0;

Dynamic FontReader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontReader_obj > _hx_result = new FontReader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c3a69c3;
}

static ::com::stencyl::io::AbstractReader_obj _hx_com_stencyl_io_FontReader__hx_com_stencyl_io_AbstractReader= {
	( bool (hx::Object::*)(::String))&::com::stencyl::io::FontReader_obj::accepts,
	(  ::com::stencyl::models::Resource (hx::Object::*)( ::Dynamic))&::com::stencyl::io::FontReader_obj::read,
};

void *FontReader_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf08c5996: return &_hx_com_stencyl_io_FontReader__hx_com_stencyl_io_AbstractReader;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool FontReader_obj::accepts(::String type){
            	HX_STACKFRAME(&_hx_pos_4122f2a0d55692ce_16_accepts)
HXDLIN(  16)		return (type == ::com::stencyl::io::mbs::MbsFont_obj::MBS_FONT->getName());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontReader_obj,accepts,return )

 ::com::stencyl::models::Resource FontReader_obj::read( ::Dynamic obj){
            	HX_GC_STACKFRAME(&_hx_pos_4122f2a0d55692ce_20_read)
HXLINE(  23)		 ::com::stencyl::io::mbs::MbsFont r = ( ( ::com::stencyl::io::mbs::MbsFont)(obj) );
HXLINE(  25)		int _hx_tmp = r->getId();
HXDLIN(  25)		int _hx_tmp1 = r->getAtlasID();
HXDLIN(  25)		return  ::com::stencyl::models::Font_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,r->getName(),false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontReader_obj,read,return )


hx::ObjectPtr< FontReader_obj > FontReader_obj::__new() {
	hx::ObjectPtr< FontReader_obj > __this = new FontReader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FontReader_obj > FontReader_obj::__alloc(hx::Ctx *_hx_ctx) {
	FontReader_obj *__this = (FontReader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FontReader_obj), false, "com.stencyl.io.FontReader"));
	*(void **)__this = FontReader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FontReader_obj::FontReader_obj()
{
}

hx::Val FontReader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"accepts") ) { return hx::Val( accepts_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FontReader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FontReader_obj_sStaticStorageInfo = 0;
#endif

static ::String FontReader_obj_sMemberFields[] = {
	HX_HCSTRING("accepts","\x6b","\x14","\xba","\x9a"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null()) };

static void FontReader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontReader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontReader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontReader_obj::__mClass,"__mClass");
};

#endif

hx::Class FontReader_obj::__mClass;

void FontReader_obj::__register()
{
	hx::Object *dummy = new FontReader_obj;
	FontReader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.FontReader","\x2b","\xaa","\x70","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontReader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FontReader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FontReader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontReader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontReader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
