// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_mbs_scene_layers_MbsColorBackground
#include <com/stencyl/io/mbs/scene/layers/MbsColorBackground.h>
#endif
#ifndef INCLUDED_mbs_core_ComposedType
#include <mbs/core/ComposedType.h>
#endif
#ifndef INCLUDED_mbs_core_MbsField
#include <mbs/core/MbsField.h>
#endif
#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
#ifndef INCLUDED_mbs_core_MbsType
#include <mbs/core/MbsType.h>
#endif
#ifndef INCLUDED_mbs_core_MbsTypes
#include <mbs/core/MbsTypes.h>
#endif
#ifndef INCLUDED_mbs_io_MbsIO
#include <mbs/io/MbsIO.h>
#endif
#ifndef INCLUDED_mbs_io_MbsList
#include <mbs/io/MbsList.h>
#endif
#ifndef INCLUDED_mbs_io_MbsListBase
#include <mbs/io/MbsListBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d9818ca7bd240ef_38_new,"com.stencyl.io.mbs.scene.layers.MbsColorBackground","new",0x21b19e86,"com.stencyl.io.mbs.scene.layers.MbsColorBackground.new","com/stencyl/io/mbs/scene/layers/MbsColorBackground.hx",38,0x62354d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d9818ca7bd240ef_33_getMbsType,"com.stencyl.io.mbs.scene.layers.MbsColorBackground","getMbsType",0x2b8a29fc,"com.stencyl.io.mbs.scene.layers.MbsColorBackground.getMbsType","com/stencyl/io/mbs/scene/layers/MbsColorBackground.hx",33,0x62354d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d9818ca7bd240ef_43_allocateNew,"com.stencyl.io.mbs.scene.layers.MbsColorBackground","allocateNew",0x81feadc9,"com.stencyl.io.mbs.scene.layers.MbsColorBackground.allocateNew","com/stencyl/io/mbs/scene/layers/MbsColorBackground.hx",43,0x62354d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d9818ca7bd240ef_48_getColor,"com.stencyl.io.mbs.scene.layers.MbsColorBackground","getColor",0x2d9aa907,"com.stencyl.io.mbs.scene.layers.MbsColorBackground.getColor","com/stencyl/io/mbs/scene/layers/MbsColorBackground.hx",48,0x62354d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d9818ca7bd240ef_53_setColor,"com.stencyl.io.mbs.scene.layers.MbsColorBackground","setColor",0xdbf8027b,"com.stencyl.io.mbs.scene.layers.MbsColorBackground.setColor","com/stencyl/io/mbs/scene/layers/MbsColorBackground.hx",53,0x62354d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d9818ca7bd240ef_20_initializeType,"com.stencyl.io.mbs.scene.layers.MbsColorBackground","initializeType",0x6efb6fc4,"com.stencyl.io.mbs.scene.layers.MbsColorBackground.initializeType","com/stencyl/io/mbs/scene/layers/MbsColorBackground.hx",20,0x62354d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d9818ca7bd240ef_17_initializeType,"com.stencyl.io.mbs.scene.layers.MbsColorBackground","initializeType",0x6efb6fc4,"com.stencyl.io.mbs.scene.layers.MbsColorBackground.initializeType","com/stencyl/io/mbs/scene/layers/MbsColorBackground.hx",17,0x62354d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d9818ca7bd240ef_28_new_MbsColorBackground_list,"com.stencyl.io.mbs.scene.layers.MbsColorBackground","new_MbsColorBackground_list",0xd21d41f1,"com.stencyl.io.mbs.scene.layers.MbsColorBackground.new_MbsColorBackground_list","com/stencyl/io/mbs/scene/layers/MbsColorBackground.hx",28,0x62354d4a)
namespace com{
namespace stencyl{
namespace io{
namespace mbs{
namespace scene{
namespace layers{

void MbsColorBackground_obj::__construct(::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_9d9818ca7bd240ef_38_new)
HXDLIN(  38)		super::__construct(data);
            	}

Dynamic MbsColorBackground_obj::__CreateEmpty() { return new MbsColorBackground_obj; }

void *MbsColorBackground_obj::_hx_vtable = 0;

Dynamic MbsColorBackground_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsColorBackground_obj > _hx_result = new MbsColorBackground_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MbsColorBackground_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17b72d64) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x17b72d64;
	} else {
		return inClassId==(int)0x7000b1f4;
	}
}

 ::mbs::core::MbsType MbsColorBackground_obj::getMbsType(){
            	HX_STACKFRAME(&_hx_pos_9d9818ca7bd240ef_33_getMbsType)
HXDLIN(  33)		return ::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::MBS_COLOR_BACKGROUND;
            	}


void MbsColorBackground_obj::allocateNew(){
            	HX_STACKFRAME(&_hx_pos_9d9818ca7bd240ef_43_allocateNew)
HXDLIN(  43)		::Dynamic _hx_tmp = this->data;
HXDLIN(  43)		this->setAddress(::mbs::io::MbsIO_obj::allocate(_hx_tmp,::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::MBS_COLOR_BACKGROUND->getSize()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsColorBackground_obj,allocateNew,(void))

int MbsColorBackground_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_9d9818ca7bd240ef_48_getColor)
HXDLIN(  48)		::Dynamic _hx_tmp = this->data;
HXDLIN(  48)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::color->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsColorBackground_obj,getColor,return )

void MbsColorBackground_obj::setColor(int _val){
            	HX_STACKFRAME(&_hx_pos_9d9818ca7bd240ef_53_setColor)
HXDLIN(  53)		::Dynamic _hx_tmp = this->data;
HXDLIN(  53)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::color->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsColorBackground_obj,setColor,(void))

 ::mbs::core::MbsField MbsColorBackground_obj::color;

 ::mbs::core::ComposedType MbsColorBackground_obj::MBS_COLOR_BACKGROUND;

void MbsColorBackground_obj::initializeType(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::mbs::core::MbsObject _hx_run(::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_9d9818ca7bd240ef_20_initializeType)
HXLINE(  20)			return  ::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::__alloc( HX_CTX ,data);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_9d9818ca7bd240ef_17_initializeType)
HXLINE(  18)		if (hx::IsNotNull( ::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::MBS_COLOR_BACKGROUND )) {
HXLINE(  18)			return;
            		}
HXLINE(  19)		::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::MBS_COLOR_BACKGROUND =  ::mbs::core::ComposedType_obj::__alloc( HX_CTX ,HX_("MbsColorBackground",73,81,19,fa));
HXLINE(  20)		::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::MBS_COLOR_BACKGROUND->setInstantiator( ::Dynamic(new _hx_Closure_0()));
HXLINE(  22)		::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::color = ::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::MBS_COLOR_BACKGROUND->createField(HX_("color",63,71,5c,4a),::mbs::core::MbsTypes_obj::INTEGER);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MbsColorBackground_obj,initializeType,(void))

 ::mbs::io::MbsList MbsColorBackground_obj::new_MbsColorBackground_list(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_9d9818ca7bd240ef_28_new_MbsColorBackground_list)
HXDLIN(  28)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::MBS_COLOR_BACKGROUND;
HXDLIN(  28)		return  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::scene::layers::MbsColorBackground_obj::__alloc( HX_CTX ,data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MbsColorBackground_obj,new_MbsColorBackground_list,return )


hx::ObjectPtr< MbsColorBackground_obj > MbsColorBackground_obj::__new(::Dynamic data) {
	hx::ObjectPtr< MbsColorBackground_obj > __this = new MbsColorBackground_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< MbsColorBackground_obj > MbsColorBackground_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic data) {
	MbsColorBackground_obj *__this = (MbsColorBackground_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsColorBackground_obj), true, "com.stencyl.io.mbs.scene.layers.MbsColorBackground"));
	*(void **)__this = MbsColorBackground_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

MbsColorBackground_obj::MbsColorBackground_obj()
{
}

hx::Val MbsColorBackground_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return hx::Val( setColor_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMbsType") ) { return hx::Val( getMbsType_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocateNew") ) { return hx::Val( allocateNew_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MbsColorBackground_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { outValue = ( color ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeType") ) { outValue = initializeType_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"MBS_COLOR_BACKGROUND") ) { outValue = ( MBS_COLOR_BACKGROUND ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"new_MbsColorBackground_list") ) { outValue = new_MbsColorBackground_list_dyn(); return true; }
	}
	return false;
}

bool MbsColorBackground_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"MBS_COLOR_BACKGROUND") ) { MBS_COLOR_BACKGROUND=ioValue.Cast<  ::mbs::core::ComposedType >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MbsColorBackground_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MbsColorBackground_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsColorBackground_obj::color,HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::mbs::core::ComposedType*/ ,(void *) &MbsColorBackground_obj::MBS_COLOR_BACKGROUND,HX_HCSTRING("MBS_COLOR_BACKGROUND","\xeb","\x99","\xa4","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MbsColorBackground_obj_sMemberFields[] = {
	HX_HCSTRING("getMbsType","\x62","\x47","\xf5","\xa1"),
	HX_HCSTRING("allocateNew","\xa3","\x49","\x4d","\xa9"),
	HX_HCSTRING("getColor","\xed","\x80","\x33","\xaa"),
	HX_HCSTRING("setColor","\x61","\xda","\x90","\x58"),
	::String(null()) };

static void MbsColorBackground_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsColorBackground_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MbsColorBackground_obj::color,"color");
	HX_MARK_MEMBER_NAME(MbsColorBackground_obj::MBS_COLOR_BACKGROUND,"MBS_COLOR_BACKGROUND");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsColorBackground_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsColorBackground_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MbsColorBackground_obj::color,"color");
	HX_VISIT_MEMBER_NAME(MbsColorBackground_obj::MBS_COLOR_BACKGROUND,"MBS_COLOR_BACKGROUND");
};

#endif

hx::Class MbsColorBackground_obj::__mClass;

static ::String MbsColorBackground_obj_sStaticFields[] = {
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("MBS_COLOR_BACKGROUND","\xeb","\x99","\xa4","\x0f"),
	HX_HCSTRING("initializeType","\x2a","\x38","\x98","\x50"),
	HX_HCSTRING("new_MbsColorBackground_list","\xcb","\xb1","\x32","\x19"),
	::String(null())
};

void MbsColorBackground_obj::__register()
{
	hx::Object *dummy = new MbsColorBackground_obj;
	MbsColorBackground_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.mbs.scene.layers.MbsColorBackground","\x94","\xa3","\x1a","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MbsColorBackground_obj::__GetStatic;
	__mClass->mSetStaticField = &MbsColorBackground_obj::__SetStatic;
	__mClass->mMarkFunc = MbsColorBackground_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MbsColorBackground_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsColorBackground_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsColorBackground_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsColorBackground_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsColorBackground_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsColorBackground_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace scene
} // end namespace layers
