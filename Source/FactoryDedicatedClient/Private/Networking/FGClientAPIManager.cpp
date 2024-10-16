// This file has been automatically generated by the Unreal Header Implementation tool

#include "Networking/FGClientAPIManager.h"

IFGPendingClientRequestState* FFGPendingClientRequest::operator->() const{ return nullptr; }
IFGPendingClientRequestState& FFGPendingClientRequest::operator*() const{ return *InternalState; }
UFGClientAPIManager::UFGClientAPIManager(){ }
UFGClientAPIManager* UFGClientAPIManager::GetClientAPIManager() const{ return nullptr; }
void UFGClientAPIManager::ClearRequestPool(){ }
void UFGClientAPIManager::CancelOngoingRequests() const{ }
TSharedPtr<IFGPendingClientRequestState> UFGClientAPIManager::Internal_SendRequestToServer(UObject* Context, const UFunction* Function, void* ParameterStack){ return TSharedPtr<IFGPendingClientRequestState>(); }
bool UFGClientAPIManager::Internal_PushServerErrorToStack(FFGServerErrorResponse& ErrorResponse, bool bPullFromStack, const UFunction* ResponseHandlerFunction, void* ResponseParameterStruct){ return bool(); }
void UFGClientAPIManager::Internal_ProcessServerError(const FFGRequestEmitterFunctionDefinition& EmitterFunctionDefinition, const FFGServerErrorResponse& ErrorResponse) const{ }
bool UFGClientAPIManager::Internal_PushFileResponseToStack(const TSharedPtr<FFGRequestPayload>& ResponsePayload, const UFunction* ResponseHandlerFunction, void* ResponseParameterStruct){ return bool(); }
TSharedPtr<FJsonObject> UFGClientAPIManager::ProcessRequestParameters(const UFunction* Function, void* ParametersStack, const TArray<FName>& IgnoredParamNames, TArray<TSharedPtr<FFGRequestBodyPart>>& OutMultipartData){ return TSharedPtr<FJsonObject>(); }
bool UFGClientAPIManager::ParseJsonResponsePayload(EHttpResponseCodes::Type InResponseCode, const TArray<uint8>& ContentBodyBytes, const FString& ContentCharset, TSharedPtr<FFGPendingClientRequestStateImpl> ClientRequestState){ return bool(); }
bool UFGClientAPIManager::ProcessServerDataResponseBody(TSharedPtr<FJsonObject> ResponseBody, TSharedPtr<FFGPendingClientRequestStateImpl> ClientRequestState){ return bool(); }
void UFGClientAPIManager::CompletePendingRequest(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bConnectedSuccessfully, TSharedPtr<FFGPendingClientRequestStateImpl> ClientRequestState){ }
void UFGClientAPIManager::StaticOnRequestCompleted(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bConnectedSuccessfully, TSharedPtr<FFGPendingClientRequestStateImpl> ClientRequestState){ }
void UFGClientAPIManager::CopyRequestParameters(const UFunction* Function, void* ParametersStack, const TArray<FName>& ParametersToCopy, const UFunction* ResponseFunction, void* ResponseFunctionParametersStack){ }
void UFGClientAPIManager::ClearServerRequest(const FFGPooledRequestData& RequestData){ }
FFGPooledRequestData UFGClientAPIManager::ObtainServerRequest(){ return FFGPooledRequestData(); }
FFGPooledRequestData UFGClientAPIManager::AllocateServerRequest() const{ return FFGPooledRequestData(); }
void UFGClientAPIManager::RetainOrDestroyServerRequest(FFGPooledRequestData& RequestData){ }
void UFGClientAPIManager::DestroyServerRequest(FFGPooledRequestData& RequestData){ }
void UFGClientAPIManager::PlatformSetProgressDelegate(const TSharedPtr<IHttpRequest>& HttpRequest, FFGPendingClientRequestStateImpl* ClientRequestState){ }
void UFGClientAPIManager::PlatformResetProgressDelegate(const TSharedPtr<IHttpRequest>& HttpRequest){ }
void UFGClientAPIManager::PlatformConfigureTimeout(const TSharedPtr<IHttpRequest>& HttpRequest, int32 ConnectTimeout, int32 LowTransferSpeedLimit, int32 LowTransferSpeedTimeout){ }
