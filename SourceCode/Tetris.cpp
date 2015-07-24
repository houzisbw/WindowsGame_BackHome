// Tetris.cpp : ����Ӧ�ó������ڵ㡣
//
#pragma once
#include "stdafx.h"
#include "Tetris.h"
#include "time.h"
#include "atlstr.h"//����ʹ��cstring
#include <set>
#include <Commdlg.h>//Ϊ����ʹ��OPFILENAME�ṹ������Ǳ���ģ�
using namespace std;//�������仰��set
extern bool  plane_direction;
extern bool take_off;//�ɻ���ɱ�־������Ŀ����Ϊ�˴�����ʱ��
extern set<int> mission_set;//���񼯺ϣ���ʾ����Щ���񣬴�1��10
extern set<int>::iterator m_it,m_it2,m_it3,m_it4,m_it5,m_it6,m_it7,m_it8;
extern HDC hMail;
extern HDC hMenuHead;//�˵�ͷ��
extern HDC hMenuBody;//�˵��м���
extern HDC hExclimation;//��̾��ͼ��
extern HDC hMissionFinish;// ���������ɫ����
extern int Ex_counter;//��̾�ż�����
extern bool mission1;//����1������־
extern bool click_mail;//����ʼ��ı�־����
extern bool mission_viewed;//�鿴�����������ı�־����,falseΪδ�鿴
extern bool challenge_activated;
//��Ϸ����dc����������,һ��9��
extern HDC hAnimationPersonnel[10];
extern HDC  hCRYQ;//���
extern HDC  hYSN;//��˿��
extern HDC  hGBTN;//ͩ��
//��Ϸ�����DC
extern HDC hSaberHome;
extern HDC hSaberHomeDC;//��ʾ����λͼ
////////////////////////////////////////////////////////////////////ÿ�����н���dc
extern HDC hCityBlock[10];
extern HDC hMark;
extern HDC hMarkHome;
extern HDC hTokyoDowntown;

extern HDC hZhaHuangDowntownJR;//������������λͼ
extern HDC hZhaHuangDowntown;
extern HDC hZhaHuangFactoryJR;//�����ɿ��������ڲ�����λͼ
extern HDC hZhaHuangFactory;

extern HDC hLuerdaoDowntownJR;//¹������������λͼ
extern HDC hLuerdaoDowntown;
extern HDC hLuerdaoVolcanoJR;//¹������ɽ�������λͼ
extern HDC hLuerdaoVolcano;

extern HDC hQingsenDowntownJR;//��ɭ��������λͼ
extern HDC hQingsenParkJR;
extern HDC hQingsenDowntown;
extern HDC hQingsenPark;
//�����߶�ͼ��
extern HDC hWalkFrame;
extern int male_player_x,male_player_y;//��ʾ���˷ɻ������Խ�ɫλ��

extern HDC hTotalJapanDC;//�����ձ���ͼDC
extern HDC hTotalJapanBGDC;//����λͼdc
extern HDC hMissionBar;//������
extern int TotalJapan_x,TotalJapan_y;//��ʾ���ձ���ͼ����ʱ���������Ͻ�����
extern HDC KyBd;//���̷����
extern HDC hEnter;//�س���
extern HDC hBack;//�������ĵ���ť
extern int dir;
extern set<int> s;//��ʾ�洢�ؿ��ļ���
extern set<int>::iterator it;
extern bool moe_bar;//��ͼ���ͽ��浼�����������ı�־����
extern bool mp[8];//8��������Ϣ�ı�־����
extern bool IsLoad;
extern bool tokyo;//��ʾ����ʱ�ķŴ󻨶�
extern int map_stretch_counter;
extern int tokyo_counter1,tokyo_counter2;//�������ּ�ʱ��
extern int plane_counter;//�ɻ���ʱ��
extern int dialog_counter;//�ɻ��ں��ϷɵĶԻ���ʱ��
extern POINT plane;
extern int TotalJapan_x,TotalJapan_y;
////////////�ձ�����dc
extern HDC hAirportDC[9];
extern HDC hTokyoAirport;
extern HDC hZhaHuangAirport;
extern HDC hLuerdaoAirport;
extern HDC hQingsenAirport;
extern HDC hRotate135;//�ɻ�135��
extern HDC hLand;//�½�����
//////////���н���DC
extern HDC hTokyoIntro;
extern HDC hZhanghuangIntro;
extern HDC hLuerdaoIntro;
extern HDC hQingsenIntro;
extern int Intro_counter;
//////////////////////�ձ�������ʱ��
extern int Tokyo_counter;
extern int Tokyo_transform_counter;//�ɻ���С��ʱ�� 

extern int b_counter;
extern int r_counter;
extern int a_counter;
extern int n_counter;
extern int t_counter;
extern int nan_counter;
extern int nan_acc;
extern int niao_counter;

extern bool mingguwu ;
extern bool qingsen ;
extern bool jingdu ;
extern bool zhahuang;
extern bool songshan ;
extern bool luerdao;
extern bool jiuzhou ;
extern bool xinxie ;

/////////�ؿ���ͷ��Ч����
extern HDC cross_hdc;//ʮ�ּ�hdc
extern HDC hlv1dc;//��һ��dc
extern HDC hLevelPrelude[30];//һ��ʮ�ص�30��preludeͼƬdc
extern int lv1_counter;//��һ��prelude��ʱ�� 0.01s
extern int lv1_counter1;//��һ��preldue��ʱ��1 0.001s
extern int lv1_counter2;//��һ��preldue��ʱ��2 0.001s
extern int lv1_counter3;//��һ��preldue��ʱ��2 0.001s
extern int lv1_counter4;//��һ��preldue��ʱ��2 0.001s

extern bool phase1_done;//prelude��һ�׶���ɱ�־
extern bool phase2_done;//prelude�ڶ��׶���ɱ�־
extern bool phase3_done;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
extern bool phase4_done;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
////////
extern bool GameStart_Select;//��ʾ��ʼ��Ϸδ��ѡ��
extern bool GameBrief_Select;//��ʾ��Ϸ���δѡ��
extern bool GameExit_Select;//��ʾ��Ϸ�˳�δѡ��
extern bool GameMoe_Select;//��ʾ��ͼ����δѡ��
//��һ��4����ĸ����
extern bool rect_a;
extern bool rect_s;
extern bool rect_u;
extern bool rect_n;

extern bool Level1_Motto_done;//��һ�ؽ�����־������motto����
extern int Level1_Motto;//��һ�ظ��Խ����ʱ��
extern bool Level2_Motto_done;//��2�ؽ�����־������motto����
extern int Level2_Motto;//��2�ظ��Խ����ʱ��
extern bool Level3_Motto_done;//��3�ؽ�����־������motto����
extern int Level3_Motto;//��3�ظ��Խ����ʱ��
extern bool Level4_Motto_done;//��4�ؽ�����־������motto����
extern int Level4_Motto;//��4�ظ��Խ����ʱ��
extern bool Level6_Motto_done;//��6�ؽ�����־������motto����
extern int Level6_Motto;//��6�ظ��Խ����ʱ��
extern bool Level7_Motto_done;//��7�ؽ�����־������motto����
extern int Level7_Motto;//��7�ظ��Խ����ʱ��
//���˵��ĸ�ԲȦ��ʱ��
extern int chu;
extern int xun;
extern int li;
extern int shang;

//���˵��ĸ�ԲȦ�����������ſ�ʼ������4��ԲȦ���ν��뻭��
extern int chu1;
extern int xun1;
extern int li1;
extern int shang1;

//�������˵�4����ť��Ķ�����ԲȦ���ҷɳ�����
extern int chu2;
extern int xun2;
extern int li2;
extern int shang2;
//�ĸ�������ʼ���ű�־
extern bool chu2s;
extern bool xun2s;
extern bool li2s;
extern bool shang2s;
extern int level6_row;   //����������ڸ��ӵ����к�
extern int level6_column;

extern bool right1;//��������Ϸ�ɹ���־
extern int random_letter;//�����ֵ���ĸ				 
extern int row; //����һ���������1-10�Ա�ʾҪ�ҵķ���  ��x
extern int column;//����һ���������1-10�Ա�ʾҪ�ҵķ���  ��y
extern int letter;
extern int b[10][10];//���Ĺ�10X10����ĸ״̬����
extern bool grid[10][10];//���������ƶ�ʱ��ʾ��ʾ�Ĳ�������
extern char input;//��6�ذ�������
extern TCHAR grid_letter[10][10];//��6�����ָ��Ӿ�����ĸ����
extern bool zoom_flag;//�Ŵ󾵳������ı�־����
extern int Level4_counter;//���Ĺؼ�ʱ��,0.1���һ��
extern int Level6_counter;//��6�ؼ�ʱ��
extern int timebar_y;//���Ĺ�ʱ���y����
extern bool level4_board;//���Ĺ�����ĸ���ӱ�־����

extern int Lv5_counter_whql;//��������ﶯ��������
extern int whql_x;//�������Ͻ�����
extern int whql_x1;
extern int Lv5_counter_roll;//����ؾ����ʱ��
extern int roll_x;//����ؾ������Ͻ�����
extern int roll_x1;
extern bool Lv5_whql_animation_done;//������ﶯ���Ѿ�����ı�־
extern bool Lv5_dialog1;//��һҳ�Ի���־����
extern int Level5_state;//�������Ϸ״̬��0��ʾ��һҳ�Ի�
extern bool Level5_same,Level5_notsame;//�����ѡ��һ�����ǲ�һ���ı�־������δѡ��ʱΪfasle
extern bool Level5_Picture;//�����ͼƬ�仯��־������falseΪԭͼ
extern bool Level5_final_animation;//���һҳ�������ű�־����
extern int Level5_Motto;//ë���ּ�ʱ��
extern bool Level5_Motto_done;//7��ë����д���ı�־����

extern int pad_x,pad_y;//���߹ص������Ͻ�����
extern int uppad_x,uppad_y;//���߹��ϵ������Ͻ�����
extern bool click_start;//���߹ص�������ͷ���ȥ
extern int lv7_death;//���߹�������
extern int lv7_color_counter;//���߹���ɫ��ʱ��
extern int brick_grid[12][12];//���߹�ש�����
extern bool lv7_win;//���߹�ʤ����־

extern int death_level3;
extern int moePicture_i;
extern int game_state;//��Ϸ״̬�������ǵڼ���
extern int music_state;//���ֿ���״̬��1Ϊ��
extern int choose_state;//��ʾ����ƶ�����ʼ��Ϸ���Ƿ��仯
extern int Level2_counter;
extern int Level4_state;
extern int letter_x,letter_y;//���Ĺ�ҪѰ�ҵķ������Ͻ�����
//�ڰ˹�
extern bool Level8_Motto_done;
extern int Level8_Motto;//�ڰ˹�ë���ּ�ʱ��
extern bool level8_lv1_win,level8_lv2_win,level8_lv3_win;//ÿһ�ع��ر�־����
extern int level8_lv2_stepcounter;//�ڰ˹صڶ�С�ز�����ʱ��
extern int level8_timebar;//�ڰ˹ؼ�ʱ��rectangle
extern int level8_lv1_counter;//�ڰ˹ص�һС�ؼ�ʱ����15���
extern bool level8_lv1;//3��������3�ؿ��ķ���
extern bool level8_lv2;
extern bool level8_lv3;
extern int level8_state;//�ڰ˹ؾ���ؿ�����һ�����أ�1��ʾ��һ��
extern int IsInBoard;//����Ƿ�������������
extern int level8_chess_counter;//�ڰ˹�����������������µ�������
extern int level8_row;//�ڰ˹����̺�����
extern int level8_column;//�ڰ˹�����������
extern int AI_row;//�ڰ˹�AI����������
extern int AI_column;
extern int level8_board[17][17];//�ڰ˹����̾���
extern bool IsDraw;//�ж��Ƿ����,falseΪδ����
extern int level8_counter;//�ڰ˹ؼ�ʱ����������Ϊ����ʾ5������
extern int level8_player[17][17][4];//�ڰ˹���������ֵ����,����4����4�����ϵ�Ȩ��ֵ
extern int level8_Ai[17][17][4];//�ڰ˹ص��������ֵ����,����4����4�����ϵ�Ȩ��ֵ
//�ھŹ�
extern int level9_bike_counter;
extern bool flash_used;
extern int level9_flash_x,level9_flash_y;
extern bool level9_flash_description;
extern int level9_box_x,level9_box_y;
extern bool level9_box_description;
extern int level9_player_x, level9_player_y;
extern bool chase;
extern int path[30][30];
extern int chasingmonsterx, chasingmonstery;
extern int level9_chasingmonster_counter;//׷������ʱ��
extern int level9_temp_x, level9_temp_y;//����ҩˮ����ƶ���ʱ����
extern int level9_acceffect_counter;//����Ч����ʾ��ʱ��,0,5����ʾ
extern float y_velocity;
extern bool level9_acctool_description;
extern int level9_acc_tool;//3��ʹ�ü��ٵ��ߵĻ���
extern int level9_gravity_counter;//3������������
extern bool gravity_activated;
extern int level9_ball1_counter_dx,level9_ball1_counter_dy,level9_ball2_counter_dx,level9_ball2_counter_dy,level9_ball3_counter_dx,level9_ball3_counter_dy,
	       level9_ball4_counter_dx,level9_ball4_counter_dy,level9_ball5_counter_dx,level9_ball5_counter_dy,level9_ball6_counter_dx,level9_ball6_counter_dy,
		   level9_ball7_counter_dx,level9_ball7_counter_dy;//������м�ʱ��
extern bool level9ball_flag[7],level9lockkey[4];
extern bool reveal_medecine;
extern bool level9_medicine[2];//ҩˮ���Ա��
extern int reveal_medecine_number;//����ҩˮ����
extern bool level9_medecine_description;//��� �ƶ���ҩ�ϵ�˵����ʾ
extern int level9_px,level9_py,level9_maze[31][30];//�ھŹ��������
extern int level9_medecine_coordinate_array[6];//��¼3�������xy����
extern HDC ChallengeDlg[3];
extern HDC hMainTitle[4];
extern HDC hCityDC[36];
extern HDC Plane[8];
extern HDC hCGword[7];
extern HDC hLevel9Temp2ndDC, hLevel9StateBarDC, hLevel9ActorDC, hLevel9BrickDC[4], hLevel9BallDC[7], hLevel9KeyDC[4], hLevel9PortalDC, hLevel9Monster[5], hLevel9MedicineDC[2], hLevel9BirdDC, hLevel9GsystemDC, hLevel9AccDC, hLevel9AccEffectDC ,hLevel9DialogDC,hLevel9ThornDC[3],hLevel9BarrierDC,hLevel9GrayLockDC,hLevel9GrayKeyDC;//�ڶ�������dc
extern HDC hMusicONDC,hMusicOFFDC,hBgDC,hSaveDC,hGameStartNDC,hGameStartYDC,hGameExitDC,hReturnMenuDC,hBriefDC,hBriefBGDC,hFlowerDC,hPictureDC[8],hMoeDC,hUpperEdgeDC,hLowerEdgeDC,hGameInfoDC,hGameInfoBgDC,hKeyBoardDC,hLevel1BgDC,hLevel9BanDC,hLevel9PinkBarrierDC,hLevel9FlashDC,hLevel9BikeDC
,hInputBoxDC,hTitleDC,hTitle1DC,hTitle2DC,hStarDC,hStar1DC,hLevelPreDC,hBallDC[5],hLevel2BgDC,hTVDC,hLevel2PlayerDC,hLevel2MMDC,hLevel2BoardDC,hLetterDC[26],hLevel4TimeDC,hMoeBar1,hMoeBar2,hMoeP[8],hLevel9BGDC,hJapanDC,hFolderDC,hFlowerBigDC,hCartoonJapanDC,hCartoonJapanDC1,hSilverDialog,hStartMianma
,hLevel3BGDC,hLevel3FrameDC,hLevel3GameBoardDC,hLevel3PlayerDC,hLevel3FailDC,hLevel3PassDC,hLevel3MonsterDC[4],hLevel3CoinDC,hLevel3SaveDC,hLevel3AsunaDC, hLevel4BGDC,hLevel4StartDC,hMoePictureDC,
hLevel4ZoomDC,hLevel4BoardDC,hLevel4TNDC,hLevel5BGDC,hLevel5Pic,hLevel5Pic_Transformed,hLevel5QLDC,hLevel5DialogDC,hLevel5RollDC,hLevel5MouseDC,hLevel5ButtonDC,hLevel5ArrowDC,hLevel5MottoDC[7],hLevel1MottoDC[6],hLevel2MottoDC[9],hLevel3MottoDC[9],hLevel6MottoDC[9],hLevel7MottoDC[9],hLevel8MottoDC[9]
,hLevel4MottoDC[9],hMottoBGDC,hMenuDC[4],hCloud1DC,hCloud2DC,hLevel6BGDC,hLevel6GridDC,hLevel6SXDC,hLevel6AnswerDC[15],hLevel7BGDC,hLevel7BG1DC,hLevel7PadDC,hLevel7Pad1DC,hLevel7BallDC,hLevel7BrickDC[6],hLevel7DeathDC,hLevel7QCFDC,hLevel7QCFdlgDC
,hLevel8BGDC,hLevel8BoardDC,hLevel8Black,hLevel8White,hLevel8SQKS,hLevel8Tick;
//////////////////////////////////////////////ѡ�����˵������dc
extern HDC hGameStart_SelectedDC,hGameBrief_SelectedDC,hGameExit_SelectedDC,hMoePicture_SelectedDC,hLoadDC,hCGDC,hGameCGDC,hPrelude_flyonseaDC;
extern HDC hTempMenuDC,hTemp1DC,hTempDC,hTemp3DC,hTemp4DC,hTemp5DC,hTemp6DC,hTemp7DC,hTemp8DC,hTemp9DC;//˫������ʱ�ڴ�dc
extern HDC hTempMotto1DC,hTempMotto2DC,hTempMotto3DC,hTempMotto4DC,hTempMotto6DC,hTempMotto7DC,hTempMotto8DC;//ÿһ�ظ���dc
#define MAX_LOADSTRING 100
extern CString Password,Level1Pre,Level1Title,Level2Pre,Level2Title,str_counter,Level3Pre,Level3Title,Level4Title,Level4Pre,Level5Title,Level5Pre,Level5Dialog1_1,Level5Dialog1_2,Level6Pre,Level6Title,Level7Pre,Level7Title;
extern clock_t start,finish,start_level2_pre,finish_level2_pre,start_level3_pre,finish_level3_pre,start_level4_pre,finish_level4_pre,start_level5_pre,finish_level5_pre,
	   finish_level6_pre,start_level6_pre, finish_level7_pre,start_level7_pre,finish_level8_pre,start_level8_pre,start_cg,finish_cg; 
extern int flag_save1,PosX3,PosY3;
extern bool flag_coin1,flag_coin2,flag_coin3;//�����ؽ�ұ�־����
extern bool flag_level4_start;
 
CGameMap Game;//������Ϸ��Ķ���

// ȫ�ֱ���:
HINSTANCE hInst;								// ��ǰʵ��
TCHAR szTitle[MAX_LOADSTRING];					// �������ı�
TCHAR szWindowClass[MAX_LOADSTRING];			// ����������

// �˴���ģ���а����ĺ�����ǰ������:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);
void Level8_AI();//�ڰ˹�AI
bool IsWin_level8(int a[17][17],int row,int column,int chess);//�ڰ˹��������ж�ʤ������
BOOL WINAPI CircleCapture( HDC , int , int , int,
						   HDC, int , int , int ,
						   int, DWORD  );

int CALLBACK _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

 	// TODO: �ڴ˷��ô��롣
	MSG msg;
	HACCEL hAccelTable;
	HWND     hWnd; //���崰�ھ�� 
	// ��ʼ��ȫ���ַ���
	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_TETRIS, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);
	//�������ʼ��

	// ִ��Ӧ�ó����ʼ��:
	


   hInst = hInstance; // ��ʵ������洢��ȫ�ֱ�����
   //��仰�ǵõ����ھ�����ִ���hWnd��
   hWnd = CreateWindow(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW&(~WS_MAXIMIZEBOX)&(~WS_THICKFRAME),//ȥ��thickframeʹ�ô��ڴ�С���ܱ�
      CW_USEDEFAULT, 0, 600, 800, NULL, NULL, hInstance, NULL);

   if (!hWnd)
   {
      return FALSE;
   }



   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);
  
 
   
	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_TETRIS));
	 
	// ����Ϣѭ��:
	while (1)
	{
		if (PeekMessage(&msg, NULL, 0, 0,PM_REMOVE))//����getmessage
		{
			if(msg.message==WM_QUIT)
				break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		HDC hdc = GetDC(hWnd);	//�õ�����hdc
	    Game.GameDoubleBuffer(hWnd,hdc);//˫�������������󣬺�WM_PAINT ��ͬ����Ϸ��Ҫ������������		
	    ReleaseDC(hWnd,hdc);
	}

	return (int) msg.wParam;
}



//
//  ����: MyRegisterClass()
//
//  Ŀ��: ע�ᴰ���ࡣ
//
//  ע��:
//
//    ����ϣ��
//    �˴�������ӵ� Windows 95 �еġ�RegisterClassEx��
//    ����֮ǰ�� Win32 ϵͳ����ʱ������Ҫ�˺��������÷������ô˺���ʮ����Ҫ��
//    ����Ӧ�ó���Ϳ��Ի�ù�����
//    ����ʽ��ȷ�ġ�Сͼ�ꡣ
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_FLOWER));	
	wcex.hCursor		= LoadCursor(hInstance,MAKEINTRESOURCE(IDC_CURSOR1));
	wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
	wcex.lpszMenuName	= MAKEINTRESOURCE(IDC_TETRIS);
	wcex.lpszClassName	= szWindowClass;
	wcex.hIconSm		= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_FLOWER));

	return RegisterClassEx(&wcex);
}

//
//   ����: InitInstance(HINSTANCE, int)
//
//   Ŀ��: ����ʵ�����������������
//
//   ע��:
//
//        �ڴ˺����У�������ȫ�ֱ����б���ʵ�������
//        ��������ʾ�����򴰿ڡ�
//

//
//  ����: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  Ŀ��: ���������ڵ���Ϣ��
//
//  WM_COMMAND	- ����Ӧ�ó���˵�
//  WM_PAINT	- ����������
//  WM_DESTROY	- �����˳���Ϣ������
POINTS p;
extern int InitCursorPosX;
extern int InitCursorPosY;
extern int j;
HHOOK   hHook;   
  LRESULT  CBTHookProc(   long   nCode,WPARAM   wParam,LPARAM   lParam)   
  {   
      if   (nCode==HCBT_ACTIVATE)   
      {   
      SetDlgItemText((HWND)wParam,IDYES,L"&Yes");   
      SetDlgItemText((HWND)wParam,IDNO   ,L"&No");   
      SetDlgItemText((HWND)wParam,IDOK,L"&֪����");   
      SetDlgItemText((HWND)wParam,IDCANCEL,L"&Cancel");   
      UnhookWindowsHookEx(hHook);   
      }   
      return   0;   
  }   
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	srand(time(0));
	LOGFONT lf;
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;
	RECT r_startGame ={80,270,150,340};
	RECT r_exitGame ={80,450,150,520};
	RECT r_briefGame ={80,360,150,430};
	RECT r_MoeGame ={80,540,150,610};
	RECT r_BgInfoGame ={510,800-128+12,574,800-128+12+64};

	if(game_state==-5)//��ϷCG
	{
	   finish_cg=clock();
	   if(finish_cg-start_cg>=5000)//15��
	   {
	     game_state=0;
		  PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
	   }
	
	
	}		
	if(game_state==1)//��һ��prelude
	{	            
	   finish=clock();
	   if(finish-start>=5000)
		  {
			 /////////////////////////////////////////���ֱ�������
			 
			 game_state=2;			
			 lv1_counter=0;//��һ��prelude��ʱ��
			 lv1_counter1=0;//��һ��preldue��ʱ��1
			 lv1_counter2=0;//��һ��preldue��ʱ��2
			 lv1_counter3=0;//��һ��preldue��ʱ��3 0.001s
			 lv1_counter4=0;//��һ��preldue��ʱ��2 0.001s
			 phase1_done=false;//prelude��һ�׶���ɱ�־,0.5��Ŀհ�
			 phase2_done=false;//prelude�ڶ��׶���ɱ�־,����ʮ�ּ�ͣ��0.3��
			 phase3_done=false;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
			 phase4_done=false;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
			 InvalidateRect(hWnd,NULL,true);						
		  }						
	}
	if(game_state==3)//�ڶ���prelude
	{	            
	   finish_level2_pre=clock();
	   if(finish_level2_pre-start_level2_pre>=5000)
		  {
			 game_state=4;
			 lv1_counter=0;//��һ��prelude��ʱ��
			 lv1_counter1=0;//��һ��preldue��ʱ��1
			 lv1_counter2=0;//��һ��preldue��ʱ��2
			 lv1_counter3=0;//��һ��preldue��ʱ��3 0.001s
			 lv1_counter4=0;//��һ��preldue��ʱ��2 0.001s
			 phase1_done=false;//prelude��һ�׶���ɱ�־,0.5��Ŀհ�
			 phase2_done=false;//prelude�ڶ��׶���ɱ�־,����ʮ�ּ�ͣ��0.3��
			 phase3_done=false;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
			 phase4_done=false;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
			 InvalidateRect(hWnd,NULL,true);						
		  }						
	}
	if(game_state==5)//������prelude
	{	            
	   finish_level3_pre=clock();
	   if(finish_level3_pre-start_level3_pre>=5000)
		  {
			 game_state=6;
			 lv1_counter=0;//��һ��prelude��ʱ��
			 lv1_counter1=0;//��һ��preldue��ʱ��1
			 lv1_counter2=0;//��һ��preldue��ʱ��2
			 lv1_counter3=0;//��һ��preldue��ʱ��3 0.001s
			 lv1_counter4=0;//��һ��preldue��ʱ��2 0.001s
			 phase1_done=false;//prelude��һ�׶���ɱ�־,0.5��Ŀհ�
			 phase2_done=false;//prelude�ڶ��׶���ɱ�־,����ʮ�ּ�ͣ��0.3��
			 phase3_done=false;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
			 phase4_done=false;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
			 InvalidateRect(hWnd,NULL,true);						
		  }						
	}

	if(game_state==7)//��4��prelude
	{	            
	   finish_level4_pre=clock();
	   if(finish_level4_pre-start_level4_pre>=5000)
		  {
			 game_state=8;
			 lv1_counter=0;//��һ��prelude��ʱ��
			 lv1_counter1=0;//��һ��preldue��ʱ��1
			 lv1_counter2=0;//��һ��preldue��ʱ��2
			 lv1_counter3=0;//��һ��preldue��ʱ��3 0.001s
			 lv1_counter4=0;//��һ��preldue��ʱ��2 0.001s
			 phase1_done=false;//prelude��һ�׶���ɱ�־,0.5��Ŀհ�
			 phase2_done=false;//prelude�ڶ��׶���ɱ�־,����ʮ�ּ�ͣ��0.3��
			 phase3_done=false;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
			 phase4_done=false;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
			 InvalidateRect(hWnd,NULL,true);						
		  }						
	}
	if(game_state==9)//�����prelude
	{
	   finish_level5_pre=clock();
	   if(finish_level5_pre-start_level5_pre>=5000)
		  {
			 game_state=10;
			 lv1_counter=0;//��һ��prelude��ʱ��
			 lv1_counter1=0;//��һ��preldue��ʱ��1
			 lv1_counter2=0;//��һ��preldue��ʱ��2
			 lv1_counter3=0;//��һ��preldue��ʱ��3 0.001s
			 lv1_counter4=0;//��һ��preldue��ʱ��2 0.001s
			 phase1_done=false;//prelude��һ�׶���ɱ�־,0.5��Ŀհ�
			 phase2_done=false;//prelude�ڶ��׶���ɱ�־,����ʮ�ּ�ͣ��0.3��
			 phase3_done=false;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
			 phase4_done=false;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
			 InvalidateRect(hWnd,NULL,true);						
		  }							
	}
	if(game_state==11)//��6��prelude
	{
	    finish_level6_pre=clock();
	   if(finish_level6_pre-start_level6_pre>=5000)
		  {
			 game_state=12;
			 lv1_counter=0;//��һ��prelude��ʱ��
			 lv1_counter1=0;//��һ��preldue��ʱ��1
			 lv1_counter2=0;//��һ��preldue��ʱ��2
			 lv1_counter3=0;//��һ��preldue��ʱ��3 0.001s
			 lv1_counter4=0;//��һ��preldue��ʱ��2 0.001s
			 phase1_done=false;//prelude��һ�׶���ɱ�־,0.5��Ŀհ�
			 phase2_done=false;//prelude�ڶ��׶���ɱ�־,����ʮ�ּ�ͣ��0.3��
			 phase3_done=false;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
			 phase4_done=false;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
			 InvalidateRect(hWnd,NULL,true);						
		  }								
	}
	if(game_state==13)//���߹�prelude
	{
	   finish_level7_pre=clock();
	   if(finish_level7_pre-start_level7_pre>=5000)
		  {
			 game_state=14;
			 lv1_counter=0;//��һ��prelude��ʱ��
			 lv1_counter1=0;//��һ��preldue��ʱ��1
			 lv1_counter2=0;//��һ��preldue��ʱ��2
			 lv1_counter3=0;//��һ��preldue��ʱ��3 0.001s
			 lv1_counter4=0;//��һ��preldue��ʱ��2 0.001s
			 phase1_done=false;//prelude��һ�׶���ɱ�־,0.5��Ŀհ�
			 phase2_done=false;//prelude�ڶ��׶���ɱ�־,����ʮ�ּ�ͣ��0.3��
			 phase3_done=false;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
			 phase4_done=false;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
			 InvalidateRect(hWnd,NULL,true);						
		  }									
	}
	if(game_state==15)//�ڰ˹�prelude
	{
	   finish_level8_pre=clock();
	   if(finish_level8_pre-start_level8_pre>=5000)
	   {
	        game_state=16;
			level8_state=0;//�ڰ˹�׼������
			lv1_counter=0;//��һ��prelude��ʱ��
			lv1_counter1=0;//��һ��preldue��ʱ��1
			lv1_counter2=0;//��һ��preldue��ʱ��2
			lv1_counter3=0;//��һ��preldue��ʱ��3 0.001s
			lv1_counter4=0;//��һ��preldue��ʱ��2 0.001s
			phase1_done=false;//prelude��һ�׶���ɱ�־,0.5��Ŀհ�
			phase2_done=false;//prelude�ڶ��׶���ɱ�־,����ʮ�ּ�ͣ��0.3��
			phase3_done=false;//prelude�����׶���ɱ�־,4������ʮ�ּ��Ѿ��ƶ����
			phase4_done=false;//prelude��4�׶���ɱ�־,8������ʮ�ּ��Ѿ��ƶ����
	        InvalidateRect(hWnd,NULL,true);			  
	   
	   }
	
	}
	switch (message)
	{
	case WM_CREATE://��Ϸ��ʼ�����������ظ���ͼƬ��hdc��
		{		  
		  start_cg=clock();
			
		  SetTimer(hWnd,1,100,NULL);
		  SetTimer(hWnd,2,1000,NULL);//�ڶ��ؼ�ʱ��
		  SetTimer(hWnd,3,1,NULL);
		  SetTimer(hWnd,4,10,NULL);//��4�ؼ�ʱ��,0.01����

		  HMENU hSysMenu = GetSystemMenu(hWnd,FALSE);//����Ҽ��˵�
		  AppendMenu(hSysMenu,MF_SEPARATOR,0,NULL);//��ӷָ���
		  AppendMenu(hSysMenu,MF_STRING,0,L"Password Part2 : Asuna(���������)");//������ֵ��˵���		
		 

		  int xScreen = GetSystemMetrics(SM_CXSCREEN);//�õ���Ļ���
		  int yScreen = GetSystemMetrics(SM_CYSCREEN);//�õ���Ļ�߶�
		  InitCursorPosX =  xScreen/2;
          InitCursorPosY = (yScreen+800)/2-20;
		  SetCursorPos(InitCursorPosX,InitCursorPosY);//���ó�ʼ���λ��
		  SetWindowPos(hWnd,HWND_TOP,(xScreen-600)/2,(yScreen-800)/2,600,800,SWP_SHOWWINDOW);//���ô��ڵ���Ļ�м�
		  
		  HDC hdc = GetDC(hWnd);
		  ///////hTempDC:�ڴ�dc����˫����,Ҫ�����ʹ��ڴ�Сһ����һ��λͼ��ѡ���ڴ�dc�������������Ļ��
		  hTempMenuDC=CreateCompatibleDC(hdc);
		  HBITMAP hTempmenu = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempMenuDC,hTempmenu);//ѡ���ڴ�dc
		  DeleteObject(hTempmenu);
		  		  		  
		  hTempDC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempDC,hTemp);//ѡ���ڴ�dc
		  DeleteObject(hTemp);
		   ////hTemp1DC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hTemp1DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp1 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTemp1DC,hTemp1);//ѡ���ڴ�dc
		  DeleteObject(hTemp1);
		  ////hTemp3DC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hTemp3DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp3 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTemp3DC,hTemp3);//ѡ���ڴ�dc
		  DeleteObject(hTemp3);

		  ////hTemp4DC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hTemp4DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp4 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTemp4DC,hTemp4);//ѡ���ڴ�dc
		  DeleteObject(hTemp4);

		   ////hTemp5DC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hTemp5DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp5 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTemp5DC,hTemp5);//ѡ���ڴ�dc
		  DeleteObject(hTemp5);

		   ////hTemp6DC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hTemp6DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp6 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTemp6DC,hTemp6);//ѡ���ڴ�dc
		  DeleteObject(hTemp6);

		     ////hTemp7DC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hTemp7DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp7 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTemp7DC,hTemp7);//ѡ���ڴ�dc
		  DeleteObject(hTemp7);

		  ////hTemp8DC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hTemp8DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp8 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTemp8DC,hTemp8);//ѡ���ڴ�dc
		  DeleteObject(hTemp8);
		    ////hTemp9DC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hTemp9DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp9 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTemp9DC,hTemp9);//ѡ���ڴ�dc
		  DeleteObject(hTemp9);

		      ////hLevel9Temp2ndDC��������λͼ������ÿһ�ز��õ�tempdc���������
		  hLevel9Temp2ndDC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp92nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject( hLevel9Temp2ndDC,hTemp92nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp92nd);

		      ////��ϷCG��������λͼ������ÿһ�ز��õ�tempdc���������
		  hGameCGDC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp93nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject( hGameCGDC,hTemp93nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp93nd);

		  hPrelude_flyonseaDC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp94nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject( hPrelude_flyonseaDC,hTemp94nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp94nd);

		  hTotalJapanBGDC=CreateCompatibleDC(hdc);//�ձ���ͼ����λͼdc
		  HBITMAP hTemp95nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject( hTotalJapanBGDC,hTemp95nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp95nd);
		  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////����dc
		  hTokyoAirport=CreateCompatibleDC(hdc);//�ձ���������
		  HBITMAP hTemp96nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(  hTokyoAirport,hTemp96nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp96nd);

		  hZhaHuangAirport=CreateCompatibleDC(hdc);//���ϻ���
		  HBITMAP hTempbnd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(   hZhaHuangAirport,hTempbnd);//ѡ���ڴ�dc
		  DeleteObject(hTempbnd);
		  
		  hLuerdaoAirport=CreateCompatibleDC(hdc);//¹��������
		  HBITMAP hAir1 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(   hLuerdaoAirport, hAir1 );//ѡ���ڴ�dc
		  DeleteObject( hAir1 );

		  hQingsenAirport=CreateCompatibleDC(hdc);//��ɭ����
		  HBITMAP hAir2= CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(   hQingsenAirport, hAir2 );//ѡ���ڴ�dc
		  DeleteObject( hAir2 );


		  hTokyoIntro=CreateCompatibleDC(hdc);//�ձ���������
		  HBITMAP hTemp97nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(  hTokyoIntro,hTemp97nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp97nd);

		  hZhanghuangIntro=CreateCompatibleDC(hdc);//�ձ����Ͻ���
		  HBITMAP hTempand = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(  hZhanghuangIntro,hTempand);//ѡ���ڴ�dc
		  DeleteObject(hTempand);

		  hLuerdaoIntro=CreateCompatibleDC(hdc);//�ձ�¹��������
		  HBITMAP hIntro1 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(   hLuerdaoIntro,hIntro1);//ѡ���ڴ�dc
		  DeleteObject(hIntro1);

		  hQingsenIntro=CreateCompatibleDC(hdc);//�ձ���ɭ����
		  HBITMAP hIntro2 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(    hQingsenIntro,hIntro2);//ѡ���ڴ�dc
		  DeleteObject(hIntro2);
		    
		  hTokyoDowntown=CreateCompatibleDC(hdc);//�ձ���������
		  HBITMAP hTemp98nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(  hTokyoDowntown,hTemp98nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp98nd);
		  
		  hZhaHuangDowntownJR=CreateCompatibleDC(hdc);//�ձ���������
		  HBITMAP hTemp3nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(  hZhaHuangDowntownJR,hTemp3nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp3nd);

		  hZhaHuangFactoryJR=CreateCompatibleDC(hdc);//�ձ������ɿ��������ڲ�
		  HBITMAP hTemp4nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(   hZhaHuangFactoryJR,hTemp4nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp4nd);
		   
		  hLuerdaoDowntownJR=CreateCompatibleDC(hdc);//�ձ�¹������������λͼ
		  HBITMAP hTemp5nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(  hLuerdaoDowntownJR,hTemp5nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp5nd);
		   
		  hLuerdaoVolcanoJR=CreateCompatibleDC(hdc);//�ձ�¹������ɽ�������λͼ
		  HBITMAP hTemp6nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(   hLuerdaoVolcanoJR,hTemp6nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp6nd);

		  hQingsenDowntownJR=CreateCompatibleDC(hdc);//�ձ���ɭ���� ����λͼ
		  HBITMAP hTemp7nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(    hQingsenDowntownJR,hTemp7nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp7nd);

		  hQingsenParkJR=CreateCompatibleDC(hdc);//�ձ���ɭ��԰ ����λͼ
		  HBITMAP hTemp8nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(    hQingsenParkJR,hTemp8nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp8nd);


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		  
		  hSaberHomeDC=CreateCompatibleDC(hdc);//saber�Ҽ���λͼ
		  HBITMAP hTemp99nd = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(   hSaberHomeDC,hTemp99nd);//ѡ���ڴ�dc
		  DeleteObject(hTemp99nd);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		  ///��һ�ؿ�ͷ��Чdc
		  hlv1dc=CreateCompatibleDC(hdc);
		  HBITMAP hTemplv1 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hlv1dc,hTemplv1);//ѡ���ڴ�dc
		  DeleteObject(hTemplv1);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////����dc
		  //��һ�ظ���dc
		  hTempMotto1DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto1 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempMotto1DC,hTempMotto1);//ѡ���ڴ�dc
		  DeleteObject(hTempMotto1);
		  //�ڶ��ظ���dc
		   hTempMotto2DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto2 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempMotto2DC,hTempMotto2);//ѡ���ڴ�dc
		  DeleteObject(hTempMotto2);
		   //��3�ظ���dc
		   hTempMotto3DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto3 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempMotto3DC,hTempMotto3);//ѡ���ڴ�dc
		  DeleteObject(hTempMotto3);
		   //��4�ظ���dc
		   hTempMotto4DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto4 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempMotto4DC,hTempMotto4);//ѡ���ڴ�dc
		  DeleteObject(hTempMotto4);
		   //��6�ظ���dc
		   hTempMotto6DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto6 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempMotto6DC,hTempMotto6);//ѡ���ڴ�dc
		  DeleteObject(hTempMotto6);
		   //��7�ظ���dc
		   hTempMotto7DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto7 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempMotto7DC,hTempMotto7);//ѡ���ڴ�dc
		  DeleteObject(hTempMotto7);
		     //��8�ظ���dc
		   hTempMotto8DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto8 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject(hTempMotto8DC,hTempMotto8);//ѡ���ڴ�dc
		  DeleteObject(hTempMotto8);
		//////////////////////���˵���ͼ����dc
		  hMoePictureDC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMoe7 = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject( hMoePictureDC,hTempMoe7);//ѡ���ڴ�dc
		  DeleteObject(hTempMoe7);
		  //���˵�����ǰԵDC
		  hLoadDC = CreateCompatibleDC(hdc);
		  HBITMAP hTempLoad = CreateCompatibleBitmap(hdc,600,800);//��������λͼ
		  SelectObject( hLoadDC,hTempLoad);//ѡ���ڴ�dc
		  DeleteObject(hTempLoad);

		  hMusicONDC = CreateCompatibleDC(hdc);
		  HBITMAP hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MUSIC_ON),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hMusicONDC,hMusic_bitmap);

		  hJapanDC = CreateCompatibleDC(hdc);//�����ձ���ͼ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_JAPAN),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hJapanDC,hMusic_bitmap);

		  hFlowerBigDC = CreateCompatibleDC(hdc);//���ش󻨶�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BIGFLOWER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hFlowerBigDC,hMusic_bitmap);

		  hFolderDC = CreateCompatibleDC(hdc);//�����ļ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_FOLDER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hFolderDC,hMusic_bitmap);

		  hMusicOFFDC = CreateCompatibleDC(hdc);//��������offͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MUSIC_OFF),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hMusicOFFDC,hMusic_bitmap);

		  hSaveDC = CreateCompatibleDC(hdc);//������Ϸ����ͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_SAVE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hSaveDC,hMusic_bitmap);
		  
		  hBgDC = CreateCompatibleDC(hdc);//������Ϸ�����汳��ͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hBgDC,hMusic_bitmap);
		  
		  hGameStartNDC = CreateCompatibleDC(hdc);//���ؿ�ʼ��ϷͼƬ,δѡ��״̬
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMESTART_NOCHOOSE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hGameStartNDC,hMusic_bitmap);
		  
		  hGameExitDC = CreateCompatibleDC(hdc);//�����˳���ϷͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_EXIT),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hGameExitDC,hMusic_bitmap);

		  hMoeDC = CreateCompatibleDC(hdc);//�����˳���ϷͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hMoeDC,hMusic_bitmap);

		  hReturnMenuDC = CreateCompatibleDC(hdc);//���ػص����˵�ͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_RETURN_MENU),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hReturnMenuDC,hMusic_bitmap);
		  
		  hBriefDC = CreateCompatibleDC(hdc);//������Ϸ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BRIEF),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hBriefDC,hMusic_bitmap);
		  
		  hBriefBGDC = CreateCompatibleDC(hdc);//������Ϸ��鱳��ͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BRIEF_BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hBriefBGDC,hMusic_bitmap);
		  
		  hFlowerDC = CreateCompatibleDC(hdc);//���ػ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_FLOWER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hFlowerDC,hMusic_bitmap);

		  hUpperEdgeDC = CreateCompatibleDC(hdc);//�����ϱ߿�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_UPPEREDGE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hUpperEdgeDC,hMusic_bitmap);

		  hLowerEdgeDC = CreateCompatibleDC(hdc);//�����±߿�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LOWEREDGE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hLowerEdgeDC,hMusic_bitmap);

		  hGameInfoDC = CreateCompatibleDC(hdc);//������Ϸ��Ϣͼ�� 
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMEINFO),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hGameInfoDC,hMusic_bitmap);

		  hGameInfoBgDC = CreateCompatibleDC(hdc);//������Ϸ��Ϣ����ͼ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMEINFOBG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hGameInfoBgDC,hMusic_bitmap);

		  hKeyBoardDC = CreateCompatibleDC(hdc);//���ؼ���ͼ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_KEYBOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hKeyBoardDC,hMusic_bitmap);
		  
		  hLevel1BgDC = CreateCompatibleDC(hdc);//���ص�һ�ر���ͼ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL1BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hLevel1BgDC,hMusic_bitmap);

		  hInputBoxDC = CreateCompatibleDC(hdc);//���������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_INPUTBOX),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hInputBoxDC,hMusic_bitmap);

		  hTitleDC = CreateCompatibleDC(hdc);//������Ϸ����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_TITLE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hTitleDC,hMusic_bitmap);

		  hTitle1DC = CreateCompatibleDC(hdc);//������Ϸ����2
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_TITLE1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hTitle1DC,hMusic_bitmap);

          hTitle2DC = CreateCompatibleDC(hdc);//������Ϸ����3
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_TITLE2),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hTitle2DC,hMusic_bitmap);

		  hStarDC = CreateCompatibleDC(hdc);//��������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_STAR),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hStarDC,hMusic_bitmap);
		  
		  hStar1DC = CreateCompatibleDC(hdc);//��������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_STAR1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hStar1DC,hMusic_bitmap);

		  hLevelPreDC = CreateCompatibleDC(hdc);//���عؿ�prelude
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVELPRE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hLevelPreDC,hMusic_bitmap);

		  hLevel2BgDC = CreateCompatibleDC(hdc);//���صڶ��ر���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL2BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hLevel2BgDC,hMusic_bitmap);

		  hTVDC = CreateCompatibleDC(hdc);//���صڶ��ص���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_TV),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hTVDC,hMusic_bitmap);

		  hLevel2PlayerDC = CreateCompatibleDC(hdc);//���صڶ������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL2_PLAYER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel2PlayerDC,hMusic_bitmap);

		  hLevel2MMDC = CreateCompatibleDC(hdc);//���صڶ�������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL2MM),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel2MMDC,hMusic_bitmap);

		  hLevel2BoardDC = CreateCompatibleDC(hdc);//���صڶ��ؼǷ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL2BOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel2BoardDC,hMusic_bitmap);

		  hLevel3BGDC = CreateCompatibleDC(hdc);//���ص����ر���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3BGDC,hMusic_bitmap);

		  hLevel3FrameDC = CreateCompatibleDC(hdc);//���ص����ر߿�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3FRAME),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3FrameDC,hMusic_bitmap);
		  
		  hLevel3GameBoardDC = CreateCompatibleDC(hdc);//���ص�����board
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3GAMEBOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3GameBoardDC,hMusic_bitmap);

		  hLevel3PlayerDC = CreateCompatibleDC(hdc);//���ص��������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3PLAYER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3PlayerDC,hMusic_bitmap);

		  hLevel3FailDC = CreateCompatibleDC(hdc);//���ص�����ʧ��ͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3FAIL),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3FailDC,hMusic_bitmap);

		  hLevel3PassDC = CreateCompatibleDC(hdc);//���ص����ع���ͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3PASS),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3PassDC,hMusic_bitmap);
	    
		  hLevel3CoinDC = CreateCompatibleDC(hdc);//���ص����ؽ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3COIN),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3CoinDC,hMusic_bitmap);

		  hLevel3SaveDC = CreateCompatibleDC(hdc);//���ص����ش��̵�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3SAVE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3SaveDC,hMusic_bitmap);

		  hLevel3AsunaDC = CreateCompatibleDC(hdc);//���ص�������˿��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3ASUNA),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3AsunaDC,hMusic_bitmap);

		  hLevel4BGDC = CreateCompatibleDC(hdc);//���ص�������˿��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4BGDC,hMusic_bitmap);

		  hLevel4StartDC = CreateCompatibleDC(hdc);//���ص��Ĺؿ�ʼ��Ϸ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4START),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4StartDC,hMusic_bitmap);

		  hLevel4TimeDC = CreateCompatibleDC(hdc);//���ص��Ĺ�ʱ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4TIME),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4TimeDC,hMusic_bitmap);
		  
		  hLevel4ZoomDC = CreateCompatibleDC(hdc);//���ص��ĹطŴ�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4ZOOM),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4ZoomDC,hMusic_bitmap);

		  hLevel4BoardDC = CreateCompatibleDC(hdc);//���ص��Ĺذ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4BOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4BoardDC,hMusic_bitmap);
		   
		  hLevel4TNDC = CreateCompatibleDC(hdc);//���ص��Ĺ�ͩ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4TN),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4TNDC,hMusic_bitmap);

		  hLevel5BGDC = CreateCompatibleDC(hdc);//���ص���ر���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5BGDC,hMusic_bitmap);

		  hLevel5Pic= CreateCompatibleDC(hdc);//���ص���ش��ͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5PIC),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5Pic,hMusic_bitmap);

		  hLevel5QLDC= CreateCompatibleDC(hdc);//���ص�����������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5QL),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5QLDC,hMusic_bitmap);

		  hLevel5DialogDC= CreateCompatibleDC(hdc);//���ص���ضԻ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5DIALOG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5DialogDC,hMusic_bitmap);

		  hLevel5RollDC= CreateCompatibleDC(hdc);//���ص���ؾ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5ROLL),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5RollDC,hMusic_bitmap);

		  hLevel5MouseDC= CreateCompatibleDC(hdc);//���ص�������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5MOUSE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5MouseDC,hMusic_bitmap);
		  
		  hLevel5Pic_Transformed= CreateCompatibleDC(hdc);//���ص���ر仯��ͼƬ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5PICTRAN),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5Pic_Transformed,hMusic_bitmap);

		  hLevel5ButtonDC= CreateCompatibleDC(hdc);//���ص���ذ�ť
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5BUTTON),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hLevel5ButtonDC,hMusic_bitmap);

		  hLevel5ArrowDC= CreateCompatibleDC(hdc);//���ص���ؼ�ͷ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5ARROW),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hLevel5ArrowDC,hMusic_bitmap);

		   hMottoBGDC= CreateCompatibleDC(hdc);//����ÿһ�ظ��Ա���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOTTOBG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hMottoBGDC,hMusic_bitmap);

		  hGameStart_SelectedDC= CreateCompatibleDC(hdc);//���ؿ�ʼ��Ϸѡ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMESTART_SELECTED),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hGameStart_SelectedDC,hMusic_bitmap);

		  hGameBrief_SelectedDC= CreateCompatibleDC(hdc);//������Ϸ���ѡ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMEBRIEFSELECTED),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hGameBrief_SelectedDC,hMusic_bitmap);

		  hGameExit_SelectedDC= CreateCompatibleDC(hdc);//�����˳���Ϸѡ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_EXITGAMESELECTED),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hGameExit_SelectedDC,hMusic_bitmap);

		  hMoePicture_SelectedDC= CreateCompatibleDC(hdc);//������ͼ����ѡ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOEPICTURE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hMoePicture_SelectedDC,hMusic_bitmap);

		   hCloud1DC= CreateCompatibleDC(hdc);//�����ƶ�1
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_CLOUD1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hCloud1DC,hMusic_bitmap);

		   hCloud2DC= CreateCompatibleDC(hdc);//�����ƶ�2
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_CLOUD2),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hCloud2DC,hMusic_bitmap);
		  
		   hLevel6BGDC= CreateCompatibleDC(hdc);//���ص����ر���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL6BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel6BGDC,hMusic_bitmap);

		    hLevel6GridDC= CreateCompatibleDC(hdc);//���ص��������ָ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL6GRID),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel6GridDC,hMusic_bitmap);

		   hLevel6SXDC= CreateCompatibleDC(hdc);//���ص�����ʮ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL6SX),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel6SXDC,hMusic_bitmap);

		    hLevel7BGDC= CreateCompatibleDC(hdc);//���ص�7�ر���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7BGDC,hMusic_bitmap); 
		     
		  hLevel7BG1DC= CreateCompatibleDC(hdc);//���ص�7�ر���1
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7BG1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7BG1DC,hMusic_bitmap); 

		   
		  hLevel7PadDC= CreateCompatibleDC(hdc);//���ص�7��pad
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7PAD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7PadDC,hMusic_bitmap);

		   hLevel7Pad1DC= CreateCompatibleDC(hdc);//���ص�7��pad1����pad
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7PAD1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7Pad1DC,hMusic_bitmap);

		   hLevel7BallDC= CreateCompatibleDC(hdc);//���ص�7��ball
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7BALL),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7BallDC,hMusic_bitmap);

		  hLevel7DeathDC= CreateCompatibleDC(hdc);//���ص�7��������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7DEATH),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7DeathDC,hMusic_bitmap);

		   hLevel7QCFDC= CreateCompatibleDC(hdc);//���ص�7��Ȫ�˷�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7QCF),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7QCFDC,hMusic_bitmap);
	  
		  hLevel7QCFdlgDC= CreateCompatibleDC(hdc);//���ص�7��Ȫ�˷��Ի���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7QCFDLG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7QCFdlgDC,hMusic_bitmap);

		  cross_hdc= CreateCompatibleDC(hdc);//����ʮ�ּ�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_CROSS),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( cross_hdc,hMusic_bitmap);

		  hMoeBar1= CreateCompatibleDC(hdc);//������ͼ���͵�����bar1
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOEBAR1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hMoeBar1,hMusic_bitmap);

		  hMoeBar2= CreateCompatibleDC(hdc);//������ͼ����bar2
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOEBAR2),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hMoeBar2,hMusic_bitmap);

		  hLevel8BGDC= CreateCompatibleDC(hdc);//���صڰ˹ر���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8BGDC,hMusic_bitmap);

		   hLevel8BoardDC= CreateCompatibleDC(hdc);//���صڰ˹�����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8BOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(    hLevel8BoardDC,hMusic_bitmap);
		    
		  hLevel8Black= CreateCompatibleDC(hdc);//���صڰ˹غ�����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8BLACK),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8Black,hMusic_bitmap);

		  hLevel8White= CreateCompatibleDC(hdc);//���صڰ˹ذ�����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8WHITE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8White,hMusic_bitmap);

		  hLevel8SQKS= CreateCompatibleDC(hdc);//���صڰ˹�ʱ�����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8SQKS),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8SQKS,hMusic_bitmap);

		  hLevel8Tick= CreateCompatibleDC(hdc);//���صڰ˹���ɫ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8TICK),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8Tick,hMusic_bitmap);

		  hLevel9BGDC= CreateCompatibleDC(hdc);//���ص�9�ر���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel9BGDC,hMusic_bitmap);
		   
		  hLevel9StateBarDC= CreateCompatibleDC(hdc);//���ص�9��״̬��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9STATEBAR),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel9StateBarDC,hMusic_bitmap);

		   hLevel9ActorDC= CreateCompatibleDC(hdc);//���ص�9��Ů����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9ACTOR),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(    hLevel9ActorDC,hMusic_bitmap);

		  hLevel9PortalDC = CreateCompatibleDC(hdc);//���ص�9�ش�����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9PORTAL), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9PortalDC, hMusic_bitmap);
		  
		  hLevel9BirdDC = CreateCompatibleDC(hdc);//���ص�9����С��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9GIRL), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9BirdDC, hMusic_bitmap);

		  hLevel9GsystemDC = CreateCompatibleDC(hdc);//���ص�9������ϵͳ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9GSYSTEM), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9GsystemDC, hMusic_bitmap);

		  hLevel9AccDC = CreateCompatibleDC(hdc);//���ص�9�ؼ��ٵ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9ACC), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9AccDC, hMusic_bitmap);
		  
		  hLevel9AccEffectDC = CreateCompatibleDC(hdc);//���ص�9�ؼ���Ч��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9ACCEFFECT), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9AccEffectDC, hMusic_bitmap);

		  hLevel9DialogDC = CreateCompatibleDC(hdc);//���ص�9�ضԻ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9DIALOG), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9DialogDC, hMusic_bitmap);
		  
		  hLevel9BarrierDC = CreateCompatibleDC(hdc);//���ص�9���谭����飩
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9BARRIER), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9BarrierDC, hMusic_bitmap);

		  hLevel9GrayLockDC = CreateCompatibleDC(hdc);//���ص�9�ػ�ɫ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9GRAY), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9GrayLockDC, hMusic_bitmap);

		  hLevel9GrayKeyDC = CreateCompatibleDC(hdc);//���ص�9�ػ�ɫԿ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9GRAYKEY), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9GrayKeyDC, hMusic_bitmap);
		   
		  hLevel9BanDC = CreateCompatibleDC(hdc);//���ص�9�ؽ�ֹ��־
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9BAN), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9BanDC , hMusic_bitmap);
		    
		  hLevel9PinkBarrierDC = CreateCompatibleDC(hdc);//���ص�9����ɫ�ϰ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9PINKBARRIER), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9PinkBarrierDC , hMusic_bitmap);
		    
		  hLevel9FlashDC = CreateCompatibleDC(hdc);//���ص�9������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9FLASH), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9FlashDC , hMusic_bitmap);

		  hLevel9BikeDC = CreateCompatibleDC(hdc);//���ص�9�رȿ˴�ħ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9BIKE), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9BikeDC , hMusic_bitmap);

		  hCGDC = CreateCompatibleDC(hdc);//������ϷCG ����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_GAMECG), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hCGDC , hMusic_bitmap);

		  hCartoonJapanDC = CreateCompatibleDC(hdc);//���ؿ�ͨ�ձ�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CARTOONJP), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hCartoonJapanDC  , hMusic_bitmap);

		   hCartoonJapanDC1 = CreateCompatibleDC(hdc);//���ؿ�ͨ�ձ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CARTOONJP1), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hCartoonJapanDC1  , hMusic_bitmap);

		  hSilverDialog = CreateCompatibleDC(hdc);//������ɫ�Ի���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_SILVERDIALOG), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hSilverDialog  , hMusic_bitmap);

		  hStartMianma = CreateCompatibleDC(hdc);//��������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MIANMA), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hStartMianma  , hMusic_bitmap);

		  hTotalJapanDC = CreateCompatibleDC(hdc);//�����ձ���ͼ
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_TOTALJAPAN), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hTotalJapanDC  , hMusic_bitmap);

		  KyBd = CreateCompatibleDC(hdc);//���ؼ��̷����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_KYBD), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  KyBd  , hMusic_bitmap);

		  hMissionBar = CreateCompatibleDC(hdc);//����������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MISSIONBAR), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hMissionBar , hMusic_bitmap);

		  hBack = CreateCompatibleDC(hdc);//�����˳���ť
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_BACK), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hBack , hMusic_bitmap);
		   
		  hRotate135 = CreateCompatibleDC(hdc);//����135�ȷɻ�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_ROTATE135), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hRotate135 , hMusic_bitmap);

		  hLand = CreateCompatibleDC(hdc);//�����½���ť
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LAND), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hLand  , hMusic_bitmap);

		  hWalkFrame = CreateCompatibleDC(hdc);//�����߶�ͼ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_WALKFRAME), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(   hWalkFrame  , hMusic_bitmap);

		  hMark = CreateCompatibleDC(hdc);//��ͼ���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MAPMARK), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(    hMark  , hMusic_bitmap);

		   hMarkHome = CreateCompatibleDC(hdc);//�ұ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MARKHOME), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(   hMarkHome , hMusic_bitmap);
		  /////////////////////////////////////////////////////////////////////��Ϸ�����
		  hSaberHome = CreateCompatibleDC(hdc);//saber��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_HOME1), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(    hSaberHome , hMusic_bitmap);

		  hEnter = CreateCompatibleDC(hdc);//�س���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_ENTER), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(    hEnter , hMusic_bitmap);
		  
		  hMail = CreateCompatibleDC(hdc);//�ʼ�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MAIL), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(   hMail , hMusic_bitmap);

		  hMenuHead = CreateCompatibleDC(hdc);//�˵�ͷ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MENUHEAD), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(    hMenuHead , hMusic_bitmap);

		  hMenuBody = CreateCompatibleDC(hdc);//�˵��м���
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MENUBODY), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(     hMenuBody , hMusic_bitmap);

		  hExclimation = CreateCompatibleDC(hdc);//��̾��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_EXCLIMATION), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(     hExclimation , hMusic_bitmap);

		  hMissionFinish = CreateCompatibleDC(hdc);//���������ɫ����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MISSIONFINISH), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(      hMissionFinish , hMusic_bitmap);

		  hZhaHuangDowntown = CreateCompatibleDC(hdc);//�����������ɿ���������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_ZHAHUANG1), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(       hZhaHuangDowntown , hMusic_bitmap);

		  hZhaHuangFactory = CreateCompatibleDC(hdc);//�����������ɿ��������ڲ�
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_ZHAHUANG2), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(      hZhaHuangFactory  , hMusic_bitmap);

		  hCRYQ = CreateCompatibleDC(hdc);//�������������dc
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CRYQ), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(       hCRYQ  , hMusic_bitmap);

		  hLuerdaoDowntown = CreateCompatibleDC(hdc);//¹��������
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LUERDAO2), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(        hLuerdaoDowntown , hMusic_bitmap);

		  hLuerdaoVolcano = CreateCompatibleDC(hdc);//¹����������ɽ����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LUERDAO1), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(        hLuerdaoVolcano , hMusic_bitmap);

		  hYSN = CreateCompatibleDC(hdc);//¹����������˿��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_YSN ), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(        hYSN  , hMusic_bitmap);

		  hQingsenDowntown= CreateCompatibleDC(hdc);//��ɭ����
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_QINGSEN4), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(       hQingsenDowntown , hMusic_bitmap);

		  hQingsenPark= CreateCompatibleDC(hdc);//��ɭ��԰
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_QINGSEN5), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(        hQingsenPark , hMusic_bitmap);

		  hGBTN= CreateCompatibleDC(hdc);//ͩ��
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_GBTN), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(         hGBTN, hMusic_bitmap);


		  for (int i = 0; i<3; i++)//������
		  {
			  ChallengeDlg[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_IPHONEDLG1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(   ChallengeDlg[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<3; i++)//������
		  {
			  hMainTitle[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MAINTITLE1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(   hMainTitle[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  ///////////////////////////////////////////////////////////////////////��Ϸ����dc
		  for (int i = 0; i<1; i++)//��Ϸ����dc
		  {
			  hAnimationPersonnel[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CAP1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(  hAnimationPersonnel[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }

		  for (int i = 0; i<1; i++)//����ÿ�����н���block
		  {
			  hCityBlock[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CITYBLOCK1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject( hCityBlock[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<9; i++)//���طɻ���
		  {
			  hAirportDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_AIRPORT1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hAirportDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<7; i++)//����6��CG��ĸ
		  {
			  hCGword[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_Z1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hCGword[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<8; i++)//����8�ŷɻ�ͼ
		  {
			  Plane[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap; 
			  if(i<4)
			     hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_PLANE1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  else 
                 hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_PLANE1 + i+21), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);          
			  SelectObject(Plane[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }

		  for (int i = 0; i<36; i++)//����load����ͼƬ�Լ���Ӧ����˵��
		  {
			  hCityDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_A1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hCityDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<3; i++)//���صھŹؼ��
		  {
			  hLevel9ThornDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap;
			  if(i==0)
			     hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9THORN ), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  else if(i==1)
				 hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9THORN +4), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  else if(i==2)
                 hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9THORN +6), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hLevel9ThornDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<1; i++)//���صھŹ�ҩˮ
		  {
			  hLevel9MedicineDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9MEDICINE + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hLevel9MedicineDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<1; i++)//���صھŹع���
		  {
			  hLevel9Monster[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9MONSTER1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hLevel9Monster[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<4; i++)//���صھŹ�Կ��
		  {
			  hLevel9KeyDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9KEY1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hLevel9KeyDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  
		  for(int i=0;i<7;i++)//���صھŹ��߿�����
		  {
		     hLevel9BallDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9BALL1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel9BallDC[i],hMenuBitmap);
			 DeleteObject(hMenuBitmap);
		  }
		  for(int i=0;i<1;i++)//���صھŹ�שǽ��һ���Ŀ�
		  {
		     hLevel9BrickDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9BRICK1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel9BrickDC[i],hMenuBitmap);
			 DeleteObject(hMenuBitmap);
		  }

		  for(int i=0;i<14;i++)//���ص�����������Ϸ��ͼƬ�Ĵ�
		  {
		     hLevel6AnswerDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV6_11+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel6AnswerDC[i],hMenuBitmap);
			 DeleteObject(hMenuBitmap);
		  }

		    for(int i=0;i<8;i++)//�������˵�8��
		  {
		     hMenuDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MENU1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hMenuDC[i],hMenuBitmap);
			 DeleteObject(hMenuBitmap);
		  }

	    
		  for(int i=0;i<6;i++)//���ص�1��6��ë����
		  {
		     hLevel1MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMotto1Bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV1_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel1MottoDC[i],hMotto1Bitmap);
			 DeleteObject(hMotto1Bitmap);
		  }

		   for(int i=0;i<9;i++)//���ص�2��9��ë����
		  {
		     hLevel2MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMotto2Bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV2_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel2MottoDC[i],hMotto2Bitmap);
			 DeleteObject(hMotto2Bitmap);
		  }
		   for(int i=0;i<9;i++)//���ص�3��9��ë����
		  {
		     hLevel3MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMotto3Bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV3_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel3MottoDC[i],hMotto3Bitmap);
			 DeleteObject(hMotto3Bitmap);
		  }
		     for(int i=0;i<9;i++)//���ص�4��9��ë����
		  {
		     hLevel4MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMotto4Bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV4_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel4MottoDC[i],hMotto4Bitmap);
			 DeleteObject(hMotto4Bitmap);
		  }
		  
		  for(int i=0;i<7;i++)//���ص����7��ë����
		  {
		     hLevel5MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMottoBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV5_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel5MottoDC[i],hMottoBitmap);
			 DeleteObject(hMottoBitmap);
		  }
		    for(int i=0;i<9;i++)//���ص�6��9��ë����
		  {
		     hLevel6MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMottoBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV6_D+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel6MottoDC[i],hMottoBitmap);
			 DeleteObject(hMottoBitmap);
		  }
			  for(int i=0;i<9;i++)//���ص�7��9��ë����
		  {
		     hLevel7MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMottoBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV7_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel7MottoDC[i],hMottoBitmap);
			 DeleteObject(hMottoBitmap);
		  }
           for(int i=0;i<9;i++)//���ص�8��9��ë����
		  {
		     hLevel8MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMottoBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV8_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel8MottoDC[i],hMottoBitmap);
			 DeleteObject(hMottoBitmap);
		  }
		   for(int i=0;i<26;i++)//���ص��Ĺ�26����ĸ
		  {
		     hLetterDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hLetterBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BITMAP_A+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLetterDC[i],hLetterBitmap);
			 DeleteObject(hLetterBitmap);
		  }

		  for(int i=0;i<4;i++)//���ص����ع��һ��4�����Ұ�
		  {
		     hLevel3MonsterDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMonsterBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BITMAP15+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel3MonsterDC[i],hMonsterBitmap);
			 DeleteObject(hMonsterBitmap);
		  }


		  for(int i=0;i<=7;i++)//����8����ͼ
		  {
		    hPictureDC[i]=CreateCompatibleDC(hdc);
			HBITMAP hPictureBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BITMAP1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject(hPictureDC[i],hPictureBitmap);
			DeleteObject(hPictureBitmap);
		  }

		  for(int i=0;i<=4;i++)//����5������ͼ
		  {
		    hBallDC[i]=CreateCompatibleDC(hdc);
			HBITMAP hBallBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BITMAP10+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject(hBallDC[i],hBallBitmap);
			DeleteObject(hBallBitmap);
		  }
		  
		  for(int i=0;i<6;i++)//���ص��߹�5��ש��ͼ
		  {
		    hLevel7BrickDC[i]=CreateCompatibleDC(hdc);
			HBITMAP hBrickBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7BRICK1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject(hLevel7BrickDC[i],hBrickBitmap);
			DeleteObject(hBrickBitmap);
		  }

		  for(int i=0;i<24;i++)//����һ��ʮ��prelude��30��ͼƬ
		  {
		    hLevelPrelude[i]=CreateCompatibleDC(hdc);
			HBITMAP hPreludeBitmap;
			if(i<21)/////////////////////////////////////////////������������ʱ��Ϊ��resource.h����ЩͼƬidb��������Ҳû�취Ū�������ģ���Ϊ�м�հ�λ������
			    hPreludeBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL1PRELUDE1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			else
				hPreludeBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL1PRELUDE1+17+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject( hLevelPrelude[i],hPreludeBitmap);
			DeleteObject(hPreludeBitmap);
		  }

		   for(int i=0;i<8;i++)//������ͼ����8��ͼ�ļ��
		  {
		    hMoeP[i]=CreateCompatibleDC(hdc);
			HBITMAP hmoeBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOEP1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject(  hMoeP[i],hmoeBitmap);
			DeleteObject(hmoeBitmap);
		  }
		  DeleteObject(hMusic_bitmap);		  		 
		  ReleaseDC(hWnd,hdc);
		  break;
		}
	case WM_CONTEXTMENU://��Ӧ�Ҽ��˵�
		{
		  POINTS p = MAKEPOINTS(lParam);
		  if(game_state==2)
		  {
		  HMENU hSysMenu = GetSystemMenu(hWnd,FALSE);//����Ҽ��˵�
		  TrackPopupMenu(hSysMenu,TPM_LEFTALIGN,p.x,p.y,0,hWnd,NULL);
		  }
		  break;
		}
	case WM_CHAR://Ϊʲôkeydown���У�
		{		  
		
		    switch(wParam)
		    {
			    case 97://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������				
					grid_letter[level6_row][level6_column]='A';
				    break;
				}
                case 98://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������				
					grid_letter[level6_row][level6_column]='B';
					break;
				}
                case 99://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='C';
					break;
				}
				 case 100://������ĸd
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='D';
				    if(TotalJapan_x+300>=1868&&TotalJapan_x+300<=2303&&TotalJapan_y+400>=1952&&TotalJapan_y+400<=2395&&game_state==-7)//�ɻ����붫�����н���
					{
					   game_state=-200;
					   Tokyo_counter=0;
				       Tokyo_transform_counter=0;
					   male_player_x=330;
					   male_player_y=340;
					   plane_direction=false;
					   take_off=false;

					}
					m_it=mission_set.find(2);
					if(TotalJapan_x+300>=2246&&TotalJapan_x+300<=2529&&TotalJapan_y+400>=400&&TotalJapan_y+400<=600&&game_state==-7&&m_it!=mission_set.end())//�ɻ��������ϳ��н���
					{
					   game_state=-300;
					   Tokyo_counter=0;
					   map_stretch_counter=0;
					   tokyo_counter1=0;
					   tokyo_counter2=0;
					   male_player_x=316;
					   male_player_y=495;
					   plane_direction=false;//�������仰�������˷ɻ�����
					   take_off=false;//�������仰
					}
					m_it2=mission_set.find(3);
					if(TotalJapan_x+300>=300&&TotalJapan_x+300<=590&&TotalJapan_y+400>=2763&&TotalJapan_y+400<=3048&&m_it2!=mission_set.end()&&game_state==-7)//�ɻ�����¹�������н���
					{
					   game_state=-400;
					   Tokyo_counter=0;
					   map_stretch_counter=0;
					   tokyo_counter1=0;
					   tokyo_counter2=0;
					   male_player_x=280;
					   male_player_y=512;					   
					   plane_direction=false;//�������仰�������˷ɻ�����
					   take_off=false;//�������仰
										
					}
					m_it3=mission_set.find(4);
					if(TotalJapan_x+300>=2090&&TotalJapan_x+300<=2400&&TotalJapan_y+400>=829&&TotalJapan_y+400<=1088&&m_it3!=mission_set.end()&&game_state==-7)//�ɻ�������ɭ���н���
					{
					   game_state=-500;
					   Tokyo_counter=0;
					   map_stretch_counter=0;
					   tokyo_counter1=0;
					   tokyo_counter2=0;
					   male_player_x=336;
					   male_player_y=333;					   
					   plane_direction=false;//�������仰�������˷ɻ�����
					   take_off=false;//�������仰
										
					}
					break;
				}
				 case 101://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='E';
					break;
				}
				 case 102://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������							
					grid_letter[level6_row][level6_column]='F';
					break;
                 case 103://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='G';
					break;
				}
				 case 104://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='H';
					break;
				}
				 case 105://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������					
					grid_letter[level6_row][level6_column]='I';
					break;
				}
				 case 106://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������					
					grid_letter[level6_row][level6_column]='J';
					break;
				}
				 case 107://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������							
					grid_letter[level6_row][level6_column]='K';
					break;
				}
				 case 108://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������							
					grid_letter[level6_row][level6_column]='L';
					break;
				}
				 case 109://������ĸm
				{	
				    RECT r_forbidden_zone = { 40, 340, 280, 520 };//���߿������ֹʹ�ü��ٷ��ĵ�����
					RECT r_forbidden_zone1 = { 400, 420, 520, 560 };//��5�������ֹʹ�ü��ٷ��ĵ�����
					RECT r_forbidden_zone2={20,20,240,220};//remover�����ֹʹ�ü��ٷ���
					POINT level9_player = { level9_px + 10, level9_py + 10 };
					if (game_state == 18 && level9_acc_tool != 0 && !(PtInRect(&r_forbidden_zone, level9_player)||PtInRect(&r_forbidden_zone1, level9_player)||PtInRect(&r_forbidden_zone2, level9_player)))//ʹ�ü��ٵ���,�ڵ��߿��������������ڽ�ֹʹ��
					{
						level9_acc_tool--;
						y_velocity = -2;
						level9_acceffect_counter = 0;
					}									  
				    if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='M';
					break;
				}
				 case 110://������ĸn
				{	
							  if (game_state == 18 && level9_medicine[0] == false && reveal_medecine_number > 0)//��ÿһ���������������������Ա��������Ļ
							  {
								  if (level9_temp_y <= 620)//Ϊ�˷�ֹ����״̬��
								  {
									  level9_medecine_coordinate_array[reveal_medecine_number * 2 - 2] = level9_temp_x;
									  level9_medecine_coordinate_array[reveal_medecine_number * 2 - 1] = level9_temp_y;
									  reveal_medecine_number--;
								  }
							  }
				             if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������					
					              grid_letter[level6_row][level6_column]='N';
					         break;
				}
				 case 111://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������					
					grid_letter[level6_row][level6_column]='O';
					break;
				}
				 case 112://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������				
					grid_letter[level6_row][level6_column]='P';
					break;
				}
				 case 113://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='Q';
					break;
				}
				 case 114://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='R';
					break;
				}
				 case 115://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='S';
					break;
				}
				 case 116://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='T';
					break;
				}
				 case 117://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������					
					grid_letter[level6_row][level6_column]='U';
					break;
				}
				 case 118://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������					
					grid_letter[level6_row][level6_column]='V';
					break;
				}
				 case 119://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='W';
					break;
				}
				 case 120://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������							
					grid_letter[level6_row][level6_column]='X';
					break;
				}
				 case 121://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������						
					grid_letter[level6_row][level6_column]='Y';
					break;
				}
				 case 122://������ĸa
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//������					
					grid_letter[level6_row][level6_column]='Z';
					break;
				}
				}
			default:
				break;
		    }		 			
		    break;
		}
	case WM_MOUSEMOVE:
		{
		   p =MAKEPOINTS(lParam);
		   POINT p1={p.x,p.y};
		   if(game_state==0)//���˵�����
		   {
			   RECT r_startgame={80,270,150,340};
			   RECT r_briefgame={80,360,150,430};
			   RECT r_exitgame={80,450,150,520};
			   RECT r_moegame={80,540,150,610};
			   if(PtInRect(&r_startgame,p1))//�������� ��ʼ��Ϸ ������
			   {
			      GameStart_Select=true;
			   }
			   else
			   {
			    GameStart_Select=false;			   
			   }
			   if(PtInRect(&r_briefgame,p1))//�������� ��Ϸ��� ������
			   {
			      GameBrief_Select=true;
			   }
			   else
			   {
			    GameBrief_Select=false;			   
			   }
			    if(PtInRect(&r_exitgame,p1))//�������� �˳���Ϸ ������
			   {
			      GameExit_Select=true;
			   }
			   else
			   {
			    GameExit_Select=false;			   
			   }
               if(PtInRect(&r_moegame,p1))//�������� ��ͼ���� ������
			   {
			      GameMoe_Select=true;
			   }
			   else
			   {
			    GameMoe_Select=false;			   
			   }
		   
		   }
		   if(game_state==-1)//����ǰԵ
		   {
			   RECT r_tokyo = {407,396,427,416};
			   RECT r_mingguwu = {288,441,308,461};
			   RECT r_qingsen = {477,234,497,254};
			   RECT r_jingdu = {240,360,260,380};
			   RECT r_zhahuang ={460,130,480,150};
			   RECT r_songshan ={177,449,197,469};
			   RECT r_luerdao = {84,492,104,512};
			   RECT r_jiuzhou = {96,363,116,383};
			   RECT r_xinxie ={379,285,399,305};
			   if(PtInRect(&r_xinxie,p1))
			   {
			      xinxie=true;
			   }
			   else
				  xinxie=false;
			    
			   if(PtInRect(&r_tokyo,p1))
			   {
			      tokyo=true;
			   }
			   else
				   tokyo=false;
			    
			   if(PtInRect(&r_mingguwu,p1))
			   {
			      mingguwu=true;
			   }
			   else
				   mingguwu=false;
			    
			   if(PtInRect(&r_qingsen,p1))
			   {
			      qingsen=true;
			   }
			   else
				  qingsen=false;

			    if(PtInRect(&r_jingdu,p1))
			   {
			     jingdu=true;
			   }
			   else
				  jingdu=false;
			  if(PtInRect(&r_zhahuang,p1))
			   {
			     zhahuang=true;
			   }
			   else
				  zhahuang=false;
			   if(PtInRect(&r_songshan,p1))
			   {
			     songshan=true;
			   }
			   else
				  songshan=false;
			    if(PtInRect(&r_luerdao,p1))
			   {
			     luerdao=true;
			   }
			   else
				  luerdao=false;
				 if(PtInRect(&r_jiuzhou,p1))
			   {
			     jiuzhou=true;
			   }
			   else
				 jiuzhou=false;

		   }
		   if(game_state==2)//��һ��
		   {
		       RECT r_A={226,683,240,700};//����������ж�
			   RECT r_S={248,682,262,700};
			   RECT r_U={353,661,364,675};
			   RECT r_N={348,705,361,720};
			   RECT r_ENTER={469,661,511,700};
			   if(PtInRect(&r_A,p1))
			   {
			      rect_a=true;
			   }
			   else
				   rect_a=false;
			   if(PtInRect(&r_S,p1))
			   {
			      rect_s=true;
			   }
			    else
				   rect_s=false;
			   if(PtInRect(&r_N,p1))
			   {
			      rect_n=true;
			   }
			    else
				   rect_n=false;
			   if(PtInRect(&r_U,p1))
			   {
			      rect_u=true;
			   }
			    else
				   rect_u=false;
		   
		   
		   }
			   
		   if(game_state==10)//�����
		  {
		    if(Level5_state==1)//����صڶ�ҳ�Ի�ѡ��һ����һ��
			{
				RECT r_same={400,700,450,720};
				RECT r_notsame={460,700,530,720};
				if(PtInRect(&r_same,p1))
				{
				  Level5_same=true;
				}
				else
				{
				  Level5_same=false;
				}
				if(PtInRect(&r_notsame,p1))
				{
				  Level5_notsame=true;
				}
				else
				{
				 Level5_notsame=false;
				}
			
			}		  		  		  
		  }
		   if(game_state==12)//������
		   {
			   RECT whole_grid={99,59,501,461};//������������
			   RECT eng1={106,64,139,99}, chi1={100,100,140,140},eng2={140,60,180,100},eng3={220,60,260,100},eng5={300,60,340,100},eng10={420,60,460,100},
				    eng4={180,100,220,140},chi6={340,100,380,140},eng7={380,100,420,140},chi3={260,140,300,180},eng11={460,140,500,180},chi4={180,180,220,220},
					eng6={220,180,260,220},chi8={380,180,420,220},eng12={420,180,460,220},chi16={100,220,140,260},eng18={140,220,180,260},eng8={300,220,340,260},
					chi5={220,260,260,300},eng9={260,260,300,300},chi9={380,260,420,300},chi15={140,300,180,340},eng16={180,300,220,340},chi17={340,300,380,340},
					eng17={100,340,140,380},chi11={260,340,300,380},eng14={460,340,500,380},chi13={180,380,220,420},eng15={340,380,380,420},chi14={100,420,140,460},
					chi18={260,420,300,460};
			   
			   if(PtInRect(&whole_grid,p1))//���������������ָ���������
			   {
			   
				   level6_row=(p1.x-100)/40;   //����������ڸ��ӵ����к�
				   level6_column=(p1.y-60)/40;
				
				   if(PtInRect(&eng1,p1))			  			  
					grid[0][0]=true;			      			     
			       else
                    grid[0][0]=false;
			      
				   if(PtInRect(&chi1,p1))			  
					grid[0][1]=true;			      
			       else
                    grid[0][1]=false;
			   
			       if(PtInRect(&eng2,p1))			  
					grid[1][0]=true;			      
			       else
                    grid[1][0]=false;
				   
				   if(PtInRect(&eng3,p1))			  
					grid[3][0]=true;			      
			       else
                    grid[3][0]=false;

				   if(PtInRect(&eng5,p1))			  
					grid[5][0]=true;			      
			       else
                    grid[5][0]=false;
			       
				   if(PtInRect(&eng10,p1))			  
					grid[8][0]=true;			      
			       else
                    grid[8][0]=false;
				    
				   if(PtInRect(&eng4,p1))			  
					grid[2][1]=true;			      
			       else
                    grid[2][1]=false;

				   if(PtInRect(&chi6,p1))			  
					grid[6][1]=true;			      
			       else
                    grid[6][1]=false;
				    
				   if(PtInRect(&eng7,p1))			  
					grid[7][1]=true;			      
			       else
                    grid[7][1]=false;
				    
				   if(PtInRect(&chi3,p1))			  
					grid[4][2]=true;			      
			       else
                    grid[4][2]=false;
				   
				   if(PtInRect(&eng11,p1))			  
					grid[9][2]=true;			      
			       else
                    grid[9][2]=false;

				   if(PtInRect(&chi4,p1))			  
					grid[2][3]=true;			      
			       else
                    grid[2][3]=false;
				  
				   if(PtInRect(&eng6,p1))			  
					grid[3][3]=true;			      
			       else
                    grid[3][3]=false;
				   
				   if(PtInRect(&chi8,p1))			  
					grid[7][3]=true;			      
			       else
                    grid[7][3]=false;
				   
				   if(PtInRect(&eng12,p1))			  
					grid[8][3]=true;			      
			       else
                    grid[8][3]=false;

				   if(PtInRect(&chi16,p1))			  
					grid[0][4]=true;			      
			       else
                    grid[0][4]=false;

				   if(PtInRect(&eng18,p1))			  
					grid[1][4]=true;			      
			       else
                    grid[1][4]=false;

				   if(PtInRect(&eng8,p1))			  
					grid[5][4]=true;			      
			       else
                    grid[5][4]=false;

				    if(PtInRect(&chi5,p1))			  
					grid[3][5]=true;			      
			       else
                    grid[3][5]=false;

					if(PtInRect(&eng9,p1))			  
					grid[4][5]=true;			      
			       else
                    grid[4][5]=false;
					
					if(PtInRect(&chi9,p1))			  
					grid[7][5]=true;			      
			       else
                    grid[7][5]=false;

					if(PtInRect(&chi15,p1))			  
					grid[1][6]=true;			      
			       else
                    grid[1][6]=false;

					if(PtInRect(&eng16,p1))			  
					grid[2][6]=true;			      
			       else
                    grid[2][6]=false;
					
					if(PtInRect(&chi17,p1))			  
					grid[6][6]=true;			      
			       else
                    grid[6][6]=false;
					
					if(PtInRect(&eng17,p1))			  
					grid[0][7]=true;			      
			       else
                    grid[0][7]=false;

					if(PtInRect(&chi11,p1))			  
					grid[4][7]=true;			      
			       else
                    grid[4][7]=false;
					
					if(PtInRect(&eng14,p1))			  
					grid[9][7]=true;			      
			       else
                    grid[9][7]=false;

					if(PtInRect(&chi13,p1))			  
					grid[2][8]=true;			      
			       else
                    grid[2][8]=false;

					if(PtInRect(&eng15,p1))			  
					grid[6][8]=true;			      
			       else
                    grid[6][8]=false;

					if(PtInRect(&chi14,p1))			  
					grid[0][9]=true;			      
			       else
                    grid[0][9]=false;

					if(PtInRect(&chi18,p1))			  
					grid[4][9]=true;			      
			       else
                    grid[4][9]=false;
			   
			   }
			   		   		   		   		   		   	   		   
		   }
		   if(game_state==16)//�ڰ˹�
		   {
		        
			    level8_row = (p1.x-87)/25;//ת����Ļ�����ȡ��������
				level8_column = (p1.y-87)/25;
				RECT r_mousemove={87+level8_row*25,87+level8_column*25,87+(level8_row+1)*25,87+(level8_column+1)*25};//�����������
				RECT r_board={90,90,510,510};//���������
				if(PtInRect(&r_board,p1))
					{
						IsInBoard=true;
				       
				    }
				else
					{
						IsInBoard=false;
						
				    }

				if(level8_state==0)//��ʼ��ѡ�ؿ��ڽ���
				{
					RECT r_lv1={306,693,410,710};
					RECT r_lv2={306,710,410,726};
					RECT r_lv3={306,727,410,742};
					if(PtInRect(&r_lv1,p1))
						level8_lv1=true;
					else
						level8_lv1=false;
					if(PtInRect(&r_lv2,p1))
						level8_lv2=true;
					else
						level8_lv2=false;
					if(PtInRect(&r_lv3,p1))
						level8_lv3=true;
					else
						level8_lv3=false;								
				}

		       		   	   
		   }
		   if (game_state == 18)//�ھŹ�
		   {
			   RECT r_med = { 370, 715, 390, 735 };//ҩˮ˵����ʾ
			   if (PtInRect(&r_med, p1))
				   level9_medecine_description = true;
			   else
				   level9_medecine_description = false;
			   if (reveal_medecine_number != 0 && level9_medicine[0] == false)//Ϊ��ֻ��ʾ�̶�����
			   {
				   level9_temp_x = p1.x;//����ʱ����
				   level9_temp_y = p1.y;
			   }
			   RECT r_acc = { 420, 715, 440, 735 };//���ٵ�������˵������
			   if (PtInRect(&r_acc, p1))
				   level9_acctool_description = true;
			   else
				   level9_acctool_description = false;
			   RECT r_box={355,665,375,685};//��������˵��
			   if(PtInRect(&r_box,p1))
				   level9_box_description=true;
			   else
				   level9_box_description=false;
			   RECT r_flash={395,665,415,685};//��������˵��
			   if(PtInRect(&r_flash,p1))
				   level9_flash_description=true;
			   else
				   level9_flash_description=false;

			   level9_box_x=p1.x/20;//��ȡ�������ӵ�λ�õľ�������
			   level9_box_y=p1.y/20;

			   level9_flash_x=p1.x/20;//��ȡʹ�������λ�õľ�������
			   level9_flash_y=p1.y/20;
		   }
		
		   break;
		}
	case WM_RBUTTONDOWN:
		{
		   p =MAKEPOINTS(lParam);
		   POINT p1={p.x,p.y};
		   break;
		}
	case WM_TIMER:
		{
		  //������
		  switch(wParam)
		  {
		  case 3://1�����ʱ��
			  {
					 
				if(game_state==-6) //�ɻ��ں���
				{
				  plane_counter++;			  
				  dialog_counter++;								
				}
				  
				if (game_state == 18)
					 {
						 level9_chasingmonster_counter++;//׷������ʱ��
						 if (level9_chasingmonster_counter  == 5)
						 {
							 chase = true;
							 level9_chasingmonster_counter = 0;
						 }
						 else
							 chase = false;
					 }
				if(game_state==-5)//��ϷCG
				{
				   b_counter+=2;
				   if(b_counter>=35)
					   b_counter=35;
				   if(b_counter==35)
				   {
				      r_counter+=2;
					  if(r_counter>=35)
						  r_counter=35;				   
				   }
				   if(r_counter==35)
				   {
				    a_counter+=2;
					if(a_counter>=35)
						  a_counter=35;						   
				   }
				    if(a_counter==35)
				   {
				    n_counter+=2;
					if(n_counter>=35)
						  n_counter=35;						   
				   }
					 if(n_counter==35)
				   {
				    t_counter+=2;
					if(t_counter>=35)
						  t_counter=35;						   
				   }
					
					if(nan_counter==250)
					{
					  niao_counter+=6;
					  if(niao_counter>=150)
						  niao_counter=150;
				
					}


				
				}
			
				if(game_state==-7)//�ɻ����ձ��Ͽշ���
				{
				  if(TotalJapan_x+300>=1968&&TotalJapan_x+300<=2203&&TotalJapan_y+400>=2052&&TotalJapan_y+400<=2295)
				  {
				        tokyo_counter1+=2;
						if(tokyo_counter1>=80)
							tokyo_counter1=80;
						if(tokyo_counter1==80)
						{
						  tokyo_counter2+=2;
						  if(tokyo_counter2>=100)
                            tokyo_counter2=100;						
						}					  
				  
				  }
				  else 
				  {
				       tokyo_counter1=0;
					   tokyo_counter2=0;
				  }
				  //������´���:��һ������ �ɵ�����
				  if(mission1==true)//�����˵�һ������
				  {
				     Ex_counter+=8;
					 if( Ex_counter>=360)
						  Ex_counter=360;
				  
				  }
				
				}
				if(game_state==-102)//saber��
				{
				   it=s.find(1);
				   if(it!=s.end())//��һ���Ѿ�����
				   {
				      Ex_counter+=8;
					  if( Ex_counter>=360)
						  Ex_counter=360;				   
				   }				   
				}
				if(game_state==-303)//����Ƕ�
				{
				   it=s.find(2);
				   if(it!=s.end())//��2���Ѿ�����
				   {
				      Ex_counter+=8;
					  if( Ex_counter>=360)
						  Ex_counter=360;				   
				   }				   
				}
				if(game_state==-403)//��˿���Ƕ�
				{
				   it=s.find(3);
				   if(it!=s.end())//��3���Ѿ�����
				   {
				      Ex_counter+=8;
					  if( Ex_counter>=360)
						  Ex_counter=360;				   
				   }				   
				}
				if(game_state==-503)//ͩ���Ƕ�
				{
				   it=s.find(4);
				   if(it!=s.end())//��4���Ѿ�����
				   {
				      Ex_counter+=8;
					  if( Ex_counter>=360)
						  Ex_counter=360;				   
				   }				   
				}
				if(game_state==-1)//����ǰԵ
				{
				   if(tokyo==true||mingguwu==true||qingsen==true||jingdu==true||zhahuang==true||songshan==true||luerdao==true||jiuzhou==true||xinxie==true)//��Ҫ
				   {
				      map_stretch_counter+=12;
					  ///////////////////////////��ʱ������ʾ���н���ʱ��
					  Intro_counter++;
					  if(map_stretch_counter>=450)
						  map_stretch_counter=450;
					  if(map_stretch_counter==450)
					  {
					    tokyo_counter1+=2;
						if(tokyo_counter1>=80)
							tokyo_counter1=80;
						if(tokyo_counter1==80)
						{
						  tokyo_counter2+=2;
						  if(tokyo_counter2>=100)
                            tokyo_counter2=100;						
						}					  
					  }				   
				   }
				   else
                   {
					   map_stretch_counter=0;
					   tokyo_counter1=0;
					   tokyo_counter2=0;
					   Intro_counter=0;
				   }
				
				}
				///////////////////////////////////////////////////////////////////////////////////////������ʱ��
				if(game_state==-100||game_state==-301||game_state==-401||game_state==-501)//��������,���ϻ���,¹��������,��ɭ����
				{
				   if(take_off==false)
				    {
					Tokyo_counter++;
				    Tokyo_transform_counter++;//�ɻ���С��ʱ�� 
				    if(Tokyo_counter>=250)
					   Tokyo_counter=250;
				    if(Tokyo_transform_counter>=60)
					   Tokyo_transform_counter=60;
				    }
				   else//�ɻ�׼�����
				   {
				      Tokyo_counter++;
					  if(Tokyo_counter>=200)
					   Tokyo_counter=200;
					  if(Tokyo_counter==200)
					  {
					    Tokyo_transform_counter++;
					    if(Tokyo_transform_counter>=60)
					      Tokyo_transform_counter=60;					  
					  }
				   
				   }
				
				}
				if(game_state==-200||game_state==-300||game_state==-400||game_state==-500)/////////////////////////////////////////////////////////���н���
				{
				       map_stretch_counter+=12;
					  ///////////////////////////��ʱ������ʾ���н���ʱ��
					  Intro_counter++;
					  if(map_stretch_counter>=450)
						  map_stretch_counter=450;
					  if(map_stretch_counter==450)
					  {
					    tokyo_counter1+=2;
						if(tokyo_counter1>=80)
							tokyo_counter1=80;
						if(tokyo_counter1==80)
						{
						  tokyo_counter2+=2;
						  if(tokyo_counter2>=100)
                            tokyo_counter2=100;						
						}					  
					  				   
				     }
				}
			    else
                   {
					   map_stretch_counter=0;
					   tokyo_counter1=0;
					   tokyo_counter2=0;
					   Intro_counter=0;
				   }
				
				
				if(game_state==0)
			  {
			     if(GameStart_Select==true)
				 {
				    chu++;
					if(chu>=24)
						chu=24;				 
				 }
				 if(GameBrief_Select==true)
				 {
				    xun++;
					if(xun>=24)
						xun=24;				 
				 }
				 if(GameExit_Select==true)
				 {
				    li++;
					if(li>=24)
						li=24;				 
				 }
				 if(GameMoe_Select==true)
				 {
				    shang++;
					if(shang>=24)
						shang=24;				 
				 }
			  	 //�ĸ�ԲȦ���ν��뻭��
				 chu1++;
				 if(chu1>=25)
					 chu1=25;
				 if(chu1==25)
				 {
				   xun1++;
				   if(xun1>=25)
					   xun1=25;				 
				 }
				 if(xun1==25)
				 {
				   li1++;
				   if(li1>=25)
					   li1=25;
				 }
				 if(li1==25)
				 {
				   shang1++;
				   if(shang1>=25)
					   shang1=25;				 
				 }
			  												
				if(chu2s==true)
				{
				  chu2++;
				  if(chu2>=40)
					  chu2=40;				
				}
				if(xun2s==true)
				{
				   xun2++;
				   if(xun2>=40)
					   xun2=40;							
				}
				if(shang2s==true)
				{
				  shang2++;
				  if(shang2>=40)
					  shang2=40;								
				}
															
				}
				else
				{
				  chu1=0;
				  xun1=0;
				  li1=0;
				  shang1=0;	

				  chu2=0;
				  xun2=0;
				  li2=0;
				  shang2=0;
				}
			     break;
			  }
		  case 1:
			  

			  
			  if(game_state==14)//���߹ؼ�ʱ��
			  {			   
				lv7_color_counter++;//������ɫ��ʱ��
                if(lv7_color_counter==6)
					lv7_color_counter=0;
			  }
			    if(game_state==16)//�ڰ˹�
			  {
			    if(IsWin_level8(level8_board,AI_row,AI_column,2)||IsWin_level8(level8_board,level8_row,level8_column,1))
                     level8_counter++;			  
			  }
			
			 if(game_state==10)//����ض�������붯��
				 {
				   if(Level5_state==0)
				   {
					Lv5_counter_whql++;
				   if( Lv5_counter_whql>=300)
				   Lv5_counter_whql--;
				   }
				   else if(Level5_state==5)//�����˳�����
				  {
				   Lv5_counter_whql++;
				   if( Lv5_counter_whql>=300)
				   Lv5_counter_whql--;
				  }
			
				  Lv5_counter_roll++;
				  if(Lv5_counter_roll>=300)
                  Lv5_counter_roll--;				 
				 }
				break;		  		  
		  case 2:///////////////////////////////////1���ӵļ�ʱ��
			 {
			  
				
				if(game_state==4)
			     {			        
					Level2_counter++;//�ڶ��ؼ�ʱ��					
			     }		
			 
			  if(game_state==103)//��һ�ظ���
			  {
			     Level1_Motto++;
				 if(Level1_Motto>=6)//����ʹ����6
				 {
				    Level1_Motto=6;
					Level1_Motto_done=true;//��һ�ظ����Ѿ���������
				 }
			  }
			  if(game_state==104)//�ڶ��ظ���
			  {
			     Level2_Motto++;
				 if(Level2_Motto>=9)
				 {
				    Level2_Motto=9;
					Level2_Motto_done=true;//��2�ظ����Ѿ���������
				 }
			  
			  }
			  if(game_state==105)//�����ظ���
			  {
			      Level3_Motto++;
				 if(Level3_Motto>=9)
				 {
				    Level3_Motto=9;
					Level3_Motto_done=true;//��3�ظ����Ѿ���������
				 }
			  
			  }
			  if(game_state==106)//���Ĺظ���
			  {
			      Level4_Motto++;
				 if(Level4_Motto>=9)
				 {
				    Level4_Motto=9;
					Level4_Motto_done=true;//��4�ظ����Ѿ���������
				 }			  
			  }
			    if(game_state==107)//��6�ظ���
			  {
			      Level6_Motto++;
				 if(Level6_Motto>=9)
				 {
				    Level6_Motto=9;
					Level6_Motto_done=true;//��6�ظ����Ѿ���������
				 }			  
			  }
				if(game_state==108)//���߹ظ���
				{
				   Level7_Motto++;
				   if(Level7_Motto>=9)
				   {
				      Level7_Motto=9;
				      Level7_Motto_done=true;//��7�ظ����Ѿ���������
				   }
				 												
				}
				if(game_state==109)//��8�ظ���
				{
				   Level8_Motto++;
				   if(Level8_Motto>=9)
				   {
				      Level8_Motto=9;
				      Level8_Motto_done=true;//��7�ظ����Ѿ���������
				   }
				 												
				}
			  if(game_state==10)//�����
			  {
			     Lv5_counter_roll++;
				 if(Lv5_whql_animation_done==true&&Level5_state==5)//�����ë������ʾ����
				 {
				    Level5_Motto++;
					if(Level5_Motto>=7)
						{
							Level5_Motto=7;
							Level5_Motto_done=true;//7��ë����д���ı�־����
					    }
				 }
			  }
			 break;   
			 }
		  case 4://��4�ؼ�ʱ�� 0.01s
			  {
			      if(game_state==-5)
				  {
				    if(t_counter==35)
				   {
				    
					nan_acc-=1;
					if(nan_acc<=0)
						nan_acc=0;
					nan_counter-=nan_acc;
					if(nan_counter<=250)
						  nan_counter=250;						   
				   }
				  }
				  if(game_state==18)//������ж��� �� �������ã�ÿ��3���Ӳ�������3����
				 {
					   
					 
					   
					   if (level9_acceffect_counter>=0)
					   level9_acceffect_counter++;
					   					   
					   level9_gravity_counter++;
					   if (level9_gravity_counter >= 90)
						   level9_gravity_counter = 0;
					   if ((level9_gravity_counter / 30) % 3 == 0)
						   gravity_activated = false;//��������ϵͳ
					   else
						   gravity_activated = true;
					   
					   
					 if(level9ball_flag[0]==false)
					{
					  level9_ball1_counter_dy+=10;
					  if(level9_ball1_counter_dy>=560)
					  {
					     level9_ball1_counter_dy=560;
						 level9_ball1_counter_dx+=10;
						 if(level9_ball1_counter_dx>=350)
						 {
						    level9_ball1_counter_dx=350;
						 }
					  }
					}
					 if(level9ball_flag[1]==false)
					{
					  level9_ball2_counter_dy+=10;
					  if(level9_ball2_counter_dy>=445)
					  {
					     level9_ball2_counter_dy=445;
						 level9_ball2_counter_dx+=10;
						 if(level9_ball2_counter_dx>=200)
						 {
						    level9_ball2_counter_dx=200;
						 }
					  }
					}
					  if(level9ball_flag[2]==false)
					{
					  level9_ball3_counter_dy+=10;
					  if(level9_ball3_counter_dy>=325)
					  {
					     level9_ball3_counter_dy=325;
						 level9_ball3_counter_dx+=10;
						 if(level9_ball3_counter_dx>=260)
						 {
						    level9_ball3_counter_dx=260;
						 }
					  }
					}
					 if(level9ball_flag[3]==false)
					{
					  level9_ball4_counter_dy+=10;
					  if(level9_ball4_counter_dy>=410)
					  {
					     level9_ball4_counter_dy=410;
						 level9_ball4_counter_dx+=10;
						 if(level9_ball4_counter_dx>=30)
						 {
						    level9_ball4_counter_dx=30;
						 }
					  }
					}
					  if(level9ball_flag[4]==false)
					{
					  level9_ball5_counter_dy+=10;
					  if(level9_ball5_counter_dy>=155)
					  {
					     level9_ball5_counter_dy=155;
						 level9_ball5_counter_dx+=10;
						 if(level9_ball5_counter_dx>=280)
						 {
						    level9_ball5_counter_dx=280;
						 }
					  }
					}
					 if(level9ball_flag[5]==false)
					{
					  level9_ball6_counter_dy+=10;
					  if(level9_ball6_counter_dy>=240)
					  {
					     level9_ball6_counter_dy=235;
						 level9_ball6_counter_dx+=10;
						 if(level9_ball6_counter_dx>=260)
						 {
						    level9_ball6_counter_dx=260;
						 }
					  }
					}
					  if(level9ball_flag[6]==false)
					{
					  level9_ball7_counter_dy+=10;
					  if(level9_ball7_counter_dy>=200)
					  {
					     level9_ball7_counter_dy=200;
						 level9_ball7_counter_dx+=10;
						 if(level9_ball7_counter_dx>=150)
						 {
						    level9_ball7_counter_dx=150;
						 }
					  }
					}
				 
				 }
				  if(game_state==1||game_state==3||game_state==5||game_state==7||game_state==9||game_state==11||game_state==13||game_state==15)//����prelude�ſ���Ч
				{
				   lv1_counter++;
				   if(lv1_counter>=50)
				   {
				      phase1_done=true;
				   }
				   if(phase1_done==true)
				   {
				      lv1_counter3++;
					  if(lv1_counter3>=30)
						  {
							  phase2_done=true;
							  phase1_done=false;
					      }   
				   }				  
			      if(phase2_done==true)
				  {
				     lv1_counter1++;
				     if(lv1_counter1>=25)
				      {
				         phase3_done=true;
						 phase2_done=false;
					     lv1_counter1=25;
						 lv1_counter4++;
				      }
				  }
				  if(phase3_done==true&&lv1_counter4>=20)
				  {
					  lv1_counter2++;
					  if(lv1_counter2>=25)
					  {
					     lv1_counter2=25;
						 phase4_done=true;
					  }
				  
				  }
				}
				  if(game_state==8&&Level4_state==1)
				  Level4_counter+=2;
				 else if(game_state==8&&Level4_state==2)
				  Level4_counter+=2;
				 else if(game_state==8&&Level4_state==3)
				  Level4_counter+=2;
			     
				 if(game_state==12)//������
				 {
				   if(right1==true) //����������������Ŀ֮��
				   {
				     Level6_counter++;
				   }
				 
				 }
				 if(game_state==16&&level8_state==1)
					 level8_lv1_counter++;
				 if(game_state==16&&level8_state==3)
					 level8_lv1_counter++;

				 if(game_state==18&&flash_used==true)//�ھŹرȿ˴�ħ������������
					 level9_bike_counter++;
				
			  
			  }
		  
		  
          }
			break;
		}
	case WM_LBUTTONDOWN:///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////����������
		{
		   p =MAKEPOINTS(lParam);
		   POINT p1={p.x,p.y};	   
		   RECT rect={12,800-128+12,76,800-64+12};//����ͼ���������
		   RECT r_accept={233,613,276,655};//������ս
		   RECT r_not_accept={330,613,379,655};//��������ս
		   RECT r_accept_asuna={233,413,276,455};
		   RECT r_not_accept_asuna={330,413,379,455};//��������ս
		   //����ʼ�������룬����gamestate������һ����
		   RECT r_mail={530,0,590,45};
		   if(game_state==-7||game_state==-100||game_state==-101||game_state==-102||game_state==-301||game_state==-302||game_state==-303||game_state==-401||game_state==-402||game_state==-403||game_state==-501||game_state==-502||game_state==-503)
		   {
		       //�����б���ʾ
			   if(click_mail==false)
			  {
				  if(PtInRect(&r_mail,p1))
				  {
					 click_mail=true;					 
				  }
					   
			  }
			  else
			  {
					if(PtInRect(&r_mail,p1))
					{
					   click_mail=false;
					}
			  
			  }
              //�ʼ���̾����ʾ
			   if(mission_viewed==false)
			   {
			      if(PtInRect(&r_mail,p1))
				  {
				     mission_viewed=true;
				  }			   		
			   }
			  
		   }
		   	   
		   if(game_state==-102)//saber��
		   {
		     if(challenge_activated==true)//���˻س�
			 {
			    if(PtInRect(&r_accept,p1))//������ս
				{
				   game_state=1;//�����һ��
				   start=clock();
				}
				if(PtInRect(&r_not_accept,p1))// ������ս
				{
				   game_state=-102;
				   challenge_activated=false;
				}
			 
			 }
		   	   
		   }
		   if(game_state==-303)//����Ұ������
		   {
		       if(challenge_activated==true)//���˻س�
			 {
			    if(PtInRect(&r_accept,p1))//������ս
				{
				   game_state=3;//�����2��
				   start_level2_pre=clock();
				}
				if(PtInRect(&r_not_accept,p1))// ������ս
				{
				   game_state=-303;
				   challenge_activated=false;
				}
			 
			 }
		   
		   }
		   if(game_state==-403)//��˿������
		   {
		    if(challenge_activated==true)//���˻س�
			 {
			    if(PtInRect(&r_accept_asuna,p1))//������ս
				{
				   game_state=5;//�����3��prelude
				   start_level3_pre=clock();
				}
				if(PtInRect(&r_not_accept_asuna,p1))// ������ս
				{
				   game_state=-403;
				   challenge_activated=false;
				}
			 
			 }
		   
		   }
		    if(game_state==-503)//ͩ������
		   {
		    if(challenge_activated==true)//���˻س�
			 {
			    if(PtInRect(&r_accept_asuna,p1))//������ս
				{
				   game_state=7;//�����4��prelude
				   start_level4_pre=clock();
				}
				if(PtInRect(&r_not_accept_asuna,p1))// ������ս
				{
				   game_state=-503;
				   challenge_activated=false;
				}
			 
			 }
		   
		   }
		   if(game_state==103)//��һ�ظ��Խ���
		   {
		      if(Level1_Motto_done==true)
			  {
			     Level1_Motto_done=false;
				 game_state=-102;//��һ�سɹ����غ�ص�saber�ң��õ���һ����Ϣ
				 challenge_activated=false;
				 Level1_Motto=0;
				 //Ҫ�ĵ����
				 InvalidateRect(hWnd,NULL,true);							  
			  }
		   
		   }
		   if(game_state==104)//�ڶ��ظ��Խ���
		   {
		      if(Level2_Motto_done==true)
			  {
			     Level2_Motto_done=false;
				 game_state=-303;//�ص��ɿ��������ڲ�
				 Level2_Motto=0;
				 challenge_activated=false;
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   
		   }
		   if(game_state==105)//��3�ظ��Խ���
		   {
		      if(Level3_Motto_done==true)
			  {
			     Level3_Motto_done=false;
				 game_state=-403;//���Ĺ�prelude
				 Level3_Motto=0;
				 //start_level4_pre=clock();
				 challenge_activated=false;
				// j=1;
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   
		   }
		   if(game_state==106)//��4�ظ��Խ���
		   {
		      if(Level4_Motto_done==true)
			  {
			     Level4_Motto_done=false;
				 game_state=-503;//��5��prelude
				 Level4_Motto=0;
				 Level4_counter=0;
				 //start_level5_pre=clock();
				 //j=1;
				 challenge_activated=false;
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   		   		   		   
		   }
		   if(game_state==107)//��6�ظ��Խ���
		   {
		    if(Level6_Motto_done==true)//�����ظ��Բ��Ž���
			  {
			     Level6_Motto_done=false;
				 game_state=13;//��7��prelude
				 Level6_Motto=0;
				 Level6_counter=0;
				 start_level7_pre=clock();
				 j=1;
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   		   		   		   		   
		   }
		    if(game_state==108)//��7�ظ��Խ���
		   {
		    if(Level7_Motto_done==true)//�����ظ��Բ��Ž���
			  {
			     Level7_Motto_done=false;
				 game_state=15;//��8��prelude
				 Level7_Motto=0;
				 start_level8_pre=clock();
				 for(int i=0;i<17;i++)//�ڰ˹ر�����0
					 for(int j=0;j<17;j++)
					 {
						 level8_board[i][j]=0;
						 for(int k=0;k<4;k++)
						 {
						    level8_Ai[i][j][k]=0;
							level8_player[i][j][k]=0;
						 }
					 }
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   		   		   		   		   
		   }
		   if(game_state==-7||game_state==-100||game_state==-101||game_state==-102||game_state==-301||game_state==-302||game_state==-303||game_state==-401||game_state==-402||game_state==-403||game_state==-501||game_state==-502||game_state==-503)//�ص����˵�
		   {
			   RECT r_back={0,0,50,50};//�˳�
			   if(PtInRect(&r_back,p1))
			   {
			       if( IDYES==MessageBox(hWnd,L"ȷ���ص����˵�ô��������Ҫ�㣡��",L"����~",MB_YESNO))
				   {
					   game_state=0;
					   TotalJapan_x=3400,TotalJapan_y=2400;
					   dir=1;
					   PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����	
				       InvalidateRect(hWnd,NULL,0);	
				   }
			   
			   }
		   
		   }
			if(game_state==0)//;���˵�����
		   {
			  
			   
			   RECT r_save={90,686,150,746};
			   if(PtInRect(&r_save,p1))
			   {
			            //�����ļ�д�룬���Ѿ�ͨ���Ĺ�
						TCHAR filename[MAX_PATH]=L"save";//�����ļ���
						TCHAR strDefExt[]=L"dat";//Ĭ����չ��
						OPENFILENAME of={sizeof(OPENFILENAME)};//�����ṹ��,����ָ�����Ĵ�С�����򲻻ᵯ���Ի���ģ���һ�����Ҫ
						of.hwndOwner = hWnd;
						of.hInstance = hInst;
						of.lpstrFilter = L"�ѹ��ؿ�(*.dat)\0.dat\0";
						of.nFilterIndex = 1;
						of.lpstrFile = filename;
						of.nMaxFile = MAX_PATH;
						of.lpstrDefExt = strDefExt;
						of.Flags = OFN_EXPLORER;
					   
					   
					   if(GetSaveFileName(&of)==true)
					   {
						   HANDLE hFile =CreateFile( //�����ļ�
							   filename,
							   GENERIC_WRITE,
							   0,
							   NULL,                
							   CREATE_ALWAYS,
							   FILE_ATTRIBUTE_NORMAL,
							   NULL						  						   												   
							   );
						   for(it=s.begin();it!=s.end();it++)
						   {
							 DWORD  byteToWrite;
							 if(s.size()!=0)//����Ѿ��йؿ�ͨ����
							   WriteFile(hFile,&(*it),sizeof(int),&byteToWrite,NULL);
						   }					 
							 CloseHandle(hFile);	
					   }
			   
			   }
			   
			   if(PtInRect(&r_startGame,p1))//��ʼ��Ϸ
				   {					   
					  chu2s=true;//����ԲȦ�ҷɶ���
				      PlaySound((LPCTSTR)IDR_WAVE1,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����
					 
			       }
                     			  			   
			    if(PtInRect(&r_exitGame,p1))//�˳���Ϸ
				   {
					  
					   PostQuitMessage(0);
			       }
				if(PtInRect(&r_briefGame,p1))//��Ϸ���
				   {
					  xun2s=true;//�ҷɶ���
					  //IsLoad = false;
					  
			       }
				if(PtInRect(&r_MoeGame,p1))//��ͼ����
				  {
				      shang2s=true;	
					  moe_bar=true;
					  for(int i=0;i<8;i++)
						  mp[i]=false;//8����Ϣ��鿪ʼ��Ϊfalse����������
				  }
				if(PtInRect(&r_BgInfoGame,p1))
				{
				    game_state=-3;
					InvalidateRect(hWnd,NULL,true);
				}

		   }
		   if(game_state==2)//��һ��
		   {
			  
			   RECT r_returnMenu={23,595,110,631};
			   RECT r_A={226,683,240,700};//�����Ǽ��̰����ж�
			   RECT r_S={248,682,262,700};
			   RECT r_U={353,661,364,675};
			   RECT r_N={348,705,361,720};
			   RECT r_H={334,683,348,701};
			   RECT r_E={261,660,276,678};
			   RECT r_L={400,683,415,701};
			   RECT r_O={394,661,409,679};
			   RECT r_ENTER={469,661,511,700};
			  		  
			   if(PtInRect(&r_returnMenu,p1))
			   {
			     
				   if( IDYES==MessageBox(hWnd,L"ȷ��Ҫ������սô?",L"����~",MB_YESNO))
				   {
					   game_state=-102;//�ص�saber��
					   challenge_activated=false;
					   //PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����	
				       InvalidateRect(hWnd,NULL,0);	
				   }
			   }
			    if(PtInRect(&r_O,p1))
			   {
			       Password+="o";
                   MessageBeep(MB_ICONEXCLAMATION);
				   InvalidateRect(hWnd,NULL,0);	
			   }
			   if(PtInRect(&r_L,p1))
			   {
			       Password+="l";
                   MessageBeep(MB_ICONEXCLAMATION);
				   InvalidateRect(hWnd,NULL,0);	
			   }
			   if(PtInRect(&r_E,p1))
			   {
			       Password+="e";
                   MessageBeep(MB_ICONEXCLAMATION);
				   InvalidateRect(hWnd,NULL,0);	
			   }
			   if(PtInRect(&r_H,p1))
			   {
			       Password+="h";
                   MessageBeep(MB_ICONEXCLAMATION);
				   InvalidateRect(hWnd,NULL,0);	
			   }
			   if(PtInRect(&r_A,p1))
			   {
			       Password+="a";
                   MessageBeep(MB_ICONEXCLAMATION);
				   InvalidateRect(hWnd,NULL,0);	
			   }
                if(PtInRect(&r_S,p1))
			   {
			       Password+="s";
				     MessageBeep(MB_ICONEXCLAMATION);
				   InvalidateRect(hWnd,NULL,0);	
			   }
               if(PtInRect(&r_U,p1))
			   {
			       Password+="u";
				     MessageBeep(MB_ICONEXCLAMATION);
				   InvalidateRect(hWnd,NULL,0);	
			   }
			    if(PtInRect(&r_N,p1))
			   {
			       Password+="n";
				   MessageBeep(MB_ICONEXCLAMATION);
				   InvalidateRect(hWnd,NULL,0);	
			   }
			   if(PtInRect(&r_ENTER,p1))
			   {
			      if(Password=="helloasuna")
				  {				    
					
					MessageBox(hWnd,L"Good Job!������ȷ��",L"��ϲ",MB_OK);
					s.insert(1);//��һ���ѹ�
					game_state=103;///////////////////////////�����һ�ظ��Խ���,100+�ؿ�����ʾ���Խ���
					Password="";
					Ex_counter=0;//��̾�ż�ʱ����0���Ա�����һ�μ�ʱ
					InvalidateRect(hWnd,NULL,0);
					
				  }
				  else
				  {				    
					MessageBox(hWnd,L"�������",L"����",MB_OK);
					Password="";
					InvalidateRect(hWnd,NULL,0);	
				  }
			   }

		   }
		   if(game_state==4)//�ڶ���
		   {
		      RECT r_returnMenu={28,556,80,588};
			  if(PtInRect(&r_returnMenu,p1))
			   {
			        if( IDYES==MessageBox(hWnd,L"ȷ��Ҫ������սô?",L"����~",MB_YESNO))
				   {
					   Level2_counter=0;//��ʱ������
					   game_state=-303;
					   challenge_activated=false;
				       InvalidateRect(hWnd,NULL,true);	
				   }
								 			 	 		   
			   }
		   
		   }
		   if(game_state==6)//������
		   {
		      RECT r_returnMenu={28,556,80,588};
			  if(PtInRect(&r_returnMenu,p1))
			   {
			        if( IDYES==MessageBox(hWnd,L"ȷ��������սô��������Ҫ�㣡��",L"����~",MB_YESNO))
				   {
					     death_level3=0;
				         game_state=-403;
						 challenge_activated=false;
						 PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����	
						 InvalidateRect(hWnd,NULL,true);
						 PosX3=93,PosY3=93;//�����������ҳ�ʼλ��
						 flag_save1=false;//�����ش��̱�������
						 flag_coin1=true, flag_coin2=true, flag_coin3=true;//�����ؽ�ұ�־����
				   }
				
			   }
		   
		   }

		   if(game_state==8)//��4��
		   {
		      RECT r_returnMenu={28,47,102,78};
			   if(PtInRect(&r_returnMenu,p1))//�ص����˵�
			   {
			        if( IDYES==MessageBox(hWnd,L"ȷ��Ҫ������սô��������Ҫ�㣡��",L"����~",MB_YESNO))
				   {					    
				         //���ֱ�������
					     timebar_y=360;
					     Level4_counter=0;				         
					     zoom_flag=false;
					     game_state=-503;
						 challenge_activated=false;
						 Level4_state=0;//�������㣬��ֹ����
						 flag_level4_start=false;//��־��������
						 InvalidateRect(hWnd,NULL,true);
				   }				
			   }		   
			   RECT r_start={240,150,340,250};//���Ĺؿ�ʼ��Ϸ
			   if(PtInRect(&r_start,p1)&&flag_level4_start==false)
			   {
				 /////////////////////////////////////////////////////////////////��ʼ��״̬���󣬵õ�������󣬲�����gamedoublebuffer�н��У�����᲻�ϱ仯
				 row=rand()%10+1;
				 column=rand()%10+1;
				 random_letter=rand()%26;//�����ֵ���ĸ��ֻ����һ�ε���ĸ ҪѰ�ҵ���ĸ
				 for(int i=0;i<=9;i++)
					 for(int j=0;j<=9;j++)
					 {
					    letter=rand()%26;
						if(letter==random_letter&&letter!=25)
						letter+=1;//ʹ��letter���ǲ����ֵ���ĸ
						if(letter==25)
						letter-=1;//�����ĸ����z�������һ
						 if(!(i==row&&j==column))
						 b[i][j]=letter;
					 }
				 Level4_state=1;//������Ĺص�һС��
				 flag_level4_start=true;//�����־����Ϊtrue�Ļ���ʾ�ڿ�ʼ��Ϸ֮���ٵ����ʼ��Ϸ��ť��������,��ֹ����
				 zoom_flag=false;
				 level4_board=true;
				 InvalidateRect(hWnd,NULL,true);			   			   
			   }
              if(Level4_state==1)//���Ĺ��Ѿ���ʼ����Ϸ������Ե��Ĺ�ÿһС�ض�����Ч�ģ������ǵ�һ��
			  {
				  RECT  r_matrix={50,250,550,750};//��ĸ��������
			      if(PtInRect(&r_matrix,p1))//��������������ĸ����������
				  {
					  RECT r_letter={letter_x,letter_y,letter_x+50,letter_y+50};//������������ҪѰ�ҵķ�����
					  if(PtInRect(&r_letter,p1))
					  {
					    
						  MessageBox(hWnd,L"��ϲ���óƺţ��Ŵ�",L"����",MB_OK);
                          timebar_y=360;
						  Level4_counter=0;
						   row=rand()%10+1;
				          column=rand()%10+1;
				          random_letter=rand()%26;//�����ֵ���ĸ��ֻ����һ�ε���ĸ ҪѰ�ҵ���ĸ
				   for(int i=0;i<=9;i++)
					 for(int j=0;j<=9;j++)
					 {
					    letter=rand()%26;
						if(letter==random_letter&&letter!=25)
						letter+=1;//ʹ��letter���ǲ����ֵ���ĸ
						if(letter==25)
						letter-=1;//�����ĸ����z�������һ
						 if(!(i==row&&j==column))
						 b[i][j]=letter;
					 }
                     Level4_state=2;
					 flag_level4_start=true;//�����־����Ϊtrue�Ļ���ʾ�ڿ�ʼ��Ϸ֮���ٵ����ʼ��Ϸ��ť��������,��ֹ����
				     zoom_flag=false;
				     level4_board=true;
					 Level4_counter=0;
				     InvalidateRect(hWnd,NULL,true);			   							  						  						
				   }
					  else
					  {					    				    
						 MessageBox(hWnd,L"ɧ���������ˣ�",L"ʧ��",MB_OK);                   
						 timebar_y=360;
						 Level4_counter=0;
						 Level4_state=0;
						 flag_level4_start=false;
						 level4_board=false;
					  }
				   				  
				  }
			  }


			  else  if(Level4_state==2)//���Ĺ��Ѿ���ʼ����Ϸ������Ե��Ĺ�ÿһС�ض�����Ч�ģ������ǵ�2��
			  {
				  RECT  r_matrix={50,250,550,750};//��ĸ��������
			      if(PtInRect(&r_matrix,p1))//��������������ĸ����������
				  {
					  RECT r_letter={letter_x,letter_y,letter_x+50,letter_y+50};//������������ҪѰ�ҵķ�����
					  if(PtInRect(&r_letter,p1))
					  {
					    					  
						  MessageBox(hWnd,L"��ϲ���óƺţ�ɨ�������΢��",L"����",MB_OK);						
                          timebar_y=360;
						  Level4_counter=0;
						   row=rand()%10+1;
				          column=rand()%10+1;
				          random_letter=rand()%26;//�����ֵ���ĸ��ֻ����һ�ε���ĸ ҪѰ�ҵ���ĸ
				   for(int i=0;i<=9;i++)
					 for(int j=0;j<=9;j++)
					 {
					    letter=rand()%26;
						if(letter==random_letter&&letter!=25)
						letter+=1;//ʹ��letter���ǲ����ֵ���ĸ
						if(letter==25)
						letter-=1;//�����ĸ����z�������һ
						 if(!(i==row&&j==column))
						 b[i][j]=letter;
					 }
                     Level4_state=3;
					 flag_level4_start=true;//�����־����Ϊtrue�Ļ���ʾ�ڿ�ʼ��Ϸ֮���ٵ����ʼ��Ϸ��ť��������,��ֹ����
				     zoom_flag=false;
				     level4_board=true;
					 Level4_counter=0;
				     InvalidateRect(hWnd,NULL,true);			   							  						  						
				   }
					  else
					  {					    				    
						 MessageBox(hWnd,L"�����٣��´μ���Ŭ����",L"ʧ��",MB_OK);                   
						 timebar_y=360;
						 Level4_counter=0;
						 Level4_state=0;
						 flag_level4_start=false;
						 level4_board=false;
					  }
				   				  
				  }
			  }
		     else  if(Level4_state==3)//���Ĺ��Ѿ���ʼ����Ϸ������Ե��Ĺ�ÿһС�ض�����Ч�ģ������ǵ�3��
			  {
				  RECT  r_matrix={50,250,550,750};//��ĸ��������
			      if(PtInRect(&r_matrix,p1))//��������������ĸ����������
				  {
					  RECT r_letter={letter_x,letter_y,letter_x+50,letter_y+50};//������������ҪѰ�ҵķ�����
					  if(/*PtInRect(&r_letter,p1)*/true)
					  {
					    
						  MessageBox(hWnd,L"��ϲ���óƺţ�����������Զ��",L"����",MB_OK);
						  s.insert(4);//��4���ѹ�
						  Ex_counter=0;
                          timebar_y=360;
						  Level4_counter=0;
						   row=rand()%10+1;
				          column=rand()%10+1;
				          random_letter=rand()%26;//�����ֵ���ĸ��ֻ����һ�ε���ĸ ҪѰ�ҵ���ĸ
				   for(int i=0;i<=9;i++)
					 for(int j=0;j<=9;j++)
					 {
					    letter=rand()%26;
						if(letter==random_letter&&letter!=25)
						letter+=1;//ʹ��letter���ǲ����ֵ���ĸ
						if(letter==25)
						letter-=1;//�����ĸ����z�������һ
						 if(!(i==row&&j==column))
						 b[i][j]=letter;
					 }
                     game_state=106;///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////��4�ظ��Բ���
				     zoom_flag=false;
				     level4_board=true;
					 Level4_counter=0;
					 Level4_state=0;
					 flag_level4_start=false;
					 //Level5_state=0;//����ص�һҳ�Ի�
				     InvalidateRect(hWnd,NULL,true);			   							  						  						
				   }
					  else
					  {					    				    
						 MessageBox(hWnd,L"�����Ŀ���Ʒ��~",L"ʧ��",MB_OK);                   
						 timebar_y=360;
						 Level4_counter=0;
						 Level4_state=0;
						 flag_level4_start=false;
						 level4_board=false;
						 zoom_flag=false;
					  }
				   				  
				  }
			  }
         
			}         

             if(game_state==10)//�����
			{ 
				   RECT r_returnMenu={28,47,102,78};
				   if(PtInRect(&r_returnMenu,p1))//�ص����˵�
				   {
						if( IDYES==MessageBox(hWnd,L"ȷ���ص����˵�ô��������Ҫ�㣡��",L"����~",MB_YESNO))
					   {					    				        					   	         					
							 Lv5_whql_animation_done=false;
							 roll_x=600;
							 roll_x1=600;
							 whql_x=-320;
							 whql_x1=-20;
							 Lv5_counter_whql=0;
							 game_state=0;
							 Lv5_dialog1=false;
							 Level5_state=0;
							 Level5_Picture=false;
							 Level5_final_animation=false;
							 Level5_Motto=0;
							 Level5_Motto_done=false;//7��ë����д���ı�־����
							 PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����	
							 InvalidateRect(hWnd,NULL,true);
					   }				
				   }		   						
				  if(Level5_state==0&&Lv5_dialog1==true)//��һҳ����������
				  {			     
					Level5_state=1;//����ڶ�ҳ�Ի�
					
				  }

				  else  if(Level5_state==1)//�ڶ�ҳѡ�����,else if��������Ⱑ��������if�������ͬʱ����2���¼�
				  {
					  RECT r_same={400,700,450,720};
					  RECT r_notsame={460,700,530,720};
					  if(PtInRect(&r_same,p1))
					  {
					     MessageBox(hWnd,L"��������ȥ�Ͳ�һ������˵һ��������ʵ�ĺ��ӣ�",L"Υ�Ļ�",MB_OK);
					  }
					   if(PtInRect(&r_notsame,p1))
					  {					     
						 MessageBox(hWnd,L"A��B����ɫ��ʵ��һ���ģ��ǲ��Ǿ��ú������أ�",L"����˼��",MB_OK);
						 Level5_state=2;//����ҳ�Ի�
					  }				  				  
				  }
				  else  if(Level5_state==2)//��3ҳ�����ť����
				  {
					  RECT r_button={540,706,770,736};
					  if(PtInRect(&r_button,p1))
					  {
					    Level5_Picture=!Level5_Picture;//����ͱ�һ��
						Level5_state=3;
					  }				  				  
				  }
				  else  if(Level5_state==3)//��4ҳ����
				  {
				      RECT r_button={540,706,770,736};
					  RECT r_NextArrow={320,700,360,740};//��ͷ����ȥ��һҳ
					  if(PtInRect(&r_button,p1))
					  {
					    Level5_Picture=!Level5_Picture;//����ͱ�һ��
						Level5_state=2;
					  }
					  if(PtInRect(&r_NextArrow,p1))
					  {
					    Level5_state=4;//��5ҳ
					  }

				  }
				  else if(Level5_state==4)
				  {
				     Level5_state=5;//��6ҳ����	
					 Level5_final_animation=true;//���һҳ�������ű�־����,��ʼ�������ն���������ͶԻ����˳�
					 Lv5_counter_whql=0;//��Ӽ�ʱ������
					 roll_x1=0;	
					
				  }
				  else if(Level5_state==5)//���һҳ����
				  {				  
				   if(Level5_Motto_done==true)
					 {
					
						 game_state=11;/////////////////////////////////////////���������prelude���ֱ�������
						 memset(grid_letter,'  ',sizeof(grid_letter));//��ʼ�����������ַ��� �ո�
						 grid_letter[2][0]=grid_letter[7][0]=grid_letter[4][1]=grid_letter[9][1]=grid_letter[1][2]=grid_letter[8][2]=grid_letter[0][3]=grid_letter[1][3]=grid_letter[4][3]=grid_letter[5][3]=grid_letter[6][3]=
						 grid_letter[2][4]=grid_letter[4][4]=grid_letter[7][4]=grid_letter[9][4]=grid_letter[0][5]=grid_letter[2][5]=grid_letter[6][5]=grid_letter[0][6]=grid_letter[3][6]=grid_letter[1][7]=
						 grid_letter[3][7]=grid_letter[6][7]=grid_letter[8][7]=L'0'; grid_letter[3][2]=L'0'; grid_letter[5][6]=L'0'; grid_letter[1][8]=L'0'; grid_letter[5][8]=L'0';
						  grid_letter[3][9]=L'0'; grid_letter[7][9]=L'0'; grid_letter[8][9]=L'0';
						 Level6_counter=0;
						 Level5_Motto_done=false;
						 whql_x1=-20;
						 roll_x=600;
						 roll_x1=600;
						 whql_x=-320;
						 whql_x1=-20;
						 Lv5_counter_whql=0;
						 Lv5_dialog1=false;
						 Level5_Picture=false;
						 Level5_Motto=0;
						 Level5_state=0;//������
						 Level5_final_animation=false;//���һҳ�������ű�־����,��ʼ�������ն���������ͶԻ����˳�
						 start_level6_pre=clock();//prelude ��ʼ��ʱ
						 j=0;
						 InvalidateRect(hWnd,NULL,true);
					 }				  
				  
				  }
			 

			 }
			 if(game_state==12)//��6��
			 {
				 RECT r_return={26,594,104,629};//�ص����˵�
				 RECT r_shixiang={420,550,520,650};//���ʮ����ֶԻ���
				 if(PtInRect(&r_return,p1))
				 {
				    if(IDYES==MessageBox(hWnd,L"ȷ���ص����˵�ô��������Ҫ�㣡��",L"����~",MB_YESNO))
					{
						game_state=0;
						 memset(grid_letter,'  ',sizeof(grid_letter));//��ʼ�����������ַ��� �ո�
						 grid_letter[2][0]=grid_letter[7][0]=grid_letter[4][1]=grid_letter[9][1]=grid_letter[1][2]=grid_letter[8][2]=grid_letter[0][3]=grid_letter[1][3]=grid_letter[4][3]=grid_letter[5][3]=grid_letter[6][3]=
						 grid_letter[2][4]=grid_letter[4][4]=grid_letter[7][4]=grid_letter[9][4]=grid_letter[0][5]=grid_letter[2][5]=grid_letter[6][5]=grid_letter[0][6]=grid_letter[3][6]=grid_letter[1][7]=
						 grid_letter[3][7]=grid_letter[6][7]=grid_letter[8][7]=L'0'; grid_letter[3][2]=L'0'; grid_letter[5][6]=L'0'; grid_letter[1][8]=L'0'; grid_letter[5][8]=L'0';
						  grid_letter[3][9]=L'0'; grid_letter[7][9]=L'0'; grid_letter[8][9]=L'0';
						PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����
						Level6_counter=0;
						right1=true;
					}
				 
				 
				 }
				 if(PtInRect(&r_shixiang,p1))
				 {
				    
					 hHook=SetWindowsHookEx(WH_CBT,(HOOKPROC)CBTHookProc,hInst,NULL);  
					 MessageBox(hWnd,L"ҹ����ʮ��: ���뽴ֻ��Ҫ������ƶ�����Ҫ���ֵķ�����,Ȼ���ٰ��¼���,�����Ӧ������ƴ������ĸ������~ ע�����һ������(����һ��)�����������ʽ ����KD ���뽴��Ҫ�ֱ������ƶ��� �� �� �ӵķ������ٷֱ���D��Z�����ܵõ� ���ӿƴ� �Ľ��Ŷ~ ʮ��Ƚ��������������Сbug�Ͳ��޸���",L"����ʮ�����ܰ��ʾ",MB_OK);				 				 				 
				 }
			 
			 }
			 if(game_state==14)//���߹�
			 {
				RECT r_returnMenu={28,556,80,588};				
				if(click_start==false)
				 if(PtInRect(&r_returnMenu,p1))
				 {
				     if(IDYES==MessageBox(hWnd,L"ȷ���ص����˵�ô��������Ҫ�㣡��",L"����~",MB_YESNO))
					 {
				        click_start=false;
						game_state=0;
						lv7_death=0;//����������
						lv7_win=false;
						pad_x=250,pad_y=700;//���߹��µ������Ͻ�����
                        uppad_x=250,uppad_y=60;//���߹��ϵ������Ͻ�����
					    for(int i=0;i<=11;i++)
		                 for(int j=0;j<=11;j++)
		                 {
							if(i%2==0&&j%2==0)
							brick_grid[i][j]=1;//��ש��
							else
							brick_grid[i][j]=0;
		                  }
					    PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����
					 }
				 }
				 else 
				 {
			         click_start=true;
				 }

			 }
			 
			if(game_state==16)//�ڰ˹�
			{
			  RECT r_returnMenu={28,556-525,80,588-525};
			  RECT r_board={90,90,510,510};//���������
			  if(PtInRect(&r_returnMenu,p1))
				 {
				     if(IDYES==MessageBox(hWnd,L"ȷ���ص����˵�ô��������Ҫ�㣡��",L"����~",MB_YESNO))
					 {				        
						game_state=0;
						for(int i=0;i<17;i++)//���̾�������
							for(int j=0;j<17;j++)
								level8_board[i][j]=0;
						IsDraw=false;
						level8_chess_counter=0;
						level8_counter=0;
					    PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����
					 }
				 }
			  RECT r_lv1={306,693,410,710};//ѡ��С������
			  RECT r_lv2={306,710,410,726};
			  RECT r_lv3={306,727,410,742};
			 
			  if(level8_state==0)
			  {
			  if(PtInRect(&r_lv1,p1))
				  {
					  if(MessageBox(hWnd,L"           ��   ��� �� ������ս\n           ��   ��� �� ������ս",L"FIGHT!",MB_YESNO)==IDYES)
					      level8_state=1;//��һС��
			      }
			  if(PtInRect(&r_lv2,p1))
				  {
					 if(MessageBox(hWnd,L"           ��   ��� �� ������ս\n           ��   ��� �� ������ս",L"FIGHT!",MB_YESNO)==IDYES)
					  level8_state=2;//��2С��
			      }
			  if(PtInRect(&r_lv3,p1))
				 {
					  if(MessageBox(hWnd,L"           ��   ��� �� ������ս\n           ��   ��� �� ������ս",L"FIGHT!",MB_YESNO)==IDYES)
					 level8_state=3;//��3С��
			     }
			  }
			 if(level8_state==0)
			 {
			    if(PtInRect(&r_board,p1))
					MessageBox(hWnd,L"�������·�ѡ��Ҫ��ս�Ĺؿ�~",L"Action Forbidden",MB_OK);			 
			 }
			  
			  if(level8_state!=0)//����ڰ˹ز��ڳ�ʼ״̬�£�Ҳ���ǿ�ʼ�˹ؿ���ս
			{
			  if(PtInRect(&r_board,p1))//�������������������ڣ��Ż�����
			  {
			     
				 if(level8_state==2&&level8_board[level8_row][level8_column]==0)
				 {
				     level8_lv2_stepcounter++;//������һ
				 }
				 level8_row = (p1.x-87)/25;//ת����Ļ�����ȡ��������
				 level8_column = (p1.y-87)/25;
				 if(level8_board[level8_row][level8_column]!=0)//����õ��Ѿ���������
					 MessageBox(hWnd,L"�˴�����������~",L"TAT",MB_OK);
				 else
				     {
						 if(level8_state==3)
						 {
						    level8_timebar=161;
			                level8_lv1_counter=0;
						 }
						 level8_chess_counter++;//�������������һ
						 level8_board[level8_row][level8_column]=1;//1��ʾ���µİ����ӣ�2��ʾ�����µĺ����ӣ�0��ʾû������,�����̾���Ķ�Ӧ����
				         //��������
						 if(level8_chess_counter==1)//����ߵĵ�һ���壬����,Ŀ����Ϊ���õ����������м��һ��������Χ,����Ҫ����
						 {
						    int delta_row=rand()%3;
							int delta_column=rand()%3;
												
							if(delta_row==1&&delta_column==1)
							{
							   delta_row=0;
							   delta_column=0;
							}
							level8_board[7+delta_row][7+delta_column]=2;

						 
						 }
						 else
						 Level8_AI();
						
				     }//end if
			  }
			 
			}//end level8_state!=0
			
		}//end game_state==16
		   if(game_state==18)//�ھŹ�
		   {
			   RECT r_return = {57,723,121,746};
			   RECT r_info = {215,725,283,746};
			   if(PtInRect(&r_return,p1))
			   {
		           if(IDYES==MessageBox(hWnd,L"ȷ���ص����˵�ô��������Ҫ�㣡��",L"����~",MB_YESNO))
					 {				        
						game_state=0;
						//��������
					    PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//�л����ŵ�����
					 }
			   }
			   if(PtInRect(&r_info,p1))
			   {
			       MessageBox(hWnd,L"�ںڰ���ǰ�У������ս�����",L"��Ϸ����",MB_OK);
			   }
		   
		   }

		   if(game_state==-1)//����ǰԵ
		   {
			  RECT r_returnMenu={20,86,100,112};
			  RECT r_folder = {200,325,400,480};
			  if(PtInRect(&r_returnMenu,p1))
			   {
			       game_state=0;
				   InvalidateRect(hWnd,NULL,true);				 		   
			   }
			  if(PtInRect(&r_folder,p1)&&IsLoad==false)
			  {
			    TCHAR filename[MAX_PATH]=L"save";//�����ļ���
				TCHAR strDefExt[]=L"dat";//Ĭ����չ��
				OPENFILENAME of={sizeof(OPENFILENAME)};//�����ṹ��,����ָ�����Ĵ�С�����򲻻ᵯ���Ի���ģ���һ�����Ҫ
				of.lpstrDefExt = strDefExt;
				of.hwndOwner = hWnd;
				of.hInstance = hInst;
				of.lpstrFilter = L"�ѹ��ؿ�(*.dat)\0";//������������ʽ�Ĳ���Ч
				of.nFilterIndex = 1;
				of.lpstrFile = filename;
				of.lpstrFile[0] = '\0'; 
				of.nMaxFile = MAX_PATH;
				of.nMaxFileTitle = MAX_PATH;
				of.Flags = OFN_PATHMUSTEXIST|OFN_FILEMUSTEXIST|OFN_HIDEREADONLY;
				if(GetOpenFileName(&of)==true)//���ȷ����ť
				{				 
				    s.clear();//�������ͼ��,����empty()
				    HANDLE hFile = CreateFile(
						filename,
					    GENERIC_READ,
						0,
						NULL,
						OPEN_EXISTING,
						FILE_ATTRIBUTE_NORMAL,
						NULL						
						);
					while(true)
					{
					   int temp;
					   DWORD bytesRead;//ʵ�ʶ������ֽ���
					   ReadFile(hFile,&temp,sizeof(int),&bytesRead,NULL);
					   if(bytesRead == 0) break;
					   s.insert(temp);
					
					}
					CloseHandle(hFile);
					IsLoad =true;//�Ѿ��������ļ�
				}
			  
			  
			  }

		   }
		   if(game_state==-2)//��ͼ���ͽ���
		   {
			  RECT activate_bar={250,754,350,770};//��˼������
			  RECT deactivate_bar={250,695,350,713};//��˹رչ�����
			  if(moe_bar==false)
			  {
				  if(PtInRect(&activate_bar,p1))
				  {
					 moe_bar=true;
				  }
			  }
			  else
			  {
					if(PtInRect(&deactivate_bar,p1))
					{
					   moe_bar=false;
					}
			  
			  }

			  RECT r_returnMenu={303,720,358,765};//�ص����˵�
			  RECT r_back={186,720,235,765};//���˼�ͷ
			  RECT r_forward={244,720,296,765};//ǰ����ͷ
			  RECT r_info={364,721,415,765};//������Ϣ
			  if(PtInRect(&r_returnMenu,p1)&&moe_bar==true)
			  {
			     game_state=0;
				 moe_bar=false;
				 InvalidateRect(hWnd,NULL,true);			
			  }
			  if(PtInRect(&r_back,p1)&&moe_bar==true)
			  {
			     --moePicture_i;
				 if(moePicture_i<0)
					 moePicture_i=7;
				 for(int i=0;i<8;i++)
					 mp[i]=false;
				 InvalidateRect(hWnd,NULL,true);			  
			  }
			   if(PtInRect(&r_forward,p1)&&moe_bar==true)
			  {
			     ++moePicture_i;
				 if(moePicture_i>7)
					 moePicture_i=0;
				  for(int i=0;i<8;i++)
					 mp[i]=false;
				 InvalidateRect(hWnd,NULL,true);			  
			  }
			   if(PtInRect(&r_info,p1)&&moe_bar==true&&mp[moePicture_i]==false)
			   {
			       mp[moePicture_i]=true;//��ǰ��Ϊ��			   			   
			   }
			   else if(PtInRect(&r_info,p1)&&moe_bar==true&&mp[moePicture_i]==true)
			   {
			       mp[moePicture_i]=false;//��ǰ��Ϊ�� 		
			   }
		   }
        
		   if(game_state==-3)//��Ϸ��Ϣ����
		  {
		     RECT r_returnMenu={28,556,80,588};			  
			 if(PtInRect(&r_returnMenu,p1))
			  {
			     game_state=0;
				 InvalidateRect(hWnd,NULL,true);			
			  }
		  
		  }
		//���йض���
		   if(PtInRect(&rect,p1)&&game_state!=8&&game_state!=16&&game_state!=18)//�ж����ֺ���,����Ƿ��ھ����ڵĺ���,��4�س���
		   {
		      music_state=1-music_state;
		      if(music_state==1)
			     { 
					 if(game_state==0||game_state==-1||game_state==-2||game_state==-3)
					       PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
					  else
						   { 
							   PlaySound(0,0,0);
							   PlaySound((LPCTSTR)IDR_WAVE1,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
					       }
			     }
		      else
			      PlaySound(0,0,0);
		    InvalidateRect(hWnd,&rect,false);
		   }
		   RECT r_level8={12,140,76,204};  
		   RECT r_level16={500,800-128+12,564,800-128+12+64};
		   if(game_state==8)
		   {
			   if(PtInRect(&r_level8,p1))//��4��ͼ��λ�øı���
			   {		   
				music_state=1-music_state;
				  if(music_state==1)
					  {
						  if(game_state==0||game_state==-1||game_state==-2||game_state==-3)
							   PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
						  else
							   {
								   PlaySound(0,0,0);							   
								   PlaySound((LPCTSTR)IDR_WAVE1,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
							   }
					  }
				  else
					 {
					  PlaySound(0,0,0);
					 }
				InvalidateRect(hWnd,&r_level8,false);
		   
			   }
		   }		 
		   else if(game_state==16)
		   {
		       if(PtInRect(&r_level16,p1))//��8��ͼ��λ�øı���
			   {		   
				music_state=1-music_state;
				  if(music_state==1)
					  {
						  if(game_state==0||game_state==-1||game_state==-2||game_state==-3)
							   PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
						  else
							   {
								   PlaySound(0,0,0);							   
								   PlaySound((LPCTSTR)IDR_WAVE1,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
							   }
					  }
				  else
					 {
					  PlaySound(0,0,0);
					 }
				InvalidateRect(hWnd,&r_level8,false);
			   }
		   
		   
		   }
		   else if(game_state==18)
		   {
			   RECT r_music = {132,723,206,746};
			    if(PtInRect(&r_music,p1))//��8��ͼ��λ�øı���
			   {		   
				music_state=1-music_state;
				  if(music_state==1)
					  {
						  if(game_state==0||game_state==-1||game_state==-2||game_state==-3)
							   PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
						  else
							   {
								   PlaySound(0,0,0);							   
								   PlaySound((LPCTSTR)IDR_WAVE1,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
							   }
					  }
				  else
					 {
					  PlaySound(0,0,0);
					 }
			   }
		   
		   
		   }
		  break;
		}
	case WM_COMMAND:
		wmId    = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		// �����˵�ѡ��:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_PAINT:		
		{
		hdc = BeginPaint(hWnd, &ps);		
		Game.GamePaint(hdc);//��Ϸ��ͼ����,��������˸��ֻ�ͼ����
		EndPaint(hWnd, &ps);
		break;
		}
	case WM_DESTROY:
		DeleteDC(hMusicONDC);
		DeleteDC(hMusicOFFDC);
		//ɾȥ����DC
		PostQuitMessage(0);
		break;
	default:
		{						 
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
	}
	return 0;
}

// �����ڡ������Ϣ�������
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}

void Level8_AI()//�ڰ˹ص�������
{
 ///////////////////////����������Ȩ�ر�,switchǧ��������break��䣬�����Ժ�����ȫ��ִ��
	 
//��5, 100��

//��4��˫��4����4��3�� 90��

//˫��3�� 80��

//��3��3�� 70��

//��4�� 60��

//˫��4   0��

//��3�� 50��

//˫��2�� 40��

//��3�� 30��

//��2�� 20��

//��2�� 10��

//���� 0��

//level8_Ai[][][4],����0��ʾ�ᣬ1��ʾ����2��ʾ��б��3��ʾ��б
	for(int i=0;i<17;i++)
		for(int j=0;j<17;j++)
			for(int k=0;k<4;k++)
			{
			  level8_Ai[i][j][k]=0;
			  level8_player[i][j][k]=0;
			}
	
	for(int i=0;i<17;i++)//������������,Ŀ���Ǹ�ÿһ������Ȩֵ��
		for(int j=0;j<17;j++)
		{
		   if(level8_board[i][j]==0)//������������һ���հ׵�ʱ��Ȼ��Ҫ��������������б��б������в���
			{
				///////���ж�AI�������λ��ʱ�ķ�ֵ���,��һ��ע�⣺�������£�����ͬ�������(��һ�������2��һ�������2)���������ߺ����2����ֹ����
				//�жϸõ���������
				int total_hen=0;//��������������				
				int sum_left=0;
				int sum_right=0;
				int temp_left=i;
				int temp_right=i;
				bool dielive_right;//�����ж��������
				bool dielive_left;
				while(1)
				{
				   if(level8_board[temp_left-1][j]==2)//����ǵ����µĺ���
				   {
				      sum_left+=level8_board[temp_left-1][j];
					  temp_left--;//������Ѱ
				   }
				   else
					   {
						   if(level8_board[temp_left-1][j]==0)//Ϊ�հ״���û������
							   dielive_left=true;
						   else 
							   dielive_left=false;
						   break;//����ѭ��
				       }
				}
				total_hen+=sum_left;
				//�жϸõ����ҵ����
				while(1)
				{
				   if(level8_board[temp_right+1][j]==2)//����ǵ����µĺ���
				   {
				      sum_right+=level8_board[temp_right+1][j];
					  temp_right++;//������Ѱ
				   }
				   else
					   {
						   if(level8_board[temp_right+1][j]==0)//Ϊ�հ״���û������
							   dielive_right=true;//�� ����
						   else 
							   dielive_right=false;
						   break;//����ѭ��	
				       }
				}
				total_hen+=sum_right;
				total_hen+=2;//���ϱ����˴�Ҫ�µ�����ֵ2
				switch(total_hen)//�жϺ�����������
				{
				 case 2://����
					 level8_Ai[i][j][0]=0;
					 break;
				 case 4://��2���߻�2
					 {
					        //��2
                        if(dielive_left==true&&dielive_right==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][0]=25;//�����2 ȨֵҪ��һЩ,��ԭ����5
						else//��2
							level8_Ai[i][j][0]=10;	
						break;
					 }
				 case 6://��3���߻�3
					 {
					        //��3
						if(dielive_left==true&&dielive_right==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][0]=55;//�����3 ȨֵҪ��һЩ,��ԭ����5
						else//��3
							level8_Ai[i][j][0]=30;	
						break;
					 }
				 case 8://��4������4
					 {
					    //��4
						if(dielive_left==true&&dielive_right==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][0]=95;
						else//��4
						{
							if(dielive_left==false&&dielive_right==false)
							    level8_Ai[i][j][0]=0;//˫��4 Ϊ0��
							else
								level8_Ai[i][j][0]=60;
						}
						break;
					 }
				 case 10://��5
					 {
					    level8_Ai[i][j][0]=100;	//�����5�Ļ�Ҫ�Ȱ����5����
						break;
					 }
               			    				
				}
				
				///////////�жϸõ����Ϻ����µ����
				int total_shu=0;//��������������				
				int sum_up=0;
				int sum_down=0;
				int temp_up=j;
				int temp_down=j;
				bool dielive_up;//�����ж��������
				bool dielive_down;
				while(1)
				{
				   if(level8_board[i][temp_up-1]==2)//����ǵ����µĺ���
				   {
				      sum_up+=level8_board[i][temp_up-1];
					  temp_up--;//������Ѱ
				   }
				   else
					   {
						   if(level8_board[i][temp_up-1]==0)//Ϊ�հ״���û������
							   dielive_up=true;
						   else 
							   dielive_up=false;
						   break;//����ѭ��
				       }
				}
				total_shu+=sum_up;
				//�жϸõ����µ����
				while(1)
				{
				   if(level8_board[i][temp_down+1]==2)//����ǵ����µĺ���
				   {
				      sum_down+=level8_board[i][temp_down+1];
					  temp_down++;//������Ѱ
				   }
				   else
					   {
						   if(level8_board[i][temp_down+1]==0)//Ϊ�հ״���û������
							   dielive_down=true;//�� ����
						   else 
							   dielive_down=false;
						   break;//����ѭ��	
				       }
				}
				total_shu+=sum_down;
				total_shu+=2;//���ϱ����˴�Ҫ�µ�����ֵ2
				switch(total_shu)//�ж�������������
				{
				 case 2://����
					 level8_Ai[i][j][1]=0;
					 break;
				 case 4://��2���߻�2
					 {
					        //��2
                        if(dielive_up==true&&dielive_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][1]=25;
						else//��2
							level8_Ai[i][j][1]=10;	
						break;
					 }
				 case 6://��3���߻�3
					 {
					        //��3
						if(dielive_up==true&&dielive_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][1]=55;
						else//��3
							level8_Ai[i][j][1]=30;
						break;
					 }
				 case 8://��4������4
					 {
					    //��4
						if(dielive_up==true&&dielive_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][1]=95;
						else//��4
							{
								if(dielive_up==false&&dielive_down==false)
								    level8_Ai[i][j][1]=0;
								else
									level8_Ai[i][j][1]=60;
						    }
						break;
					 }
				 case 10://��5
					 {
					    level8_Ai[i][j][1]=100;
						break;
					 }
               			    				
				}
				///////////�жϸõ���б���
				int total_youxie=0;//��������������				
				int sum_youxie_up=0;
				int sum_youxie_down=0;
				int temp_youxie_upj=j;//ÿ��������2������
				int temp_youxie_upi=i;
				int temp_youxie_downj=j;
				int temp_youxie_downi=i;
				bool dielive_youxie_up;//�����ж��������
				bool dielive_youxie_down;
				while(1)
				{  //��б��
				   if(level8_board[temp_youxie_upi-1][temp_youxie_upj+1]==2)//����ǵ����µĺ���
				   {
				      sum_youxie_up+=level8_board[temp_youxie_upi-1][temp_youxie_upj+1];
					  temp_youxie_upi--;//������Ѱ
					  temp_youxie_upj++;
				   }
				   else
					   {
						   if(level8_board[temp_youxie_upi-1][temp_youxie_upj+1]==0)//Ϊ�հ״���û������
							   dielive_youxie_up=true;
						   else 
							   dielive_youxie_up=false;
						   break;//����ѭ��
				       }
				}
			   total_youxie+=sum_youxie_up;
			   	while(1)
				{  //��б��
				   if(level8_board[temp_youxie_downi+1][temp_youxie_downj-1]==2)//����ǵ����µĺ���
				   {
				      sum_youxie_down+=level8_board[temp_youxie_downi+1][temp_youxie_downj-1];
					  temp_youxie_downi++;//������Ѱ
					  temp_youxie_downj--;
				   }
				   else
					   {
						   if(level8_board[temp_youxie_downi+1][temp_youxie_downj-1]==0)//Ϊ�հ״���û������
							   dielive_youxie_down=true;
						   else 
							   dielive_youxie_down=false;
						      
						   break;//����ѭ��
				       }
				}
				total_youxie+=sum_youxie_down;
				total_youxie+=2;
				switch(total_youxie)//�ж�б����������
				{
				 case 2://����
					 level8_Ai[i][j][2]=0;
					 break;
				 case 4://��2���߻�2
					 {
					        //��2
                        if(dielive_youxie_up==true&&dielive_youxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][2]=25;
						else//��2
							level8_Ai[i][j][2]=10;	
						break;
					 }
				 case 6://��3���߻�3
					 {
					        //��3
						if(dielive_youxie_up==true&&dielive_youxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][2]=55;
						else//��3
							level8_Ai[i][j][2]=30;	
						break;
					 }
				 case 8://��4������4
					 {
					    //��4
						if(dielive_youxie_up==true&&dielive_youxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][2]=95;
						else//��4
						{
							if(dielive_youxie_up==false&&dielive_youxie_down==false)
							  level8_Ai[i][j][2]=0;//˫��4
							else
                              level8_Ai[i][j][2]=60;
						}
						break;
					 }
				 case 10://��5
					 {
					    level8_Ai[i][j][2]=100;	
						break;
					 }
               			    				
				}
			   /////////////�жϸõ���б���
				int total_zuoxie=0;//��������������				
				int sum_zuoxie_up=0;
				int sum_zuoxie_down=0;
				int temp_zuoxie_upj=j;//ÿ��������2������
				int temp_zuoxie_upi=i;
				int temp_zuoxie_downj=j;
				int temp_zuoxie_downi=i;
				bool dielive_zuoxie_up;//�����ж��������
				bool dielive_zuoxie_down;
				while(1)
				{  //��б��
				   if(level8_board[temp_zuoxie_downi+1][temp_zuoxie_downj+1]==2)//����ǵ����µĺ���
				   {
				      sum_zuoxie_down+=level8_board[temp_zuoxie_downi+1][temp_zuoxie_downj+1];
					  temp_zuoxie_downi++;//������Ѱ
					  temp_zuoxie_downj++;
				   }
				   else
					   {
						   if(level8_board[temp_zuoxie_downi+1][temp_zuoxie_downj+1]==0)//Ϊ�հ״���û������
							   dielive_zuoxie_down=true;
						   else 
							   dielive_zuoxie_down=false;
						   break;//����ѭ��
				       }
				}
				total_zuoxie+=sum_zuoxie_down;
				while(1)
				{  //��б��
				   if(level8_board[temp_zuoxie_upi-1][temp_zuoxie_upj-1]==2)//����ǵ����µĺ���
				   {
				      sum_zuoxie_up+=level8_board[temp_zuoxie_upi-1][temp_zuoxie_upj-1];
					  temp_zuoxie_upi--;//������Ѱ
					  temp_zuoxie_upj--;
				   }
				   else
					   {
						   if(level8_board[temp_zuoxie_upi-1][temp_zuoxie_upj-1]==0)//Ϊ�հ״���û������
							   dielive_zuoxie_up=true;
						   else 
							   dielive_zuoxie_up=false;
						   break;//����ѭ��
				       }
				}
				total_zuoxie+=sum_zuoxie_up;
				total_zuoxie+=2;
				switch(total_zuoxie)//�ж�б����������,����AI�ж����һ��ڴ�Ҫ����˫��3����3��3�����жϣ���ֵ�Ƚϸ�һЩ
				{
				 case 2://����
					 level8_Ai[i][j][3]=0;
					 break;
				 case 4://��2���߻�2
					 {
					        //��2
                        if(dielive_zuoxie_up==true&&dielive_zuoxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][3]=25;
						else//��2
							level8_Ai[i][j][3]=10;	
						break;
					 }
				 case 6://��3���߻�3
					 {
					        //��3
						if(dielive_zuoxie_up==true&&dielive_zuoxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][3]=55;
						else//��3
							level8_Ai[i][j][3]=30;	
						break;
					 }
				 case 8://��4������4
					 {
					    //��4
						if(dielive_zuoxie_up==true&&dielive_zuoxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_Ai[i][j][3]=95;
						else//��4
							{
								if(dielive_zuoxie_up==false&&dielive_zuoxie_down==false)
								    level8_Ai[i][j][3]=0;
								else
									level8_Ai[i][j][3]=60;
						    }
						break;
					 }
				 case 10://��5
					 {
					    level8_Ai[i][j][3]=100;	
						break;
					 }
               			    				
				}
				//�жϵ��Ժ����˫��2, 52�֣�Ҫ���ڰ���Ļ�3��50�֣������Ժ����3Ϊ55��
				int shuanghuo2=0;
				for(int l=0;l<4;l++)
				{
				  if(level8_Ai[i][j][l]==25)
					  shuanghuo2++;
				}
				if(shuanghuo2==2)
					level8_Ai[i][j][0]=52;
				
				//�ж��Ƿ�����3��3��70��  ���ж�������3 ����Ϊ����Ȩֵ��˫��3С
				bool sisan=false;
				bool huosan=false;
				for(int n=0;n<4;n++)
				{
				   if(level8_Ai[i][j][n]==55)
					   huosan=true;
				   if(level8_Ai[i][j][n]==30)
					   sisan=true;				
				}
				if(sisan==true&&huosan==true)
					level8_Ai[i][j][0]=70;//������3Ȩֵ70
				//�ж��Ƿ���˫��3 ,80��
				int shuanghuo3=0;
				for(int m=0;m<4;m++)
				{
				  if(level8_Ai[i][j][m]==55)//���һ������Ϊ��3
					  shuanghuo3++;
				}
				if(shuanghuo3==2)
					level8_Ai[i][j][0]=80;//˫��3Ȩ��Ϊ80
				//�ж��Ƿ�����4��3 90��
				bool sisi=false;
				bool huosan1=false;
				for(int p=0;p<4;p++)
				{
				  if(level8_Ai[i][j][p]==60)
					  sisi=true;
				  if(level8_Ai[i][j][p]==55)
					  huosan1=true;				
				}
				if(sisi==true&&huosan1==true)
					level8_Ai[i][j][0]=90;
				//�ж��Ƿ�Ϊ˫��4�����Ժ����96�֣�Ҫ���ڵ��Ե���4��95�֣����ڰ����5��98��
				//˫��4�ֶ������

				///////////////////////////////////////////////////////////////////////////////////���ж�PLAYER�������λ��ʱ�ķ�ֵ���
				//�жϸõ���������
				int ptotal_hen=0;//��������������				
				int psum_left=0;
				int psum_right=0;
				int ptemp_left=i;
				int ptemp_right=i;
				bool pdielive_right;//�����ж��������
				bool pdielive_left;
				while(1)
				{
				   if(level8_board[ptemp_left-1][j]==1)//���������µİ��壬��1��ʾ
				   {
				      psum_left+=level8_board[ptemp_left-1][j];
					  ptemp_left--;//������Ѱ
				   }
				   else
					   {
						   if(level8_board[ptemp_left-1][j]==0)//Ϊ�հ״���û������
							   pdielive_left=true;
						   else 
							   pdielive_left=false;
						   break;//����ѭ��
				       }
				}
				ptotal_hen+=psum_left;
				//�жϸõ����ҵ����
				while(1)
				{
				   if(level8_board[ptemp_right+1][j]==1)//������˵İ���
				   {
				      psum_right+=level8_board[ptemp_right+1][j];
					  ptemp_right++;//������Ѱ
				   }
				   else
					   {
						   if(level8_board[ptemp_right+1][j]==0)//Ϊ�հ״���û������
							   pdielive_right=true;//�� ����
						   else 
							   pdielive_right=false;
						   break;//����ѭ��	
				       }
				}
				ptotal_hen+=psum_right;
				ptotal_hen+=1;//���ϱ����˴�Ҫ�µ�����ֵ1
				switch(ptotal_hen)//�жϺ�����������
				{
				 case 1://����
					 level8_player[i][j][0]=0;
					 break;
				 case 2://��2���߻�2
					 {
					        //��2
                        if(pdielive_left==true&&pdielive_right==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][0]=20;
						else//��2
							level8_player[i][j][0]=10;	
						break;
					 }
				 case 3://��3���߻�3
					 {
					        //��3
						if(pdielive_left==true&&pdielive_right==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][0]=50;
						else//��3
							level8_player[i][j][0]=30;	
						break;
					 }
				 case 4://��4������4
					 {
					    //��4
						if(pdielive_left==true&&pdielive_right==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][0]=90;
						else//��4
							level8_player[i][j][0]=60;
						break;
					 }
				 case 5://��5
					 {
					    level8_player[i][j][0]=98;	//�����5����ֵҪ���ں������
						break;
					 }
               			    				
				}
				///////////�жϸõ����Ϻ����µ����
				int ptotal_shu=0;//��������������				
				int psum_up=0;
				int psum_down=0;
				int ptemp_up=j;
				int ptemp_down=j;
				bool pdielive_up;//�����ж��������
				bool pdielive_down;
				while(1)
				{
				   if(level8_board[i][ptemp_up-1]==1)//�������Ұ���
				   {
				      psum_up+=level8_board[i][ptemp_up-1];
					  ptemp_up--;//������Ѱ
				   }
				   else
					   {
						   if(level8_board[i][ptemp_up-1]==0)//Ϊ�հ״���û������
							   pdielive_up=true;
						   else 
							   pdielive_up=false;
						   break;//����ѭ��
				       }
				}
				ptotal_shu+=psum_up;
				//�жϸõ����µ����
				while(1)
				{
				   if(level8_board[i][ptemp_down+1]==1)//�������Ұ���
				   {
				      psum_down+=level8_board[i][ptemp_down+1];
					  ptemp_down++;//������Ѱ
				   }
				   else
					   {
						   if(level8_board[i][ptemp_down+1]==0)//Ϊ�հ״���û������
							   pdielive_down=true;//�� ����
						   else 
							   pdielive_down=false;
						   break;//����ѭ��	
				       }
				}
				ptotal_shu+=psum_down;
				ptotal_shu+=1;//���ϱ����˴�Ҫ�µ�����ֵ2
				switch(ptotal_shu)//�ж�������������
				{
				 case 1://����
					 level8_player[i][j][1]=0;
					 break;
				 case 2://��2���߻�2
					 {
					        //��2
                        if(pdielive_up==true&&pdielive_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][1]=20;
						else//��2
							level8_player[i][j][1]=10;
						break;
					 }
				 case 3://��3���߻�3
					 {
					        //��3
						if(pdielive_up==true&&pdielive_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][1]=50;
						else//��3
							level8_player[i][j][1]=30;	
						break;
					 }
				 case 4://��4������4
					 {
					    //��4
						if(pdielive_up==true&&pdielive_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][1]=90;
						else//��4
							level8_player[i][j][1]=60;	
						break;
					 }
				 case 5://��5
					 {
					    level8_player[i][j][1]=98;	
						break;
					 }			                			    				
				}
				///////////�жϸõ���б���
				int ptotal_youxie=0;//��������������				
				int psum_youxie_up=0;
				int psum_youxie_down=0;
				int ptemp_youxie_upj=j;//ÿ��������2������
				int ptemp_youxie_upi=i;
				int ptemp_youxie_downj=j;
				int ptemp_youxie_downi=i;
				bool pdielive_youxie_up;//�����ж��������
				bool pdielive_youxie_down;
				while(1)
				{  //��б��
				   if(level8_board[ptemp_youxie_upi-1][ptemp_youxie_upj+1]==1)//������˰���
				   {
				      psum_youxie_up+=level8_board[ptemp_youxie_upi-1][ptemp_youxie_upj+1];
					  ptemp_youxie_upi--;//������Ѱ
					  ptemp_youxie_upj++;
				   }
				   else
					   {
						   if(level8_board[ptemp_youxie_upi-1][ptemp_youxie_upj+1]==0)//Ϊ�հ״���û������
							   pdielive_youxie_up=true;
						   else 
							   pdielive_youxie_up=false;
						   break;//����ѭ��
				       }
				}
			   ptotal_youxie+=psum_youxie_up;
			   	while(1)
				{  //��б��
				   if(level8_board[ptemp_youxie_downi+1][ptemp_youxie_downj-1]==1)//����ǵ����µĺ���
				   {
				      psum_youxie_down+=level8_board[ptemp_youxie_downi+1][ptemp_youxie_downj-1];
					  ptemp_youxie_downi++;//������Ѱ
					  ptemp_youxie_downj--;
				   }
				   else
					   {
						   if(level8_board[ptemp_youxie_downi+1][ptemp_youxie_downj-1]==0)//Ϊ�հ״���û������
							   pdielive_youxie_down=true;
						   else 
							   pdielive_youxie_down=false;
						   break;//����ѭ��
				       }
				}
				ptotal_youxie+=psum_youxie_down;
				ptotal_youxie+=1;
				switch(ptotal_youxie)//�ж�б����������
				{
				 case 1://����
					 level8_player[i][j][2]=0;
					 break;
				 case 2://��2���߻�2
					 {
					        //��2
                        if(pdielive_youxie_up==true&&pdielive_youxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][2]=20;
						else//��2
							level8_player[i][j][2]=10;	
						break;
					 }
				 case 3://��3���߻�3
					 {
					        //��3
						if(pdielive_youxie_up==true&&pdielive_youxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][2]=50;
						else//��3
							level8_player[i][j][2]=30;	
						break;
					 }
				 case 4://��4������4
					 {
					    //��4
						if(pdielive_youxie_up==true&&pdielive_youxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][2]=90;
						else//��4
							level8_player[i][j][2]=60;	
						break;
					 }
				 case 5://��5
					 {
					    level8_player[i][j][2]=98;	
						break;
					 }
               			    				
				}
				/////////////�жϸõ���б���
				int ptotal_zuoxie=0;//��������������				
				int psum_zuoxie_up=0;
				int psum_zuoxie_down=0;
				int ptemp_zuoxie_upj=j;//ÿ��������2������
				int ptemp_zuoxie_upi=i;
				int ptemp_zuoxie_downj=j;
				int ptemp_zuoxie_downi=i;
				bool pdielive_zuoxie_up;//�����ж��������
				bool pdielive_zuoxie_down;
				while(1)
				{  //��б��
				   if(level8_board[ptemp_zuoxie_downi+1][ptemp_zuoxie_downj+1]==1)//����ǵ��Ժ���
				   {
				      psum_zuoxie_down+=level8_board[ptemp_zuoxie_downi+1][ptemp_zuoxie_downj+1];
					  ptemp_zuoxie_downi++;//������Ѱ
					  ptemp_zuoxie_downj++;
				   }
				   else
					   {
						   if(level8_board[ptemp_zuoxie_downi+1][ptemp_zuoxie_downj+1]==0)//Ϊ�հ״���û������
							   pdielive_zuoxie_down=true;
						   else 
							   pdielive_zuoxie_down=false;
						   break;//����ѭ��
				       }
				}
				ptotal_zuoxie+=psum_zuoxie_down;
				while(1)
				{  //��б��
				   if(level8_board[ptemp_zuoxie_upi-1][ptemp_zuoxie_upj-1]==1)//����ǵ����µĺ���
				   {
				      psum_zuoxie_up+=level8_board[ptemp_zuoxie_upi-1][ptemp_zuoxie_upj-1];
					  ptemp_zuoxie_upi--;//������Ѱ
					  ptemp_zuoxie_upj--;
				   }
				   else
					   {
						   if(level8_board[ptemp_zuoxie_upi-1][ptemp_zuoxie_upj-1]==0)//Ϊ�հ״���û������
							   pdielive_zuoxie_up=true;
						   else 
							   pdielive_zuoxie_up=false;
						   break;//����ѭ��
				       }
				}
				ptotal_zuoxie+=psum_zuoxie_up;
				ptotal_zuoxie+=1;
				switch(ptotal_zuoxie)//�ж�б����������
				{
				 case 1://����
					 level8_player[i][j][3]=0;
					 break;
				 case 2://��2���߻�2
					 {
					        //��2
                        if(pdielive_zuoxie_up==true&&pdielive_zuoxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][3]=20;
						else//��2
							level8_player[i][j][3]=10;	
						break;
					 }
				 case 3://��3���߻�3
					 {
					        //��3
						if(pdielive_zuoxie_up==true&&pdielive_zuoxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][3]=50;
						else//��3
							level8_player[i][j][3]=30;	
						break;
					 }
				 case 4://��4������4
					 {
					    //��4
						if(pdielive_zuoxie_up==true&&pdielive_zuoxie_down==true)//���Ҷ��ǿհײ��ǻ���
							level8_player[i][j][3]=90;
						else//��4
							level8_player[i][j][3]=60;	
						break;
					 }
				 case 5://��5
					 {
					    level8_player[i][j][3]=98;	
						break;
					 }
               			    				
				}	
				//�ж���Ұ����˫��2,
				int pshuanghuo2=0;
				for(int l=0;l<4;l++)
				{
				  if(level8_player[i][j][l]==20)
					  pshuanghuo2++;
				}
				if(pshuanghuo2==2)
					level8_player[i][j][0]=40;
			   //�ж���������Ƿ�����3��3��70��  ���ж�������3 ����Ϊ����Ȩֵ��˫��3С
				bool psisan=false;
				bool phuosan=false;
				for(int n=0;n<4;n++)
				{
				   if(level8_player[i][j][n]==55)
					   phuosan=true;
				   if(level8_player[i][j][n]==30)
					   psisan=true;				
				}
				if(psisan==true&&phuosan==true)
					level8_player[i][j][0]=68;//������3Ȩֵ68
				//�ж��Ƿ���˫��3 ,80��
				int pshuanghuo3=0;
				for(int m=0;m<4;m++)
				{
				  if(level8_player[i][j][m]==55)//���һ������Ϊ��3
					  pshuanghuo3++;
				}
				if(pshuanghuo3==2)
					level8_player[i][j][0]=78;//˫��3Ȩ��Ϊ78
				//�ж��Ƿ�����4��3 90��
				bool psisi=false;
				bool phuosan1=false;
				for(int p=0;p<4;p++)
				{
				  if(level8_player[i][j][p]==60)
					  psisi=true;
				  if(level8_player[i][j][p]==55)
					  phuosan1=true;				
				}
				if(psisi==true&&phuosan1==true)
					level8_player[i][j][0]=88;//��4��3Ȩֵ88���ȵ���90��2
						
			}
		}
    ///////////////////////////////////////����player��ai�����ҵ�����һ��������
	int max=0,maxi=0,maxj=0;
	for(int i=0;i<17;i++)
		for(int j=0;j<17;j++)
			for(int k=0;k<4;k++)
			{
			  if(level8_board[i][j]==0)//����˴������Ӳ�������
			  {
				if(level8_player[i][j][k]>=max)
				  {
					  max=level8_player[i][j][k];
					  maxi=i;
					  maxj=j;
					  AI_row=i;//��¼�µ��Ե�����
					  AI_column=j;
			      }
			   if(level8_Ai[i][j][k]>=max)
				  {
					  max=level8_Ai[i][j][k];
					  maxi=i;
					  maxj=j;
					  AI_row=i;//��¼�µ��Ե�����
					  AI_column=j;
			      }
			  }
			
			}
	level8_board[maxi][maxj]=2;//��������


}
BOOL WINAPI CircleCapture( HDC hdcDst, int nXOriginDst, int nYOriginDst, int nDiameterDst,
						   HDC hdcSrc, int nXOriginSrc, int nYOriginSrc, int nDiameterSrc,
						   int nWidth, DWORD dwColor )
{
    /*
    ���˼���ǣ�  ���ȴ�������DC��һ����������ʱ������һ����������Ч����
                  Ȼ��ԴDC��ָ��Բ�����򿽱�����ʱDC������������DC��
                  ��ʱDC����������������ʱDC͸��������Ŀ��DC

    ����DC����ƣ��Ƚ�����ˢ�ڣ�Ȼ��һ����ɫ��Բ�������Ļ����������
                  Բ���������ȥ����͸��������ʱ��ֻ����Բ��������ݡ�
	*/
	
	//��ʼ����ʱDC
	HDC     hdcTemp     = CreateCompatibleDC( hdcDst );
	HBITMAP hBitmapTemp = CreateCompatibleBitmap( hdcDst, nDiameterDst, nDiameterDst );
	
	SelectObject( hdcTemp, hBitmapTemp );
	
	//��ʼ��Բ������DC
	HDC     hdcCircle     = CreateCompatibleDC( hdcDst );
	HBITMAP hBitmapCircle = CreateCompatibleBitmap( hdcDst, nDiameterDst, nDiameterDst );
	
	SelectObject( hdcCircle, hBitmapCircle );
	
	//��Բ������DC����ˢ�ڣ����ܴ���DC�󱳾����Ǻ�ɫ�ģ�����Ϊ�˰�ȫ������ˢһ��
	RECT rtCircle = { 0, 0, nDiameterDst, nDiameterDst };
	
	FillRect( hdcCircle, &rtCircle, ( HBRUSH )GetStockObject( BLACK_BRUSH ));
	
	//��Բ������DC������ư�ɫԲ
	HGDIOBJ hOldBrush = SelectObject( hdcCircle, ( HBRUSH )GetStockObject( WHITE_BRUSH ));
	
	Ellipse( hdcCircle, 0, 0, nDiameterDst, nDiameterDst );
	
	SelectObject( hdcCircle, hOldBrush );
	
	//���Ƚ�ԴDC��ָ��Բ����������ݿ�������ʱDC
	StretchBlt( hdcTemp, 0, 0, nDiameterDst, nDiameterDst, 
		hdcSrc, nXOriginSrc, nYOriginSrc, nDiameterSrc, nDiameterSrc, SRCCOPY );
	
	//Ȼ����ʱDC��Բ������DC���������
	BitBlt( hdcTemp, 0, 0, nDiameterDst, nDiameterDst, hdcCircle, 0, 0, SRCAND );
	
	//����ʱDC����һ�����ĺ�ɫԲ���Ա�ʶԲ���������
	HPEN hPen = CreatePen( PS_SOLID, nWidth, dwColor );
	
	HGDIOBJ hOldPen = SelectObject( hdcTemp, hPen );
	
	hOldBrush = SelectObject( hdcTemp, ( HBRUSH )GetStockObject( NULL_BRUSH ));
	
	Ellipse( hdcTemp, 0, 0, nDiameterDst, nDiameterDst );
	
	SelectObject( hdcTemp, hOldBrush );
	SelectObject( hdcTemp, hOldPen );
	
	DeleteObject( hPen );
	
	//����ú�ɫ��Ϊ͸��ɫ������ʱDC��Ŀ��DC
	TransparentBlt( hdcDst, nXOriginDst, nYOriginDst, nDiameterDst, nDiameterDst,
		hdcTemp, 0, 0, nDiameterDst, nDiameterDst, RGB( 0, 0, 0 ));
	
	//�ͷ���Դ
	DeleteDC( hdcTemp );
	DeleteObject( hBitmapTemp );
	
	DeleteDC( hdcCircle );
	DeleteObject( hBitmapCircle );
	
	return TRUE;
}
