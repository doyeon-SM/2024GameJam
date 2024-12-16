// Fill out your copyright notice in the Description page of Project Settings.


#include "CountdownTimer.h"

// Sets default values
ACountdownTimer::ACountdownTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; // 매 프레임 Tick 필요 없음
	CountdownTime = 60; // 초기 시간 설정 (60초)

}

// Called when the game starts or when spawned
void ACountdownTimer::BeginPlay()
{
	Super::BeginPlay();
	// 타이머 시작
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ACountdownTimer::UpdateTimer, 1.0f, true);

}

// Called every frame
void ACountdownTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACountdownTimer::UpdateTimer()
{
    if (CountdownTime > 0)
    {
        --CountdownTime; // 시간 감소
        UE_LOG(LogTemp, Warning, TEXT("Time Remaining: %d seconds"), CountdownTime);
    }
    else
    {
        // 타이머 종료 처리
        GetWorldTimerManager().ClearTimer(TimerHandle);
        TimerFinished();
    }
}

void ACountdownTimer::TimerFinished()
{
    UE_LOG(LogTemp, Warning, TEXT("Timer Finished!"));
    // 타이머가 종료되었을 때의 동작 추가 (예: 게임 종료, UI 표시 등)
}