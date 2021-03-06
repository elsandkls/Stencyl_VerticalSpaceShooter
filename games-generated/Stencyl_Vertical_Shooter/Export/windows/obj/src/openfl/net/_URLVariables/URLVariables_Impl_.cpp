// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl_net__URLVariables_URLVariables_Impl_
#include <openfl/net/_URLVariables/URLVariables_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_32__new,"openfl.net._URLVariables.URLVariables_Impl_","_new",0x5fed9531,"openfl.net._URLVariables.URLVariables_Impl_._new","openfl/net/URLVariables.hx",32,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_56_decode,"openfl.net._URLVariables.URLVariables_Impl_","decode",0x363770fe,"openfl.net._URLVariables.URLVariables_Impl_.decode","openfl/net/URLVariables.hx",56,0x10f26625)
HX_LOCAL_STACK_FRAME(_hx_pos_8056606f6909a50a_93_toString,"openfl.net._URLVariables.URLVariables_Impl_","toString",0x7f41787c,"openfl.net._URLVariables.URLVariables_Impl_.toString","openfl/net/URLVariables.hx",93,0x10f26625)
namespace openfl{
namespace net{
namespace _URLVariables{

void URLVariables_Impl__obj::__construct() { }

Dynamic URLVariables_Impl__obj::__CreateEmpty() { return new URLVariables_Impl__obj; }

void *URLVariables_Impl__obj::_hx_vtable = 0;

Dynamic URLVariables_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLVariables_Impl__obj > _hx_result = new URLVariables_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool URLVariables_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x221cefe2;
}

 ::Dynamic URLVariables_Impl__obj::_new(::String source){
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_32__new)
HXDLIN(  32)		 ::Dynamic this1 =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE(  36)		if (hx::IsNotNull( source )) {
HXLINE(  38)			::openfl::net::_URLVariables::URLVariables_Impl__obj::decode(this1,source);
            		}
HXLINE(  32)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLVariables_Impl__obj,_new,return )

void URLVariables_Impl__obj::decode( ::Dynamic this1,::String source){
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_56_decode)
HXLINE(  58)		::Array< ::String > fields = ::Reflect_obj::fields(this1);
HXLINE(  60)		{
HXLINE(  60)			int _g = (int)0;
HXDLIN(  60)			while((_g < fields->length)){
HXLINE(  60)				::String f = fields->__get(_g);
HXDLIN(  60)				_g = (_g + (int)1);
HXLINE(  62)				::Reflect_obj::deleteField(this1,f);
            			}
            		}
HXLINE(  66)		::Array< ::String > fields1 = source.split(HX_(";",3b,00,00,00))->join(HX_("&",26,00,00,00)).split(HX_("&",26,00,00,00));
HXLINE(  68)		{
HXLINE(  68)			int _g1 = (int)0;
HXDLIN(  68)			while((_g1 < fields1->length)){
HXLINE(  68)				::String f1 = fields1->__get(_g1);
HXDLIN(  68)				_g1 = (_g1 + (int)1);
HXLINE(  70)				int eq = f1.indexOf(HX_("=",3d,00,00,00),null());
HXLINE(  72)				if ((eq > (int)0)) {
HXLINE(  74)					::String _hx_tmp = ::StringTools_obj::urlDecode(f1.substr((int)0,eq));
HXDLIN(  74)					::Reflect_obj::setField(this1,_hx_tmp,::StringTools_obj::urlDecode(f1.substr((eq + (int)1),null())));
            				}
            				else {
HXLINE(  76)					if ((eq != (int)0)) {
HXLINE(  78)						::Reflect_obj::setField(this1,::StringTools_obj::urlDecode(f1),HX_("",00,00,00,00));
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(URLVariables_Impl__obj,decode,(void))

::String URLVariables_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8056606f6909a50a_93_toString)
HXLINE(  95)		::Array< ::String > result = ::Array_obj< ::String >::__new();
HXLINE(  96)		::Array< ::String > fields = ::Reflect_obj::fields(this1);
HXLINE(  98)		{
HXLINE(  98)			int _g = (int)0;
HXDLIN(  98)			while((_g < fields->length)){
HXLINE(  98)				::String f = fields->__get(_g);
HXDLIN(  98)				_g = (_g + (int)1);
HXLINE( 100)				::String _hx_tmp = (::StringTools_obj::urlEncode(f) + HX_("=",3d,00,00,00));
HXDLIN( 100)				result->push((_hx_tmp + ::StringTools_obj::urlEncode(( (::String)(::Reflect_obj::field(this1,f)) ))));
            			}
            		}
HXLINE( 104)		return result->join(HX_("&",26,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLVariables_Impl__obj,toString,return )


URLVariables_Impl__obj::URLVariables_Impl__obj()
{
}

bool URLVariables_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *URLVariables_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *URLVariables_Impl__obj_sStaticStorageInfo = 0;
#endif

static void URLVariables_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLVariables_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLVariables_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLVariables_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class URLVariables_Impl__obj::__mClass;

static ::String URLVariables_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void URLVariables_Impl__obj::__register()
{
	hx::Object *dummy = new URLVariables_Impl__obj;
	URLVariables_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net._URLVariables.URLVariables_Impl_","\x9e","\xf2","\x35","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLVariables_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = URLVariables_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(URLVariables_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< URLVariables_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLVariables_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLVariables_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLVariables_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
} // end namespace _URLVariables
