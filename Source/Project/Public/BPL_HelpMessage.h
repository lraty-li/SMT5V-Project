#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_HelpMessage.generated.h"

class UMessageRichTextWidget;

UCLASS(Blueprintable)
class PROJECT_API UBPL_HelpMessage : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_HelpMessage();

    UFUNCTION(BlueprintCallable)
    static void SetTagForSkillHelp(UMessageRichTextWidget* pAsset, int32 SkillId);
    
    UFUNCTION(BlueprintCallable)
    static void SetTagForItemHelp(UMessageRichTextWidget* pAsset, int32 ItemId);
    
};

