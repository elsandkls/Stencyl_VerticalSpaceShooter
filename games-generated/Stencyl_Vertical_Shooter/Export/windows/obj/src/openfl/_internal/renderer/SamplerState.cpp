// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_SamplerState
#include <openfl/_internal/renderer/SamplerState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d0c904c9b65dc455_27_new,"openfl._internal.renderer.SamplerState","new",0xa4ef68d6,"openfl._internal.renderer.SamplerState.new","openfl/_internal/renderer/SamplerState.hx",27,0x3baccdbb)
HX_LOCAL_STACK_FRAME(_hx_pos_d0c904c9b65dc455_40_clone,"openfl._internal.renderer.SamplerState","clone",0xfd6e3553,"openfl._internal.renderer.SamplerState.clone","openfl/_internal/renderer/SamplerState.hx",40,0x3baccdbb)
HX_LOCAL_STACK_FRAME(_hx_pos_d0c904c9b65dc455_49_copyFrom,"openfl._internal.renderer.SamplerState","copyFrom",0xfedb0789,"openfl._internal.renderer.SamplerState.copyFrom","openfl/_internal/renderer/SamplerState.hx",49,0x3baccdbb)
HX_LOCAL_STACK_FRAME(_hx_pos_d0c904c9b65dc455_63_equals,"openfl._internal.renderer.SamplerState","equals",0x74a58389,"openfl._internal.renderer.SamplerState.equals","openfl/_internal/renderer/SamplerState.hx",63,0x3baccdbb)
namespace openfl{
namespace _internal{
namespace renderer{

void SamplerState_obj::__construct( ::Dynamic __o_wrap, ::Dynamic __o_filter, ::Dynamic __o_mipfilter,hx::Null< Float >  __o_lodBias,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_textureAlpha){
 ::Dynamic wrap = __o_wrap.Default(0);
 ::Dynamic filter = __o_filter.Default(5);
 ::Dynamic mipfilter = __o_mipfilter.Default(2);
Float lodBias = __o_lodBias.Default(((Float)0.0));
bool ignoreSampler = __o_ignoreSampler.Default(false);
bool centroid = __o_centroid.Default(false);
bool textureAlpha = __o_textureAlpha.Default(false);
            	HX_STACKFRAME(&_hx_pos_d0c904c9b65dc455_27_new)
HXLINE(  29)		this->wrap = wrap;
HXLINE(  30)		this->filter = filter;
HXLINE(  31)		this->mipfilter = mipfilter;
HXLINE(  32)		this->lodBias = lodBias;
HXLINE(  33)		this->ignoreSampler = ignoreSampler;
HXLINE(  34)		this->centroid = centroid;
HXLINE(  35)		this->textureAlpha = textureAlpha;
            	}

Dynamic SamplerState_obj::__CreateEmpty() { return new SamplerState_obj; }

void *SamplerState_obj::_hx_vtable = 0;

Dynamic SamplerState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SamplerState_obj > _hx_result = new SamplerState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool SamplerState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05ff5b74;
}

 ::openfl::_internal::renderer::SamplerState SamplerState_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d0c904c9b65dc455_40_clone)
HXLINE(  42)		 ::openfl::_internal::renderer::SamplerState copy =  ::openfl::_internal::renderer::SamplerState_obj::__alloc( HX_CTX ,this->wrap,this->filter,this->mipfilter,this->lodBias,this->ignoreSampler,this->centroid,this->textureAlpha);
HXLINE(  43)		copy->mipmapGenerated = this->mipmapGenerated;
HXLINE(  44)		return copy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SamplerState_obj,clone,return )

void SamplerState_obj::copyFrom( ::openfl::_internal::renderer::SamplerState other){
            	HX_STACKFRAME(&_hx_pos_d0c904c9b65dc455_49_copyFrom)
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if (hx::IsNotNull( other )) {
HXLINE(  51)			_hx_tmp = other->ignoreSampler;
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  51)			return;
            		}
HXLINE(  53)		this->wrap = other->wrap;
HXLINE(  54)		this->filter = other->filter;
HXLINE(  55)		this->mipfilter = other->mipfilter;
HXLINE(  56)		this->lodBias = other->lodBias;
HXLINE(  57)		this->centroid = other->centroid;
HXLINE(  58)		this->textureAlpha = other->textureAlpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,copyFrom,(void))

bool SamplerState_obj::equals( ::openfl::_internal::renderer::SamplerState other){
            	HX_STACKFRAME(&_hx_pos_d0c904c9b65dc455_63_equals)
HXLINE(  65)		if (hx::IsNull( other )) {
HXLINE(  67)			return false;
            		}
HXLINE(  71)		bool _hx_tmp;
HXDLIN(  71)		bool _hx_tmp1;
HXDLIN(  71)		bool _hx_tmp2;
HXDLIN(  71)		if (hx::IsEq( this->wrap,other->wrap )) {
HXLINE(  71)			_hx_tmp2 = hx::IsEq( this->filter,other->filter );
            		}
            		else {
HXLINE(  71)			_hx_tmp2 = false;
            		}
HXDLIN(  71)		if (_hx_tmp2) {
HXLINE(  71)			_hx_tmp1 = hx::IsEq( this->mipfilter,other->mipfilter );
            		}
            		else {
HXLINE(  71)			_hx_tmp1 = false;
            		}
HXDLIN(  71)		if (_hx_tmp1) {
HXLINE(  71)			_hx_tmp = (this->lodBias == other->lodBias);
            		}
            		else {
HXLINE(  71)			_hx_tmp = false;
            		}
HXDLIN(  71)		if (_hx_tmp) {
HXLINE(  71)			return (this->textureAlpha == other->textureAlpha);
            		}
            		else {
HXLINE(  71)			return false;
            		}
HXDLIN(  71)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,equals,return )


SamplerState_obj::SamplerState_obj()
{
}

void SamplerState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerState);
	HX_MARK_MEMBER_NAME(centroid,"centroid");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(ignoreSampler,"ignoreSampler");
	HX_MARK_MEMBER_NAME(lodBias,"lodBias");
	HX_MARK_MEMBER_NAME(mipfilter,"mipfilter");
	HX_MARK_MEMBER_NAME(mipmapGenerated,"mipmapGenerated");
	HX_MARK_MEMBER_NAME(textureAlpha,"textureAlpha");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_END_CLASS();
}

void SamplerState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(centroid,"centroid");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(ignoreSampler,"ignoreSampler");
	HX_VISIT_MEMBER_NAME(lodBias,"lodBias");
	HX_VISIT_MEMBER_NAME(mipfilter,"mipfilter");
	HX_VISIT_MEMBER_NAME(mipmapGenerated,"mipmapGenerated");
	HX_VISIT_MEMBER_NAME(textureAlpha,"textureAlpha");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
}

hx::Val SamplerState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return hx::Val( wrap ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { return hx::Val( lodBias ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centroid") ) { return hx::Val( centroid ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return hx::Val( copyFrom_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { return hx::Val( mipfilter ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureAlpha") ) { return hx::Val( textureAlpha ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreSampler") ) { return hx::Val( ignoreSampler ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mipmapGenerated") ) { return hx::Val( mipmapGenerated ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SamplerState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { lodBias=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centroid") ) { centroid=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { mipfilter=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureAlpha") ) { textureAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreSampler") ) { ignoreSampler=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mipmapGenerated") ) { mipmapGenerated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97"));
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1"));
	outFields->push(HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"));
	outFields->push(HX_HCSTRING("mipfilter","\x4c","\x98","\x13","\xfd"));
	outFields->push(HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6"));
	outFields->push(HX_HCSTRING("textureAlpha","\x83","\x54","\x36","\x1a"));
	outFields->push(HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SamplerState_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(SamplerState_obj,centroid),HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SamplerState_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,ignoreSampler),HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1")},
	{hx::fsFloat,(int)offsetof(SamplerState_obj,lodBias),HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SamplerState_obj,mipfilter),HX_HCSTRING("mipfilter","\x4c","\x98","\x13","\xfd")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,mipmapGenerated),HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6")},
	{hx::fsBool,(int)offsetof(SamplerState_obj,textureAlpha),HX_HCSTRING("textureAlpha","\x83","\x54","\x36","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SamplerState_obj,wrap),HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SamplerState_obj_sStaticStorageInfo = 0;
#endif

static ::String SamplerState_obj_sMemberFields[] = {
	HX_HCSTRING("centroid","\x40","\xe0","\xe5","\x97"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("ignoreSampler","\x16","\x5a","\x57","\xa1"),
	HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"),
	HX_HCSTRING("mipfilter","\x4c","\x98","\x13","\xfd"),
	HX_HCSTRING("mipmapGenerated","\xe7","\xb0","\x11","\xf6"),
	HX_HCSTRING("textureAlpha","\x83","\x54","\x36","\x1a"),
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	::String(null()) };

static void SamplerState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SamplerState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	hx::Object *dummy = new SamplerState_obj;
	SamplerState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.SamplerState","\xe4","\x05","\x71","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SamplerState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SamplerState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SamplerState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SamplerState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SamplerState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
