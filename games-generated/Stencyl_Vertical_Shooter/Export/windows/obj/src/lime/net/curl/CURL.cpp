// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURL
#include <lime/net/curl/CURL.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_33_new,"lime.net.curl.CURL","new",0x4e46b036,"lime.net.curl.CURL.new","lime/net/curl/CURL.hx",33,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_51_cleanup,"lime.net.curl.CURL","cleanup",0x6d508efa,"lime.net.curl.CURL.cleanup","lime/net/curl/CURL.hx",51,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_60_clone,"lime.net.curl.CURL","clone",0x20ae14b3,"lime.net.curl.CURL.clone","lime/net/curl/CURL.hx",60,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_68_escape,"lime.net.curl.CURL","escape",0x44306d6b,"lime.net.curl.CURL.escape","lime/net/curl/CURL.hx",68,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_97_getInfo,"lime.net.curl.CURL","getInfo",0xda4c6afa,"lime.net.curl.CURL.getInfo","lime/net/curl/CURL.hx",97,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_128_pause,"lime.net.curl.CURL","pause",0x95a2d84c,"lime.net.curl.CURL.pause","lime/net/curl/CURL.hx",128,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_139_perform,"lime.net.curl.CURL","perform",0x3cec6b77,"lime.net.curl.CURL.perform","lime/net/curl/CURL.hx",139,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_161_reset,"lime.net.curl.CURL","reset",0xbf134b25,"lime.net.curl.CURL.reset","lime/net/curl/CURL.hx",161,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_178_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",178,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_208_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",208,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_190_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",190,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_236_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",236,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_199_setOption,"lime.net.curl.CURL","setOption",0xcff7ad0d,"lime.net.curl.CURL.setOption","lime/net/curl/CURL.hx",199,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_277_unescape,"lime.net.curl.CURL","unescape",0xe7c56b04,"lime.net.curl.CURL.unescape","lime/net/curl/CURL.hx",277,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_86_getDate,"lime.net.curl.CURL","getDate",0xd6f488ba,"lime.net.curl.CURL.getDate","lime/net/curl/CURL.hx",86,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_108_globalCleanup,"lime.net.curl.CURL","globalCleanup",0x3b488c57,"lime.net.curl.CURL.globalCleanup","lime/net/curl/CURL.hx",108,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_117_globalInit,"lime.net.curl.CURL","globalInit",0x3240ecfd,"lime.net.curl.CURL.globalInit","lime/net/curl/CURL.hx",117,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_262_strerror,"lime.net.curl.CURL","strerror",0x9bdff9e1,"lime.net.curl.CURL.strerror","lime/net/curl/CURL.hx",262,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_292_version,"lime.net.curl.CURL","version",0x3f0069ee,"lime.net.curl.CURL.version","lime/net/curl/CURL.hx",292,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_310_versionInfo,"lime.net.curl.CURL","versionInfo",0x0bdb5d7c,"lime.net.curl.CURL.versionInfo","lime/net/curl/CURL.hx",310,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_19_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",19,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_20_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",20,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_21_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",21,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_22_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",22,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_23_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",23,0x82d3899b)
HX_LOCAL_STACK_FRAME(_hx_pos_eb990c46aed3e3e1_24_boot,"lime.net.curl.CURL","boot",0x27ac7f9c,"lime.net.curl.CURL.boot","lime/net/curl/CURL.hx",24,0x82d3899b)
namespace lime{
namespace net{
namespace curl{

void CURL_obj::__construct( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_33_new)
HXDLIN(  33)		if (hx::IsNotNull( handle )) {
HXLINE(  35)			this->handle = handle;
            		}
            		else {
HXLINE(  40)			this->handle = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_init()) );
            		}
            	}

Dynamic CURL_obj::__CreateEmpty() { return new CURL_obj; }

void *CURL_obj::_hx_vtable = 0;

Dynamic CURL_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CURL_obj > _hx_result = new CURL_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CURL_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3859fac0;
}

void CURL_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_51_cleanup)
HXDLIN(  51)		::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_cleanup(hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,cleanup,(void))

 ::lime::net::curl::CURL CURL_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_60_clone)
HXDLIN(  60)		return  ::lime::net::curl::CURL_obj::__alloc( HX_CTX ,( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_duphandle(hx::DynamicPtr(this->handle))) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,clone,return )

::String CURL_obj::escape(::String url,int length){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_68_escape)
HXLINE(  71)		 ::hx::Object * result = ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_escape(hx::DynamicPtr(this->handle),url,length);
HXLINE(  75)		return ( ( ::Dynamic)(result) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(CURL_obj,escape,return )

 ::Dynamic CURL_obj::getInfo(int info){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_97_getInfo)
HXDLIN(  97)		 ::Dynamic _hx_tmp = hx::ClassOf< ::lime::_internal::backend::native::NativeCFFI >();
HXDLIN(  97)		 ::Dynamic _hx_tmp1 = this->handle;
HXDLIN(  97)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_getinfo(hx::DynamicPtr(_hx_tmp1),info)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,getInfo,return )

int CURL_obj::pause(int bitMask){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_128_pause)
HXDLIN( 128)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_pause(hx::DynamicPtr(this->handle),bitMask);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,pause,return )

int CURL_obj::perform(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_139_perform)
HXDLIN( 139)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_perform(hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,perform,return )

void CURL_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_161_reset)
HXDLIN( 161)		::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_reset(hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,reset,(void))

int CURL_obj::setOption(int option, ::Dynamic parameter){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_178_setOption)
HXDLIN( 178)		 ::lime::net::curl::CURL _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 181)		 ::haxe::io::Bytes bytes = null();
HXLINE( 183)		switch((int)(option)){
            			case (int)10009: {
HXLINE( 222)				bytes = ( ( ::haxe::io::Bytes)(parameter) );
            			}
            			break;
            			case (int)10023: {
            			}
            			break;
            			case (int)20011: {
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::lime::net::curl::CURL,_gthis, ::Dynamic,callback) HXARGC(1)
            				int _hx_run( ::haxe::io::Bytes bytes1){
            					HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_208_setOption)
HXLINE( 208)					return ( (int)(callback(_gthis,bytes1)) );
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 205)				 ::Dynamic callback = parameter;
HXLINE( 206)				parameter =  ::Dynamic(new _hx_Closure_0(_gthis,callback));
HXLINE( 212)				bytes = ::haxe::io::Bytes_obj::alloc((int)0);
            			}
            			break;
            			case (int)20056: {
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1, ::lime::net::curl::CURL,_gthis, ::Dynamic,callback1) HXARGC(4)
            				void _hx_run(Float dltotal,Float dlnow,Float ultotal,Float ulnow){
            					HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_190_setOption)
HXLINE( 190)					callback1(_gthis,dltotal,dlnow,ultotal,ulnow);
            				}
            				HX_END_LOCAL_FUNC4((void))

HXLINE( 187)				 ::Dynamic callback1 = parameter;
HXLINE( 188)				parameter =  ::Dynamic(new _hx_Closure_1(_gthis,callback1));
            			}
            			break;
            			case (int)20079: {
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_2, ::lime::net::curl::CURL,_gthis, ::Dynamic,callback2) HXARGC(1)
            				void _hx_run(::String header){
            					HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_236_setOption)
HXLINE( 236)					callback2(_gthis,header);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 226)				 ::Dynamic callback2 = parameter;
HXLINE( 234)				parameter =  ::Dynamic(new _hx_Closure_2(_gthis,callback2));
            			}
            			break;
            			case (int)20219: {
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_3, ::lime::net::curl::CURL,_gthis, ::Dynamic,callback3) HXARGC(4)
            				int _hx_run(int dltotal1,int dlnow1,int ultotal1,int ulnow1){
            					HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_199_setOption)
HXLINE( 199)					return ( (int)(callback3(_gthis,dltotal1,dlnow1,ultotal1,ulnow1)) );
            				}
            				HX_END_LOCAL_FUNC4(return)

HXLINE( 196)				 ::Dynamic callback3 = parameter;
HXLINE( 197)				parameter =  ::Dynamic(new _hx_Closure_3(_gthis,callback3));
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 254)		 ::Dynamic _hx_tmp = hx::ClassOf< ::lime::_internal::backend::native::NativeCFFI >();
HXDLIN( 254)		 ::Dynamic _hx_tmp1 = this->handle;
HXDLIN( 254)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_setopt(hx::DynamicPtr(_hx_tmp1),option,hx::DynamicPtr(parameter),hx::DynamicPtr(bytes));
            	}


HX_DEFINE_DYNAMIC_FUNC2(CURL_obj,setOption,return )

::String CURL_obj::unescape(::String url,int inLength,int outLength){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_277_unescape)
HXLINE( 280)		 ::hx::Object * result = ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_unescape(hx::DynamicPtr(this->handle),url,inLength,outLength);
HXLINE( 284)		return ( ( ::Dynamic)(result) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(CURL_obj,unescape,return )

int CURL_obj::GLOBAL_SSL;

int CURL_obj::GLOBAL_WIN32;

int CURL_obj::GLOBAL_ALL;

int CURL_obj::GLOBAL_NOTHING;

int CURL_obj::GLOBAL_DEFAULT;

int CURL_obj::GLOBAL_ACK_EINTR;

int CURL_obj::getDate(::String date,int now){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_86_getDate)
HXDLIN(  86)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_getdate(date,now);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_obj,getDate,return )

void CURL_obj::globalCleanup(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_108_globalCleanup)
HXDLIN( 108)		::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_global_cleanup();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,globalCleanup,(void))

int CURL_obj::globalInit(int flags){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_117_globalInit)
HXDLIN( 117)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_global_init(flags);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,globalInit,return )

::String CURL_obj::strerror(int code){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_262_strerror)
HXLINE( 265)		 ::Dynamic result = hx::ClassOf< ::lime::_internal::backend::native::NativeCFFI >();
HXDLIN( 265)		 ::hx::Object * result1 = ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_easy_strerror(code);
HXLINE( 269)		return ( ( ::Dynamic)(result1) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,strerror,return )

::String CURL_obj::version(){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_292_version)
HXLINE( 295)		 ::hx::Object * result = ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_version();
HXLINE( 299)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_obj,version,return )

 ::Dynamic CURL_obj::versionInfo(int type){
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_310_versionInfo)
HXDLIN( 310)		 ::Dynamic _hx_tmp = hx::ClassOf< ::lime::_internal::backend::native::NativeCFFI >();
HXDLIN( 310)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_version_info(type)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_obj,versionInfo,return )


hx::ObjectPtr< CURL_obj > CURL_obj::__new( ::Dynamic handle) {
	hx::ObjectPtr< CURL_obj > __this = new CURL_obj();
	__this->__construct(handle);
	return __this;
}

hx::ObjectPtr< CURL_obj > CURL_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic handle) {
	CURL_obj *__this = (CURL_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CURL_obj), true, "lime.net.curl.CURL"));
	*(void **)__this = CURL_obj::_hx_vtable;
	__this->__construct(handle);
	return __this;
}

CURL_obj::CURL_obj()
{
}

void CURL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CURL);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(headerBytes,"headerBytes");
	HX_MARK_MEMBER_NAME(writeBytes,"writeBytes");
	HX_MARK_END_CLASS();
}

void CURL_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(headerBytes,"headerBytes");
	HX_VISIT_MEMBER_NAME(writeBytes,"writeBytes");
}

hx::Val CURL_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"escape") ) { return hx::Val( escape_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return hx::Val( cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInfo") ) { return hx::Val( getInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"perform") ) { return hx::Val( perform_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"unescape") ) { return hx::Val( unescape_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setOption") ) { return hx::Val( setOption_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return hx::Val( writeBytes ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"headerBytes") ) { return hx::Val( headerBytes ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CURL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getDate") ) { outValue = getDate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strerror") ) { outValue = strerror_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalInit") ) { outValue = globalInit_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionInfo") ) { outValue = versionInfo_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalCleanup") ) { outValue = globalCleanup_dyn(); return true; }
	}
	return false;
}

hx::Val CURL_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { writeBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"headerBytes") ) { headerBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CURL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("headerBytes","\x9e","\xaf","\x56","\xca"));
	outFields->push(HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CURL_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CURL_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(CURL_obj,headerBytes),HX_HCSTRING("headerBytes","\x9e","\xaf","\x56","\xca")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(CURL_obj,writeBytes),HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo CURL_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CURL_obj::GLOBAL_SSL,HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52")},
	{hx::fsInt,(void *) &CURL_obj::GLOBAL_WIN32,HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59")},
	{hx::fsInt,(void *) &CURL_obj::GLOBAL_ALL,HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52")},
	{hx::fsInt,(void *) &CURL_obj::GLOBAL_NOTHING,HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2")},
	{hx::fsInt,(void *) &CURL_obj::GLOBAL_DEFAULT,HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe")},
	{hx::fsInt,(void *) &CURL_obj::GLOBAL_ACK_EINTR,HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String CURL_obj_sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("headerBytes","\x9e","\xaf","\x56","\xca"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("getInfo","\x24","\xe8","\x3d","\x18"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("perform","\xa1","\xe8","\xdd","\x7a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("setOption","\xb7","\x48","\x22","\x8b"),
	HX_HCSTRING("unescape","\x9a","\x72","\x21","\xdd"),
	::String(null()) };

static void CURL_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_MARK_MEMBER_NAME(CURL_obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CURL_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_VISIT_MEMBER_NAME(CURL_obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
};

#endif

hx::Class CURL_obj::__mClass;

static ::String CURL_obj_sStaticFields[] = {
	HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52"),
	HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59"),
	HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52"),
	HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2"),
	HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe"),
	HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74"),
	HX_HCSTRING("getDate","\xe4","\x05","\xe6","\x14"),
	HX_HCSTRING("globalCleanup","\x01","\x45","\x7b","\xd1"),
	HX_HCSTRING("globalInit","\x13","\x86","\x5e","\x3c"),
	HX_HCSTRING("strerror","\x77","\x01","\x3c","\x91"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("versionInfo","\xa6","\xb7","\xa3","\xdb"),
	::String(null())
};

void CURL_obj::__register()
{
	hx::Object *dummy = new CURL_obj;
	CURL_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl.CURL","\x44","\x1d","\xf9","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURL_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CURL_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CURL_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CURL_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CURL_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CURL_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CURL_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CURL_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CURL_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_19_boot)
HXDLIN(  19)		GLOBAL_SSL = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_20_boot)
HXDLIN(  20)		GLOBAL_WIN32 = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_21_boot)
HXDLIN(  21)		GLOBAL_ALL = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_22_boot)
HXDLIN(  22)		GLOBAL_NOTHING = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_23_boot)
HXDLIN(  23)		GLOBAL_DEFAULT = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb990c46aed3e3e1_24_boot)
HXDLIN(  24)		GLOBAL_ACK_EINTR = (int)4;
            	}
}

} // end namespace lime
} // end namespace net
} // end namespace curl