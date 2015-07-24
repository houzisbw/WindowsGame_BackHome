#pragma once

#include <windows.h>

/*
CircleCapture       ��һ��DC����Բ���������ŵ���һ��DC��
Բ�İ뾶���û�ָ��

  HDC   hdcDst        Ŀ��DC
  int   nXOriginDst   Ŀ��X����
  int   nYOriginDst   Ŀ��Y����
  int   nDiameterDst  Ŀ��Բֱ��
  HDC   hdcSrc        ԴDC
  int   nXOriginSrc   ԴX����
  int   nYOriginSrc   ԴY����
  int   nDiameterSrc  ԴԲֱ��
  int   nWidth        Բ��������ϸ
  DWORD dwColor       Բ����ɫ
*/

extern "C" BOOL
WINAPI CircleCapture( HDC hdcDst, int nXOriginDst, int nYOriginDst, int nDiameterDst,
					  HDC hdcSrc, int nXOriginSrc, int nYOriginSrc, int nDiameterSrc,
					  int nWidth, DWORD dwColor );