// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_BlendModes
#include <com/stencyl/graphics/BlendModes.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4e91213a4c57d82e_28_get,"com.stencyl.graphics.BlendModes","get",0x16319ffb,"com.stencyl.graphics.BlendModes.get","com/stencyl/graphics/BlendModes.hx",28,0x13f9fd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4e91213a4c57d82e_8_boot,"com.stencyl.graphics.BlendModes","boot",0x51f3dd2d,"com.stencyl.graphics.BlendModes.boot","com/stencyl/graphics/BlendModes.hx",8,0x13f9fd2c)
namespace com{
namespace stencyl{
namespace graphics{

void BlendModes_obj::__construct() { }

Dynamic BlendModes_obj::__CreateEmpty() { return new BlendModes_obj; }

void *BlendModes_obj::_hx_vtable = 0;

Dynamic BlendModes_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BlendModes_obj > _hx_result = new BlendModes_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlendModes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x64b32d95;
}

 ::haxe::ds::StringMap BlendModes_obj::stringBlendMap;

 ::Dynamic BlendModes_obj::get(::String blendName){
            	HX_STACKFRAME(&_hx_pos_4e91213a4c57d82e_28_get)
HXDLIN(  28)		return ::com::stencyl::graphics::BlendModes_obj::stringBlendMap->get(blendName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BlendModes_obj,get,return )


BlendModes_obj::BlendModes_obj()
{
}

bool BlendModes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stringBlendMap") ) { outValue = ( stringBlendMap ); return true; }
	}
	return false;
}

bool BlendModes_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"stringBlendMap") ) { stringBlendMap=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BlendModes_obj_sMemberStorageInfo = 0;
static hx::StaticInfo BlendModes_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &BlendModes_obj::stringBlendMap,HX_HCSTRING("stringBlendMap","\xbc","\xc0","\x31","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void BlendModes_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendModes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendModes_obj::stringBlendMap,"stringBlendMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BlendModes_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendModes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendModes_obj::stringBlendMap,"stringBlendMap");
};

#endif

hx::Class BlendModes_obj::__mClass;

static ::String BlendModes_obj_sStaticFields[] = {
	HX_HCSTRING("stringBlendMap","\xbc","\xc0","\x31","\xf5"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null())
};

void BlendModes_obj::__register()
{
	hx::Object *dummy = new BlendModes_obj;
	BlendModes_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.graphics.BlendModes","\x53","\xa9","\x30","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BlendModes_obj::__GetStatic;
	__mClass->mSetStaticField = &BlendModes_obj::__SetStatic;
	__mClass->mMarkFunc = BlendModes_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BlendModes_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BlendModes_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BlendModes_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlendModes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlendModes_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BlendModes_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_4e91213a4c57d82e_8_boot)
HXLINE(   9)			 ::haxe::ds::StringMap m =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  10)			m->set(HX_("add",21,f2,49,00),(int)0);
HXLINE(  11)			m->set(HX_("alpha",5e,a7,96,21),(int)1);
HXLINE(  12)			m->set(HX_("darken",5f,36,3a,21),(int)2);
HXLINE(  13)			m->set(HX_("difference",fd,9b,91,46),(int)3);
HXLINE(  14)			m->set(HX_("erase",e6,e8,1c,73),(int)4);
HXLINE(  15)			m->set(HX_("hardlight",0b,6e,6b,53),(int)5);
HXLINE(  16)			m->set(HX_("invert",16,e7,d8,9f),(int)6);
HXLINE(  17)			m->set(HX_("lighten",bf,4a,e3,19),(int)8);
HXLINE(  18)			m->set(HX_("multiply",24,e2,8c,9a),(int)9);
HXLINE(  19)			m->set(HX_("normal",27,72,69,30),(int)10);
HXLINE(  20)			m->set(HX_("overlay",90,43,10,a9),(int)11);
HXLINE(  21)			m->set(HX_("screen",6c,3b,5d,47),(int)12);
HXLINE(  22)			m->set(HX_("subtract",14,75,11,f8),(int)14);
HXLINE(  23)			return m;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_4e91213a4c57d82e_8_boot)
HXDLIN(   8)		stringBlendMap =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
