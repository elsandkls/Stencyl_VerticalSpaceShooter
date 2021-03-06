// Generated by Haxe 3.4.7
#ifndef INCLUDED_RoxGestureAgent
#define INCLUDED_RoxGestureAgent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(RoxGestureAgent)
HX_DECLARE_CLASS0(RoxGestureEvent)
HX_DECLARE_CLASS1(_RoxGestureAgent,TouchPoint)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenFloat2)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenObject)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenTimer)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)



class HXCPP_CLASS_ATTRIBUTES RoxGestureAgent_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RoxGestureAgent_obj OBJ_;
		RoxGestureAgent_obj();

	public:
		enum { _hx_ClassId = 0x69908a33 };

		void __construct( ::openfl::display::InteractiveObject inOwner, ::Dynamic __o_inMode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="RoxGestureAgent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"RoxGestureAgent"); }
		static hx::ObjectPtr< RoxGestureAgent_obj > __new( ::openfl::display::InteractiveObject inOwner, ::Dynamic __o_inMode);
		static hx::ObjectPtr< RoxGestureAgent_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject inOwner, ::Dynamic __o_inMode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RoxGestureAgent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RoxGestureAgent","\x17","\x7a","\xc0","\x9a"); }

		static void __boot();
		static int TOUCH_POINT;
		static int GESTURE;
		static int GESTURE_CAPTURE;
		static int PAN_X;
		static int PAN_Y;
		static int PAN_XY;
		static bool multitouchSupported;
		static int READY;
		static int BEGIN;
		static int TWO_FINGER_MOVE;
		static int MOVE;
		static Float R2D;
		static Float SWIPE_SCROLL_TIME;
		static Float SWIPE_SAMPLE_TIME;
		static Float VELOCITY_RATIO;
		static ::Array< ::String > touchEvents;
		static ::Array< ::String > mouseEvents;
		static ::Array< ::String > geTouchEvents;
		static ::Array< ::String > geMouseEvents;
		static bool initialized;
		static Float moveToleSqr;
		static void init();
		static ::Dynamic init_dyn();

		static  ::openfl::geom::Point localOffset( ::openfl::display::InteractiveObject obj, ::openfl::geom::Point globalOffset);
		static ::Dynamic localOffset_dyn();

		static bool get_multitouchSupported();
		static ::Dynamic get_multitouchSupported_dyn();

		static ::Array< ::String > MAP;
		static  ::haxe::ds::StringMap typeMap;
		static  ::haxe::ds::StringMap initTypeMap();
		static ::Dynamic initTypeMap_dyn();

		int mode;
		Float longPressDelay;
		Float swipeTimeout;
		 ::openfl::display::InteractiveObject owner;
		 ::_RoxGestureAgent::TouchPoint touch0;
		 ::_RoxGestureAgent::TouchPoint touch1;
		 ::List touchList;
		::Array< ::String > listenEvents;
		 ::Dynamic handler;
		Dynamic handler_dyn() { return handler;}
		 ::com::stencyl::utils::motion::TweenTimer longPressTimer;
		 ::com::stencyl::utils::motion::TweenFloat2 tweener;
		 ::openfl::display::Sprite overlay;
		int state;
		void detach();
		::Dynamic detach_dyn();

		 ::Dynamic getHandler( ::Dynamic flags);
		::Dynamic getHandler_dyn();

		void startTweenXY( ::openfl::display::InteractiveObject target,Float interval,Float x,Float y);
		::Dynamic startTweenXY_dyn();

		void stopTween();
		::Dynamic stopTween_dyn();

		void handleEvent(int flags, ::RoxGestureEvent e);
		::Dynamic handleEvent_dyn();

		void convertTouch( ::openfl::events::TouchEvent e);
		::Dynamic convertTouch_dyn();

		void convertMouse( ::openfl::events::MouseEvent e);
		::Dynamic convertMouse_dyn();

		void onTouch( ::openfl::events::TouchEvent e);
		::Dynamic onTouch_dyn();

		 ::openfl::events::MouseEvent touchToMouse( ::openfl::events::TouchEvent e);
		::Dynamic touchToMouse_dyn();

		void onMouse( ::openfl::events::MouseEvent e);
		::Dynamic onMouse_dyn();

		bool handleTouch(::String type, ::openfl::events::MouseEvent e,bool prim,int touchId);
		::Dynamic handleTouch_dyn();

		void sendLongPress( ::_RoxGestureAgent::TouchPoint pt);
		::Dynamic sendLongPress_dyn();

		void setReady();
		::Dynamic setReady_dyn();

		void setMove( ::_RoxGestureAgent::TouchPoint pt);
		::Dynamic setMove_dyn();

		void setTwoFingerMove( ::_RoxGestureAgent::TouchPoint pt);
		::Dynamic setTwoFingerMove_dyn();

		void cancelLongPress();
		::Dynamic cancelLongPress_dyn();

};


#endif /* INCLUDED_RoxGestureAgent */ 
