// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_mbs_MbsBlank
#include <com/stencyl/io/mbs/MbsBlank.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_MbsCustomBlock
#include <com/stencyl/io/mbs/MbsCustomBlock.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_MbsResource
#include <com/stencyl/io/mbs/MbsResource.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_997f7c1aa15966f4_59_new,"com.stencyl.io.mbs.MbsCustomBlock","new",0x619ac319,"com.stencyl.io.mbs.MbsCustomBlock.new","com/stencyl/io/mbs/MbsCustomBlock.hx",59,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_53_getMbsType,"com.stencyl.io.mbs.MbsCustomBlock","getMbsType",0x9ac50dc9,"com.stencyl.io.mbs.MbsCustomBlock.getMbsType","com/stencyl/io/mbs/MbsCustomBlock.hx",53,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_66_allocateNew,"com.stencyl.io.mbs.MbsCustomBlock","allocateNew",0x664b1d5c,"com.stencyl.io.mbs.MbsCustomBlock.allocateNew","com/stencyl/io/mbs/MbsCustomBlock.hx",66,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_71_getBlocktag,"com.stencyl.io.mbs.MbsCustomBlock","getBlocktag",0xfcaa099c,"com.stencyl.io.mbs.MbsCustomBlock.getBlocktag","com/stencyl/io/mbs/MbsCustomBlock.hx",71,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_76_setBlocktag,"com.stencyl.io.mbs.MbsCustomBlock","setBlocktag",0x071710a8,"com.stencyl.io.mbs.MbsCustomBlock.setBlocktag","com/stencyl/io/mbs/MbsCustomBlock.hx",76,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_81_getBlocktype,"com.stencyl.io.mbs.MbsCustomBlock","getBlocktype",0x18309d38,"com.stencyl.io.mbs.MbsCustomBlock.getBlocktype","com/stencyl/io/mbs/MbsCustomBlock.hx",81,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_86_setBlocktype,"com.stencyl.io.mbs.MbsCustomBlock","setBlocktype",0x2d29c0ac,"com.stencyl.io.mbs.MbsCustomBlock.setBlocktype","com/stencyl/io/mbs/MbsCustomBlock.hx",86,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_91_getCode,"com.stencyl.io.mbs.MbsCustomBlock","getCode",0x0e10a41c,"com.stencyl.io.mbs.MbsCustomBlock.getCode","com/stencyl/io/mbs/MbsCustomBlock.hx",91,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_96_setCode,"com.stencyl.io.mbs.MbsCustomBlock","setCode",0x01123528,"com.stencyl.io.mbs.MbsCustomBlock.setCode","com/stencyl/io/mbs/MbsCustomBlock.hx",96,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_101_getGlobal,"com.stencyl.io.mbs.MbsCustomBlock","getGlobal",0x1513fe12,"com.stencyl.io.mbs.MbsCustomBlock.getGlobal","com/stencyl/io/mbs/MbsCustomBlock.hx",101,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_106_setGlobal,"com.stencyl.io.mbs.MbsCustomBlock","setGlobal",0xf864ea1e,"com.stencyl.io.mbs.MbsCustomBlock.setGlobal","com/stencyl/io/mbs/MbsCustomBlock.hx",106,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_111_getGui,"com.stencyl.io.mbs.MbsCustomBlock","getGui",0x41828e6c,"com.stencyl.io.mbs.MbsCustomBlock.getGui","com/stencyl/io/mbs/MbsCustomBlock.hx",111,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_116_setGui,"com.stencyl.io.mbs.MbsCustomBlock","setGui",0x0dcae2e0,"com.stencyl.io.mbs.MbsCustomBlock.setGui","com/stencyl/io/mbs/MbsCustomBlock.hx",116,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_121_getMessage,"com.stencyl.io.mbs.MbsCustomBlock","getMessage",0xe2428238,"com.stencyl.io.mbs.MbsCustomBlock.getMessage","com/stencyl/io/mbs/MbsCustomBlock.hx",121,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_126_setMessage,"com.stencyl.io.mbs.MbsCustomBlock","setMessage",0xe5c020ac,"com.stencyl.io.mbs.MbsCustomBlock.setMessage","com/stencyl/io/mbs/MbsCustomBlock.hx",126,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_131_getReturnType,"com.stencyl.io.mbs.MbsCustomBlock","getReturnType",0x9c8f2bb9,"com.stencyl.io.mbs.MbsCustomBlock.getReturnType","com/stencyl/io/mbs/MbsCustomBlock.hx",131,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_136_setReturnType,"com.stencyl.io.mbs.MbsCustomBlock","setReturnType",0xe1950dc5,"com.stencyl.io.mbs.MbsCustomBlock.setReturnType","com/stencyl/io/mbs/MbsCustomBlock.hx",136,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_141_getSnippetID,"com.stencyl.io.mbs.MbsCustomBlock","getSnippetID",0x9cd328a9,"com.stencyl.io.mbs.MbsCustomBlock.getSnippetID","com/stencyl/io/mbs/MbsCustomBlock.hx",141,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_146_setSnippetID,"com.stencyl.io.mbs.MbsCustomBlock","setSnippetID",0xb1cc4c1d,"com.stencyl.io.mbs.MbsCustomBlock.setSnippetID","com/stencyl/io/mbs/MbsCustomBlock.hx",146,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_150_getBlanks,"com.stencyl.io.mbs.MbsCustomBlock","getBlanks",0x0c13574e,"com.stencyl.io.mbs.MbsCustomBlock.getBlanks","com/stencyl/io/mbs/MbsCustomBlock.hx",150,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_156_createBlanks,"com.stencyl.io.mbs.MbsCustomBlock","createBlanks",0x622238e2,"com.stencyl.io.mbs.MbsCustomBlock.createBlanks","com/stencyl/io/mbs/MbsCustomBlock.hx",156,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_31_initializeType,"com.stencyl.io.mbs.MbsCustomBlock","initializeType",0x0208be11,"com.stencyl.io.mbs.MbsCustomBlock.initializeType","com/stencyl/io/mbs/MbsCustomBlock.hx",31,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_26_initializeType,"com.stencyl.io.mbs.MbsCustomBlock","initializeType",0x0208be11,"com.stencyl.io.mbs.MbsCustomBlock.initializeType","com/stencyl/io/mbs/MbsCustomBlock.hx",26,0x2234fab7)
HX_LOCAL_STACK_FRAME(_hx_pos_997f7c1aa15966f4_48_new_MbsCustomBlock_list,"com.stencyl.io.mbs.MbsCustomBlock","new_MbsCustomBlock_list",0x338bf6f9,"com.stencyl.io.mbs.MbsCustomBlock.new_MbsCustomBlock_list","com/stencyl/io/mbs/MbsCustomBlock.hx",48,0x2234fab7)
namespace com{
namespace stencyl{
namespace io{
namespace mbs{

void MbsCustomBlock_obj::__construct(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_997f7c1aa15966f4_59_new)
HXLINE(  60)		super::__construct(data);
HXLINE(  61)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::MbsBlank_obj::MBS_BLANK;
HXDLIN(  61)		this->_blanks =  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::MbsBlank_obj::__alloc( HX_CTX ,data));
            	}

Dynamic MbsCustomBlock_obj::__CreateEmpty() { return new MbsCustomBlock_obj; }

void *MbsCustomBlock_obj::_hx_vtable = 0;

Dynamic MbsCustomBlock_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsCustomBlock_obj > _hx_result = new MbsCustomBlock_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MbsCustomBlock_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ebb6927) {
		if (inClassId<=(int)0x17b72d64) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x17b72d64;
		} else {
			return inClassId==(int)0x1ebb6927;
		}
	} else {
		return inClassId==(int)0x6a1d713f;
	}
}

 ::mbs::core::MbsType MbsCustomBlock_obj::getMbsType(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_53_getMbsType)
HXDLIN(  53)		return ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK;
            	}


void MbsCustomBlock_obj::allocateNew(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_66_allocateNew)
HXDLIN(  66)		::Dynamic _hx_tmp = this->data;
HXDLIN(  66)		this->setAddress(::mbs::io::MbsIO_obj::allocate(_hx_tmp,::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->getSize()));
            	}


::String MbsCustomBlock_obj::getBlocktag(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_71_getBlocktag)
HXDLIN(  71)		::Dynamic _hx_tmp = this->data;
HXDLIN(  71)		return ::mbs::io::MbsIO_obj::readString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::blocktag->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getBlocktag,return )

void MbsCustomBlock_obj::setBlocktag(::String _val){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_76_setBlocktag)
HXDLIN(  76)		::Dynamic _hx_tmp = this->data;
HXDLIN(  76)		::mbs::io::MbsIO_obj::writeString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::blocktag->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,setBlocktag,(void))

::String MbsCustomBlock_obj::getBlocktype(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_81_getBlocktype)
HXDLIN(  81)		::Dynamic _hx_tmp = this->data;
HXDLIN(  81)		return ::mbs::io::MbsIO_obj::readString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::blocktype->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getBlocktype,return )

void MbsCustomBlock_obj::setBlocktype(::String _val){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_86_setBlocktype)
HXDLIN(  86)		::Dynamic _hx_tmp = this->data;
HXDLIN(  86)		::mbs::io::MbsIO_obj::writeString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::blocktype->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,setBlocktype,(void))

::String MbsCustomBlock_obj::getCode(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_91_getCode)
HXDLIN(  91)		::Dynamic _hx_tmp = this->data;
HXDLIN(  91)		return ::mbs::io::MbsIO_obj::readString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::code->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getCode,return )

void MbsCustomBlock_obj::setCode(::String _val){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_96_setCode)
HXDLIN(  96)		::Dynamic _hx_tmp = this->data;
HXDLIN(  96)		::mbs::io::MbsIO_obj::writeString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::code->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,setCode,(void))

bool MbsCustomBlock_obj::getGlobal(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_101_getGlobal)
HXDLIN( 101)		::Dynamic _hx_tmp = this->data;
HXDLIN( 101)		return ::mbs::io::MbsIO_obj::readBool(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::global->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getGlobal,return )

void MbsCustomBlock_obj::setGlobal(bool _val){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_106_setGlobal)
HXDLIN( 106)		::Dynamic _hx_tmp = this->data;
HXDLIN( 106)		::mbs::io::MbsIO_obj::writeBool(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::global->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,setGlobal,(void))

::String MbsCustomBlock_obj::getGui(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_111_getGui)
HXDLIN( 111)		::Dynamic _hx_tmp = this->data;
HXDLIN( 111)		return ::mbs::io::MbsIO_obj::readString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::gui->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getGui,return )

void MbsCustomBlock_obj::setGui(::String _val){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_116_setGui)
HXDLIN( 116)		::Dynamic _hx_tmp = this->data;
HXDLIN( 116)		::mbs::io::MbsIO_obj::writeString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::gui->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,setGui,(void))

::String MbsCustomBlock_obj::getMessage(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_121_getMessage)
HXDLIN( 121)		::Dynamic _hx_tmp = this->data;
HXDLIN( 121)		return ::mbs::io::MbsIO_obj::readString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::message->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getMessage,return )

void MbsCustomBlock_obj::setMessage(::String _val){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_126_setMessage)
HXDLIN( 126)		::Dynamic _hx_tmp = this->data;
HXDLIN( 126)		::mbs::io::MbsIO_obj::writeString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::message->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,setMessage,(void))

::String MbsCustomBlock_obj::getReturnType(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_131_getReturnType)
HXDLIN( 131)		::Dynamic _hx_tmp = this->data;
HXDLIN( 131)		return ::mbs::io::MbsIO_obj::readString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::returnType->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getReturnType,return )

void MbsCustomBlock_obj::setReturnType(::String _val){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_136_setReturnType)
HXDLIN( 136)		::Dynamic _hx_tmp = this->data;
HXDLIN( 136)		::mbs::io::MbsIO_obj::writeString(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::returnType->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,setReturnType,(void))

int MbsCustomBlock_obj::getSnippetID(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_141_getSnippetID)
HXDLIN( 141)		::Dynamic _hx_tmp = this->data;
HXDLIN( 141)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::snippetID->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getSnippetID,return )

void MbsCustomBlock_obj::setSnippetID(int _val){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_146_setSnippetID)
HXDLIN( 146)		::Dynamic _hx_tmp = this->data;
HXDLIN( 146)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::snippetID->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,setSnippetID,(void))

 ::mbs::io::MbsList MbsCustomBlock_obj::getBlanks(){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_150_getBlanks)
HXLINE( 151)		 ::mbs::io::MbsList _hx_tmp = this->_blanks;
HXDLIN( 151)		::Dynamic _hx_tmp1 = this->data;
HXDLIN( 151)		_hx_tmp->setAddress(::mbs::io::MbsIO_obj::readInt(_hx_tmp1,(this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::blanks->address)));
HXLINE( 152)		return this->_blanks;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,getBlanks,return )

 ::mbs::io::MbsList MbsCustomBlock_obj::createBlanks(int _length){
            	HX_STACKFRAME(&_hx_pos_997f7c1aa15966f4_156_createBlanks)
HXLINE( 157)		this->_blanks->allocateNew(_length);
HXLINE( 158)		::Dynamic _hx_tmp = this->data;
HXDLIN( 158)		int _hx_tmp1 = (this->address + ::com::stencyl::io::mbs::MbsCustomBlock_obj::blanks->address);
HXDLIN( 158)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,_hx_tmp1,this->_blanks->getAddress());
HXLINE( 159)		return this->_blanks;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,createBlanks,return )

 ::mbs::core::MbsField MbsCustomBlock_obj::blocktag;

 ::mbs::core::MbsField MbsCustomBlock_obj::blocktype;

 ::mbs::core::MbsField MbsCustomBlock_obj::code;

 ::mbs::core::MbsField MbsCustomBlock_obj::global;

 ::mbs::core::MbsField MbsCustomBlock_obj::gui;

 ::mbs::core::MbsField MbsCustomBlock_obj::message;

 ::mbs::core::MbsField MbsCustomBlock_obj::returnType;

 ::mbs::core::MbsField MbsCustomBlock_obj::snippetID;

 ::mbs::core::MbsField MbsCustomBlock_obj::blanks;

 ::mbs::core::ComposedType MbsCustomBlock_obj::MBS_CUSTOM_BLOCK;

void MbsCustomBlock_obj::initializeType(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::mbs::core::MbsObject _hx_run(::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_997f7c1aa15966f4_31_initializeType)
HXLINE(  31)			return  ::com::stencyl::io::mbs::MbsCustomBlock_obj::__alloc( HX_CTX ,data);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_997f7c1aa15966f4_26_initializeType)
HXLINE(  27)		if (hx::IsNotNull( ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK )) {
HXLINE(  27)			return;
            		}
HXLINE(  28)		::com::stencyl::io::mbs::MbsResource_obj::initializeType();
HXLINE(  30)		::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK =  ::mbs::core::ComposedType_obj::__alloc( HX_CTX ,HX_("MbsCustomBlock",1e,d1,3b,f9));
HXLINE(  31)		::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->setInstantiator( ::Dynamic(new _hx_Closure_0()));
HXLINE(  32)		::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->inherit(::com::stencyl::io::mbs::MbsResource_obj::MBS_RESOURCE);
HXLINE(  34)		::com::stencyl::io::mbs::MbsCustomBlock_obj::blocktag = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("blocktag",2d,73,b8,19),::mbs::core::MbsTypes_obj::STRING);
HXLINE(  35)		::com::stencyl::io::mbs::MbsCustomBlock_obj::blocktype = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("blocktype",87,92,be,67),::mbs::core::MbsTypes_obj::STRING);
HXLINE(  36)		::com::stencyl::io::mbs::MbsCustomBlock_obj::code = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("code",2d,b1,c4,41),::mbs::core::MbsTypes_obj::STRING);
HXLINE(  37)		::com::stencyl::io::mbs::MbsCustomBlock_obj::global = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("global",63,31,b2,a7),::mbs::core::MbsTypes_obj::BOOLEAN);
HXLINE(  38)		::com::stencyl::io::mbs::MbsCustomBlock_obj::gui = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("gui",7b,8e,4e,00),::mbs::core::MbsTypes_obj::STRING);
HXLINE(  39)		::com::stencyl::io::mbs::MbsCustomBlock_obj::message = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("message",c7,35,11,9a),::mbs::core::MbsTypes_obj::STRING);
HXLINE(  40)		::com::stencyl::io::mbs::MbsCustomBlock_obj::returnType = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("returnType",8a,db,37,e9),::mbs::core::MbsTypes_obj::STRING);
HXLINE(  41)		::com::stencyl::io::mbs::MbsCustomBlock_obj::snippetID = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("snippetID",f8,1d,61,ec),::mbs::core::MbsTypes_obj::INTEGER);
HXLINE(  42)		::com::stencyl::io::mbs::MbsCustomBlock_obj::blanks = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK->createField(HX_("blanks",9f,8a,b1,9e),::mbs::core::MbsTypes_obj::LIST);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MbsCustomBlock_obj,initializeType,(void))

 ::mbs::io::MbsList MbsCustomBlock_obj::new_MbsCustomBlock_list(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_997f7c1aa15966f4_48_new_MbsCustomBlock_list)
HXDLIN(  48)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::MbsCustomBlock_obj::MBS_CUSTOM_BLOCK;
HXDLIN(  48)		return  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::MbsCustomBlock_obj::__alloc( HX_CTX ,data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MbsCustomBlock_obj,new_MbsCustomBlock_list,return )


hx::ObjectPtr< MbsCustomBlock_obj > MbsCustomBlock_obj::__new(::Dynamic data) {
	hx::ObjectPtr< MbsCustomBlock_obj > __this = new MbsCustomBlock_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< MbsCustomBlock_obj > MbsCustomBlock_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic data) {
	MbsCustomBlock_obj *__this = (MbsCustomBlock_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsCustomBlock_obj), true, "com.stencyl.io.mbs.MbsCustomBlock"));
	*(void **)__this = MbsCustomBlock_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

MbsCustomBlock_obj::MbsCustomBlock_obj()
{
}

void MbsCustomBlock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MbsCustomBlock);
	HX_MARK_MEMBER_NAME(_blanks,"_blanks");
	 ::mbs::core::MbsObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MbsCustomBlock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_blanks,"_blanks");
	 ::mbs::core::MbsObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MbsCustomBlock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getGui") ) { return hx::Val( getGui_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGui") ) { return hx::Val( setGui_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_blanks") ) { return hx::Val( _blanks ); }
		if (HX_FIELD_EQ(inName,"getCode") ) { return hx::Val( getCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCode") ) { return hx::Val( setCode_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getGlobal") ) { return hx::Val( getGlobal_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGlobal") ) { return hx::Val( setGlobal_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBlanks") ) { return hx::Val( getBlanks_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMbsType") ) { return hx::Val( getMbsType_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMessage") ) { return hx::Val( getMessage_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMessage") ) { return hx::Val( setMessage_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocateNew") ) { return hx::Val( allocateNew_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBlocktag") ) { return hx::Val( getBlocktag_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBlocktag") ) { return hx::Val( setBlocktag_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBlocktype") ) { return hx::Val( getBlocktype_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBlocktype") ) { return hx::Val( setBlocktype_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSnippetID") ) { return hx::Val( getSnippetID_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSnippetID") ) { return hx::Val( setSnippetID_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBlanks") ) { return hx::Val( createBlanks_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getReturnType") ) { return hx::Val( getReturnType_dyn() ); }
		if (HX_FIELD_EQ(inName,"setReturnType") ) { return hx::Val( setReturnType_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MbsCustomBlock_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gui") ) { outValue = ( gui ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { outValue = ( code ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { outValue = ( global ); return true; }
		if (HX_FIELD_EQ(inName,"blanks") ) { outValue = ( blanks ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { outValue = ( message ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blocktag") ) { outValue = ( blocktag ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blocktype") ) { outValue = ( blocktype ); return true; }
		if (HX_FIELD_EQ(inName,"snippetID") ) { outValue = ( snippetID ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"returnType") ) { outValue = ( returnType ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeType") ) { outValue = initializeType_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MBS_CUSTOM_BLOCK") ) { outValue = ( MBS_CUSTOM_BLOCK ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"new_MbsCustomBlock_list") ) { outValue = new_MbsCustomBlock_list_dyn(); return true; }
	}
	return false;
}

hx::Val MbsCustomBlock_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_blanks") ) { _blanks=inValue.Cast<  ::mbs::io::MbsList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MbsCustomBlock_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gui") ) { gui=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		if (HX_FIELD_EQ(inName,"blanks") ) { blanks=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blocktag") ) { blocktag=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blocktype") ) { blocktype=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		if (HX_FIELD_EQ(inName,"snippetID") ) { snippetID=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"returnType") ) { returnType=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MBS_CUSTOM_BLOCK") ) { MBS_CUSTOM_BLOCK=ioValue.Cast<  ::mbs::core::ComposedType >(); return true; }
	}
	return false;
}

void MbsCustomBlock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_blanks","\x3e","\x9c","\x28","\x0d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MbsCustomBlock_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::mbs::io::MbsList*/ ,(int)offsetof(MbsCustomBlock_obj,_blanks),HX_HCSTRING("_blanks","\x3e","\x9c","\x28","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo MbsCustomBlock_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::blocktag,HX_HCSTRING("blocktag","\x2d","\x73","\xb8","\x19")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::blocktype,HX_HCSTRING("blocktype","\x87","\x92","\xbe","\x67")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::code,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::global,HX_HCSTRING("global","\x63","\x31","\xb2","\xa7")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::gui,HX_HCSTRING("gui","\x7b","\x8e","\x4e","\x00")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::message,HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::returnType,HX_HCSTRING("returnType","\x8a","\xdb","\x37","\xe9")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::snippetID,HX_HCSTRING("snippetID","\xf8","\x1d","\x61","\xec")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsCustomBlock_obj::blanks,HX_HCSTRING("blanks","\x9f","\x8a","\xb1","\x9e")},
	{hx::fsObject /*::mbs::core::ComposedType*/ ,(void *) &MbsCustomBlock_obj::MBS_CUSTOM_BLOCK,HX_HCSTRING("MBS_CUSTOM_BLOCK","\xa0","\xab","\xa2","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MbsCustomBlock_obj_sMemberFields[] = {
	HX_HCSTRING("getMbsType","\x62","\x47","\xf5","\xa1"),
	HX_HCSTRING("_blanks","\x3e","\x9c","\x28","\x0d"),
	HX_HCSTRING("allocateNew","\xa3","\x49","\x4d","\xa9"),
	HX_HCSTRING("getBlocktag","\xe3","\x35","\xac","\x3f"),
	HX_HCSTRING("setBlocktag","\xef","\x3c","\x19","\x4a"),
	HX_HCSTRING("getBlocktype","\x11","\x2f","\x15","\x77"),
	HX_HCSTRING("setBlocktype","\x85","\x52","\x0e","\x8c"),
	HX_HCSTRING("getCode","\xe3","\x60","\x47","\x14"),
	HX_HCSTRING("setCode","\xef","\xf1","\x48","\x07"),
	HX_HCSTRING("getGlobal","\x99","\xba","\x08","\x24"),
	HX_HCSTRING("setGlobal","\xa5","\xa6","\x59","\x07"),
	HX_HCSTRING("getGui","\x85","\xc7","\x1d","\xa3"),
	HX_HCSTRING("setGui","\xf9","\x1b","\x66","\x6f"),
	HX_HCSTRING("getMessage","\xd1","\xbb","\x72","\xe9"),
	HX_HCSTRING("setMessage","\x45","\x5a","\xf0","\xec"),
	HX_HCSTRING("getReturnType","\xc0","\x37","\xaa","\x45"),
	HX_HCSTRING("setReturnType","\xcc","\x19","\xb0","\x8a"),
	HX_HCSTRING("getSnippetID","\x82","\xba","\xb7","\xfb"),
	HX_HCSTRING("setSnippetID","\xf6","\xdd","\xb0","\x10"),
	HX_HCSTRING("getBlanks","\xd5","\x13","\x08","\x1b"),
	HX_HCSTRING("createBlanks","\xbb","\xca","\x06","\xc1"),
	::String(null()) };

static void MbsCustomBlock_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::blocktag,"blocktag");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::blocktype,"blocktype");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::code,"code");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::global,"global");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::gui,"gui");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::message,"message");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::returnType,"returnType");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::snippetID,"snippetID");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::blanks,"blanks");
	HX_MARK_MEMBER_NAME(MbsCustomBlock_obj::MBS_CUSTOM_BLOCK,"MBS_CUSTOM_BLOCK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsCustomBlock_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::blocktag,"blocktag");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::blocktype,"blocktype");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::code,"code");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::global,"global");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::gui,"gui");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::message,"message");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::returnType,"returnType");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::snippetID,"snippetID");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::blanks,"blanks");
	HX_VISIT_MEMBER_NAME(MbsCustomBlock_obj::MBS_CUSTOM_BLOCK,"MBS_CUSTOM_BLOCK");
};

#endif

hx::Class MbsCustomBlock_obj::__mClass;

static ::String MbsCustomBlock_obj_sStaticFields[] = {
	HX_HCSTRING("blocktag","\x2d","\x73","\xb8","\x19"),
	HX_HCSTRING("blocktype","\x87","\x92","\xbe","\x67"),
	HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),
	HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"),
	HX_HCSTRING("gui","\x7b","\x8e","\x4e","\x00"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("returnType","\x8a","\xdb","\x37","\xe9"),
	HX_HCSTRING("snippetID","\xf8","\x1d","\x61","\xec"),
	HX_HCSTRING("blanks","\x9f","\x8a","\xb1","\x9e"),
	HX_HCSTRING("MBS_CUSTOM_BLOCK","\xa0","\xab","\xa2","\x38"),
	HX_HCSTRING("initializeType","\x2a","\x38","\x98","\x50"),
	HX_HCSTRING("new_MbsCustomBlock_list","\xc0","\xf1","\x82","\x5f"),
	::String(null())
};

void MbsCustomBlock_obj::__register()
{
	hx::Object *dummy = new MbsCustomBlock_obj;
	MbsCustomBlock_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.mbs.MbsCustomBlock","\xa7","\x42","\x2b","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MbsCustomBlock_obj::__GetStatic;
	__mClass->mSetStaticField = &MbsCustomBlock_obj::__SetStatic;
	__mClass->mMarkFunc = MbsCustomBlock_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MbsCustomBlock_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsCustomBlock_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsCustomBlock_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsCustomBlock_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsCustomBlock_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsCustomBlock_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs