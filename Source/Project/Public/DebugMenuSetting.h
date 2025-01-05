#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DebugMenuSetting.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UDebugMenuSetting : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugMenuSetting();

    UFUNCTION(BlueprintCallable)
    static void CallAddDebugMenuData();
    
};

