// Fill out your copyright notice in the Description page of Project Settings.


#include "GeometryCacheHelper.h"

void UGeometryCacheHelper::PlayFromStart(UGeometryCacheComponent* CacheComponent)
{
    if (!CacheComponent) return;

    // ֹͣ���ţ�ȷ��״̬����
    CacheComponent->Stop();

    // �����ֶ�֡���ƣ������Զ� Tick ʱǿ����֡��
    CacheComponent->SetManualTick(true);

    // ǿ����ת����һ֡��0.0�룩���������񡢱��Ρ����ʵ�
    CacheComponent->TickAtThisTime(0.0f, true, true, true);

    // �ָ��Զ� Tick
    CacheComponent->SetManualTick(false);

    // ��ͷ��ʼ����
    CacheComponent->Play();
}