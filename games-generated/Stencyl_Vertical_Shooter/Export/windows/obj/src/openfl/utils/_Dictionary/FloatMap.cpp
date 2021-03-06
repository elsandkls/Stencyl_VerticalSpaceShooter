// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_FloatMap
#include <openfl/utils/_Dictionary/FloatMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_277_new,"openfl.utils._Dictionary.FloatMap","new",0xa412a9a6,"openfl.utils._Dictionary.FloatMap.new","openfl/utils/Dictionary.hx",277,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_298_exists,"openfl.utils._Dictionary.FloatMap","exists",0x2473d456,"openfl.utils._Dictionary.FloatMap.exists","openfl/utils/Dictionary.hx",298,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_303_get,"openfl.utils._Dictionary.FloatMap","get",0xa40d59dc,"openfl.utils._Dictionary.FloatMap.get","openfl/utils/Dictionary.hx",303,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_322_keys,"openfl.utils._Dictionary.FloatMap","keys",0xea4625ee,"openfl.utils._Dictionary.FloatMap.keys","openfl/utils/Dictionary.hx",322,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_329_iterator,"openfl.utils._Dictionary.FloatMap","iterator",0x0d6412e8,"openfl.utils._Dictionary.FloatMap.iterator","openfl/utils/Dictionary.hx",329,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_334_remove,"openfl.utils._Dictionary.FloatMap","remove",0x691c52be,"openfl.utils._Dictionary.FloatMap.remove","openfl/utils/Dictionary.hx",334,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_353_set,"openfl.utils._Dictionary.FloatMap","set",0xa41674e8,"openfl.utils._Dictionary.FloatMap.set","openfl/utils/Dictionary.hx",353,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_362_indexOf,"openfl.utils._Dictionary.FloatMap","indexOf",0x7d6b3d0f,"openfl.utils._Dictionary.FloatMap.indexOf","openfl/utils/Dictionary.hx",362,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_413_insertSorted,"openfl.utils._Dictionary.FloatMap","insertSorted",0x4f3fc950,"openfl.utils._Dictionary.FloatMap.insertSorted","openfl/utils/Dictionary.hx",413,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_470_toString,"openfl.utils._Dictionary.FloatMap","toString",0xb23899a6,"openfl.utils._Dictionary.FloatMap.toString","openfl/utils/Dictionary.hx",470,0x5979b1eb)
namespace openfl{
namespace utils{
namespace _Dictionary{

void FloatMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_277_new)
HXLINE( 279)		this->floatKeys = ::cpp::VirtualArray_obj::__new();
HXLINE( 280)		this->values = ::cpp::VirtualArray_obj::__new();
            	}

Dynamic FloatMap_obj::__CreateEmpty() { return new FloatMap_obj; }

void *FloatMap_obj::_hx_vtable = 0;

Dynamic FloatMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FloatMap_obj > _hx_result = new FloatMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FloatMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x411df9d4;
}

static ::haxe::IMap_obj _hx_openfl_utils__Dictionary_FloatMap__hx_haxe_IMap= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::get,
	( void (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::set_41d0cb46,
	( bool (hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::exists,
	( bool (hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::remove,
	(  ::Dynamic (hx::Object::*)())&::openfl::utils::_Dictionary::FloatMap_obj::keys,
	(  ::Dynamic (hx::Object::*)())&::openfl::utils::_Dictionary::FloatMap_obj::iterator,
};

void FloatMap_obj::set_41d0cb46( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *FloatMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_openfl_utils__Dictionary_FloatMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool FloatMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_298_exists)
HXDLIN( 298)		return (this->indexOf(key) > (int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,exists,return )

 ::Dynamic FloatMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_303_get)
HXLINE( 305)		int ind = this->indexOf(key);
HXLINE( 306)		if ((ind > (int)-1)) {
HXLINE( 306)			return this->values->__get(ind);
            		}
            		else {
HXLINE( 306)			return null();
            		}
HXDLIN( 306)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,get,return )

 ::Dynamic FloatMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_322_keys)
HXDLIN( 322)		return this->floatKeys->copy()->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,keys,return )

 ::Dynamic FloatMap_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_329_iterator)
HXDLIN( 329)		return this->values->copy()->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,iterator,return )

bool FloatMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_334_remove)
HXLINE( 336)		int ind = this->indexOf(key);
HXLINE( 338)		if ((ind > (int)-1)) {
HXLINE( 340)			this->floatKeys->splice(ind,(int)1);
HXLINE( 341)			this->values->splice(ind,(int)1);
HXLINE( 342)			return true;
            		}
HXLINE( 346)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,remove,return )

void FloatMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_353_set)
HXDLIN( 353)		this->insertSorted(key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatMap_obj,set,(void))

int FloatMap_obj::indexOf( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_362_indexOf)
HXLINE( 364)		int len = this->floatKeys->get_length();
HXLINE( 365)		int startIndex = (int)0;
HXLINE( 366)		int endIndex = (len - (int)1);
HXLINE( 368)		if ((len == (int)0)) {
HXLINE( 370)			return (int)-1;
            		}
HXLINE( 374)		int midIndex = (int)0;
HXLINE( 376)		while((startIndex < endIndex)){
HXLINE( 378)			midIndex = ::Math_obj::floor(((Float)(startIndex + endIndex) / (Float)(int)2));
HXLINE( 380)			if (hx::IsEq( this->floatKeys->__get(midIndex),key )) {
HXLINE( 382)				return midIndex;
            			}
            			else {
HXLINE( 384)				if (hx::IsGreater( this->floatKeys->__get(midIndex),key )) {
HXLINE( 386)					endIndex = (midIndex - (int)1);
            				}
            				else {
HXLINE( 390)					startIndex = (midIndex + (int)1);
            				}
            			}
            		}
HXLINE( 396)		if (hx::IsEq( this->floatKeys->__get(startIndex),key )) {
HXLINE( 398)			return startIndex;
            		}
            		else {
HXLINE( 402)			return (int)-1;
            		}
HXLINE( 396)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,indexOf,return )

void FloatMap_obj::insertSorted( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_413_insertSorted)
HXLINE( 415)		int len = this->floatKeys->get_length();
HXLINE( 416)		int startIndex = (int)0;
HXLINE( 417)		int endIndex = (len - (int)1);
HXLINE( 419)		if ((len == (int)0)) {
HXLINE( 421)			this->floatKeys->push(key);
HXLINE( 422)			this->values->push(value);
HXLINE( 423)			return;
            		}
HXLINE( 427)		int midIndex = (int)0;
HXLINE( 428)		while((startIndex < endIndex)){
HXLINE( 430)			midIndex = ::Math_obj::floor(((Float)(startIndex + endIndex) / (Float)(int)2));
HXLINE( 432)			if (hx::IsEq( this->floatKeys->__get(midIndex),key )) {
HXLINE( 434)				this->values->set(midIndex,value);
HXLINE( 435)				return;
            			}
            			else {
HXLINE( 437)				if (hx::IsGreater( this->floatKeys->__get(midIndex),key )) {
HXLINE( 439)					endIndex = (midIndex - (int)1);
            				}
            				else {
HXLINE( 443)					startIndex = (midIndex + (int)1);
            				}
            			}
            		}
HXLINE( 449)		if (hx::IsGreater( this->floatKeys->__get(startIndex),key )) {
HXLINE( 451)			this->floatKeys->insert(startIndex,key);
HXLINE( 452)			this->values->insert(startIndex,value);
            		}
            		else {
HXLINE( 454)			if (hx::IsLess( this->floatKeys->__get(startIndex),key )) {
HXLINE( 456)				::cpp::VirtualArray _hx_tmp = this->floatKeys;
HXDLIN( 456)				_hx_tmp->insert((startIndex + (int)1),key);
HXLINE( 457)				::cpp::VirtualArray _hx_tmp1 = this->values;
HXDLIN( 457)				_hx_tmp1->insert((startIndex + (int)1),value);
            			}
            			else {
HXLINE( 461)				this->values->set(startIndex,value);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatMap_obj,insertSorted,(void))

::String FloatMap_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_470_toString)
HXDLIN( 470)		return this->values->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,toString,return )


hx::ObjectPtr< FloatMap_obj > FloatMap_obj::__new() {
	hx::ObjectPtr< FloatMap_obj > __this = new FloatMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FloatMap_obj > FloatMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	FloatMap_obj *__this = (FloatMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FloatMap_obj), true, "openfl.utils._Dictionary.FloatMap"));
	*(void **)__this = FloatMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FloatMap_obj::FloatMap_obj()
{
}

void FloatMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FloatMap);
	HX_MARK_MEMBER_NAME(floatKeys,"floatKeys");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void FloatMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(floatKeys,"floatKeys");
	HX_VISIT_MEMBER_NAME(values,"values");
}

hx::Val FloatMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return hx::Val( keys_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return hx::Val( indexOf_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floatKeys") ) { return hx::Val( floatKeys ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"insertSorted") ) { return hx::Val( insertSorted_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FloatMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floatKeys") ) { floatKeys=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FloatMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("floatKeys","\xb0","\xd1","\x3f","\xfa"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FloatMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FloatMap_obj,floatKeys),HX_HCSTRING("floatKeys","\xb0","\xd1","\x3f","\xfa")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FloatMap_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FloatMap_obj_sStaticStorageInfo = 0;
#endif

static ::String FloatMap_obj_sMemberFields[] = {
	HX_HCSTRING("floatKeys","\xb0","\xd1","\x3f","\xfa"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertSorted","\x56","\xfb","\xc4","\xa6"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void FloatMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FloatMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FloatMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatMap_obj::__mClass,"__mClass");
};

#endif

hx::Class FloatMap_obj::__mClass;

void FloatMap_obj::__register()
{
	hx::Object *dummy = new FloatMap_obj;
	FloatMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._Dictionary.FloatMap","\xb4","\x9e","\x0f","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FloatMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FloatMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FloatMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FloatMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FloatMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FloatMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary
