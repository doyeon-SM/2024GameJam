#include "CountdownTimer.h"
#include "Kismet/GameplayStatics.h"

ACountdownTimer::ACountdownTimer()
{
    PrimaryActorTick.bCanEverTick = false; // No need to tick every frame
    CountdownTime = 60; // Initial countdown time
    MapResult = false; // Default value
}

void ACountdownTimer::BeginPlay()
{
    Super::BeginPlay();

    // Start the timer
    GetWorldTimerManager().SetTimer(TimerHandle, this, &ACountdownTimer::UpdateTimer, 1.0f, true);
}

void ACountdownTimer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ACountdownTimer::UpdateTimer()
{
    if (CountdownTime > 0)
    {
        --CountdownTime;

        UE_LOG(LogTemp, Warning, TEXT("Time Remaining: %d seconds"), CountdownTime);
        // Play NextCue at 30 seconds
        if (CountdownTime == 30 && NextCue)
        {
            UGameplayStatics::PlaySoundAtLocation(this, NextCue, GetActorLocation());
            UE_LOG(LogTemp, Warning, TEXT("Next Cue Played"));
        }

        // Play ThisCue at 10 seconds
        if (CountdownTime == 10 && ThisCue)
        {
            UGameplayStatics::PlaySoundAtLocation(this, ThisCue, GetActorLocation());
            UE_LOG(LogTemp, Warning, TEXT("This Cue Played"));
        }
    }
    else
    {
        // Timer ends
        GetWorldTimerManager().ClearTimer(TimerHandle);
        TimerFinished();
    }
}

void ACountdownTimer::TimerFinished()
{
    UE_LOG(LogTemp, Warning, TEXT("Timer Finished!"));
    Finished = true;
    // Add any actions when the timer finishes
}
