// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_APIKeys
#define INCLUDED_com_stencyl_APIKeys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,stencyl,APIKeys)

namespace com{
namespace stencyl{


class HXCPP_CLASS_ATTRIBUTES APIKeys_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef APIKeys_obj OBJ_;
		APIKeys_obj();

	public:
		enum { _hx_ClassId = 0x5670bea3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.APIKeys")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.APIKeys"); }

		hx::ObjectPtr< APIKeys_obj > __new() {
			hx::ObjectPtr< APIKeys_obj > __this = new APIKeys_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< APIKeys_obj > __alloc(hx::Ctx *_hx_ctx) {
			APIKeys_obj *__this = (APIKeys_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(APIKeys_obj), false, "com.stencyl.APIKeys"));
			*(void **)__this = APIKeys_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APIKeys_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("APIKeys","\x8e","\x6b","\xa0","\xc5"); }

		static void __boot();
		static ::String whirlID;
		static ::String whirlID1;
		static ::String ioswhirlID;
		static ::String ioswhirlID1;
		static ::String cpmstarID;
		static ::String newgroundsID;
		static ::String newgroundsKey;
		static ::String androidPublicKey;
};

} // end namespace com
} // end namespace stencyl

#endif /* INCLUDED_com_stencyl_APIKeys */ 
