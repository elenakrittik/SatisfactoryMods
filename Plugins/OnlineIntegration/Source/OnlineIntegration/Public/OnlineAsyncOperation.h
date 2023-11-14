﻿// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "MVVMViewModelBase.h"
#include "OnlineAsyncOperation.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnOnlineAsyncOperationCompleted_Native);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOnlineAsyncOperationCompleted);

/**
 * Abstract online asynchronous operation. Provides interested parties with all the necessary information to keep track of a long asynchronous operation
 * in case they want to eg display something in the UI
 */
UCLASS(BlueprintType, Abstract)
class ONLINEINTEGRATION_API UOnlineAsyncOperation : public UMVVMViewModelBase
{
	GENERATED_BODY()
public:
	/**
	 * Starts the asynchronous operation. 
	 * @return false if the operation could not be started, true otherwise.
	 */
	virtual bool Start();

	/**
	 * Cancels the operation, if possible. Deriving classes may ignore this call so do not assume the operation is done after calling this. Wait for
	 * the corresponding delegates to be fired. 
	 */
	virtual void Cancel();
	
	/**
	 * Binds to the finish delegate that will be triggered regardless of the outcome
	 */
	FDelegateHandle AddOperationFinishedDelegate(FOnOnlineAsyncOperationCompleted_Native::FDelegate &&Delegate);
	
protected:
	virtual void NotifySequenceFinished();
	
	/**
	 * The last meaningful status report. 
	 */
	UPROPERTY(BlueprintReadOnly, FieldNotify)
	FText StatusText;

private:
	/**
	 * Will be set when the sequence is finished, regardless of success or failure
	 */
	UPROPERTY(BlueprintReadOnly, FieldNotify, meta=(AllowPrivateAccess))
	uint8 bIsFinished: 1 = false;
	
	/**
	 * Native delegate triggered when the operation is finished, regardless of the outcome.
	 * It is the responsibility of derived classes to broadcast this delegate
	 */
	FOnOnlineAsyncOperationCompleted_Native OnOperationCompleted_Native;
	UPROPERTY(BlueprintAssignable)
	FOnOnlineAsyncOperationCompleted OnOperationCompleted;
};
