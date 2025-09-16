#include "SentrySpan.h"

USentrySpan::USentrySpan() {
}

USentrySpan* USentrySpan::StartChildWithTimestamp(const FString& Operation, const FString& Description, int64 Timestamp) {
    return NULL;
}

USentrySpan* USentrySpan::StartChild(const FString& Operation, const FString& Description) {
    return NULL;
}

void USentrySpan::SetTag(const FString& Key, const FString& Value) {
}

void USentrySpan::SetData(const FString& Key, const TMap<FString, FString>& Values) {
}

void USentrySpan::RemoveTag(const FString& Key) {
}

void USentrySpan::RemoveData(const FString& Key) {
}

bool USentrySpan::IsFinished() const {
    return false;
}

void USentrySpan::GetTrace(FString& Name, FString& Value) {
}

void USentrySpan::FinishWithTimestamp(int64 Timestamp) {
}

void USentrySpan::Finish() {
}


