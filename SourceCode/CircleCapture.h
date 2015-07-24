#pragma once

#include <windows.h>

/*
CircleCapture       从一个DC拷贝圆形区域缩放到另一个DC，
圆的半径由用户指定

  HDC   hdcDst        目标DC
  int   nXOriginDst   目标X坐标
  int   nYOriginDst   目标Y坐标
  int   nDiameterDst  目标圆直径
  HDC   hdcSrc        源DC
  int   nXOriginSrc   源X坐标
  int   nYOriginSrc   源Y坐标
  int   nDiameterSrc  源圆直径
  int   nWidth        圆的线条粗细
  DWORD dwColor       圆的颜色
*/

extern "C" BOOL
WINAPI CircleCapture( HDC hdcDst, int nXOriginDst, int nYOriginDst, int nDiameterDst,
					  HDC hdcSrc, int nXOriginSrc, int nYOriginSrc, int nDiameterSrc,
					  int nWidth, DWORD dwColor );