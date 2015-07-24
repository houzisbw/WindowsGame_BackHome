#pragma once
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <ctime>
#include "stdafx.h"
#pragma comment(lib,"Msimg32.lib")//transparentblt函数所必须的
#define KEY_DOWN(vk_code) (GetAsyncKeyState(vk_code)&0x8000)
class CGameMap
{
public:
void GamePaint(HDC hdc);
void GameInit(HDC hdc);
void GameDoubleBuffer(HWND hwnd,HDC hdc);
bool GamePointDistance(POINT p1,POINT p2,int distance);

};