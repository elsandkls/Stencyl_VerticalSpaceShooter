// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_RoxGestureAgent
#include <RoxGestureAgent.h>
#endif
#ifndef INCLUDED_RoxGestureEvent
#include <RoxGestureEvent.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_56f929c340e3dc46_39_new,"RoxGestureEvent","new",0xe032c65e,"RoxGestureEvent.new","RoxGestureEvent.hx",39,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_51_toString,"RoxGestureEvent","toString",0x11dd61ee,"RoxGestureEvent.toString","RoxGestureEvent.hx",51,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_10_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",10,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_11_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",11,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_12_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",12,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_13_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",13,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_14_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",14,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_15_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",15,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_16_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",16,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_17_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",17,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_19_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",19,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_21_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",21,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_22_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",22,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_23_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",23,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_24_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",24,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_25_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",25,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_26_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",26,0xa52aaed2)
HX_LOCAL_STACK_FRAME(_hx_pos_56f929c340e3dc46_27_boot,"RoxGestureEvent","boot",0x4453cc74,"RoxGestureEvent.boot","RoxGestureEvent.hx",27,0xa52aaed2)

void RoxGestureEvent_obj::__construct(::String type, ::Dynamic __o_bubbles, ::Dynamic __o_cancelable,Float inLocalX,Float inLocalY,Float inStageX,Float inStageY, ::Dynamic __o_inTouchPointId, ::RoxGestureAgent inAgent, ::Dynamic inExtra){
 ::Dynamic bubbles = __o_bubbles.Default(true);
 ::Dynamic cancelable = __o_cancelable.Default(false);
 ::Dynamic inTouchPointId = __o_inTouchPointId.Default(0);
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_39_new)
HXLINE(  40)		super::__construct(type,bubbles,cancelable);
HXLINE(  41)		this->localX = inLocalX;
HXLINE(  42)		this->localY = inLocalY;
HXLINE(  43)		this->stageX = inStageX;
HXLINE(  44)		this->stageY = inStageY;
HXLINE(  45)		this->touchPointID = inTouchPointId;
HXLINE(  46)		this->agent = inAgent;
HXLINE(  47)		this->extra = inExtra;
            	}

Dynamic RoxGestureEvent_obj::__CreateEmpty() { return new RoxGestureEvent_obj; }

void *RoxGestureEvent_obj::_hx_vtable = 0;

Dynamic RoxGestureEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RoxGestureEvent_obj > _hx_result = new RoxGestureEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return _hx_result;
}

bool RoxGestureEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3243040d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3243040d;
	} else {
		return inClassId==(int)0x5eb52fc0;
	}
}

::String RoxGestureEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_51_toString)
HXDLIN(  51)		::String _hx_tmp = (((((((((((this->type + HX_("(",28,00,00,00)) + this->touchPointID) + HX_("): local=(",47,b0,b3,ea)) + this->localX) + HX_(",",2c,00,00,00)) + this->localY) + HX_("), stage=(",4c,ce,83,61)) + this->stageX) + HX_(",",2c,00,00,00)) + this->stageY) + HX_("), extra=",4a,ea,28,97));
HXLINE(  53)		::String _hx_tmp1;
HXDLIN(  53)		if (::Std_obj::is(this->extra,hx::ClassOf< ::openfl::geom::Point >())) {
HXLINE(  53)			::String _hx_tmp2 = ((HX_("Point(",f8,85,c2,2b) + ::Std_obj::string( ::Dynamic(this->extra->__Field(HX_("x",78,00,00,00),hx::paccDynamic)))) + HX_(",",2c,00,00,00));
HXDLIN(  53)			_hx_tmp1 = ((_hx_tmp2 + ::Std_obj::string( ::Dynamic(this->extra->__Field(HX_("y",79,00,00,00),hx::paccDynamic)))) + HX_(")",29,00,00,00));
            		}
            		else {
HXLINE(  53)			_hx_tmp1 = ( (::String)(this->extra) );
            		}
HXLINE(  51)		return (_hx_tmp + _hx_tmp1);
            	}


::String RoxGestureEvent_obj::TOUCH_BEGIN;

::String RoxGestureEvent_obj::TOUCH_END;

::String RoxGestureEvent_obj::TOUCH_MOVE;

::String RoxGestureEvent_obj::TOUCH_OVER;

::String RoxGestureEvent_obj::TOUCH_OUT;

::String RoxGestureEvent_obj::TOUCH_ROLL_OVER;

::String RoxGestureEvent_obj::TOUCH_ROLL_OUT;

::String RoxGestureEvent_obj::TOUCH_TAP;

::String RoxGestureEvent_obj::GESTURE_TAP;

::String RoxGestureEvent_obj::GESTURE_LONG_PRESS;

::String RoxGestureEvent_obj::GESTURE_PAN;

::String RoxGestureEvent_obj::GESTURE_SWIPE;

::String RoxGestureEvent_obj::GESTURE_BEGIN;

::String RoxGestureEvent_obj::GESTURE_PINCH;

::String RoxGestureEvent_obj::GESTURE_ROTATION;

::String RoxGestureEvent_obj::GESTURE_END;


hx::ObjectPtr< RoxGestureEvent_obj > RoxGestureEvent_obj::__new(::String type, ::Dynamic __o_bubbles, ::Dynamic __o_cancelable,Float inLocalX,Float inLocalY,Float inStageX,Float inStageY, ::Dynamic __o_inTouchPointId, ::RoxGestureAgent inAgent, ::Dynamic inExtra) {
	hx::ObjectPtr< RoxGestureEvent_obj > __this = new RoxGestureEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,inLocalX,inLocalY,inStageX,inStageY,__o_inTouchPointId,inAgent,inExtra);
	return __this;
}

hx::ObjectPtr< RoxGestureEvent_obj > RoxGestureEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type, ::Dynamic __o_bubbles, ::Dynamic __o_cancelable,Float inLocalX,Float inLocalY,Float inStageX,Float inStageY, ::Dynamic __o_inTouchPointId, ::RoxGestureAgent inAgent, ::Dynamic inExtra) {
	RoxGestureEvent_obj *__this = (RoxGestureEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RoxGestureEvent_obj), true, "RoxGestureEvent"));
	*(void **)__this = RoxGestureEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,inLocalX,inLocalY,inStageX,inStageY,__o_inTouchPointId,inAgent,inExtra);
	return __this;
}

RoxGestureEvent_obj::RoxGestureEvent_obj()
{
}

void RoxGestureEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RoxGestureEvent);
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(agent,"agent");
	HX_MARK_MEMBER_NAME(extra,"extra");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RoxGestureEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	HX_VISIT_MEMBER_NAME(agent,"agent");
	HX_VISIT_MEMBER_NAME(extra,"extra");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val RoxGestureEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"agent") ) { return hx::Val( agent ); }
		if (HX_FIELD_EQ(inName,"extra") ) { return hx::Val( extra ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"localX") ) { return hx::Val( localX ); }
		if (HX_FIELD_EQ(inName,"localY") ) { return hx::Val( localY ); }
		if (HX_FIELD_EQ(inName,"stageX") ) { return hx::Val( stageX ); }
		if (HX_FIELD_EQ(inName,"stageY") ) { return hx::Val( stageY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return hx::Val( touchPointID ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RoxGestureEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"agent") ) { agent=inValue.Cast<  ::RoxGestureAgent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extra") ) { extra=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RoxGestureEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"));
	outFields->push(HX_HCSTRING("agent","\xc5","\x42","\x40","\x1e"));
	outFields->push(HX_HCSTRING("extra","\x90","\x9a","\x22","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RoxGestureEvent_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(RoxGestureEvent_obj,localX),HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(RoxGestureEvent_obj,localY),HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(RoxGestureEvent_obj,stageX),HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05")},
	{hx::fsFloat,(int)offsetof(RoxGestureEvent_obj,stageY),HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05")},
	{hx::fsInt,(int)offsetof(RoxGestureEvent_obj,touchPointID),HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b")},
	{hx::fsObject /*::RoxGestureAgent*/ ,(int)offsetof(RoxGestureEvent_obj,agent),HX_HCSTRING("agent","\xc5","\x42","\x40","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RoxGestureEvent_obj,extra),HX_HCSTRING("extra","\x90","\x9a","\x22","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo RoxGestureEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &RoxGestureEvent_obj::TOUCH_BEGIN,HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::TOUCH_END,HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::TOUCH_MOVE,HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::TOUCH_OVER,HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::TOUCH_OUT,HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::TOUCH_ROLL_OVER,HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::TOUCH_ROLL_OUT,HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::TOUCH_TAP,HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::GESTURE_TAP,HX_HCSTRING("GESTURE_TAP","\x2d","\xd2","\x29","\x4c")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::GESTURE_LONG_PRESS,HX_HCSTRING("GESTURE_LONG_PRESS","\x76","\x5a","\xbf","\xc9")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::GESTURE_PAN,HX_HCSTRING("GESTURE_PAN","\x27","\xc9","\x26","\x4c")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::GESTURE_SWIPE,HX_HCSTRING("GESTURE_SWIPE","\xc4","\x8a","\x03","\x83")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::GESTURE_BEGIN,HX_HCSTRING("GESTURE_BEGIN","\x73","\x4c","\x4c","\xad")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::GESTURE_PINCH,HX_HCSTRING("GESTURE_PINCH","\x84","\x90","\x92","\xbf")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::GESTURE_ROTATION,HX_HCSTRING("GESTURE_ROTATION","\x14","\x81","\x0a","\x01")},
	{hx::fsString,(void *) &RoxGestureEvent_obj::GESTURE_END,HX_HCSTRING("GESTURE_END","\xa5","\x7b","\x1e","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String RoxGestureEvent_obj_sMemberFields[] = {
	HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"),
	HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"),
	HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"),
	HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"),
	HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"),
	HX_HCSTRING("agent","\xc5","\x42","\x40","\x1e"),
	HX_HCSTRING("extra","\x90","\x9a","\x22","\x77"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void RoxGestureEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_TAP,"TOUCH_TAP");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_TAP,"GESTURE_TAP");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_LONG_PRESS,"GESTURE_LONG_PRESS");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_PAN,"GESTURE_PAN");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_SWIPE,"GESTURE_SWIPE");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_BEGIN,"GESTURE_BEGIN");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_PINCH,"GESTURE_PINCH");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_ROTATION,"GESTURE_ROTATION");
	HX_MARK_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_END,"GESTURE_END");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RoxGestureEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::TOUCH_TAP,"TOUCH_TAP");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_TAP,"GESTURE_TAP");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_LONG_PRESS,"GESTURE_LONG_PRESS");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_PAN,"GESTURE_PAN");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_SWIPE,"GESTURE_SWIPE");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_BEGIN,"GESTURE_BEGIN");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_PINCH,"GESTURE_PINCH");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_ROTATION,"GESTURE_ROTATION");
	HX_VISIT_MEMBER_NAME(RoxGestureEvent_obj::GESTURE_END,"GESTURE_END");
};

#endif

hx::Class RoxGestureEvent_obj::__mClass;

static ::String RoxGestureEvent_obj_sStaticFields[] = {
	HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e"),
	HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a"),
	HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0"),
	HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2"),
	HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a"),
	HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9"),
	HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde"),
	HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a"),
	HX_HCSTRING("GESTURE_TAP","\x2d","\xd2","\x29","\x4c"),
	HX_HCSTRING("GESTURE_LONG_PRESS","\x76","\x5a","\xbf","\xc9"),
	HX_HCSTRING("GESTURE_PAN","\x27","\xc9","\x26","\x4c"),
	HX_HCSTRING("GESTURE_SWIPE","\xc4","\x8a","\x03","\x83"),
	HX_HCSTRING("GESTURE_BEGIN","\x73","\x4c","\x4c","\xad"),
	HX_HCSTRING("GESTURE_PINCH","\x84","\x90","\x92","\xbf"),
	HX_HCSTRING("GESTURE_ROTATION","\x14","\x81","\x0a","\x01"),
	HX_HCSTRING("GESTURE_END","\xa5","\x7b","\x1e","\x4c"),
	::String(null())
};

void RoxGestureEvent_obj::__register()
{
	hx::Object *dummy = new RoxGestureEvent_obj;
	RoxGestureEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("RoxGestureEvent","\x6c","\xff","\x44","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RoxGestureEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RoxGestureEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RoxGestureEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RoxGestureEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RoxGestureEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RoxGestureEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RoxGestureEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RoxGestureEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_10_boot)
HXDLIN(  10)		TOUCH_BEGIN = HX_("rox_touch_begin",05,ef,57,b6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_11_boot)
HXDLIN(  11)		TOUCH_END = HX_("rox_touch_end",b7,d9,48,6f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_12_boot)
HXDLIN(  12)		TOUCH_MOVE = HX_("rox_touch_move",b5,2d,c0,f5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_13_boot)
HXDLIN(  13)		TOUCH_OVER = HX_("rox_touch_over",f8,db,17,f7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_14_boot)
HXDLIN(  14)		TOUCH_OUT = HX_("rox_touch_out",6a,76,50,6f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_15_boot)
HXDLIN(  15)		TOUCH_ROLL_OVER = HX_("rox_touch_roll_over",72,9f,3e,e8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_16_boot)
HXDLIN(  16)		TOUCH_ROLL_OUT = HX_("rox_touch_roll_in",83,06,50,6b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_17_boot)
HXDLIN(  17)		TOUCH_TAP = HX_("rox_touch_tap",3f,30,54,6f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_19_boot)
HXDLIN(  19)		GESTURE_TAP = HX_("rox_gesture_tap",09,bf,3f,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_21_boot)
HXDLIN(  21)		GESTURE_LONG_PRESS = HX_("rox_gesture_long_press",5a,a1,99,55);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_22_boot)
HXDLIN(  22)		GESTURE_PAN = HX_("rox_gesture_pan",03,b6,3c,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_23_boot)
HXDLIN(  23)		GESTURE_SWIPE = HX_("rox_gesture_swipe",a0,82,13,94);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_24_boot)
HXDLIN(  24)		GESTURE_BEGIN = HX_("rox_gesture_begin",4f,44,5c,be);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_25_boot)
HXDLIN(  25)		GESTURE_PINCH = HX_("rox_gesture_pinch",60,88,a2,d0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_26_boot)
HXDLIN(  26)		GESTURE_ROTATION = HX_("rox_gesture_rotation",d8,3e,92,98);
            	}
{
            	HX_STACKFRAME(&_hx_pos_56f929c340e3dc46_27_boot)
HXDLIN(  27)		GESTURE_END = HX_("rox_gesture_end",81,68,34,3a);
            	}
}
