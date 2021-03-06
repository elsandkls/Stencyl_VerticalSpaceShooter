// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_TweenFloat
#define INCLUDED_com_stencyl_utils_motion_TweenFloat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_TweenObject
#include <com/stencyl/utils/motion/TweenObject.h>
#endif
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenFloat)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenObject)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES TweenFloat_obj : public  ::com::stencyl::utils::motion::TweenObject_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::TweenObject_obj super;
		typedef TweenFloat_obj OBJ_;
		TweenFloat_obj();

	public:
		enum { _hx_ClassId = 0x096df50d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.utils.motion.TweenFloat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.utils.motion.TweenFloat"); }
		static hx::ObjectPtr< TweenFloat_obj > __new();
		static hx::ObjectPtr< TweenFloat_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TweenFloat_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TweenFloat","\x51","\xeb","\x8b","\xb0"); }

		Float startValue;
		Float endValue;
		Float value;
		 ::com::stencyl::utils::motion::TweenFloat tween(Float startValue,Float endValue, ::com::stencyl::utils::motion::EasingFunction easing,int duration);
		::Dynamic tween_dyn();

		void updateValue();

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_TweenFloat */ 
