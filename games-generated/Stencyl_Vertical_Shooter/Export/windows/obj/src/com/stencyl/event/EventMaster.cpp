// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_event_EventMaster
#include <com/stencyl/event/EventMaster.h>
#endif
#ifndef INCLUDED_com_stencyl_event_StencylEvent
#include <com/stencyl/event/StencylEvent.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_17_new,"com.stencyl.event.EventMaster","new",0xab916deb,"com.stencyl.event.EventMaster.new","com/stencyl/event/EventMaster.hx",17,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_28_addAdEvent,"com.stencyl.event.EventMaster","addAdEvent",0x129271eb,"com.stencyl.event.EventMaster.addAdEvent","com/stencyl/event/EventMaster.hx",28,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_33_addPurchaseEvent,"com.stencyl.event.EventMaster","addPurchaseEvent",0x19ed6d4d,"com.stencyl.event.EventMaster.addPurchaseEvent","com/stencyl/event/EventMaster.hx",33,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_38_addGameCenterEvent,"com.stencyl.event.EventMaster","addGameCenterEvent",0x0465ece7,"com.stencyl.event.EventMaster.addGameCenterEvent","com/stencyl/event/EventMaster.hx",38,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_43_addKeyboardEvent,"com.stencyl.event.EventMaster","addKeyboardEvent",0x9ba7a2a7,"com.stencyl.event.EventMaster.addKeyboardEvent","com/stencyl/event/EventMaster.hx",43,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_47_clear,"com.stencyl.event.EventMaster","clear",0x7463c7d8,"com.stencyl.event.EventMaster.clear","com/stencyl/event/EventMaster.hx",47,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_11_boot,"com.stencyl.event.EventMaster","boot",0x6bc7c047,"com.stencyl.event.EventMaster.boot","com/stencyl/event/EventMaster.hx",11,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_12_boot,"com.stencyl.event.EventMaster","boot",0x6bc7c047,"com.stencyl.event.EventMaster.boot","com/stencyl/event/EventMaster.hx",12,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_13_boot,"com.stencyl.event.EventMaster","boot",0x6bc7c047,"com.stencyl.event.EventMaster.boot","com/stencyl/event/EventMaster.hx",13,0x79ba4da8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0f7615b6ea9fad0_14_boot,"com.stencyl.event.EventMaster","boot",0x6bc7c047,"com.stencyl.event.EventMaster.boot","com/stencyl/event/EventMaster.hx",14,0x79ba4da8)
namespace com{
namespace stencyl{
namespace event{

void EventMaster_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_17_new)
HXLINE(  18)		this->eventTable =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  20)		{
HXLINE(  20)			::Dynamic this1 = this->eventTable;
HXDLIN(  20)			int key = ::com::stencyl::event::EventMaster_obj::TYPE_ADS;
HXDLIN(  20)			( ( ::haxe::ds::IntMap)(this1) )->set(key,::Array_obj< ::Dynamic>::__new());
            		}
HXLINE(  21)		{
HXLINE(  21)			::Dynamic this2 = this->eventTable;
HXDLIN(  21)			int key1 = ::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES;
HXDLIN(  21)			( ( ::haxe::ds::IntMap)(this2) )->set(key1,::Array_obj< ::Dynamic>::__new());
            		}
HXLINE(  22)		{
HXLINE(  22)			::Dynamic this3 = this->eventTable;
HXDLIN(  22)			int key2 = ::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER;
HXDLIN(  22)			( ( ::haxe::ds::IntMap)(this3) )->set(key2,::Array_obj< ::Dynamic>::__new());
            		}
HXLINE(  23)		{
HXLINE(  23)			::Dynamic this4 = this->eventTable;
HXDLIN(  23)			int key3 = ::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD;
HXDLIN(  23)			( ( ::haxe::ds::IntMap)(this4) )->set(key3,::Array_obj< ::Dynamic>::__new());
            		}
            	}

Dynamic EventMaster_obj::__CreateEmpty() { return new EventMaster_obj; }

void *EventMaster_obj::_hx_vtable = 0;

Dynamic EventMaster_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EventMaster_obj > _hx_result = new EventMaster_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventMaster_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a82e42d;
}

void EventMaster_obj::addAdEvent( ::com::stencyl::event::StencylEvent e){
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_28_addAdEvent)
HXDLIN(  28)		( (::Array< ::Dynamic>)(this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_ADS)) )->push(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventMaster_obj,addAdEvent,(void))

void EventMaster_obj::addPurchaseEvent( ::com::stencyl::event::StencylEvent e){
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_33_addPurchaseEvent)
HXDLIN(  33)		( (::Array< ::Dynamic>)(this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES)) )->push(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventMaster_obj,addPurchaseEvent,(void))

void EventMaster_obj::addGameCenterEvent( ::com::stencyl::event::StencylEvent e){
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_38_addGameCenterEvent)
HXDLIN(  38)		( (::Array< ::Dynamic>)(this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER)) )->push(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventMaster_obj,addGameCenterEvent,(void))

void EventMaster_obj::addKeyboardEvent( ::com::stencyl::event::StencylEvent e){
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_43_addKeyboardEvent)
HXDLIN(  43)		( (::Array< ::Dynamic>)(this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD)) )->push(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventMaster_obj,addKeyboardEvent,(void))

void EventMaster_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_47_clear)
HXLINE(  48)		{
HXLINE(  48)			::cpp::VirtualArray arr = ( (::cpp::VirtualArray)(this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_ADS)) );
HXDLIN(  48)			arr->splice((int)0,arr->get_length());
            		}
HXLINE(  49)		{
HXLINE(  49)			::cpp::VirtualArray arr1 = ( (::cpp::VirtualArray)(this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES)) );
HXDLIN(  49)			arr1->splice((int)0,arr1->get_length());
            		}
HXLINE(  50)		{
HXLINE(  50)			::cpp::VirtualArray arr2 = ( (::cpp::VirtualArray)(this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER)) );
HXDLIN(  50)			arr2->splice((int)0,arr2->get_length());
            		}
HXLINE(  51)		{
HXLINE(  51)			::cpp::VirtualArray arr3 = ( (::cpp::VirtualArray)(this->eventTable->get(::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD)) );
HXDLIN(  51)			arr3->splice((int)0,arr3->get_length());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventMaster_obj,clear,(void))

int EventMaster_obj::TYPE_ADS;

int EventMaster_obj::TYPE_PURCHASES;

int EventMaster_obj::TYPE_GAMECENTER;

int EventMaster_obj::TYPE_KEYBOARD;


hx::ObjectPtr< EventMaster_obj > EventMaster_obj::__new() {
	hx::ObjectPtr< EventMaster_obj > __this = new EventMaster_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< EventMaster_obj > EventMaster_obj::__alloc(hx::Ctx *_hx_ctx) {
	EventMaster_obj *__this = (EventMaster_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EventMaster_obj), true, "com.stencyl.event.EventMaster"));
	*(void **)__this = EventMaster_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EventMaster_obj::EventMaster_obj()
{
}

void EventMaster_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventMaster);
	HX_MARK_MEMBER_NAME(eventTable,"eventTable");
	HX_MARK_END_CLASS();
}

void EventMaster_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(eventTable,"eventTable");
}

hx::Val EventMaster_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eventTable") ) { return hx::Val( eventTable ); }
		if (HX_FIELD_EQ(inName,"addAdEvent") ) { return hx::Val( addAdEvent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addPurchaseEvent") ) { return hx::Val( addPurchaseEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"addKeyboardEvent") ) { return hx::Val( addKeyboardEvent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addGameCenterEvent") ) { return hx::Val( addGameCenterEvent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool EventMaster_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"TYPE_ADS") ) { outValue = ( TYPE_ADS ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TYPE_KEYBOARD") ) { outValue = ( TYPE_KEYBOARD ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TYPE_PURCHASES") ) { outValue = ( TYPE_PURCHASES ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TYPE_GAMECENTER") ) { outValue = ( TYPE_GAMECENTER ); return true; }
	}
	return false;
}

hx::Val EventMaster_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"eventTable") ) { eventTable=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EventMaster_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"TYPE_ADS") ) { TYPE_ADS=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TYPE_KEYBOARD") ) { TYPE_KEYBOARD=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TYPE_PURCHASES") ) { TYPE_PURCHASES=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TYPE_GAMECENTER") ) { TYPE_GAMECENTER=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void EventMaster_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("eventTable","\x94","\xc1","\x3e","\x87"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EventMaster_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(EventMaster_obj,eventTable),HX_HCSTRING("eventTable","\x94","\xc1","\x3e","\x87")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo EventMaster_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &EventMaster_obj::TYPE_ADS,HX_HCSTRING("TYPE_ADS","\xcb","\x72","\xb3","\x2f")},
	{hx::fsInt,(void *) &EventMaster_obj::TYPE_PURCHASES,HX_HCSTRING("TYPE_PURCHASES","\x6d","\x68","\x3c","\x69")},
	{hx::fsInt,(void *) &EventMaster_obj::TYPE_GAMECENTER,HX_HCSTRING("TYPE_GAMECENTER","\xec","\x07","\xe2","\xed")},
	{hx::fsInt,(void *) &EventMaster_obj::TYPE_KEYBOARD,HX_HCSTRING("TYPE_KEYBOARD","\x0c","\x62","\x8f","\xe1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String EventMaster_obj_sMemberFields[] = {
	HX_HCSTRING("eventTable","\x94","\xc1","\x3e","\x87"),
	HX_HCSTRING("addAdEvent","\x16","\x78","\xce","\x2d"),
	HX_HCSTRING("addPurchaseEvent","\xb8","\xe5","\x0c","\xc7"),
	HX_HCSTRING("addGameCenterEvent","\x12","\x96","\xa4","\xd2"),
	HX_HCSTRING("addKeyboardEvent","\x12","\x1b","\xc7","\x48"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void EventMaster_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventMaster_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EventMaster_obj::TYPE_ADS,"TYPE_ADS");
	HX_MARK_MEMBER_NAME(EventMaster_obj::TYPE_PURCHASES,"TYPE_PURCHASES");
	HX_MARK_MEMBER_NAME(EventMaster_obj::TYPE_GAMECENTER,"TYPE_GAMECENTER");
	HX_MARK_MEMBER_NAME(EventMaster_obj::TYPE_KEYBOARD,"TYPE_KEYBOARD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventMaster_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventMaster_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventMaster_obj::TYPE_ADS,"TYPE_ADS");
	HX_VISIT_MEMBER_NAME(EventMaster_obj::TYPE_PURCHASES,"TYPE_PURCHASES");
	HX_VISIT_MEMBER_NAME(EventMaster_obj::TYPE_GAMECENTER,"TYPE_GAMECENTER");
	HX_VISIT_MEMBER_NAME(EventMaster_obj::TYPE_KEYBOARD,"TYPE_KEYBOARD");
};

#endif

hx::Class EventMaster_obj::__mClass;

static ::String EventMaster_obj_sStaticFields[] = {
	HX_HCSTRING("TYPE_ADS","\xcb","\x72","\xb3","\x2f"),
	HX_HCSTRING("TYPE_PURCHASES","\x6d","\x68","\x3c","\x69"),
	HX_HCSTRING("TYPE_GAMECENTER","\xec","\x07","\xe2","\xed"),
	HX_HCSTRING("TYPE_KEYBOARD","\x0c","\x62","\x8f","\xe1"),
	::String(null())
};

void EventMaster_obj::__register()
{
	hx::Object *dummy = new EventMaster_obj;
	EventMaster_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.event.EventMaster","\x79","\x9c","\x5b","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventMaster_obj::__GetStatic;
	__mClass->mSetStaticField = &EventMaster_obj::__SetStatic;
	__mClass->mMarkFunc = EventMaster_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EventMaster_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EventMaster_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventMaster_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventMaster_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventMaster_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventMaster_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EventMaster_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_11_boot)
HXDLIN(  11)		TYPE_ADS = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_12_boot)
HXDLIN(  12)		TYPE_PURCHASES = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_13_boot)
HXDLIN(  13)		TYPE_GAMECENTER = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c0f7615b6ea9fad0_14_boot)
HXDLIN(  14)		TYPE_KEYBOARD = (int)4;
            	}
}

} // end namespace com
} // end namespace stencyl
} // end namespace event
