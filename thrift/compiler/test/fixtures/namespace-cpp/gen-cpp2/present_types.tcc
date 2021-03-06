/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/namespace-cpp/gen-cpp2/present_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace foo { namespace bar {

template <class Protocol_>
uint32_t MyData::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "datum") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRING;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->datum);
          this->__isset.datum = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t MyData::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyData");
  xfer += prot_->serializedFieldSize("datum", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->datum);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyData::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyData");
  xfer += prot_->serializedFieldSize("datum", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->datum);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyData::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyData");
  xfer += prot_->writeFieldBegin("datum", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->datum);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // foo::bar
namespace apache { namespace thrift {

}} // apache::thrift
namespace foo { namespace bar {

}} // foo::bar