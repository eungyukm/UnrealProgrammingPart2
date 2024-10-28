// Fill out your copyright notice in the Description page of Project Settings.


#include "ABFountain.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AABFountain::AABFountain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Water = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WATER"));

	// RootComponent를 명시해야 합니다.
	RootComponent = Body;
	// water는 body의 자식으로 붙습니다.
	Water->SetupAttachment(Body);
	// water의 상대 위치를 설정합니다.
	Water->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));

	// body의 오브젝트를 찾아서 설정합니다.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BodyMeshRef(TEXT("/Script/Engine.StaticMesh'/Game/ArenaBattle/Environment/Props/SM_Plains_Castle_Fountain_01.SM_Plains_Castle_Fountain_01'  "));
	if (BodyMeshRef.Object)
	{
		Body->SetStaticMesh(BodyMeshRef.Object);
	}

	// water의 오브젝트를 찾아서 설정합니다.
	 static ConstructorHelpers::FObjectFinder<UStaticMesh> WaterMeshRef(TEXT("/Script/Engine.StaticMesh'/Game/ArenaBattle/Environment/Props/SM_Plains_Fountain_02.SM_Plains_Fountain_02'"));
	if (WaterMeshRef.Object)
	{
		Water->SetStaticMesh(WaterMeshRef.Object);
	} 
}

// Called when the game starts or when spawned
void AABFountain::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

