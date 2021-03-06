// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_ElasticOutIn
#define INCLUDED_com_stencyl_utils_motion_ElasticOutIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_70808b85732208f9_483_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,ElasticOutIn)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES ElasticOutIn_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef ElasticOutIn_obj OBJ_;
		ElasticOutIn_obj();

	public:
		enum { _hx_ClassId = 0x64b949f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.ElasticOutIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.ElasticOutIn"); }

		hx::ObjectPtr< ElasticOutIn_obj > __new() {
			hx::ObjectPtr< ElasticOutIn_obj > __this = new ElasticOutIn_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ElasticOutIn_obj > __alloc(hx::Ctx *_hx_ctx) {
			ElasticOutIn_obj *__this = (ElasticOutIn_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ElasticOutIn_obj), false, "com.stencyl.utils.motion.ElasticOutIn"));
			*(void **)__this = ElasticOutIn_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_70808b85732208f9_483_new)
HXDLIN( 483)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ElasticOutIn_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ElasticOutIn","\x1e","\x96","\xeb","\x0d"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_ElasticOutIn */ 
