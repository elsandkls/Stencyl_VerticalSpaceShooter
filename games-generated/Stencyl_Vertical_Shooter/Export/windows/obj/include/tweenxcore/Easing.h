// Generated by Haxe 3.4.7
#ifndef INCLUDED_tweenxcore_Easing
#define INCLUDED_tweenxcore_Easing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenxcore,Easing)

namespace tweenxcore{


class HXCPP_CLASS_ATTRIBUTES Easing_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Easing_obj OBJ_;
		Easing_obj();

	public:
		enum { _hx_ClassId = 0x3095fb17 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tweenxcore.Easing")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"tweenxcore.Easing"); }

		hx::ObjectPtr< Easing_obj > __new() {
			hx::ObjectPtr< Easing_obj > __this = new Easing_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Easing_obj > __alloc(hx::Ctx *_hx_ctx) {
			Easing_obj *__this = (Easing_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Easing_obj), false, "tweenxcore.Easing"));
			*(void **)__this = Easing_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Easing_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Easing","\xcb","\xc0","\xd1","\xbc"); }

		static void __boot();
		static Float PI;
		static Float PI_H;
		static Float LN_2;
		static Float LN_2_10;
		static Float linear(Float t);
		static ::Dynamic linear_dyn();

		static Float sineIn(Float t);
		static ::Dynamic sineIn_dyn();

		static Float sineOut(Float t);
		static ::Dynamic sineOut_dyn();

		static Float sineInOut(Float t);
		static ::Dynamic sineInOut_dyn();

		static Float sineOutIn(Float t);
		static ::Dynamic sineOutIn_dyn();

		static Float quadIn(Float t);
		static ::Dynamic quadIn_dyn();

		static Float quadOut(Float t);
		static ::Dynamic quadOut_dyn();

		static Float quadInOut(Float t);
		static ::Dynamic quadInOut_dyn();

		static Float quadOutIn(Float t);
		static ::Dynamic quadOutIn_dyn();

		static Float cubicIn(Float t);
		static ::Dynamic cubicIn_dyn();

		static Float cubicOut(Float t);
		static ::Dynamic cubicOut_dyn();

		static Float cubicInOut(Float t);
		static ::Dynamic cubicInOut_dyn();

		static Float cubicOutIn(Float t);
		static ::Dynamic cubicOutIn_dyn();

		static Float quartIn(Float t);
		static ::Dynamic quartIn_dyn();

		static Float quartOut(Float t);
		static ::Dynamic quartOut_dyn();

		static Float quartInOut(Float t);
		static ::Dynamic quartInOut_dyn();

		static Float quartOutIn(Float t);
		static ::Dynamic quartOutIn_dyn();

		static Float quintIn(Float t);
		static ::Dynamic quintIn_dyn();

		static Float quintOut(Float t);
		static ::Dynamic quintOut_dyn();

		static Float quintInOut(Float t);
		static ::Dynamic quintInOut_dyn();

		static Float quintOutIn(Float t);
		static ::Dynamic quintOutIn_dyn();

		static Float expoIn(Float t);
		static ::Dynamic expoIn_dyn();

		static Float expoOut(Float t);
		static ::Dynamic expoOut_dyn();

		static Float expoInOut(Float t);
		static ::Dynamic expoInOut_dyn();

		static Float expoOutIn(Float t);
		static ::Dynamic expoOutIn_dyn();

		static Float circIn(Float t);
		static ::Dynamic circIn_dyn();

		static Float circOut(Float t);
		static ::Dynamic circOut_dyn();

		static Float circInOut(Float t);
		static ::Dynamic circInOut_dyn();

		static Float circOutIn(Float t);
		static ::Dynamic circOutIn_dyn();

		static Float bounceIn(Float t);
		static ::Dynamic bounceIn_dyn();

		static Float bounceOut(Float t);
		static ::Dynamic bounceOut_dyn();

		static Float bounceInOut(Float t);
		static ::Dynamic bounceInOut_dyn();

		static Float bounceOutIn(Float t);
		static ::Dynamic bounceOutIn_dyn();

		static Float overshoot;
		static Float backIn(Float t);
		static ::Dynamic backIn_dyn();

		static Float backOut(Float t);
		static ::Dynamic backOut_dyn();

		static Float backInOut(Float t);
		static ::Dynamic backInOut_dyn();

		static Float backOutIn(Float t);
		static ::Dynamic backOutIn_dyn();

		static Float amplitude;
		static Float period;
		static Float elasticIn(Float t);
		static ::Dynamic elasticIn_dyn();

		static Float elasticOut(Float t);
		static ::Dynamic elasticOut_dyn();

		static Float elasticInOut(Float t);
		static ::Dynamic elasticInOut_dyn();

		static Float elasticOutIn(Float t);
		static ::Dynamic elasticOutIn_dyn();

		static Float warpOut(Float t);
		static ::Dynamic warpOut_dyn();

		static Float warpIn(Float t);
		static ::Dynamic warpIn_dyn();

		static Float warpInOut(Float t);
		static ::Dynamic warpInOut_dyn();

		static Float warpOutIn(Float t);
		static ::Dynamic warpOutIn_dyn();

};

} // end namespace tweenxcore

#endif /* INCLUDED_tweenxcore_Easing */ 