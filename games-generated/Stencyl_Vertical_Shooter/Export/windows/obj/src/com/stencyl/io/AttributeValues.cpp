// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorInstance
#include <com/stencyl/behavior/BehaviorInstance.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AttributeValues
#include <com/stencyl/io/AttributeValues.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_snippet_MbsAttribute
#include <com/stencyl/io/mbs/snippet/MbsAttribute.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_snippet_MbsAttributeDef
#include <com/stencyl/io/mbs/snippet/MbsAttributeDef.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_snippet_MbsMapElement
#include <com/stencyl/io/mbs/snippet/MbsMapElement.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_snippet_MbsSnippet
#include <com/stencyl/io/mbs/snippet/MbsSnippet.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
#ifndef INCLUDED_mbs_io_MbsDynamicList
#include <mbs/io/MbsDynamicList.h>
#endif
#ifndef INCLUDED_mbs_io_MbsList
#include <mbs/io/MbsList.h>
#endif
#ifndef INCLUDED_mbs_io_MbsListBase
#include <mbs/io/MbsListBase.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5917b67ca4e4bd6a_15_readBehaviors,"com.stencyl.io.AttributeValues","readBehaviors",0x2e536c02,"com.stencyl.io.AttributeValues.readBehaviors","com/stencyl/io/AttributeValues.hx",15,0x6a9ad318)
HX_LOCAL_STACK_FRAME(_hx_pos_5917b67ca4e4bd6a_36_readBehaviorProperties,"com.stencyl.io.AttributeValues","readBehaviorProperties",0xd0c02aa4,"com.stencyl.io.AttributeValues.readBehaviorProperties","com/stencyl/io/AttributeValues.hx",36,0x6a9ad318)
HX_LOCAL_STACK_FRAME(_hx_pos_5917b67ca4e4bd6a_54_readAttribute,"com.stencyl.io.AttributeValues","readAttribute",0xf397ec7d,"com.stencyl.io.AttributeValues.readAttribute","com/stencyl/io/AttributeValues.hx",54,0x6a9ad318)
HX_LOCAL_STACK_FRAME(_hx_pos_5917b67ca4e4bd6a_64_readAttributeDef,"com.stencyl.io.AttributeValues","readAttributeDef",0x75f73148,"com.stencyl.io.AttributeValues.readAttributeDef","com/stencyl/io/AttributeValues.hx",64,0x6a9ad318)
HX_LOCAL_STACK_FRAME(_hx_pos_5917b67ca4e4bd6a_73_readList,"com.stencyl.io.AttributeValues","readList",0x111efb9d,"com.stencyl.io.AttributeValues.readList","com/stencyl/io/AttributeValues.hx",73,0x6a9ad318)
HX_LOCAL_STACK_FRAME(_hx_pos_5917b67ca4e4bd6a_88_readMap,"com.stencyl.io.AttributeValues","readMap",0x82f3183d,"com.stencyl.io.AttributeValues.readMap","com/stencyl/io/AttributeValues.hx",88,0x6a9ad318)
namespace com{
namespace stencyl{
namespace io{

void AttributeValues_obj::__construct() { }

Dynamic AttributeValues_obj::__CreateEmpty() { return new AttributeValues_obj; }

void *AttributeValues_obj::_hx_vtable = 0;

Dynamic AttributeValues_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AttributeValues_obj > _hx_result = new AttributeValues_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AttributeValues_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2638d22d;
}

 ::haxe::ds::StringMap AttributeValues_obj::readBehaviors( ::mbs::io::MbsList listReader){
            	HX_GC_STACKFRAME(&_hx_pos_5917b67ca4e4bd6a_15_readBehaviors)
HXLINE(  16)		 ::haxe::ds::StringMap toReturn =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  18)		{
HXLINE(  18)			int _g1 = (int)0;
HXDLIN(  18)			int _g = listReader->length();
HXDLIN(  18)			while((_g1 < _g)){
HXLINE(  18)				_g1 = (_g1 + (int)1);
HXDLIN(  18)				int i = (_g1 - (int)1);
HXLINE(  20)				 ::com::stencyl::io::mbs::snippet::MbsSnippet snipReader = listReader->getNextObject().StaticCast<  ::com::stencyl::io::mbs::snippet::MbsSnippet >();
HXLINE(  22)				if (!(snipReader->getEnabled())) {
HXLINE(  24)					continue;
            				}
HXLINE(  27)				int ID = snipReader->getId();
HXLINE(  28)				 ::haxe::ds::StringMap map = ::com::stencyl::io::AttributeValues_obj::readBehaviorProperties(snipReader->getProperties());
HXLINE(  29)				toReturn->set((HX_("",00,00,00,00) + ID), ::com::stencyl::behavior::BehaviorInstance_obj::__alloc( HX_CTX ,ID,map));
            			}
            		}
HXLINE(  32)		return toReturn;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AttributeValues_obj,readBehaviors,return )

 ::haxe::ds::StringMap AttributeValues_obj::readBehaviorProperties( ::mbs::io::MbsList listReader){
            	HX_GC_STACKFRAME(&_hx_pos_5917b67ca4e4bd6a_36_readBehaviorProperties)
HXLINE(  37)		 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  39)		{
HXLINE(  39)			int _g1 = (int)0;
HXDLIN(  39)			int _g = listReader->length();
HXDLIN(  39)			while((_g1 < _g)){
HXLINE(  39)				_g1 = (_g1 + (int)1);
HXDLIN(  39)				int i = (_g1 - (int)1);
HXLINE(  41)				 ::com::stencyl::io::mbs::snippet::MbsAttribute attrReader = listReader->getNextObject().StaticCast<  ::com::stencyl::io::mbs::snippet::MbsAttribute >();
HXLINE(  43)				int id = attrReader->getId();
HXLINE(  44)				::String type = attrReader->getType();
HXLINE(  46)				map->set((HX_("",00,00,00,00) + id),::com::stencyl::io::AttributeValues_obj::readAttribute(type,attrReader));
            			}
            		}
HXLINE(  49)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AttributeValues_obj,readBehaviorProperties,return )

 ::Dynamic AttributeValues_obj::readAttribute(::String type, ::com::stencyl::io::mbs::snippet::MbsAttribute r){
            	HX_STACKFRAME(&_hx_pos_5917b67ca4e4bd6a_54_readAttribute)
HXDLIN(  54)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("list",5e,1c,b3,47)) ){
HXLINE(  56)			return ::com::stencyl::io::AttributeValues_obj::readList(( ( ::mbs::io::MbsDynamicList)(r->getValue()) ));
HXDLIN(  56)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("map",9c,0a,53,00)) ){
HXLINE(  57)			return ::com::stencyl::io::AttributeValues_obj::readMap(( ( ::mbs::io::MbsList)(r->getValue()) ));
HXDLIN(  57)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  58)			return r->getValue();
            		}
            		_hx_goto_4:;
HXLINE(  54)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AttributeValues_obj,readAttribute,return )

 ::Dynamic AttributeValues_obj::readAttributeDef(::String type, ::com::stencyl::io::mbs::snippet::MbsAttributeDef r){
            	HX_STACKFRAME(&_hx_pos_5917b67ca4e4bd6a_64_readAttributeDef)
HXDLIN(  64)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("list",5e,1c,b3,47)) ){
HXLINE(  66)			return ::com::stencyl::io::AttributeValues_obj::readList(( ( ::mbs::io::MbsDynamicList)(r->getDefaultValue()) ));
HXDLIN(  66)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("map",9c,0a,53,00)) ){
HXLINE(  67)			return ::com::stencyl::io::AttributeValues_obj::readMap(( ( ::mbs::io::MbsList)(r->getDefaultValue()) ));
HXDLIN(  67)			goto _hx_goto_6;
            		}
            		/* default */{
HXLINE(  68)			return r->getDefaultValue();
            		}
            		_hx_goto_6:;
HXLINE(  64)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AttributeValues_obj,readAttributeDef,return )

::cpp::VirtualArray AttributeValues_obj::readList( ::mbs::io::MbsDynamicList listReader){
            	HX_STACKFRAME(&_hx_pos_5917b67ca4e4bd6a_73_readList)
HXLINE(  74)		if (hx::IsNull( listReader )) {
HXLINE(  75)			return null();
            		}
HXLINE(  77)		::cpp::VirtualArray map = ::cpp::VirtualArray_obj::__new();
HXLINE(  79)		{
HXLINE(  79)			int _g1 = (int)0;
HXDLIN(  79)			int _g = listReader->length();
HXDLIN(  79)			while((_g1 < _g)){
HXLINE(  79)				_g1 = (_g1 + (int)1);
HXDLIN(  79)				int i = (_g1 - (int)1);
HXLINE(  81)				map->set(i,listReader->readObject());
            			}
            		}
HXLINE(  84)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AttributeValues_obj,readList,return )

 ::haxe::ds::StringMap AttributeValues_obj::readMap( ::mbs::io::MbsList mapReader){
            	HX_GC_STACKFRAME(&_hx_pos_5917b67ca4e4bd6a_88_readMap)
HXLINE(  89)		if (hx::IsNull( mapReader )) {
HXLINE(  90)			return null();
            		}
HXLINE(  92)		 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  94)		{
HXLINE(  94)			int _g1 = (int)0;
HXDLIN(  94)			int _g = mapReader->length();
HXDLIN(  94)			while((_g1 < _g)){
HXLINE(  94)				_g1 = (_g1 + (int)1);
HXDLIN(  94)				int i = (_g1 - (int)1);
HXLINE(  96)				 ::com::stencyl::io::mbs::snippet::MbsMapElement mapElement = mapReader->getNextObject().StaticCast<  ::com::stencyl::io::mbs::snippet::MbsMapElement >();
HXLINE(  97)				::String key = mapElement->getKey();
HXLINE(  98)				 ::Dynamic val = mapElement->getValue();
HXLINE( 100)				if (::Std_obj::is(val,hx::ClassOf< ::mbs::io::MbsDynamicList >())) {
HXLINE( 102)					 ::mbs::io::MbsDynamicList mdl = ( ( ::mbs::io::MbsDynamicList)(val) );
HXLINE( 103)					::cpp::VirtualArray _g2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 103)					{
HXLINE( 103)						int _g4 = (int)0;
HXDLIN( 103)						int _g3 = mdl->length();
HXDLIN( 103)						while((_g4 < _g3)){
HXLINE( 103)							_g4 = (_g4 + (int)1);
HXDLIN( 103)							int i1 = (_g4 - (int)1);
HXDLIN( 103)							_g2->push(mdl->readObject());
            						}
            					}
HXDLIN( 103)					val = _g2;
            				}
            				else {
HXLINE( 105)					if (::Std_obj::is(val,hx::ClassOf< ::mbs::io::MbsList >())) {
HXLINE( 107)						val = ::com::stencyl::io::AttributeValues_obj::readMap(( ( ::mbs::io::MbsList)(val) ));
            					}
            				}
HXLINE( 110)				map->set(key,val);
            			}
            		}
HXLINE( 113)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AttributeValues_obj,readMap,return )


AttributeValues_obj::AttributeValues_obj()
{
}

bool AttributeValues_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readMap") ) { outValue = readMap_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readList") ) { outValue = readList_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readBehaviors") ) { outValue = readBehaviors_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readAttribute") ) { outValue = readAttribute_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readAttributeDef") ) { outValue = readAttributeDef_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"readBehaviorProperties") ) { outValue = readBehaviorProperties_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AttributeValues_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AttributeValues_obj_sStaticStorageInfo = 0;
#endif

static void AttributeValues_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttributeValues_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AttributeValues_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttributeValues_obj::__mClass,"__mClass");
};

#endif

hx::Class AttributeValues_obj::__mClass;

static ::String AttributeValues_obj_sStaticFields[] = {
	HX_HCSTRING("readBehaviors","\x6b","\x69","\x1a","\xc9"),
	HX_HCSTRING("readBehaviorProperties","\x1b","\xb8","\x3c","\x24"),
	HX_HCSTRING("readAttribute","\xe6","\xe9","\x5e","\x8e"),
	HX_HCSTRING("readAttributeDef","\x7f","\xbb","\x53","\xdb"),
	HX_HCSTRING("readList","\xd4","\xf6","\xaa","\x6f"),
	HX_HCSTRING("readMap","\xe6","\xb0","\xcc","\x02"),
	::String(null())
};

void AttributeValues_obj::__register()
{
	hx::Object *dummy = new AttributeValues_obj;
	AttributeValues_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.AttributeValues","\xc5","\x18","\x78","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AttributeValues_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AttributeValues_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AttributeValues_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AttributeValues_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AttributeValues_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttributeValues_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttributeValues_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io