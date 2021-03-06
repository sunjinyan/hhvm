/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/lib/thrift/gen-cpp2/ThriftMetadataServiceAsyncClient.h"
#include "thrift/lib/thrift/gen-cpp2/metadata_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace apache { namespace thrift { namespace metadata {

class ThriftMetadataServiceSvAsyncIf {
 public:
  virtual ~ThriftMetadataServiceSvAsyncIf() {}
  virtual void async_tm_getRpcMetadata(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::metadata::ThriftMetadata>>> callback) = 0;
  virtual folly::Future<std::unique_ptr< ::apache::thrift::metadata::ThriftMetadata>> future_getRpcMetadata() = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::apache::thrift::metadata::ThriftMetadata>> semifuture_getRpcMetadata() = 0;
};

class ThriftMetadataServiceAsyncProcessor;

class ThriftMetadataServiceSvIf : public ThriftMetadataServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef ThriftMetadataServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void getRpcMetadata( ::apache::thrift::metadata::ThriftMetadata& /*_return*/);
  folly::Future<std::unique_ptr< ::apache::thrift::metadata::ThriftMetadata>> future_getRpcMetadata() override;
  folly::SemiFuture<std::unique_ptr< ::apache::thrift::metadata::ThriftMetadata>> semifuture_getRpcMetadata() override;
  void async_tm_getRpcMetadata(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::metadata::ThriftMetadata>>> callback) override;
};

class ThriftMetadataServiceSvNull : public ThriftMetadataServiceSvIf {
 public:
  void getRpcMetadata( ::apache::thrift::metadata::ThriftMetadata& /*_return*/) override;
};

class ThriftMetadataServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  ThriftMetadataServiceSvIf* iface_;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
  std::shared_ptr<folly::RequestContext> getBaseContextForRequest() override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<ThriftMetadataServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const ThriftMetadataServiceAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const ThriftMetadataServiceAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const ThriftMetadataServiceAsyncProcessor::ProcessMap binaryProcessMap_;
   static const ThriftMetadataServiceAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_getRpcMetadata(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_getRpcMetadata(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_getRpcMetadata(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::apache::thrift::metadata::ThriftMetadata const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getRpcMetadata(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  ThriftMetadataServiceAsyncProcessor(ThriftMetadataServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~ThriftMetadataServiceAsyncProcessor() {}
};

}}} // apache::thrift::metadata
