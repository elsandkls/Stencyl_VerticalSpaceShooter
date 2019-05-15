// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
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
#ifndef INCLUDED_mbs_core_MbsTypedefSet
#include <mbs/core/MbsTypedefSet.h>
#endif
#ifndef INCLUDED_mbs_core_MbsTypes
#include <mbs/core/MbsTypes.h>
#endif
#ifndef INCLUDED_mbs_core_header_MbsFieldInfo
#include <mbs/core/header/MbsFieldInfo.h>
#endif
#ifndef INCLUDED_mbs_core_header_MbsHeader
#include <mbs/core/header/MbsHeader.h>
#endif
#ifndef INCLUDED_mbs_core_header_MbsTypeInfo
#include <mbs/core/header/MbsTypeInfo.h>
#endif
#ifndef INCLUDED_mbs_core_reflect_SubstituteField
#include <mbs/core/reflect/SubstituteField.h>
#endif
#ifndef INCLUDED_mbs_core_reflect_SubstituteType
#include <mbs/core/reflect/SubstituteType.h>
#endif
#ifndef INCLUDED_mbs_io_MbsIO
#include <mbs/io/MbsIO.h>
#endif
#ifndef INCLUDED_mbs_io_MbsReader
#include <mbs/io/MbsReader.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_788b71c9200f6f1d_41_new,"mbs.io.MbsReader","new",0x83b58d1b,"mbs.io.MbsReader.new","mbs/io/MbsReader.hx",41,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_52_canReadFile,"mbs.io.MbsReader","canReadFile",0x4730d8dd,"mbs.io.MbsReader.canReadFile","mbs/io/MbsReader.hx",52,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_63_canRead,"mbs.io.MbsReader","canRead",0xb2dd69c1,"mbs.io.MbsReader.canRead","mbs/io/MbsReader.hx",63,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_85_readData,"mbs.io.MbsReader","readData",0xe3ec6e05,"mbs.io.MbsReader.readData","mbs/io/MbsReader.hx",85,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_189_reconfigureComposition,"mbs.io.MbsReader","reconfigureComposition",0xa68a18fc,"mbs.io.MbsReader.reconfigureComposition","mbs/io/MbsReader.hx",189,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_207_getRoot,"mbs.io.MbsReader","getRoot",0x670fd413,"mbs.io.MbsReader.getRoot","mbs/io/MbsReader.hx",207,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_212_readInt,"mbs.io.MbsReader","readInt",0x4ba7e974,"mbs.io.MbsReader.readInt","mbs/io/MbsReader.hx",212,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_217_readBool,"mbs.io.MbsReader","readBool",0xe2a49c05,"mbs.io.MbsReader.readBool","mbs/io/MbsReader.hx",217,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_222_readFloat,"mbs.io.MbsReader","readFloat",0xb9028d61,"mbs.io.MbsReader.readFloat","mbs/io/MbsReader.hx",222,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_226_readString,"mbs.io.MbsReader","readString",0xf9132d6c,"mbs.io.MbsReader.readString","mbs/io/MbsReader.hx",226,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_245_readTypecode,"mbs.io.MbsReader","readTypecode",0xadd82a42,"mbs.io.MbsReader.readTypecode","mbs/io/MbsReader.hx",245,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_250_getTypeTable,"mbs.io.MbsReader","getTypeTable",0x8dff0363,"mbs.io.MbsReader.getTypeTable","mbs/io/MbsReader.hx",250,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_255_writeInt,"mbs.io.MbsReader","writeInt",0x9d81aab5,"mbs.io.MbsReader.writeInt","mbs/io/MbsReader.hx",255,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_260_writeBool,"mbs.io.MbsReader","writeBool",0x2f53f3a4,"mbs.io.MbsReader.writeBool","mbs/io/MbsReader.hx",260,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_265_writeFloat,"mbs.io.MbsReader","writeFloat",0x85bfe0e2,"mbs.io.MbsReader.writeFloat","mbs/io/MbsReader.hx",265,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_270_writeString,"mbs.io.MbsReader","writeString",0x51feeacb,"mbs.io.MbsReader.writeString","mbs/io/MbsReader.hx",270,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_275_isReader,"mbs.io.MbsReader","isReader",0xce8c7e32,"mbs.io.MbsReader.isReader","mbs/io/MbsReader.hx",275,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_280_isWriter,"mbs.io.MbsReader","isWriter",0x4fe0afa2,"mbs.io.MbsReader.isWriter","mbs/io/MbsReader.hx",280,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_285_allocate,"mbs.io.MbsReader","allocate",0x0a7c1022,"mbs.io.MbsReader.allocate","mbs/io/MbsReader.hx",285,0xb8947555)
HX_LOCAL_STACK_FRAME(_hx_pos_788b71c9200f6f1d_290_writeTypecode,"mbs.io.MbsReader","writeTypecode",0xe7353d61,"mbs.io.MbsReader.writeTypecode","mbs/io/MbsReader.hx",290,0xb8947555)
namespace mbs{
namespace io{

void MbsReader_obj::__construct( ::mbs::core::MbsTypedefSet typedefSet,bool readStoredTypeInformation,bool initStringList){
            	HX_GC_STACKFRAME(&_hx_pos_788b71c9200f6f1d_41_new)
HXLINE(  42)		this->typedefSet = typedefSet;
HXLINE(  43)		this->readStoredTypeInformation = readStoredTypeInformation;
HXLINE(  44)		this->initStringList = initStringList;
HXLINE(  46)		this->header =  ::mbs::core::header::MbsHeader_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
HXLINE(  47)		this->header->setAddress((int)0);
            	}

Dynamic MbsReader_obj::__CreateEmpty() { return new MbsReader_obj; }

void *MbsReader_obj::_hx_vtable = 0;

Dynamic MbsReader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsReader_obj > _hx_result = new MbsReader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MbsReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x653ad5dd;
}

static ::mbs::io::MbsIO_obj _hx_mbs_io_MbsReader__hx_mbs_io_MbsIO= {
	( bool (hx::Object::*)(int))&::mbs::io::MbsReader_obj::readBool,
	( Float (hx::Object::*)(int))&::mbs::io::MbsReader_obj::readFloat,
	( int (hx::Object::*)(int))&::mbs::io::MbsReader_obj::readInt,
	( ::String (hx::Object::*)(int))&::mbs::io::MbsReader_obj::readString,
	( void (hx::Object::*)(int,int))&::mbs::io::MbsReader_obj::writeInt,
	( void (hx::Object::*)(int,bool))&::mbs::io::MbsReader_obj::writeBool,
	( void (hx::Object::*)(int,Float))&::mbs::io::MbsReader_obj::writeFloat,
	( void (hx::Object::*)(int,::String))&::mbs::io::MbsReader_obj::writeString,
	( bool (hx::Object::*)())&::mbs::io::MbsReader_obj::isReader,
	( bool (hx::Object::*)())&::mbs::io::MbsReader_obj::isWriter,
	( int (hx::Object::*)(int))&::mbs::io::MbsReader_obj::allocate,
	( void (hx::Object::*)(int, ::mbs::core::MbsType))&::mbs::io::MbsReader_obj::writeTypecode,
	(  ::mbs::core::MbsType (hx::Object::*)(int))&::mbs::io::MbsReader_obj::readTypecode,
};

void *MbsReader_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x692ab760: return &_hx_mbs_io_MbsReader__hx_mbs_io_MbsIO;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::String MbsReader_obj::canReadFile(::String file){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_52_canReadFile)
HXLINE(  53)		 ::sys::io::FileInput fi = ::sys::io::File_obj::read(file,true);
HXLINE(  54)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(this->header->getMbsType()->getSize());
HXLINE(  55)		{
HXLINE(  55)			int _g1 = (int)0;
HXDLIN(  55)			int _g = bytes->length;
HXDLIN(  55)			while((_g1 < _g)){
HXLINE(  55)				_g1 = (_g1 + (int)1);
HXDLIN(  55)				int i = (_g1 - (int)1);
HXLINE(  56)				{
HXLINE(  56)					int v = fi->tell();
HXDLIN(  56)					bytes->b[i] = v;
            				}
            			}
            		}
HXLINE(  57)		fi->close();
HXLINE(  58)		return this->canRead(bytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,canReadFile,return )

::String MbsReader_obj::canRead( ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_63_canRead)
HXLINE(  64)		::String error = null();
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if (hx::IsNotNull( data )) {
HXLINE(  66)			int data1 = data->length;
HXDLIN(  66)			_hx_tmp = (data1 < this->header->getMbsType()->getSize());
            		}
            		else {
HXLINE(  66)			_hx_tmp = true;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			error = HX_("Missing header",27,0f,3f,4c);
            		}
HXLINE(  69)		this->data = data;
HXLINE(  71)		if ((this->header->getVersion() != (int)1)) {
HXLINE(  72)			error = (HX_("Mismatched version -- ",65,87,ab,f2) + this->header->getVersion());
            		}
HXLINE(  74)		int _hx_tmp1 = this->header->getTypeTableHash();
HXDLIN(  74)		if ((_hx_tmp1 != this->typedefSet->getHash())) {
HXLINE(  75)			error = HX_("Mismatched typetable",81,81,1b,0b);
            		}
HXLINE(  77)		bool _hx_tmp2;
HXDLIN(  77)		if (this->readStoredTypeInformation) {
HXLINE(  77)			_hx_tmp2 = (this->header->getTypeTablePointer() == (int)0);
            		}
            		else {
HXLINE(  77)			_hx_tmp2 = false;
            		}
HXDLIN(  77)		if (_hx_tmp2) {
HXLINE(  78)			error = HX_("Missing required type information",8d,46,2b,99);
            		}
HXLINE(  80)		this->data = null();
HXLINE(  81)		return error;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,canRead,return )

void MbsReader_obj::readData( ::haxe::io::Bytes data){
            	HX_GC_STACKFRAME(&_hx_pos_788b71c9200f6f1d_85_readData)
HXLINE(  86)		this->data = data;
HXLINE(  88)		if ((this->header->getVersion() != (int)1)) {
HXLINE(  90)			HX_STACK_DO_THROW(HX_("Can't read mbs. Wrong version.",12,09,b0,a4));
            		}
HXLINE(  92)		int _hx_tmp = this->header->getTypeTableHash();
HXDLIN(  92)		if ((_hx_tmp != this->typedefSet->getHash())) {
HXLINE(  94)			HX_STACK_DO_THROW(HX_("Can't read mbs. Wrong typedef info.",ef,e8,5b,55));
            		}
HXLINE(  97)		int intSize = ::mbs::core::MbsTypes_obj::INTEGER->getSize();
HXLINE(  98)		int readAddress;
HXLINE( 100)		this->stringTableAddress = this->header->getStringTablePointer();
HXLINE( 101)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(this->readInt(this->stringTableAddress));
HXDLIN( 101)		this->stringTable = this1;
HXLINE( 103)		if (this->initStringList) {
HXLINE( 105)			readAddress = (this->stringTableAddress + intSize);
HXLINE( 106)			{
HXLINE( 106)				int _g1 = (int)0;
HXDLIN( 106)				int _g = this->stringTable->length;
HXDLIN( 106)				while((_g1 < _g)){
HXLINE( 106)					_g1 = (_g1 + (int)1);
HXDLIN( 106)					int i = (_g1 - (int)1);
HXLINE( 108)					int pos = this->readInt(readAddress);
HXLINE( 109)					int length = this->readInt(pos);
HXLINE( 110)					{
HXLINE( 110)						::Array< ::String > this2 = this->stringTable;
HXDLIN( 110)						::String val = data->getString((pos + (int)4),length,null());
HXDLIN( 110)						this2->__unsafe_set(i,val);
            					}
HXLINE( 111)					readAddress = (readAddress + intSize);
            				}
            			}
            		}
HXLINE( 115)		if (this->readStoredTypeInformation) {
HXLINE( 117)			 ::mbs::core::header::MbsTypeInfo typeInfo =  ::mbs::core::header::MbsTypeInfo_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
HXLINE( 119)			readAddress = this->header->getTypeTablePointer();
HXLINE( 120)			::Array< ::Dynamic> this3 = ::Array_obj< ::Dynamic>::__new(this->readInt(readAddress));
HXDLIN( 120)			this->typeTable = this3;
HXLINE( 121)			readAddress = (readAddress + intSize);
HXLINE( 123)			this->subTypeMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 124)			 ::haxe::ds::StringMap _g2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 124)			{
HXLINE( 124)				int _g11 = (int)0;
HXDLIN( 124)				::Array< ::Dynamic> _g21 = ::Array_obj< ::Dynamic>::__new(6)->init(0,::mbs::core::MbsTypes_obj::BOOLEAN)->init(1,::mbs::core::MbsTypes_obj::INTEGER)->init(2,::mbs::core::MbsTypes_obj::FLOAT)->init(3,::mbs::core::MbsTypes_obj::STRING)->init(4,::mbs::core::MbsTypes_obj::DYNAMIC)->init(5,::mbs::core::MbsTypes_obj::LIST);
HXDLIN( 124)				while((_g11 < _g21->length)){
HXLINE( 124)					 ::mbs::core::MbsType type = _g21->__get(_g11).StaticCast<  ::mbs::core::MbsType >();
HXDLIN( 124)					_g11 = (_g11 + (int)1);
HXDLIN( 124)					_g2->set(type->getName(),type);
            				}
            			}
HXDLIN( 124)			 ::haxe::ds::StringMap primTypeMap = _g2;
HXLINE( 126)			{
HXLINE( 126)				int _g22 = (int)0;
HXDLIN( 126)				int _g12 = this->typeTable->length;
HXDLIN( 126)				while((_g22 < _g12)){
HXLINE( 126)					_g22 = (_g22 + (int)1);
HXDLIN( 126)					int i1 = (_g22 - (int)1);
HXLINE( 128)					typeInfo->setAddress(this->readInt(readAddress));
HXLINE( 129)					readAddress = (readAddress + intSize);
HXLINE( 131)					::String name = typeInfo->getName();
HXLINE( 132)					::String parentType = typeInfo->getParent();
HXLINE( 133)					int size = typeInfo->getSize();
HXLINE( 134)					::Array< ::Dynamic> fields = null();
HXLINE( 136)					int fieldListAddress = typeInfo->getFieldsPointer();
HXLINE( 137)					if ((fieldListAddress != (int)0)) {
HXLINE( 139)						int fieldListLength = this->readInt(fieldListAddress);
HXLINE( 140)						fieldListAddress = (fieldListAddress + intSize);
HXLINE( 142)						::Array< ::Dynamic> this4 = ::Array_obj< ::Dynamic>::__new(fieldListLength);
HXDLIN( 142)						fields = this4;
HXLINE( 143)						 ::mbs::core::header::MbsFieldInfo fieldInfo =  ::mbs::core::header::MbsFieldInfo_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
HXLINE( 145)						{
HXLINE( 145)							int _g4 = (int)0;
HXDLIN( 145)							int _g3 = fieldListLength;
HXDLIN( 145)							while((_g4 < _g3)){
HXLINE( 145)								_g4 = (_g4 + (int)1);
HXDLIN( 145)								int j = (_g4 - (int)1);
HXLINE( 147)								fieldInfo->setAddress(fieldListAddress);
HXLINE( 148)								fieldListAddress = (fieldListAddress + ::mbs::core::header::MbsFieldInfo_obj::MBS_FIELD_INFO->getSize());
HXLINE( 150)								::String fieldName = fieldInfo->getName();
HXLINE( 151)								::String fieldType = fieldInfo->getType();
HXLINE( 152)								int fieldAddress = fieldInfo->getFieldAddress();
HXLINE( 154)								{
HXLINE( 154)									 ::mbs::core::MbsField val1 =  ::mbs::core::reflect::SubstituteField_obj::__alloc( HX_CTX ,fieldName,fieldType,fieldAddress);
HXDLIN( 154)									fields->__unsafe_set(j,val1);
            								}
            							}
            						}
            					}
HXLINE( 158)					if (primTypeMap->exists(name)) {
HXLINE( 160)						::Array< ::Dynamic> this5 = this->typeTable;
HXDLIN( 160)						 ::mbs::core::MbsType val2 = primTypeMap->get(name).StaticCast<  ::mbs::core::MbsType >();
HXDLIN( 160)						this5->__unsafe_set(i1,val2);
            					}
            					else {
HXLINE( 164)						::Array< ::Dynamic> this6 = this->typeTable;
HXDLIN( 164)						 ::mbs::core::MbsType val3 =  ::mbs::core::reflect::SubstituteType_obj::__alloc( HX_CTX ,name,parentType,fields,size);
HXDLIN( 164)						this6->__unsafe_set(i1,val3);
            					}
HXLINE( 166)					{
HXLINE( 166)						::Dynamic this7 = this->subTypeMap;
HXDLIN( 166)						( ( ::haxe::ds::StringMap)(this7) )->set(name,_hx_array_unsafe_get(this->typeTable,i1));
            					}
            				}
            			}
HXLINE( 169)			{
HXLINE( 169)				int _g23 = (int)0;
HXDLIN( 169)				int _g13 = this->typeTable->length;
HXDLIN( 169)				while((_g23 < _g13)){
HXLINE( 169)					_g23 = (_g23 + (int)1);
HXDLIN( 169)					int i2 = (_g23 - (int)1);
HXLINE( 171)					if (!(::Std_obj::is(_hx_array_unsafe_get(this->typeTable,i2),hx::ClassOf< ::mbs::core::reflect::SubstituteType >()))) {
HXLINE( 172)						continue;
            					}
HXLINE( 174)					 ::mbs::core::MbsType _hx_tmp1 = ( ( ::mbs::core::MbsType)(_hx_array_unsafe_get(this->typeTable,i2)) );
HXDLIN( 174)					hx::TCast<  ::mbs::core::reflect::SubstituteType >::cast(_hx_tmp1)->mapTypes(this->subTypeMap);
            				}
            			}
            		}
            		else {
HXLINE( 179)			::Array< ::Dynamic> this8 = ::Array_obj< ::Dynamic>::__new(this->typedefSet->getTypes()->length);
HXDLIN( 179)			this->typeTable = this8;
HXLINE( 180)			{
HXLINE( 180)				int _g5 = (int)0;
HXDLIN( 180)				::Array< ::Dynamic> _g14 = this->typedefSet->getTypes();
HXDLIN( 180)				while((_g5 < _g14->length)){
HXLINE( 180)					 ::mbs::core::MbsType type1 = _g14->__get(_g5).StaticCast<  ::mbs::core::MbsType >();
HXDLIN( 180)					_g5 = (_g5 + (int)1);
HXLINE( 182)					{
HXLINE( 182)						::Array< ::Dynamic> this9 = this->typeTable;
HXDLIN( 182)						int index = this->typedefSet->getTypecode(type1);
HXDLIN( 182)						this9->__unsafe_set(index,type1);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,readData,(void))

void MbsReader_obj::reconfigureComposition( ::mbs::core::ComposedType type){
            	HX_GC_STACKFRAME(&_hx_pos_788b71c9200f6f1d_189_reconfigureComposition)
HXDLIN( 189)		::Dynamic this1 = this->subTypeMap;
HXDLIN( 189)		if (( ( ::haxe::ds::StringMap)(this1) )->exists(type->getName())) {
HXLINE( 191)			::Dynamic this2 = this->subTypeMap;
HXDLIN( 191)			 ::mbs::core::ComposedType subType = ( ( ::mbs::core::ComposedType)(( ( ::haxe::ds::StringMap)(this2) )->get(type->getName()).StaticCast<  ::mbs::core::MbsType >()) );
HXLINE( 192)			 ::haxe::ds::StringMap fieldMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 193)			{
HXLINE( 193)				int _g = (int)0;
HXDLIN( 193)				::Array< ::Dynamic> _g1 = subType->getFields();
HXDLIN( 193)				while((_g < _g1->length)){
HXLINE( 193)					 ::mbs::core::MbsField f = _g1->__get(_g).StaticCast<  ::mbs::core::MbsField >();
HXDLIN( 193)					_g = (_g + (int)1);
HXLINE( 195)					fieldMap->set(f->getName(),f);
            				}
            			}
HXLINE( 198)			{
HXLINE( 198)				int _g2 = (int)0;
HXDLIN( 198)				::Array< ::Dynamic> _g11 = type->getFields();
HXDLIN( 198)				while((_g2 < _g11->length)){
HXLINE( 198)					 ::mbs::core::MbsField f1 = _g11->__get(_g2).StaticCast<  ::mbs::core::MbsField >();
HXDLIN( 198)					_g2 = (_g2 + (int)1);
HXLINE( 200)					f1->address = fieldMap->get(f1->getName()).StaticCast<  ::mbs::core::MbsField >()->address;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,reconfigureComposition,(void))

 ::Dynamic MbsReader_obj::getRoot(){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_207_getRoot)
HXDLIN( 207)		return this->header->getRoot();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsReader_obj,getRoot,return )

int MbsReader_obj::readInt(int pos){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_212_readInt)
HXDLIN( 212)		int _hx_tmp = ((int)this->data->b->__get(pos) << (int)(int)24);
HXDLIN( 212)		::Array< unsigned char > _this = this->data->b;
HXDLIN( 212)		int _hx_tmp1 = ((int)_hx_tmp | (int)((int)_this->__get((pos + (int)1)) << (int)(int)16));
HXDLIN( 212)		::Array< unsigned char > _this1 = this->data->b;
HXDLIN( 212)		::Array< unsigned char > _this2 = this->data->b;
HXDLIN( 212)		return ((int)((int)_hx_tmp1 | (int)((int)_this1->__get((pos + (int)2)) << (int)(int)8)) | (int)_this2->__get((pos + (int)3)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,readInt,return )

bool MbsReader_obj::readBool(int pos){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_217_readBool)
HXDLIN( 217)		return (this->data->b->__get(pos) != (int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,readBool,return )

Float MbsReader_obj::readFloat(int pos){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_222_readFloat)
HXDLIN( 222)		return ::haxe::io::FPHelper_obj::i32ToFloat(this->readInt(pos));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,readFloat,return )

::String MbsReader_obj::readString(int pos){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_226_readString)
HXLINE( 227)		if (this->initStringList) {
HXLINE( 229)			::Array< ::String > this1 = this->stringTable;
HXDLIN( 229)			return ( (::String)(_hx_array_unsafe_get(this1,this->readInt(pos))) );
            		}
HXLINE( 232)		int stringAddress = this->readInt(pos);
HXLINE( 233)		if (hx::IsNull( ( (::String)(_hx_array_unsafe_get(this->stringTable,stringAddress)) ) )) {
HXLINE( 235)			int stringPos = this->stringTableAddress;
HXDLIN( 235)			int stringPos1 = ::mbs::core::MbsTypes_obj::INTEGER->getSize();
HXDLIN( 235)			int stringPos2 = this->readInt((stringPos + (stringPos1 * (stringAddress + (int)1))));
HXLINE( 236)			int length = this->readInt(stringPos2);
HXLINE( 237)			{
HXLINE( 237)				::Array< ::String > this2 = this->stringTable;
HXDLIN( 237)				 ::haxe::io::Bytes val = this->data;
HXDLIN( 237)				::String val1 = val->getString((stringPos2 + (int)4),length,null());
HXDLIN( 237)				this2->__unsafe_set(stringAddress,val1);
            			}
            		}
HXLINE( 240)		return ( (::String)(_hx_array_unsafe_get(this->stringTable,stringAddress)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,readString,return )

 ::mbs::core::MbsType MbsReader_obj::readTypecode(int pos){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_245_readTypecode)
HXDLIN( 245)		::Array< ::Dynamic> this1 = this->typeTable;
HXDLIN( 245)		return ( ( ::mbs::core::MbsType)(_hx_array_unsafe_get(this1,this->readInt(pos))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,readTypecode,return )

::Array< ::Dynamic> MbsReader_obj::getTypeTable(){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_250_getTypeTable)
HXDLIN( 250)		return this->typeTable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsReader_obj,getTypeTable,return )

void MbsReader_obj::writeInt(int address,int value){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_255_writeInt)
HXDLIN( 255)		HX_STACK_DO_THROW(HX_("Can't write on an MBS reader",1b,95,ed,46));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MbsReader_obj,writeInt,(void))

void MbsReader_obj::writeBool(int address,bool value){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_260_writeBool)
HXDLIN( 260)		HX_STACK_DO_THROW(HX_("Can't write on an MBS reader",1b,95,ed,46));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MbsReader_obj,writeBool,(void))

void MbsReader_obj::writeFloat(int address,Float value){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_265_writeFloat)
HXDLIN( 265)		HX_STACK_DO_THROW(HX_("Can't write on an MBS reader",1b,95,ed,46));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MbsReader_obj,writeFloat,(void))

void MbsReader_obj::writeString(int address,::String value){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_270_writeString)
HXDLIN( 270)		HX_STACK_DO_THROW(HX_("Can't write on an MBS reader",1b,95,ed,46));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MbsReader_obj,writeString,(void))

bool MbsReader_obj::isReader(){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_275_isReader)
HXDLIN( 275)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsReader_obj,isReader,return )

bool MbsReader_obj::isWriter(){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_280_isWriter)
HXDLIN( 280)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsReader_obj,isWriter,return )

int MbsReader_obj::allocate(int size){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_285_allocate)
HXDLIN( 285)		HX_STACK_DO_THROW(HX_("Can't allocate on an MBS reader",97,42,76,36));
HXDLIN( 285)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsReader_obj,allocate,return )

void MbsReader_obj::writeTypecode(int address, ::mbs::core::MbsType type){
            	HX_STACKFRAME(&_hx_pos_788b71c9200f6f1d_290_writeTypecode)
HXDLIN( 290)		HX_STACK_DO_THROW(HX_("Can't write on an MBS reader",1b,95,ed,46));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MbsReader_obj,writeTypecode,(void))


hx::ObjectPtr< MbsReader_obj > MbsReader_obj::__new( ::mbs::core::MbsTypedefSet typedefSet,bool readStoredTypeInformation,bool initStringList) {
	hx::ObjectPtr< MbsReader_obj > __this = new MbsReader_obj();
	__this->__construct(typedefSet,readStoredTypeInformation,initStringList);
	return __this;
}

hx::ObjectPtr< MbsReader_obj > MbsReader_obj::__alloc(hx::Ctx *_hx_ctx, ::mbs::core::MbsTypedefSet typedefSet,bool readStoredTypeInformation,bool initStringList) {
	MbsReader_obj *__this = (MbsReader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsReader_obj), true, "mbs.io.MbsReader"));
	*(void **)__this = MbsReader_obj::_hx_vtable;
	__this->__construct(typedefSet,readStoredTypeInformation,initStringList);
	return __this;
}

MbsReader_obj::MbsReader_obj()
{
}

void MbsReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MbsReader);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(stringTable,"stringTable");
	HX_MARK_MEMBER_NAME(typeTable,"typeTable");
	HX_MARK_MEMBER_NAME(rootAddress,"rootAddress");
	HX_MARK_MEMBER_NAME(subTypeMap,"subTypeMap");
	HX_MARK_MEMBER_NAME(initStringList,"initStringList");
	HX_MARK_MEMBER_NAME(stringTableAddress,"stringTableAddress");
	HX_MARK_MEMBER_NAME(readStoredTypeInformation,"readStoredTypeInformation");
	HX_MARK_MEMBER_NAME(typedefSet,"typedefSet");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_END_CLASS();
}

void MbsReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(stringTable,"stringTable");
	HX_VISIT_MEMBER_NAME(typeTable,"typeTable");
	HX_VISIT_MEMBER_NAME(rootAddress,"rootAddress");
	HX_VISIT_MEMBER_NAME(subTypeMap,"subTypeMap");
	HX_VISIT_MEMBER_NAME(initStringList,"initStringList");
	HX_VISIT_MEMBER_NAME(stringTableAddress,"stringTableAddress");
	HX_VISIT_MEMBER_NAME(readStoredTypeInformation,"readStoredTypeInformation");
	HX_VISIT_MEMBER_NAME(typedefSet,"typedefSet");
	HX_VISIT_MEMBER_NAME(header,"header");
}

hx::Val MbsReader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return hx::Val( header ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canRead") ) { return hx::Val( canRead_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRoot") ) { return hx::Val( getRoot_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return hx::Val( readInt_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readData") ) { return hx::Val( readData_dyn() ); }
		if (HX_FIELD_EQ(inName,"readBool") ) { return hx::Val( readBool_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return hx::Val( writeInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"isReader") ) { return hx::Val( isReader_dyn() ); }
		if (HX_FIELD_EQ(inName,"isWriter") ) { return hx::Val( isWriter_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocate") ) { return hx::Val( allocate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeTable") ) { return hx::Val( typeTable ); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return hx::Val( readFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeBool") ) { return hx::Val( writeBool_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"subTypeMap") ) { return hx::Val( subTypeMap ); }
		if (HX_FIELD_EQ(inName,"typedefSet") ) { return hx::Val( typedefSet ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return hx::Val( readString_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return hx::Val( writeFloat_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringTable") ) { return hx::Val( stringTable ); }
		if (HX_FIELD_EQ(inName,"rootAddress") ) { return hx::Val( rootAddress ); }
		if (HX_FIELD_EQ(inName,"canReadFile") ) { return hx::Val( canReadFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeString") ) { return hx::Val( writeString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readTypecode") ) { return hx::Val( readTypecode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTypeTable") ) { return hx::Val( getTypeTable_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeTypecode") ) { return hx::Val( writeTypecode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initStringList") ) { return hx::Val( initStringList ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stringTableAddress") ) { return hx::Val( stringTableAddress ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"reconfigureComposition") ) { return hx::Val( reconfigureComposition_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"readStoredTypeInformation") ) { return hx::Val( readStoredTypeInformation ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MbsReader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast<  ::mbs::core::header::MbsHeader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeTable") ) { typeTable=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"subTypeMap") ) { subTypeMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typedefSet") ) { typedefSet=inValue.Cast<  ::mbs::core::MbsTypedefSet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringTable") ) { stringTable=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rootAddress") ) { rootAddress=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initStringList") ) { initStringList=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stringTableAddress") ) { stringTableAddress=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"readStoredTypeInformation") ) { readStoredTypeInformation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MbsReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("stringTable","\x7d","\x69","\xe6","\x15"));
	outFields->push(HX_HCSTRING("typeTable","\xf4","\x12","\xbc","\xcf"));
	outFields->push(HX_HCSTRING("rootAddress","\xb2","\x93","\x3a","\x8f"));
	outFields->push(HX_HCSTRING("subTypeMap","\x62","\x6e","\x30","\x75"));
	outFields->push(HX_HCSTRING("initStringList","\xff","\x60","\x7a","\x1e"));
	outFields->push(HX_HCSTRING("stringTableAddress","\xb7","\x09","\xa7","\x1b"));
	outFields->push(HX_HCSTRING("readStoredTypeInformation","\x79","\x64","\x70","\x69"));
	outFields->push(HX_HCSTRING("typedefSet","\x17","\x7d","\xb6","\xaa"));
	outFields->push(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MbsReader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(MbsReader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MbsReader_obj,stringTable),HX_HCSTRING("stringTable","\x7d","\x69","\xe6","\x15")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MbsReader_obj,typeTable),HX_HCSTRING("typeTable","\xf4","\x12","\xbc","\xcf")},
	{hx::fsInt,(int)offsetof(MbsReader_obj,rootAddress),HX_HCSTRING("rootAddress","\xb2","\x93","\x3a","\x8f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(MbsReader_obj,subTypeMap),HX_HCSTRING("subTypeMap","\x62","\x6e","\x30","\x75")},
	{hx::fsBool,(int)offsetof(MbsReader_obj,initStringList),HX_HCSTRING("initStringList","\xff","\x60","\x7a","\x1e")},
	{hx::fsInt,(int)offsetof(MbsReader_obj,stringTableAddress),HX_HCSTRING("stringTableAddress","\xb7","\x09","\xa7","\x1b")},
	{hx::fsBool,(int)offsetof(MbsReader_obj,readStoredTypeInformation),HX_HCSTRING("readStoredTypeInformation","\x79","\x64","\x70","\x69")},
	{hx::fsObject /*::mbs::core::MbsTypedefSet*/ ,(int)offsetof(MbsReader_obj,typedefSet),HX_HCSTRING("typedefSet","\x17","\x7d","\xb6","\xaa")},
	{hx::fsObject /*::mbs::core::header::MbsHeader*/ ,(int)offsetof(MbsReader_obj,header),HX_HCSTRING("header","\x8d","\x09","\x00","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MbsReader_obj_sStaticStorageInfo = 0;
#endif

static ::String MbsReader_obj_sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("stringTable","\x7d","\x69","\xe6","\x15"),
	HX_HCSTRING("typeTable","\xf4","\x12","\xbc","\xcf"),
	HX_HCSTRING("rootAddress","\xb2","\x93","\x3a","\x8f"),
	HX_HCSTRING("subTypeMap","\x62","\x6e","\x30","\x75"),
	HX_HCSTRING("initStringList","\xff","\x60","\x7a","\x1e"),
	HX_HCSTRING("stringTableAddress","\xb7","\x09","\xa7","\x1b"),
	HX_HCSTRING("readStoredTypeInformation","\x79","\x64","\x70","\x69"),
	HX_HCSTRING("typedefSet","\x17","\x7d","\xb6","\xaa"),
	HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"),
	HX_HCSTRING("canReadFile","\x22","\x69","\x5b","\x9b"),
	HX_HCSTRING("canRead","\x86","\x33","\xff","\x69"),
	HX_HCSTRING("readData","\xa0","\x30","\x5b","\x6a"),
	HX_HCSTRING("reconfigureComposition","\xd7","\x14","\xe2","\x34"),
	HX_HCSTRING("getRoot","\xd8","\x9d","\x31","\x1e"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readBool","\xa0","\x5e","\x13","\x69"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("readTypecode","\x5d","\xd6","\xeb","\xfe"),
	HX_HCSTRING("getTypeTable","\x7e","\xaf","\x12","\xdf"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeBool","\xa9","\x78","\xcf","\x49"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeString","\x10","\x7b","\x29","\xa6"),
	HX_HCSTRING("isReader","\xcd","\x40","\xfb","\x54"),
	HX_HCSTRING("isWriter","\x3d","\x72","\x4f","\xd6"),
	HX_HCSTRING("allocate","\xbd","\xd2","\xea","\x90"),
	HX_HCSTRING("writeTypecode","\xe6","\x28","\x58","\x87"),
	::String(null()) };

static void MbsReader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsReader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsReader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsReader_obj::__mClass,"__mClass");
};

#endif

hx::Class MbsReader_obj::__mClass;

void MbsReader_obj::__register()
{
	hx::Object *dummy = new MbsReader_obj;
	MbsReader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mbs.io.MbsReader","\xa9","\x63","\xd4","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MbsReader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsReader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsReader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsReader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsReader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mbs
} // end namespace io