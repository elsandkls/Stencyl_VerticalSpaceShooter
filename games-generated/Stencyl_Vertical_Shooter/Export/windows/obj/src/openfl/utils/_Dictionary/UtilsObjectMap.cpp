// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_UtilsObjectMap
#include <openfl/utils/_Dictionary/UtilsObjectMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_492_new,"openfl.utils._Dictionary.UtilsObjectMap","new",0xb7b17cf2,"openfl.utils._Dictionary.UtilsObjectMap.new","openfl/utils/Dictionary.hx",492,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_510_exists,"openfl.utils._Dictionary.UtilsObjectMap","exists",0x51d7188a,"openfl.utils._Dictionary.UtilsObjectMap.exists","openfl/utils/Dictionary.hx",510,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_517_get,"openfl.utils._Dictionary.UtilsObjectMap","get",0xb7ac2d28,"openfl.utils._Dictionary.UtilsObjectMap.get","openfl/utils/Dictionary.hx",517,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_533_keys,"openfl.utils._Dictionary.UtilsObjectMap","keys",0x01a03522,"openfl.utils._Dictionary.UtilsObjectMap.keys","openfl/utils/Dictionary.hx",533,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_540_iterator,"openfl.utils._Dictionary.UtilsObjectMap","iterator",0xcd47cc1c,"openfl.utils._Dictionary.UtilsObjectMap.iterator","openfl/utils/Dictionary.hx",540,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_547_remove,"openfl.utils._Dictionary.UtilsObjectMap","remove",0x967f96f2,"openfl.utils._Dictionary.UtilsObjectMap.remove","openfl/utils/Dictionary.hx",547,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_554_set,"openfl.utils._Dictionary.UtilsObjectMap","set",0xb7b54834,"openfl.utils._Dictionary.UtilsObjectMap.set","openfl/utils/Dictionary.hx",554,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_561_toString,"openfl.utils._Dictionary.UtilsObjectMap","toString",0x721c52da,"openfl.utils._Dictionary.UtilsObjectMap.toString","openfl/utils/Dictionary.hx",561,0x5979b1eb)
namespace openfl{
namespace utils{
namespace _Dictionary{

void UtilsObjectMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_492_new)
HXDLIN( 492)		this->map =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic UtilsObjectMap_obj::__CreateEmpty() { return new UtilsObjectMap_obj; }

void *UtilsObjectMap_obj::_hx_vtable = 0;

Dynamic UtilsObjectMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UtilsObjectMap_obj > _hx_result = new UtilsObjectMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UtilsObjectMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a8f39e8;
}

static ::haxe::IMap_obj _hx_openfl_utils__Dictionary_UtilsObjectMap__hx_haxe_IMap= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::UtilsObjectMap_obj::get,
	( void (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::utils::_Dictionary::UtilsObjectMap_obj::set_41d0cb46,
	( bool (hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::UtilsObjectMap_obj::exists,
	( bool (hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::UtilsObjectMap_obj::remove,
	(  ::Dynamic (hx::Object::*)())&::openfl::utils::_Dictionary::UtilsObjectMap_obj::keys,
	(  ::Dynamic (hx::Object::*)())&::openfl::utils::_Dictionary::UtilsObjectMap_obj::iterator,
};

void UtilsObjectMap_obj::set_41d0cb46( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *UtilsObjectMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_openfl_utils__Dictionary_UtilsObjectMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool UtilsObjectMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_510_exists)
HXDLIN( 510)		return this->map->exists(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UtilsObjectMap_obj,exists,return )

 ::Dynamic UtilsObjectMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_517_get)
HXDLIN( 517)		return this->map->get(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UtilsObjectMap_obj,get,return )

 ::Dynamic UtilsObjectMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_533_keys)
HXDLIN( 533)		return this->map->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,keys,return )

 ::Dynamic UtilsObjectMap_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_540_iterator)
HXDLIN( 540)		return this->map->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,iterator,return )

bool UtilsObjectMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_547_remove)
HXDLIN( 547)		return this->map->remove(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UtilsObjectMap_obj,remove,return )

void UtilsObjectMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_554_set)
HXDLIN( 554)		this->map->set(key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(UtilsObjectMap_obj,set,(void))

::String UtilsObjectMap_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_561_toString)
HXDLIN( 561)		return this->map->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,toString,return )


hx::ObjectPtr< UtilsObjectMap_obj > UtilsObjectMap_obj::__new() {
	hx::ObjectPtr< UtilsObjectMap_obj > __this = new UtilsObjectMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< UtilsObjectMap_obj > UtilsObjectMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	UtilsObjectMap_obj *__this = (UtilsObjectMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(UtilsObjectMap_obj), true, "openfl.utils._Dictionary.UtilsObjectMap"));
	*(void **)__this = UtilsObjectMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

UtilsObjectMap_obj::UtilsObjectMap_obj()
{
}

void UtilsObjectMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UtilsObjectMap);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_END_CLASS();
}

void UtilsObjectMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
}

hx::Val UtilsObjectMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return hx::Val( map ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return hx::Val( keys_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val UtilsObjectMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UtilsObjectMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo UtilsObjectMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(UtilsObjectMap_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *UtilsObjectMap_obj_sStaticStorageInfo = 0;
#endif

static ::String UtilsObjectMap_obj_sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void UtilsObjectMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UtilsObjectMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UtilsObjectMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UtilsObjectMap_obj::__mClass,"__mClass");
};

#endif

hx::Class UtilsObjectMap_obj::__mClass;

void UtilsObjectMap_obj::__register()
{
	hx::Object *dummy = new UtilsObjectMap_obj;
	UtilsObjectMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._Dictionary.UtilsObjectMap","\x00","\xdc","\xd7","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UtilsObjectMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(UtilsObjectMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UtilsObjectMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UtilsObjectMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UtilsObjectMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UtilsObjectMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary
