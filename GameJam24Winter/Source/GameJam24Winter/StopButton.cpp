// Fill out your copyright notice in the Description page of Project Settings.


#include "StopButton.h"

// Sets default values
AStopButton::AStopButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = SphereComponent;
	
	// Static Mesh 컴포넌트 생성
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(SphereComponent);

}

// Called when the game starts or when spawned
void AStopButton::BeginPlay()
{
	Super::BeginPlay();
	// 액터 클릭 이벤트 바인딩
}

// Called every frame
void AStopButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



