// Fill out your copyright notice in the Description page of Project Settings.


#include "GeometryCacheHelper.h"

void UGeometryCacheHelper::PlayFromStart(UGeometryCacheComponent* CacheComponent)
{
    if (!CacheComponent) return;

    // 停止播放，确保状态清零
    CacheComponent->Stop();

    // 启用手动帧控制（避免自动 Tick 时强制跳帧）
    CacheComponent->SetManualTick(true);

    // 强制跳转到第一帧（0.0秒），更新网格、变形、材质等
    CacheComponent->TickAtThisTime(0.0f, true, true, true);

    // 恢复自动 Tick
    CacheComponent->SetManualTick(false);

    // 从头开始播放
    CacheComponent->Play();
}