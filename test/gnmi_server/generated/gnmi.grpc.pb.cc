// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: gnmi.proto

#include "gnmi.pb.h"
#include "gnmi.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace gnmi {

static const char* gNMI_method_names[] = {
  "/gnmi.gNMI/Capabilities",
  "/gnmi.gNMI/Get",
  "/gnmi.gNMI/Set",
  "/gnmi.gNMI/Subscribe",
};

std::unique_ptr< gNMI::Stub> gNMI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< gNMI::Stub> stub(new gNMI::Stub(channel));
  return stub;
}

gNMI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Capabilities_(gNMI_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Get_(gNMI_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Set_(gNMI_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Subscribe_(gNMI_method_names[3], ::grpc::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::Status gNMI::Stub::Capabilities(::grpc::ClientContext* context, const ::gnmi::CapabilityRequest& request, ::gnmi::CapabilityResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Capabilities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::gnmi::CapabilityResponse>* gNMI::Stub::AsyncCapabilitiesRaw(::grpc::ClientContext* context, const ::gnmi::CapabilityRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::gnmi::CapabilityResponse>::Create(channel_.get(), cq, rpcmethod_Capabilities_, context, request);
}

::grpc::Status gNMI::Stub::Get(::grpc::ClientContext* context, const ::gnmi::GetRequest& request, ::gnmi::GetResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Get_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::gnmi::GetResponse>* gNMI::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::gnmi::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::gnmi::GetResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request);
}

::grpc::Status gNMI::Stub::Set(::grpc::ClientContext* context, const ::gnmi::SetRequest& request, ::gnmi::SetResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Set_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::gnmi::SetResponse>* gNMI::Stub::AsyncSetRaw(::grpc::ClientContext* context, const ::gnmi::SetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::gnmi::SetResponse>::Create(channel_.get(), cq, rpcmethod_Set_, context, request);
}

::grpc::ClientReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>* gNMI::Stub::SubscribeRaw(::grpc::ClientContext* context) {
  return new ::grpc::ClientReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>(channel_.get(), rpcmethod_Subscribe_, context);
}

::grpc::ClientAsyncReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>* gNMI::Stub::AsyncSubscribeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::ClientAsyncReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>::Create(channel_.get(), cq, rpcmethod_Subscribe_, context, tag);
}

gNMI::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      gNMI_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< gNMI::Service, ::gnmi::CapabilityRequest, ::gnmi::CapabilityResponse>(
          std::mem_fn(&gNMI::Service::Capabilities), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      gNMI_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< gNMI::Service, ::gnmi::GetRequest, ::gnmi::GetResponse>(
          std::mem_fn(&gNMI::Service::Get), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      gNMI_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< gNMI::Service, ::gnmi::SetRequest, ::gnmi::SetResponse>(
          std::mem_fn(&gNMI::Service::Set), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      gNMI_method_names[3],
      ::grpc::RpcMethod::BIDI_STREAMING,
      new ::grpc::BidiStreamingHandler< gNMI::Service, ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>(
          std::mem_fn(&gNMI::Service::Subscribe), this)));
}

gNMI::Service::~Service() {
}

::grpc::Status gNMI::Service::Capabilities(::grpc::ServerContext* context, const ::gnmi::CapabilityRequest* request, ::gnmi::CapabilityResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status gNMI::Service::Get(::grpc::ServerContext* context, const ::gnmi::GetRequest* request, ::gnmi::GetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status gNMI::Service::Set(::grpc::ServerContext* context, const ::gnmi::SetRequest* request, ::gnmi::SetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status gNMI::Service::Subscribe(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::gnmi::SubscribeResponse, ::gnmi::SubscribeRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace gnmi
