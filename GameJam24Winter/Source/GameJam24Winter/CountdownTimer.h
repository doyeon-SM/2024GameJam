// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"

#include "CountdownTimer.generated.h"

UCLASS()
class GAMEJAM24WINTER_API ACountdownTimer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACountdownTimer();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map")
    bool MapResult;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
    // 타이머 핸들
    FTimerHandle TimerHandle;

    // 현재 남은 시간
    int32 CountdownTime;

    // 타이머를 업데이트하는 함수
    UFUNCTION()
    void UpdateTimer();

    // 타이머가 끝났을 때 호출될 함수
    UFUNCTION()
    void TimerFinished();

    // Sounds to play
    UPROPERTY(EditAnywhere, Category = "Audio")
    USoundCue* NextCue;

    UPROPERTY(EditAnywhere, Category = "Audio")
    USoundCue* ThisCue;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    // 현재 남은 시간을 가져오는 함수 (선택 사항)
    UFUNCTION(BlueprintCallable, Category = "Timer")
    int32 GetRemainingTime() const { return CountdownTime; }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Finished = false;

};
