// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_Linear
#define INCLUDED_com_stencyl_utils_motion_Linear

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_3754bcad1bd94f26_11_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,Linear)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES Linear_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef Linear_obj OBJ_;
		Linear_obj();

	public:
		enum { _hx_ClassId = 0x1be841c1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.Linear")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.Linear"); }

		hx::ObjectPtr< Linear_obj > __new() {
			hx::ObjectPtr< Linear_obj > __this = new Linear_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Linear_obj > __alloc(hx::Ctx *_hx_ctx) {
			Linear_obj *__this = (Linear_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Linear_obj), false, "com.stencyl.utils.motion.Linear"));
			*(void **)__this = Linear_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_3754bcad1bd94f26_11_new)
HXDLIN(  11)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Linear_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Linear","\x05","\xc6","\x34","\x21"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_Linear */ 