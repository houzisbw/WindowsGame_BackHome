// Tetris.cpp : 定义应用程序的入口点。
//
#pragma once
#include "stdafx.h"
#include "Tetris.h"
#include "time.h"
#include "atlstr.h"//可以使用cstring
#include <set>
#include <Commdlg.h>//为了能使用OPFILENAME结构体这个是必须的，
using namespace std;//必须加这句话，set
extern bool  plane_direction;
extern bool take_off;//飞机起飞标志变量，目的是为了触发计时器
extern set<int> mission_set;//任务集合，表示有哪些任务，从1到10
extern set<int>::iterator m_it,m_it2,m_it3,m_it4,m_it5,m_it6,m_it7,m_it8;
extern HDC hMail;
extern HDC hMenuHead;//菜单头部
extern HDC hMenuBody;//菜单中间项
extern HDC hExclimation;//感叹号图标
extern HDC hMissionFinish;// 任务完成绿色爱心
extern int Ex_counter;//感叹号计数器
extern bool mission1;//任务1触发标志
extern bool click_mail;//点击邮件的标志变量
extern bool mission_viewed;//查看了新任务与否的标志变量,false为未查看
extern bool challenge_activated;
//游戏人物dc，具体人物,一共9个
extern HDC hAnimationPersonnel[10];
extern HDC  hCRYQ;//穹妹
extern HDC  hYSN;//亚丝娜
extern HDC  hGBTN;//桐乃
//游戏人物家DC
extern HDC hSaberHome;
extern HDC hSaberHomeDC;//表示兼容位图
////////////////////////////////////////////////////////////////////每个城市街区dc
extern HDC hCityBlock[10];
extern HDC hMark;
extern HDC hMarkHome;
extern HDC hTokyoDowntown;

extern HDC hZhaHuangDowntownJR;//札幌市区兼容位图
extern HDC hZhaHuangDowntown;
extern HDC hZhaHuangFactoryJR;//札幌巧克力工厂内部兼容位图
extern HDC hZhaHuangFactory;

extern HDC hLuerdaoDowntownJR;//鹿儿岛市区兼容位图
extern HDC hLuerdaoDowntown;
extern HDC hLuerdaoVolcanoJR;//鹿儿岛火山景点兼容位图
extern HDC hLuerdaoVolcano;

extern HDC hQingsenDowntownJR;//青森市区兼容位图
extern HDC hQingsenParkJR;
extern HDC hQingsenDowntown;
extern HDC hQingsenPark;
//人物走动图像
extern HDC hWalkFrame;
extern int male_player_x,male_player_y;//表示下了飞机的男性角色位置

extern HDC hTotalJapanDC;//完整日本大图DC
extern HDC hTotalJapanBGDC;//兼容位图dc
extern HDC hMissionBar;//任务栏
extern int TotalJapan_x,TotalJapan_y;//表示在日本大图飞行时：窗口左上角坐标
extern HDC KyBd;//键盘方向键
extern HDC hEnter;//回车键
extern HDC hBack;//返回主材单按钮
extern int dir;
extern set<int> s;//表示存储关卡的集合
extern set<int>::iterator it;
extern bool moe_bar;//萌图欣赏界面导航条出现与否的标志变量
extern bool mp[8];//8张萌妹信息的标志变量
extern bool IsLoad;
extern bool tokyo;//表示读档时的放大花朵
extern int map_stretch_counter;
extern int tokyo_counter1,tokyo_counter2;//东京文字计时器
extern int plane_counter;//飞机计时器
extern int dialog_counter;//飞机在海上飞的对话计时器
extern POINT plane;
extern int TotalJapan_x,TotalJapan_y;
////////////日本机场dc
extern HDC hAirportDC[9];
extern HDC hTokyoAirport;
extern HDC hZhaHuangAirport;
extern HDC hLuerdaoAirport;
extern HDC hQingsenAirport;
extern HDC hRotate135;//飞机135度
extern HDC hLand;//下降按键
//////////城市介绍DC
extern HDC hTokyoIntro;
extern HDC hZhanghuangIntro;
extern HDC hLuerdaoIntro;
extern HDC hQingsenIntro;
extern int Intro_counter;
//////////////////////日本机场计时器
extern int Tokyo_counter;
extern int Tokyo_transform_counter;//飞机变小计时器 

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

/////////关卡开头特效变量
extern HDC cross_hdc;//十字架hdc
extern HDC hlv1dc;//第一关dc
extern HDC hLevelPrelude[30];//一共十关的30张prelude图片dc
extern int lv1_counter;//第一关prelude计时器 0.01s
extern int lv1_counter1;//第一关preldue计时器1 0.001s
extern int lv1_counter2;//第一关preldue计时器2 0.001s
extern int lv1_counter3;//第一关preldue计时器2 0.001s
extern int lv1_counter4;//第一关preldue计时器2 0.001s

extern bool phase1_done;//prelude第一阶段完成标志
extern bool phase2_done;//prelude第二阶段完成标志
extern bool phase3_done;//prelude第三阶段完成标志,4个中心十字架已经移动完成
extern bool phase4_done;//prelude第4阶段完成标志,8个中心十字架已经移动完成
////////
extern bool GameStart_Select;//表示开始游戏未被选中
extern bool GameBrief_Select;//表示游戏简介未选中
extern bool GameExit_Select;//表示游戏退出未选中
extern bool GameMoe_Select;//表示萌图欣赏未选中
//第一关4个字母区域
extern bool rect_a;
extern bool rect_s;
extern bool rect_u;
extern bool rect_n;

extern bool Level1_Motto_done;//第一关结束标志，进入motto界面
extern int Level1_Motto;//第一关格言界面计时器
extern bool Level2_Motto_done;//第2关结束标志，进入motto界面
extern int Level2_Motto;//第2关格言界面计时器
extern bool Level3_Motto_done;//第3关结束标志，进入motto界面
extern int Level3_Motto;//第3关格言界面计时器
extern bool Level4_Motto_done;//第4关结束标志，进入motto界面
extern int Level4_Motto;//第4关格言界面计时器
extern bool Level6_Motto_done;//第6关结束标志，进入motto界面
extern int Level6_Motto;//第6关格言界面计时器
extern bool Level7_Motto_done;//第7关结束标志，进入motto界面
extern int Level7_Motto;//第7关格言界面计时器
//主菜单四个圆圈计时器
extern int chu;
extern int xun;
extern int li;
extern int shang;

//主菜单四个圆圈计数器，播放开始动画，4个圆圈依次进入画面
extern int chu1;
extern int xun1;
extern int li1;
extern int shang1;

//按下主菜单4个按钮后的动画，圆圈向右飞出窗口
extern int chu2;
extern int xun2;
extern int li2;
extern int shang2;
//四个动画开始播放标志
extern bool chu2s;
extern bool xun2s;
extern bool li2s;
extern bool shang2s;
extern int level6_row;   //记下鼠标所在格子的行列号
extern int level6_column;

extern bool right1;//第六关游戏成功标志
extern int random_letter;//不出现的字母				 
extern int row; //产生一个随机坐标1-10以表示要找的方块  行x
extern int column;//产生一个随机坐标1-10以表示要找的方块  列y
extern int letter;
extern int b[10][10];//第四关10X10的字母状态矩阵
extern bool grid[10][10];//第五关鼠标移动时显示提示的布尔矩阵
extern char input;//第6关按键输入
extern TCHAR grid_letter[10][10];//第6关填字格子具体字母矩阵
extern bool zoom_flag;//放大镜出现与否的标志变量
extern int Level4_counter;//第四关计时器,0.1秒记一次
extern int Level6_counter;//第6关计时器
extern int timebar_y;//第四关时间槽y坐标
extern bool level4_board;//第四关找字母牌子标志变量

extern int Lv5_counter_whql;//第五关琴里动画计数器
extern int whql_x;//琴里左上角坐标
extern int whql_x1;
extern int Lv5_counter_roll;//第五关卷轴计时器
extern int roll_x;//第五关卷轴右上角坐标
extern int roll_x1;
extern bool Lv5_whql_animation_done;//五河琴里动画已经放完的标志
extern bool Lv5_dialog1;//第一页对话标志变量
extern int Level5_state;//第五关游戏状态，0表示第一页对话
extern bool Level5_same,Level5_notsame;//第五关选择一样还是不一样的标志变量，未选择时为fasle
extern bool Level5_Picture;//第五关图片变化标志变量，false为原图
extern bool Level5_final_animation;//最后一页动画播放标志变量
extern int Level5_Motto;//毛笔字计时器
extern bool Level5_Motto_done;//7个毛笔字写完后的标志变量

extern int pad_x,pad_y;//第七关挡板左上角坐标
extern int uppad_x,uppad_y;//第七关上挡板左上角坐标
extern bool click_start;//第七关点击鼠标球就发出去
extern int lv7_death;//第七关阵亡数
extern int lv7_color_counter;//第七关颜色计时器
extern int brick_grid[12][12];//第七关砖块矩阵
extern bool lv7_win;//第七关胜利标志

extern int death_level3;
extern int moePicture_i;
extern int game_state;//游戏状态，决定是第几关
extern int music_state;//音乐开关状态，1为开
extern int choose_state;//表示鼠标移动到开始游戏上是否会变化
extern int Level2_counter;
extern int Level4_state;
extern int letter_x,letter_y;//第四关要寻找的方块左上角坐标
//第八关
extern bool Level8_Motto_done;
extern int Level8_Motto;//第八关毛笔字计时器
extern bool level8_lv1_win,level8_lv2_win,level8_lv3_win;//每一关过关标志变量
extern int level8_lv2_stepcounter;//第八关第二小关步数计时器
extern int level8_timebar;//第八关计时器rectangle
extern int level8_lv1_counter;//第八关第一小关计时器，15秒的
extern bool level8_lv1;//3个变量是3关卡的方框
extern bool level8_lv2;
extern bool level8_lv3;
extern int level8_state;//第八关具体关卡数，一共三关，1表示第一关
extern int IsInBoard;//鼠标是否在棋盘区域内
extern int level8_chess_counter;//第八关下棋棋子数，玩家下的棋子数
extern int level8_row;//第八关棋盘横坐标
extern int level8_column;//第八关棋盘纵坐标
extern int AI_row;//第八关AI的下棋坐标
extern int AI_column;
extern int level8_board[17][17];//第八关棋盘矩阵
extern bool IsDraw;//判断是否和棋,false为未和棋
extern int level8_counter;//第八关计时器：作用是为了显示5连棋子
extern int level8_player[17][17][4];//第八关玩家下棋分值矩阵,其中4代表4条线上的权重值
extern int level8_Ai[17][17][4];//第八关电脑下棋分值矩阵,其中4代表4条线上的权重值
//第九关
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
extern int level9_chasingmonster_counter;//追逐怪物计时器
extern int level9_temp_x, level9_temp_y;//显像药水鼠标移动临时坐标
extern int level9_acceffect_counter;//加速效果显示计时器,0,5秒显示
extern float y_velocity;
extern bool level9_acctool_description;
extern int level9_acc_tool;//3次使用加速道具的机会
extern int level9_gravity_counter;//3秒重力计数器
extern bool gravity_activated;
extern int level9_ball1_counter_dx,level9_ball1_counter_dy,level9_ball2_counter_dx,level9_ball2_counter_dy,level9_ball3_counter_dx,level9_ball3_counter_dy,
	       level9_ball4_counter_dx,level9_ball4_counter_dy,level9_ball5_counter_dx,level9_ball5_counter_dy,level9_ball6_counter_dx,level9_ball6_counter_dy,
		   level9_ball7_counter_dx,level9_ball7_counter_dy;//龙珠飞行计时器
extern bool level9ball_flag[7],level9lockkey[4];
extern bool reveal_medecine;
extern bool level9_medicine[2];//药水被吃标记
extern int reveal_medecine_number;//显像药水数量
extern bool level9_medecine_description;//鼠标 移动在药上的说明显示
extern int level9_px,level9_py,level9_maze[31][30];//第九关鼠标坐标
extern int level9_medecine_coordinate_array[6];//记录3次显像的xy坐标
extern HDC ChallengeDlg[3];
extern HDC hMainTitle[4];
extern HDC hCityDC[36];
extern HDC Plane[8];
extern HDC hCGword[7];
extern HDC hLevel9Temp2ndDC, hLevel9StateBarDC, hLevel9ActorDC, hLevel9BrickDC[4], hLevel9BallDC[7], hLevel9KeyDC[4], hLevel9PortalDC, hLevel9Monster[5], hLevel9MedicineDC[2], hLevel9BirdDC, hLevel9GsystemDC, hLevel9AccDC, hLevel9AccEffectDC ,hLevel9DialogDC,hLevel9ThornDC[3],hLevel9BarrierDC,hLevel9GrayLockDC,hLevel9GrayKeyDC;//第二个缓冲dc
extern HDC hMusicONDC,hMusicOFFDC,hBgDC,hSaveDC,hGameStartNDC,hGameStartYDC,hGameExitDC,hReturnMenuDC,hBriefDC,hBriefBGDC,hFlowerDC,hPictureDC[8],hMoeDC,hUpperEdgeDC,hLowerEdgeDC,hGameInfoDC,hGameInfoBgDC,hKeyBoardDC,hLevel1BgDC,hLevel9BanDC,hLevel9PinkBarrierDC,hLevel9FlashDC,hLevel9BikeDC
,hInputBoxDC,hTitleDC,hTitle1DC,hTitle2DC,hStarDC,hStar1DC,hLevelPreDC,hBallDC[5],hLevel2BgDC,hTVDC,hLevel2PlayerDC,hLevel2MMDC,hLevel2BoardDC,hLetterDC[26],hLevel4TimeDC,hMoeBar1,hMoeBar2,hMoeP[8],hLevel9BGDC,hJapanDC,hFolderDC,hFlowerBigDC,hCartoonJapanDC,hCartoonJapanDC1,hSilverDialog,hStartMianma
,hLevel3BGDC,hLevel3FrameDC,hLevel3GameBoardDC,hLevel3PlayerDC,hLevel3FailDC,hLevel3PassDC,hLevel3MonsterDC[4],hLevel3CoinDC,hLevel3SaveDC,hLevel3AsunaDC, hLevel4BGDC,hLevel4StartDC,hMoePictureDC,
hLevel4ZoomDC,hLevel4BoardDC,hLevel4TNDC,hLevel5BGDC,hLevel5Pic,hLevel5Pic_Transformed,hLevel5QLDC,hLevel5DialogDC,hLevel5RollDC,hLevel5MouseDC,hLevel5ButtonDC,hLevel5ArrowDC,hLevel5MottoDC[7],hLevel1MottoDC[6],hLevel2MottoDC[9],hLevel3MottoDC[9],hLevel6MottoDC[9],hLevel7MottoDC[9],hLevel8MottoDC[9]
,hLevel4MottoDC[9],hMottoBGDC,hMenuDC[4],hCloud1DC,hCloud2DC,hLevel6BGDC,hLevel6GridDC,hLevel6SXDC,hLevel6AnswerDC[15],hLevel7BGDC,hLevel7BG1DC,hLevel7PadDC,hLevel7Pad1DC,hLevel7BallDC,hLevel7BrickDC[6],hLevel7DeathDC,hLevel7QCFDC,hLevel7QCFdlgDC
,hLevel8BGDC,hLevel8BoardDC,hLevel8Black,hLevel8White,hLevel8SQKS,hLevel8Tick;
//////////////////////////////////////////////选中主菜单四项的dc
extern HDC hGameStart_SelectedDC,hGameBrief_SelectedDC,hGameExit_SelectedDC,hMoePicture_SelectedDC,hLoadDC,hCGDC,hGameCGDC,hPrelude_flyonseaDC;
extern HDC hTempMenuDC,hTemp1DC,hTempDC,hTemp3DC,hTemp4DC,hTemp5DC,hTemp6DC,hTemp7DC,hTemp8DC,hTemp9DC;//双缓冲临时内存dc
extern HDC hTempMotto1DC,hTempMotto2DC,hTempMotto3DC,hTempMotto4DC,hTempMotto6DC,hTempMotto7DC,hTempMotto8DC;//每一关格言dc
#define MAX_LOADSTRING 100
extern CString Password,Level1Pre,Level1Title,Level2Pre,Level2Title,str_counter,Level3Pre,Level3Title,Level4Title,Level4Pre,Level5Title,Level5Pre,Level5Dialog1_1,Level5Dialog1_2,Level6Pre,Level6Title,Level7Pre,Level7Title;
extern clock_t start,finish,start_level2_pre,finish_level2_pre,start_level3_pre,finish_level3_pre,start_level4_pre,finish_level4_pre,start_level5_pre,finish_level5_pre,
	   finish_level6_pre,start_level6_pre, finish_level7_pre,start_level7_pre,finish_level8_pre,start_level8_pre,start_cg,finish_cg; 
extern int flag_save1,PosX3,PosY3;
extern bool flag_coin1,flag_coin2,flag_coin3;//第三关金币标志变量
extern bool flag_level4_start;
 
CGameMap Game;//创建游戏类的对象

// 全局变量:
HINSTANCE hInst;								// 当前实例
TCHAR szTitle[MAX_LOADSTRING];					// 标题栏文本
TCHAR szWindowClass[MAX_LOADSTRING];			// 主窗口类名

// 此代码模块中包含的函数的前向声明:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);
void Level8_AI();//第八关AI
bool IsWin_level8(int a[17][17],int row,int column,int chess);//第八关五子棋判断胜利函数
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

 	// TODO: 在此放置代码。
	MSG msg;
	HACCEL hAccelTable;
	HWND     hWnd; //定义窗口句柄 
	// 初始化全局字符串
	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_TETRIS, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);
	//随机数初始化

	// 执行应用程序初始化:
	


   hInst = hInstance; // 将实例句柄存储在全局变量中
   //这句话是得到窗口句柄并粗存在hWnd中
   hWnd = CreateWindow(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW&(~WS_MAXIMIZEBOX)&(~WS_THICKFRAME),//去掉thickframe使得窗口大小不能变
      CW_USEDEFAULT, 0, 600, 800, NULL, NULL, hInstance, NULL);

   if (!hWnd)
   {
      return FALSE;
   }



   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);
  
 
   
	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_TETRIS));
	 
	// 主消息循环:
	while (1)
	{
		if (PeekMessage(&msg, NULL, 0, 0,PM_REMOVE))//不用getmessage
		{
			if(msg.message==WM_QUIT)
				break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		HDC hdc = GetDC(hWnd);	//得到窗口hdc
	    Game.GameDoubleBuffer(hWnd,hdc);//双缓冲输出多个对象，和WM_PAINT 不同，游戏主要部分在这里面		
	    ReleaseDC(hWnd,hdc);
	}

	return (int) msg.wParam;
}



//
//  函数: MyRegisterClass()
//
//  目的: 注册窗口类。
//
//  注释:
//
//    仅当希望
//    此代码与添加到 Windows 95 中的“RegisterClassEx”
//    函数之前的 Win32 系统兼容时，才需要此函数及其用法。调用此函数十分重要，
//    这样应用程序就可以获得关联的
//    “格式正确的”小图标。
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
//   函数: InitInstance(HINSTANCE, int)
//
//   目的: 保存实例句柄并创建主窗口
//
//   注释:
//
//        在此函数中，我们在全局变量中保存实例句柄并
//        创建和显示主程序窗口。
//

//
//  函数: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  目的: 处理主窗口的消息。
//
//  WM_COMMAND	- 处理应用程序菜单
//  WM_PAINT	- 绘制主窗口
//  WM_DESTROY	- 发送退出消息并返回
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
      SetDlgItemText((HWND)wParam,IDOK,L"&知道了");   
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

	if(game_state==-5)//游戏CG
	{
	   finish_cg=clock();
	   if(finish_cg-start_cg>=5000)//15秒
	   {
	     game_state=0;
		  PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);
	   }
	
	
	}		
	if(game_state==1)//第一关prelude
	{	            
	   finish=clock();
	   if(finish-start>=5000)
		  {
			 /////////////////////////////////////////各种变量清零
			 
			 game_state=2;			
			 lv1_counter=0;//第一关prelude计时器
			 lv1_counter1=0;//第一关preldue计时器1
			 lv1_counter2=0;//第一关preldue计时器2
			 lv1_counter3=0;//第一关preldue计时器3 0.001s
			 lv1_counter4=0;//第一关preldue计时器2 0.001s
			 phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
			 phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
			 phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
			 phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成
			 InvalidateRect(hWnd,NULL,true);						
		  }						
	}
	if(game_state==3)//第二关prelude
	{	            
	   finish_level2_pre=clock();
	   if(finish_level2_pre-start_level2_pre>=5000)
		  {
			 game_state=4;
			 lv1_counter=0;//第一关prelude计时器
			 lv1_counter1=0;//第一关preldue计时器1
			 lv1_counter2=0;//第一关preldue计时器2
			 lv1_counter3=0;//第一关preldue计时器3 0.001s
			 lv1_counter4=0;//第一关preldue计时器2 0.001s
			 phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
			 phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
			 phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
			 phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成
			 InvalidateRect(hWnd,NULL,true);						
		  }						
	}
	if(game_state==5)//第三关prelude
	{	            
	   finish_level3_pre=clock();
	   if(finish_level3_pre-start_level3_pre>=5000)
		  {
			 game_state=6;
			 lv1_counter=0;//第一关prelude计时器
			 lv1_counter1=0;//第一关preldue计时器1
			 lv1_counter2=0;//第一关preldue计时器2
			 lv1_counter3=0;//第一关preldue计时器3 0.001s
			 lv1_counter4=0;//第一关preldue计时器2 0.001s
			 phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
			 phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
			 phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
			 phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成
			 InvalidateRect(hWnd,NULL,true);						
		  }						
	}

	if(game_state==7)//第4关prelude
	{	            
	   finish_level4_pre=clock();
	   if(finish_level4_pre-start_level4_pre>=5000)
		  {
			 game_state=8;
			 lv1_counter=0;//第一关prelude计时器
			 lv1_counter1=0;//第一关preldue计时器1
			 lv1_counter2=0;//第一关preldue计时器2
			 lv1_counter3=0;//第一关preldue计时器3 0.001s
			 lv1_counter4=0;//第一关preldue计时器2 0.001s
			 phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
			 phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
			 phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
			 phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成
			 InvalidateRect(hWnd,NULL,true);						
		  }						
	}
	if(game_state==9)//第五关prelude
	{
	   finish_level5_pre=clock();
	   if(finish_level5_pre-start_level5_pre>=5000)
		  {
			 game_state=10;
			 lv1_counter=0;//第一关prelude计时器
			 lv1_counter1=0;//第一关preldue计时器1
			 lv1_counter2=0;//第一关preldue计时器2
			 lv1_counter3=0;//第一关preldue计时器3 0.001s
			 lv1_counter4=0;//第一关preldue计时器2 0.001s
			 phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
			 phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
			 phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
			 phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成
			 InvalidateRect(hWnd,NULL,true);						
		  }							
	}
	if(game_state==11)//第6关prelude
	{
	    finish_level6_pre=clock();
	   if(finish_level6_pre-start_level6_pre>=5000)
		  {
			 game_state=12;
			 lv1_counter=0;//第一关prelude计时器
			 lv1_counter1=0;//第一关preldue计时器1
			 lv1_counter2=0;//第一关preldue计时器2
			 lv1_counter3=0;//第一关preldue计时器3 0.001s
			 lv1_counter4=0;//第一关preldue计时器2 0.001s
			 phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
			 phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
			 phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
			 phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成
			 InvalidateRect(hWnd,NULL,true);						
		  }								
	}
	if(game_state==13)//第七关prelude
	{
	   finish_level7_pre=clock();
	   if(finish_level7_pre-start_level7_pre>=5000)
		  {
			 game_state=14;
			 lv1_counter=0;//第一关prelude计时器
			 lv1_counter1=0;//第一关preldue计时器1
			 lv1_counter2=0;//第一关preldue计时器2
			 lv1_counter3=0;//第一关preldue计时器3 0.001s
			 lv1_counter4=0;//第一关preldue计时器2 0.001s
			 phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
			 phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
			 phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
			 phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成
			 InvalidateRect(hWnd,NULL,true);						
		  }									
	}
	if(game_state==15)//第八关prelude
	{
	   finish_level8_pre=clock();
	   if(finish_level8_pre-start_level8_pre>=5000)
	   {
	        game_state=16;
			level8_state=0;//第八关准备界面
			lv1_counter=0;//第一关prelude计时器
			lv1_counter1=0;//第一关preldue计时器1
			lv1_counter2=0;//第一关preldue计时器2
			lv1_counter3=0;//第一关preldue计时器3 0.001s
			lv1_counter4=0;//第一关preldue计时器2 0.001s
			phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
			phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
			phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
			phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成
	        InvalidateRect(hWnd,NULL,true);			  
	   
	   }
	
	}
	switch (message)
	{
	case WM_CREATE://游戏初始化工作，加载各种图片到hdc中
		{		  
		  start_cg=clock();
			
		  SetTimer(hWnd,1,100,NULL);
		  SetTimer(hWnd,2,1000,NULL);//第二关计时器
		  SetTimer(hWnd,3,1,NULL);
		  SetTimer(hWnd,4,10,NULL);//第4关计时器,0.01秒间隔

		  HMENU hSysMenu = GetSystemMenu(hWnd,FALSE);//添加右键菜单
		  AppendMenu(hSysMenu,MF_SEPARATOR,0,NULL);//添加分割线
		  AppendMenu(hSysMenu,MF_STRING,0,L"Password Part2 : Asuna(结城明日奈)");//添加文字到菜单中		
		 

		  int xScreen = GetSystemMetrics(SM_CXSCREEN);//得到屏幕宽度
		  int yScreen = GetSystemMetrics(SM_CYSCREEN);//得到屏幕高度
		  InitCursorPosX =  xScreen/2;
          InitCursorPosY = (yScreen+800)/2-20;
		  SetCursorPos(InitCursorPosX,InitCursorPosY);//设置初始鼠标位置
		  SetWindowPos(hWnd,HWND_TOP,(xScreen-600)/2,(yScreen-800)/2,600,800,SWP_SHOWWINDOW);//设置窗口到屏幕中间
		  
		  HDC hdc = GetDC(hWnd);
		  ///////hTempDC:内存dc用于双缓冲,要创建和窗口大小一样的一张位图并选入内存dc，最后才输出到屏幕上
		  hTempMenuDC=CreateCompatibleDC(hdc);
		  HBITMAP hTempmenu = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempMenuDC,hTempmenu);//选入内存dc
		  DeleteObject(hTempmenu);
		  		  		  
		  hTempDC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempDC,hTemp);//选入内存dc
		  DeleteObject(hTemp);
		   ////hTemp1DC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hTemp1DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp1 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTemp1DC,hTemp1);//选入内存dc
		  DeleteObject(hTemp1);
		  ////hTemp3DC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hTemp3DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp3 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTemp3DC,hTemp3);//选入内存dc
		  DeleteObject(hTemp3);

		  ////hTemp4DC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hTemp4DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp4 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTemp4DC,hTemp4);//选入内存dc
		  DeleteObject(hTemp4);

		   ////hTemp5DC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hTemp5DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp5 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTemp5DC,hTemp5);//选入内存dc
		  DeleteObject(hTemp5);

		   ////hTemp6DC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hTemp6DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp6 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTemp6DC,hTemp6);//选入内存dc
		  DeleteObject(hTemp6);

		     ////hTemp7DC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hTemp7DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp7 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTemp7DC,hTemp7);//选入内存dc
		  DeleteObject(hTemp7);

		  ////hTemp8DC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hTemp8DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp8 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTemp8DC,hTemp8);//选入内存dc
		  DeleteObject(hTemp8);
		    ////hTemp9DC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hTemp9DC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp9 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTemp9DC,hTemp9);//选入内存dc
		  DeleteObject(hTemp9);

		      ////hLevel9Temp2ndDC创建兼容位图，必须每一关不用的tempdc，否则出错
		  hLevel9Temp2ndDC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp92nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject( hLevel9Temp2ndDC,hTemp92nd);//选入内存dc
		  DeleteObject(hTemp92nd);

		      ////游戏CG创建兼容位图，必须每一关不用的tempdc，否则出错
		  hGameCGDC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp93nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject( hGameCGDC,hTemp93nd);//选入内存dc
		  DeleteObject(hTemp93nd);

		  hPrelude_flyonseaDC=CreateCompatibleDC(hdc);
		  HBITMAP hTemp94nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject( hPrelude_flyonseaDC,hTemp94nd);//选入内存dc
		  DeleteObject(hTemp94nd);

		  hTotalJapanBGDC=CreateCompatibleDC(hdc);//日本大图兼容位图dc
		  HBITMAP hTemp95nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject( hTotalJapanBGDC,hTemp95nd);//选入内存dc
		  DeleteObject(hTemp95nd);
		  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////机场dc
		  hTokyoAirport=CreateCompatibleDC(hdc);//日本东京机场
		  HBITMAP hTemp96nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(  hTokyoAirport,hTemp96nd);//选入内存dc
		  DeleteObject(hTemp96nd);

		  hZhaHuangAirport=CreateCompatibleDC(hdc);//札幌机场
		  HBITMAP hTempbnd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(   hZhaHuangAirport,hTempbnd);//选入内存dc
		  DeleteObject(hTempbnd);
		  
		  hLuerdaoAirport=CreateCompatibleDC(hdc);//鹿儿岛机场
		  HBITMAP hAir1 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(   hLuerdaoAirport, hAir1 );//选入内存dc
		  DeleteObject( hAir1 );

		  hQingsenAirport=CreateCompatibleDC(hdc);//青森机场
		  HBITMAP hAir2= CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(   hQingsenAirport, hAir2 );//选入内存dc
		  DeleteObject( hAir2 );


		  hTokyoIntro=CreateCompatibleDC(hdc);//日本东京介绍
		  HBITMAP hTemp97nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(  hTokyoIntro,hTemp97nd);//选入内存dc
		  DeleteObject(hTemp97nd);

		  hZhanghuangIntro=CreateCompatibleDC(hdc);//日本札幌介绍
		  HBITMAP hTempand = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(  hZhanghuangIntro,hTempand);//选入内存dc
		  DeleteObject(hTempand);

		  hLuerdaoIntro=CreateCompatibleDC(hdc);//日本鹿儿岛介绍
		  HBITMAP hIntro1 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(   hLuerdaoIntro,hIntro1);//选入内存dc
		  DeleteObject(hIntro1);

		  hQingsenIntro=CreateCompatibleDC(hdc);//日本青森介绍
		  HBITMAP hIntro2 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(    hQingsenIntro,hIntro2);//选入内存dc
		  DeleteObject(hIntro2);
		    
		  hTokyoDowntown=CreateCompatibleDC(hdc);//日本东京市区
		  HBITMAP hTemp98nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(  hTokyoDowntown,hTemp98nd);//选入内存dc
		  DeleteObject(hTemp98nd);
		  
		  hZhaHuangDowntownJR=CreateCompatibleDC(hdc);//日本札幌市区
		  HBITMAP hTemp3nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(  hZhaHuangDowntownJR,hTemp3nd);//选入内存dc
		  DeleteObject(hTemp3nd);

		  hZhaHuangFactoryJR=CreateCompatibleDC(hdc);//日本札幌巧克力工厂内部
		  HBITMAP hTemp4nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(   hZhaHuangFactoryJR,hTemp4nd);//选入内存dc
		  DeleteObject(hTemp4nd);
		   
		  hLuerdaoDowntownJR=CreateCompatibleDC(hdc);//日本鹿儿岛市区兼容位图
		  HBITMAP hTemp5nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(  hLuerdaoDowntownJR,hTemp5nd);//选入内存dc
		  DeleteObject(hTemp5nd);
		   
		  hLuerdaoVolcanoJR=CreateCompatibleDC(hdc);//日本鹿儿岛火山景点兼容位图
		  HBITMAP hTemp6nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(   hLuerdaoVolcanoJR,hTemp6nd);//选入内存dc
		  DeleteObject(hTemp6nd);

		  hQingsenDowntownJR=CreateCompatibleDC(hdc);//日本青森市区 兼容位图
		  HBITMAP hTemp7nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(    hQingsenDowntownJR,hTemp7nd);//选入内存dc
		  DeleteObject(hTemp7nd);

		  hQingsenParkJR=CreateCompatibleDC(hdc);//日本青森公园 兼容位图
		  HBITMAP hTemp8nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(    hQingsenParkJR,hTemp8nd);//选入内存dc
		  DeleteObject(hTemp8nd);


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		  
		  hSaberHomeDC=CreateCompatibleDC(hdc);//saber家兼容位图
		  HBITMAP hTemp99nd = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(   hSaberHomeDC,hTemp99nd);//选入内存dc
		  DeleteObject(hTemp99nd);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		  ///第一关开头特效dc
		  hlv1dc=CreateCompatibleDC(hdc);
		  HBITMAP hTemplv1 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hlv1dc,hTemplv1);//选入内存dc
		  DeleteObject(hTemplv1);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////格言dc
		  //第一关格言dc
		  hTempMotto1DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto1 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempMotto1DC,hTempMotto1);//选入内存dc
		  DeleteObject(hTempMotto1);
		  //第二关格言dc
		   hTempMotto2DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto2 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempMotto2DC,hTempMotto2);//选入内存dc
		  DeleteObject(hTempMotto2);
		   //第3关格言dc
		   hTempMotto3DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto3 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempMotto3DC,hTempMotto3);//选入内存dc
		  DeleteObject(hTempMotto3);
		   //第4关格言dc
		   hTempMotto4DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto4 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempMotto4DC,hTempMotto4);//选入内存dc
		  DeleteObject(hTempMotto4);
		   //第6关格言dc
		   hTempMotto6DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto6 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempMotto6DC,hTempMotto6);//选入内存dc
		  DeleteObject(hTempMotto6);
		   //第7关格言dc
		   hTempMotto7DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto7 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempMotto7DC,hTempMotto7);//选入内存dc
		  DeleteObject(hTempMotto7);
		     //第8关格言dc
		   hTempMotto8DC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMotto8 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject(hTempMotto8DC,hTempMotto8);//选入内存dc
		  DeleteObject(hTempMotto8);
		//////////////////////主菜单萌图欣赏dc
		  hMoePictureDC=CreateCompatibleDC(hdc);
		  HBITMAP hTempMoe7 = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject( hMoePictureDC,hTempMoe7);//选入内存dc
		  DeleteObject(hTempMoe7);
		  //主菜单再续前缘DC
		  hLoadDC = CreateCompatibleDC(hdc);
		  HBITMAP hTempLoad = CreateCompatibleBitmap(hdc,600,800);//创建兼容位图
		  SelectObject( hLoadDC,hTempLoad);//选入内存dc
		  DeleteObject(hTempLoad);

		  hMusicONDC = CreateCompatibleDC(hdc);
		  HBITMAP hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MUSIC_ON),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hMusicONDC,hMusic_bitmap);

		  hJapanDC = CreateCompatibleDC(hdc);//加载日本地图
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_JAPAN),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hJapanDC,hMusic_bitmap);

		  hFlowerBigDC = CreateCompatibleDC(hdc);//加载大花朵
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BIGFLOWER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hFlowerBigDC,hMusic_bitmap);

		  hFolderDC = CreateCompatibleDC(hdc);//加载文件夹
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_FOLDER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hFolderDC,hMusic_bitmap);

		  hMusicOFFDC = CreateCompatibleDC(hdc);//加载音乐off图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MUSIC_OFF),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hMusicOFFDC,hMusic_bitmap);

		  hSaveDC = CreateCompatibleDC(hdc);//加载游戏保存图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_SAVE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hSaveDC,hMusic_bitmap);
		  
		  hBgDC = CreateCompatibleDC(hdc);//加载游戏主界面背景图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hBgDC,hMusic_bitmap);
		  
		  hGameStartNDC = CreateCompatibleDC(hdc);//加载开始游戏图片,未选择状态
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMESTART_NOCHOOSE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hGameStartNDC,hMusic_bitmap);
		  
		  hGameExitDC = CreateCompatibleDC(hdc);//加载退出游戏图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_EXIT),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hGameExitDC,hMusic_bitmap);

		  hMoeDC = CreateCompatibleDC(hdc);//加载退出游戏图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hMoeDC,hMusic_bitmap);

		  hReturnMenuDC = CreateCompatibleDC(hdc);//加载回到主菜单图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_RETURN_MENU),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hReturnMenuDC,hMusic_bitmap);
		  
		  hBriefDC = CreateCompatibleDC(hdc);//加载游戏简介
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BRIEF),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hBriefDC,hMusic_bitmap);
		  
		  hBriefBGDC = CreateCompatibleDC(hdc);//加载游戏简介背景图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BRIEF_BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hBriefBGDC,hMusic_bitmap);
		  
		  hFlowerDC = CreateCompatibleDC(hdc);//加载花朵
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_FLOWER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hFlowerDC,hMusic_bitmap);

		  hUpperEdgeDC = CreateCompatibleDC(hdc);//加载上边框
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_UPPEREDGE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hUpperEdgeDC,hMusic_bitmap);

		  hLowerEdgeDC = CreateCompatibleDC(hdc);//加载下边框
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LOWEREDGE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hLowerEdgeDC,hMusic_bitmap);

		  hGameInfoDC = CreateCompatibleDC(hdc);//加载游戏信息图表 
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMEINFO),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hGameInfoDC,hMusic_bitmap);

		  hGameInfoBgDC = CreateCompatibleDC(hdc);//加载游戏信息背景图
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMEINFOBG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hGameInfoBgDC,hMusic_bitmap);

		  hKeyBoardDC = CreateCompatibleDC(hdc);//加载键盘图
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_KEYBOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hKeyBoardDC,hMusic_bitmap);
		  
		  hLevel1BgDC = CreateCompatibleDC(hdc);//加载第一关背景图
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL1BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hLevel1BgDC,hMusic_bitmap);

		  hInputBoxDC = CreateCompatibleDC(hdc);//加载输入框
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_INPUTBOX),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hInputBoxDC,hMusic_bitmap);

		  hTitleDC = CreateCompatibleDC(hdc);//加载游戏标题
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_TITLE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hTitleDC,hMusic_bitmap);

		  hTitle1DC = CreateCompatibleDC(hdc);//加载游戏标题2
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_TITLE1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hTitle1DC,hMusic_bitmap);

          hTitle2DC = CreateCompatibleDC(hdc);//加载游戏标题3
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_TITLE2),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hTitle2DC,hMusic_bitmap);

		  hStarDC = CreateCompatibleDC(hdc);//加载星星
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_STAR),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hStarDC,hMusic_bitmap);
		  
		  hStar1DC = CreateCompatibleDC(hdc);//加载星星
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_STAR1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hStar1DC,hMusic_bitmap);

		  hLevelPreDC = CreateCompatibleDC(hdc);//加载关卡prelude
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVELPRE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hLevelPreDC,hMusic_bitmap);

		  hLevel2BgDC = CreateCompatibleDC(hdc);//加载第二关背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL2BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hLevel2BgDC,hMusic_bitmap);

		  hTVDC = CreateCompatibleDC(hdc);//加载第二关电视
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_TV),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(hTVDC,hMusic_bitmap);

		  hLevel2PlayerDC = CreateCompatibleDC(hdc);//加载第二关玩家
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL2_PLAYER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel2PlayerDC,hMusic_bitmap);

		  hLevel2MMDC = CreateCompatibleDC(hdc);//加载第二关面码
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL2MM),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel2MMDC,hMusic_bitmap);

		  hLevel2BoardDC = CreateCompatibleDC(hdc);//加载第二关记分牌
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL2BOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel2BoardDC,hMusic_bitmap);

		  hLevel3BGDC = CreateCompatibleDC(hdc);//加载第三关背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3BGDC,hMusic_bitmap);

		  hLevel3FrameDC = CreateCompatibleDC(hdc);//加载第三关边框
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3FRAME),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3FrameDC,hMusic_bitmap);
		  
		  hLevel3GameBoardDC = CreateCompatibleDC(hdc);//加载第三关board
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3GAMEBOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3GameBoardDC,hMusic_bitmap);

		  hLevel3PlayerDC = CreateCompatibleDC(hdc);//加载第三关玩家
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3PLAYER),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3PlayerDC,hMusic_bitmap);

		  hLevel3FailDC = CreateCompatibleDC(hdc);//加载第三关失败图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3FAIL),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3FailDC,hMusic_bitmap);

		  hLevel3PassDC = CreateCompatibleDC(hdc);//加载第三关过关图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3PASS),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3PassDC,hMusic_bitmap);
	    
		  hLevel3CoinDC = CreateCompatibleDC(hdc);//加载第三关金币
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3COIN),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3CoinDC,hMusic_bitmap);

		  hLevel3SaveDC = CreateCompatibleDC(hdc);//加载第三关存盘点
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3SAVE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3SaveDC,hMusic_bitmap);

		  hLevel3AsunaDC = CreateCompatibleDC(hdc);//加载第三关亚丝娜
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL3ASUNA),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel3AsunaDC,hMusic_bitmap);

		  hLevel4BGDC = CreateCompatibleDC(hdc);//加载第三关亚丝娜
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4BGDC,hMusic_bitmap);

		  hLevel4StartDC = CreateCompatibleDC(hdc);//加载第四关开始游戏
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4START),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4StartDC,hMusic_bitmap);

		  hLevel4TimeDC = CreateCompatibleDC(hdc);//加载第四关时间槽
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4TIME),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4TimeDC,hMusic_bitmap);
		  
		  hLevel4ZoomDC = CreateCompatibleDC(hdc);//加载第四关放大镜
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4ZOOM),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4ZoomDC,hMusic_bitmap);

		  hLevel4BoardDC = CreateCompatibleDC(hdc);//加载第四关板子
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4BOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4BoardDC,hMusic_bitmap);
		   
		  hLevel4TNDC = CreateCompatibleDC(hdc);//加载第四关桐乃
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL4TN),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel4TNDC,hMusic_bitmap);

		  hLevel5BGDC = CreateCompatibleDC(hdc);//加载第五关背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5BGDC,hMusic_bitmap);

		  hLevel5Pic= CreateCompatibleDC(hdc);//加载第五关错觉图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5PIC),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5Pic,hMusic_bitmap);

		  hLevel5QLDC= CreateCompatibleDC(hdc);//加载第五关五河琴里
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5QL),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5QLDC,hMusic_bitmap);

		  hLevel5DialogDC= CreateCompatibleDC(hdc);//加载第五关对话框
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5DIALOG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5DialogDC,hMusic_bitmap);

		  hLevel5RollDC= CreateCompatibleDC(hdc);//加载第五关卷轴
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5ROLL),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5RollDC,hMusic_bitmap);

		  hLevel5MouseDC= CreateCompatibleDC(hdc);//加载第五关鼠标
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5MOUSE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5MouseDC,hMusic_bitmap);
		  
		  hLevel5Pic_Transformed= CreateCompatibleDC(hdc);//加载第五关变化后图片
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5PICTRAN),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel5Pic_Transformed,hMusic_bitmap);

		  hLevel5ButtonDC= CreateCompatibleDC(hdc);//加载第五关按钮
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5BUTTON),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hLevel5ButtonDC,hMusic_bitmap);

		  hLevel5ArrowDC= CreateCompatibleDC(hdc);//加载第五关箭头
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL5ARROW),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hLevel5ArrowDC,hMusic_bitmap);

		   hMottoBGDC= CreateCompatibleDC(hdc);//加载每一关格言背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOTTOBG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hMottoBGDC,hMusic_bitmap);

		  hGameStart_SelectedDC= CreateCompatibleDC(hdc);//加载开始游戏选中
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMESTART_SELECTED),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hGameStart_SelectedDC,hMusic_bitmap);

		  hGameBrief_SelectedDC= CreateCompatibleDC(hdc);//加载游戏简介选中
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_GAMEBRIEFSELECTED),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hGameBrief_SelectedDC,hMusic_bitmap);

		  hGameExit_SelectedDC= CreateCompatibleDC(hdc);//加载退出游戏选中
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_EXITGAMESELECTED),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hGameExit_SelectedDC,hMusic_bitmap);

		  hMoePicture_SelectedDC= CreateCompatibleDC(hdc);//加载萌图欣赏选中
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOEPICTURE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hMoePicture_SelectedDC,hMusic_bitmap);

		   hCloud1DC= CreateCompatibleDC(hdc);//加载云朵1
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_CLOUD1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hCloud1DC,hMusic_bitmap);

		   hCloud2DC= CreateCompatibleDC(hdc);//加载云朵2
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_CLOUD2),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hCloud2DC,hMusic_bitmap);
		  
		   hLevel6BGDC= CreateCompatibleDC(hdc);//加载第六关背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL6BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel6BGDC,hMusic_bitmap);

		    hLevel6GridDC= CreateCompatibleDC(hdc);//加载第六关填字格子
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL6GRID),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel6GridDC,hMusic_bitmap);

		   hLevel6SXDC= CreateCompatibleDC(hdc);//加载第六关十香
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL6SX),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel6SXDC,hMusic_bitmap);

		    hLevel7BGDC= CreateCompatibleDC(hdc);//加载第7关背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7BGDC,hMusic_bitmap); 
		     
		  hLevel7BG1DC= CreateCompatibleDC(hdc);//加载第7关背景1
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7BG1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7BG1DC,hMusic_bitmap); 

		   
		  hLevel7PadDC= CreateCompatibleDC(hdc);//加载第7关pad
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7PAD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7PadDC,hMusic_bitmap);

		   hLevel7Pad1DC= CreateCompatibleDC(hdc);//加载第7关pad1反面pad
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7PAD1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7Pad1DC,hMusic_bitmap);

		   hLevel7BallDC= CreateCompatibleDC(hdc);//加载第7关ball
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7BALL),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7BallDC,hMusic_bitmap);

		  hLevel7DeathDC= CreateCompatibleDC(hdc);//加载第7关阵亡数
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7DEATH),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7DeathDC,hMusic_bitmap);

		   hLevel7QCFDC= CreateCompatibleDC(hdc);//加载第7关泉此方
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7QCF),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7QCFDC,hMusic_bitmap);
	  
		  hLevel7QCFdlgDC= CreateCompatibleDC(hdc);//加载第7关泉此方对话框
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7QCFDLG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( hLevel7QCFdlgDC,hMusic_bitmap);

		  cross_hdc= CreateCompatibleDC(hdc);//加载十字架
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_CROSS),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject( cross_hdc,hMusic_bitmap);

		  hMoeBar1= CreateCompatibleDC(hdc);//加载萌图欣赏导航条bar1
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOEBAR1),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hMoeBar1,hMusic_bitmap);

		  hMoeBar2= CreateCompatibleDC(hdc);//加载萌图欣赏bar2
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MOEBAR2),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(  hMoeBar2,hMusic_bitmap);

		  hLevel8BGDC= CreateCompatibleDC(hdc);//加载第八关背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8BGDC,hMusic_bitmap);

		   hLevel8BoardDC= CreateCompatibleDC(hdc);//加载第八关棋盘
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8BOARD),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(    hLevel8BoardDC,hMusic_bitmap);
		    
		  hLevel8Black= CreateCompatibleDC(hdc);//加载第八关黑棋子
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8BLACK),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8Black,hMusic_bitmap);

		  hLevel8White= CreateCompatibleDC(hdc);//加载第八关白棋子
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8WHITE),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8White,hMusic_bitmap);

		  hLevel8SQKS= CreateCompatibleDC(hdc);//加载第八关时崎狂三
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8SQKS),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8SQKS,hMusic_bitmap);

		  hLevel8Tick= CreateCompatibleDC(hdc);//加载第八关绿色钩
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL8TICK),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel8Tick,hMusic_bitmap);

		  hLevel9BGDC= CreateCompatibleDC(hdc);//加载第9关背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9BG),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel9BGDC,hMusic_bitmap);
		   
		  hLevel9StateBarDC= CreateCompatibleDC(hdc);//加载第9关状态栏
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9STATEBAR),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(   hLevel9StateBarDC,hMusic_bitmap);

		   hLevel9ActorDC= CreateCompatibleDC(hdc);//加载第9关女主角
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9ACTOR),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
		  SelectObject(    hLevel9ActorDC,hMusic_bitmap);

		  hLevel9PortalDC = CreateCompatibleDC(hdc);//加载第9关传送门
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9PORTAL), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9PortalDC, hMusic_bitmap);
		  
		  hLevel9BirdDC = CreateCompatibleDC(hdc);//加载第9关南小鸟
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9GIRL), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9BirdDC, hMusic_bitmap);

		  hLevel9GsystemDC = CreateCompatibleDC(hdc);//加载第9关重力系统
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9GSYSTEM), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9GsystemDC, hMusic_bitmap);

		  hLevel9AccDC = CreateCompatibleDC(hdc);//加载第9关加速道具
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9ACC), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9AccDC, hMusic_bitmap);
		  
		  hLevel9AccEffectDC = CreateCompatibleDC(hdc);//加载第9关加速效果
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9ACCEFFECT), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9AccEffectDC, hMusic_bitmap);

		  hLevel9DialogDC = CreateCompatibleDC(hdc);//加载第9关对话框
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9DIALOG), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9DialogDC, hMusic_bitmap);
		  
		  hLevel9BarrierDC = CreateCompatibleDC(hdc);//加载第9关阻碍物（龙珠）
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9BARRIER), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9BarrierDC, hMusic_bitmap);

		  hLevel9GrayLockDC = CreateCompatibleDC(hdc);//加载第9关灰色锁
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9GRAY), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9GrayLockDC, hMusic_bitmap);

		  hLevel9GrayKeyDC = CreateCompatibleDC(hdc);//加载第9关灰色钥匙
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9GRAYKEY), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(hLevel9GrayKeyDC, hMusic_bitmap);
		   
		  hLevel9BanDC = CreateCompatibleDC(hdc);//加载第9关禁止标志
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9BAN), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9BanDC , hMusic_bitmap);
		    
		  hLevel9PinkBarrierDC = CreateCompatibleDC(hdc);//加载第9关紫色障碍物
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9PINKBARRIER), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9PinkBarrierDC , hMusic_bitmap);
		    
		  hLevel9FlashDC = CreateCompatibleDC(hdc);//加载第9关闪电
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9FLASH), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9FlashDC , hMusic_bitmap);

		  hLevel9BikeDC = CreateCompatibleDC(hdc);//加载第9关比克大魔王
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9BIKE), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hLevel9BikeDC , hMusic_bitmap);

		  hCGDC = CreateCompatibleDC(hdc);//加载游戏CG 背景
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_GAMECG), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hCGDC , hMusic_bitmap);

		  hCartoonJapanDC = CreateCompatibleDC(hdc);//加载卡通日本
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CARTOONJP), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hCartoonJapanDC  , hMusic_bitmap);

		   hCartoonJapanDC1 = CreateCompatibleDC(hdc);//加载卡通日本孩
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CARTOONJP1), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hCartoonJapanDC1  , hMusic_bitmap);

		  hSilverDialog = CreateCompatibleDC(hdc);//加载银色对话框
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_SILVERDIALOG), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hSilverDialog  , hMusic_bitmap);

		  hStartMianma = CreateCompatibleDC(hdc);//加载面码
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MIANMA), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hStartMianma  , hMusic_bitmap);

		  hTotalJapanDC = CreateCompatibleDC(hdc);//加载日本大图
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_TOTALJAPAN), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hTotalJapanDC  , hMusic_bitmap);

		  KyBd = CreateCompatibleDC(hdc);//加载键盘方向键
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_KYBD), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  KyBd  , hMusic_bitmap);

		  hMissionBar = CreateCompatibleDC(hdc);//加载任务栏
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MISSIONBAR), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hMissionBar , hMusic_bitmap);

		  hBack = CreateCompatibleDC(hdc);//加载退出按钮
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_BACK), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject( hBack , hMusic_bitmap);
		   
		  hRotate135 = CreateCompatibleDC(hdc);//加载135度飞机
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_ROTATE135), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hRotate135 , hMusic_bitmap);

		  hLand = CreateCompatibleDC(hdc);//加载下降按钮
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LAND), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(  hLand  , hMusic_bitmap);

		  hWalkFrame = CreateCompatibleDC(hdc);//人物走动图像
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_WALKFRAME), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(   hWalkFrame  , hMusic_bitmap);

		  hMark = CreateCompatibleDC(hdc);//地图标记
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MAPMARK), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(    hMark  , hMusic_bitmap);

		   hMarkHome = CreateCompatibleDC(hdc);//家标记
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MARKHOME), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(   hMarkHome , hMusic_bitmap);
		  /////////////////////////////////////////////////////////////////////游戏人物家
		  hSaberHome = CreateCompatibleDC(hdc);//saber家
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_HOME1), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(    hSaberHome , hMusic_bitmap);

		  hEnter = CreateCompatibleDC(hdc);//回车键
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_ENTER), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(    hEnter , hMusic_bitmap);
		  
		  hMail = CreateCompatibleDC(hdc);//邮件
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MAIL), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(   hMail , hMusic_bitmap);

		  hMenuHead = CreateCompatibleDC(hdc);//菜单头部
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MENUHEAD), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(    hMenuHead , hMusic_bitmap);

		  hMenuBody = CreateCompatibleDC(hdc);//菜单中间项
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MENUBODY), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(     hMenuBody , hMusic_bitmap);

		  hExclimation = CreateCompatibleDC(hdc);//感叹号
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_EXCLIMATION), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(     hExclimation , hMusic_bitmap);

		  hMissionFinish = CreateCompatibleDC(hdc);//任务完成绿色爱心
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MISSIONFINISH), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(      hMissionFinish , hMusic_bitmap);

		  hZhaHuangDowntown = CreateCompatibleDC(hdc);//札幌市区：巧克力工厂外
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_ZHAHUANG1), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(       hZhaHuangDowntown , hMusic_bitmap);

		  hZhaHuangFactory = CreateCompatibleDC(hdc);//札幌市区：巧克力工厂内部
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_ZHAHUANG2), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(      hZhaHuangFactory  , hMusic_bitmap);

		  hCRYQ = CreateCompatibleDC(hdc);//札幌市区：穹妹dc
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CRYQ), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(       hCRYQ  , hMusic_bitmap);

		  hLuerdaoDowntown = CreateCompatibleDC(hdc);//鹿儿岛市区
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LUERDAO2), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(        hLuerdaoDowntown , hMusic_bitmap);

		  hLuerdaoVolcano = CreateCompatibleDC(hdc);//鹿儿岛市区火山景点
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LUERDAO1), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(        hLuerdaoVolcano , hMusic_bitmap);

		  hYSN = CreateCompatibleDC(hdc);//鹿儿岛市区亚丝娜
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_YSN ), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(        hYSN  , hMusic_bitmap);

		  hQingsenDowntown= CreateCompatibleDC(hdc);//青森市区
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_QINGSEN4), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(       hQingsenDowntown , hMusic_bitmap);

		  hQingsenPark= CreateCompatibleDC(hdc);//青森公园
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_QINGSEN5), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(        hQingsenPark , hMusic_bitmap);

		  hGBTN= CreateCompatibleDC(hdc);//桐乃
		  hMusic_bitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_GBTN), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
		  SelectObject(         hGBTN, hMusic_bitmap);


		  for (int i = 0; i<3; i++)//主标题
		  {
			  ChallengeDlg[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_IPHONEDLG1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(   ChallengeDlg[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<3; i++)//主标题
		  {
			  hMainTitle[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_MAINTITLE1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(   hMainTitle[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  ///////////////////////////////////////////////////////////////////////游戏人物dc
		  for (int i = 0; i<1; i++)//游戏人物dc
		  {
			  hAnimationPersonnel[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CAP1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(  hAnimationPersonnel[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }

		  for (int i = 0; i<1; i++)//加载每个城市街区block
		  {
			  hCityBlock[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_CITYBLOCK1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject( hCityBlock[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<9; i++)//加载飞机场
		  {
			  hAirportDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_AIRPORT1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hAirportDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<7; i++)//加载6张CG字母
		  {
			  hCGword[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_Z1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hCGword[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<8; i++)//加载8张飞机图
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

		  for (int i = 0; i<36; i++)//加载load城市图片以及相应文字说明
		  {
			  hCityDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_A1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hCityDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<3; i++)//加载第九关尖刺
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
		  for (int i = 0; i<1; i++)//加载第九关药水
		  {
			  hLevel9MedicineDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9MEDICINE + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hLevel9MedicineDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<1; i++)//加载第九关怪物
		  {
			  hLevel9Monster[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9MONSTER1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hLevel9Monster[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  for (int i = 0; i<4; i++)//加载第九关钥匙
		  {
			  hLevel9KeyDC[i] = CreateCompatibleDC(hdc);
			  HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst, MAKEINTRESOURCE(IDB_LEVEL9KEY1 + i), IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE);
			  SelectObject(hLevel9KeyDC[i], hMenuBitmap);
			  DeleteObject(hMenuBitmap);
		  }
		  
		  for(int i=0;i<7;i++)//加载第九关七颗龙珠
		  {
		     hLevel9BallDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9BALL1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel9BallDC[i],hMenuBitmap);
			 DeleteObject(hMenuBitmap);
		  }
		  for(int i=0;i<1;i++)//加载第九关砖墙，一共四块
		  {
		     hLevel9BrickDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL9BRICK1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel9BrickDC[i],hMenuBitmap);
			 DeleteObject(hMenuBitmap);
		  }

		  for(int i=0;i<14;i++)//加载第六关填字游戏有图片的答案
		  {
		     hLevel6AnswerDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV6_11+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel6AnswerDC[i],hMenuBitmap);
			 DeleteObject(hMenuBitmap);
		  }

		    for(int i=0;i<8;i++)//加载主菜单8个
		  {
		     hMenuDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMenuBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_MENU1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hMenuDC[i],hMenuBitmap);
			 DeleteObject(hMenuBitmap);
		  }

	    
		  for(int i=0;i<6;i++)//加载第1关6个毛笔字
		  {
		     hLevel1MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMotto1Bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV1_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel1MottoDC[i],hMotto1Bitmap);
			 DeleteObject(hMotto1Bitmap);
		  }

		   for(int i=0;i<9;i++)//加载第2关9个毛笔字
		  {
		     hLevel2MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMotto2Bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV2_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel2MottoDC[i],hMotto2Bitmap);
			 DeleteObject(hMotto2Bitmap);
		  }
		   for(int i=0;i<9;i++)//加载第3关9个毛笔字
		  {
		     hLevel3MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMotto3Bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV3_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel3MottoDC[i],hMotto3Bitmap);
			 DeleteObject(hMotto3Bitmap);
		  }
		     for(int i=0;i<9;i++)//加载第4关9个毛笔字
		  {
		     hLevel4MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMotto4Bitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV4_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel4MottoDC[i],hMotto4Bitmap);
			 DeleteObject(hMotto4Bitmap);
		  }
		  
		  for(int i=0;i<7;i++)//加载第五关7个毛笔字
		  {
		     hLevel5MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMottoBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV5_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel5MottoDC[i],hMottoBitmap);
			 DeleteObject(hMottoBitmap);
		  }
		    for(int i=0;i<9;i++)//加载第6关9个毛笔字
		  {
		     hLevel6MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMottoBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV6_D+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel6MottoDC[i],hMottoBitmap);
			 DeleteObject(hMottoBitmap);
		  }
			  for(int i=0;i<9;i++)//加载第7关9个毛笔字
		  {
		     hLevel7MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMottoBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV7_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel7MottoDC[i],hMottoBitmap);
			 DeleteObject(hMottoBitmap);
		  }
           for(int i=0;i<9;i++)//加载第8关9个毛笔字
		  {
		     hLevel8MottoDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMottoBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LV8_1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel8MottoDC[i],hMottoBitmap);
			 DeleteObject(hMottoBitmap);
		  }
		   for(int i=0;i<26;i++)//加载第四关26个字母
		  {
		     hLetterDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hLetterBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BITMAP_A+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLetterDC[i],hLetterBitmap);
			 DeleteObject(hLetterBitmap);
		  }

		  for(int i=0;i<4;i++)//加载第三关怪物，一共4个左右吧
		  {
		     hLevel3MonsterDC[i]=CreateCompatibleDC(hdc);
			 HBITMAP hMonsterBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BITMAP15+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			 SelectObject(hLevel3MonsterDC[i],hMonsterBitmap);
			 DeleteObject(hMonsterBitmap);
		  }


		  for(int i=0;i<=7;i++)//加载8张萌图
		  {
		    hPictureDC[i]=CreateCompatibleDC(hdc);
			HBITMAP hPictureBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BITMAP1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject(hPictureDC[i],hPictureBitmap);
			DeleteObject(hPictureBitmap);
		  }

		  for(int i=0;i<=4;i++)//加载5张球体图
		  {
		    hBallDC[i]=CreateCompatibleDC(hdc);
			HBITMAP hBallBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_BITMAP10+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject(hBallDC[i],hBallBitmap);
			DeleteObject(hBallBitmap);
		  }
		  
		  for(int i=0;i<6;i++)//加载第七关5张砖块图
		  {
		    hLevel7BrickDC[i]=CreateCompatibleDC(hdc);
			HBITMAP hBrickBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL7BRICK1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject(hLevel7BrickDC[i],hBrickBitmap);
			DeleteObject(hBrickBitmap);
		  }

		  for(int i=0;i<24;i++)//加载一共十关prelude的30张图片
		  {
		    hLevelPrelude[i]=CreateCompatibleDC(hdc);
			HBITMAP hPreludeBitmap;
			if(i<21)/////////////////////////////////////////////这里分情况讨论时因为在resource.h中这些图片idb不连续，也没办法弄成连续的，因为中间空白位置有限
			    hPreludeBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL1PRELUDE1+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			else
				hPreludeBitmap = (HBITMAP)LoadImage(hInst,MAKEINTRESOURCE(IDB_LEVEL1PRELUDE1+17+i),IMAGE_BITMAP,0,0,LR_DEFAULTSIZE);
			SelectObject( hLevelPrelude[i],hPreludeBitmap);
			DeleteObject(hPreludeBitmap);
		  }

		   for(int i=0;i<8;i++)//加载萌图欣赏8张图的简介
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
	case WM_CONTEXTMENU://响应右键菜单
		{
		  POINTS p = MAKEPOINTS(lParam);
		  if(game_state==2)
		  {
		  HMENU hSysMenu = GetSystemMenu(hWnd,FALSE);//添加右键菜单
		  TrackPopupMenu(hSysMenu,TPM_LEFTALIGN,p.x,p.y,0,hWnd,NULL);
		  }
		  break;
		}
	case WM_CHAR://为什么keydown不行？
		{		  
		
		    switch(wParam)
		    {
			    case 97://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关				
					grid_letter[level6_row][level6_column]='A';
				    break;
				}
                case 98://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关				
					grid_letter[level6_row][level6_column]='B';
					break;
				}
                case 99://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='C';
					break;
				}
				 case 100://按下字母d
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='D';
				    if(TotalJapan_x+300>=1868&&TotalJapan_x+300<=2303&&TotalJapan_y+400>=1952&&TotalJapan_y+400<=2395&&game_state==-7)//飞机进入东京城市介绍
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
					if(TotalJapan_x+300>=2246&&TotalJapan_x+300<=2529&&TotalJapan_y+400>=400&&TotalJapan_y+400<=600&&game_state==-7&&m_it!=mission_set.end())//飞机进入札幌城市介绍
					{
					   game_state=-300;
					   Tokyo_counter=0;
					   map_stretch_counter=0;
					   tokyo_counter1=0;
					   tokyo_counter2=0;
					   male_player_x=316;
					   male_player_y=495;
					   plane_direction=false;//必须加这句话，决定了飞机方向
					   take_off=false;//必须加这句话
					}
					m_it2=mission_set.find(3);
					if(TotalJapan_x+300>=300&&TotalJapan_x+300<=590&&TotalJapan_y+400>=2763&&TotalJapan_y+400<=3048&&m_it2!=mission_set.end()&&game_state==-7)//飞机进入鹿儿岛城市介绍
					{
					   game_state=-400;
					   Tokyo_counter=0;
					   map_stretch_counter=0;
					   tokyo_counter1=0;
					   tokyo_counter2=0;
					   male_player_x=280;
					   male_player_y=512;					   
					   plane_direction=false;//必须加这句话，决定了飞机方向
					   take_off=false;//必须加这句话
										
					}
					m_it3=mission_set.find(4);
					if(TotalJapan_x+300>=2090&&TotalJapan_x+300<=2400&&TotalJapan_y+400>=829&&TotalJapan_y+400<=1088&&m_it3!=mission_set.end()&&game_state==-7)//飞机进入青森城市介绍
					{
					   game_state=-500;
					   Tokyo_counter=0;
					   map_stretch_counter=0;
					   tokyo_counter1=0;
					   tokyo_counter2=0;
					   male_player_x=336;
					   male_player_y=333;					   
					   plane_direction=false;//必须加这句话，决定了飞机方向
					   take_off=false;//必须加这句话
										
					}
					break;
				}
				 case 101://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='E';
					break;
				}
				 case 102://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关							
					grid_letter[level6_row][level6_column]='F';
					break;
                 case 103://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='G';
					break;
				}
				 case 104://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='H';
					break;
				}
				 case 105://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关					
					grid_letter[level6_row][level6_column]='I';
					break;
				}
				 case 106://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关					
					grid_letter[level6_row][level6_column]='J';
					break;
				}
				 case 107://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关							
					grid_letter[level6_row][level6_column]='K';
					break;
				}
				 case 108://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关							
					grid_letter[level6_row][level6_column]='L';
					break;
				}
				 case 109://按下字母m
				{	
				    RECT r_forbidden_zone = { 40, 340, 280, 520 };//第七颗龙珠禁止使用加速符文的区域
					RECT r_forbidden_zone1 = { 400, 420, 520, 560 };//第5颗龙珠禁止使用加速符文的区域
					RECT r_forbidden_zone2={20,20,240,220};//remover区域禁止使用加速符文
					POINT level9_player = { level9_px + 10, level9_py + 10 };
					if (game_state == 18 && level9_acc_tool != 0 && !(PtInRect(&r_forbidden_zone, level9_player)||PtInRect(&r_forbidden_zone1, level9_player)||PtInRect(&r_forbidden_zone2, level9_player)))//使用加速道具,在第七课龙珠重力区域内禁止使用
					{
						level9_acc_tool--;
						y_velocity = -2;
						level9_acceffect_counter = 0;
					}									  
				    if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='M';
					break;
				}
				 case 110://按下字母n
				{	
							  if (game_state == 18 && level9_medicine[0] == false && reveal_medecine_number > 0)//把每一次照亮的坐标存进数组中以便输出在屏幕
							  {
								  if (level9_temp_y <= 620)//为了防止照亮状态栏
								  {
									  level9_medecine_coordinate_array[reveal_medecine_number * 2 - 2] = level9_temp_x;
									  level9_medecine_coordinate_array[reveal_medecine_number * 2 - 1] = level9_temp_y;
									  reveal_medecine_number--;
								  }
							  }
				             if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关					
					              grid_letter[level6_row][level6_column]='N';
					         break;
				}
				 case 111://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关					
					grid_letter[level6_row][level6_column]='O';
					break;
				}
				 case 112://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关				
					grid_letter[level6_row][level6_column]='P';
					break;
				}
				 case 113://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='Q';
					break;
				}
				 case 114://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='R';
					break;
				}
				 case 115://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='S';
					break;
				}
				 case 116://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='T';
					break;
				}
				 case 117://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关					
					grid_letter[level6_row][level6_column]='U';
					break;
				}
				 case 118://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关					
					grid_letter[level6_row][level6_column]='V';
					break;
				}
				 case 119://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='W';
					break;
				}
				 case 120://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关							
					grid_letter[level6_row][level6_column]='X';
					break;
				}
				 case 121://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关						
					grid_letter[level6_row][level6_column]='Y';
					break;
				}
				 case 122://按下字母a
				{	if(game_state==12&&grid_letter[level6_row][level6_column]!='0')//第六关					
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
		   if(game_state==0)//主菜单界面
		   {
			   RECT r_startgame={80,270,150,340};
			   RECT r_briefgame={80,360,150,430};
			   RECT r_exitgame={80,450,150,520};
			   RECT r_moegame={80,540,150,610};
			   if(PtInRect(&r_startgame,p1))//如果鼠标在 开始游戏 区域内
			   {
			      GameStart_Select=true;
			   }
			   else
			   {
			    GameStart_Select=false;			   
			   }
			   if(PtInRect(&r_briefgame,p1))//如果鼠标在 游戏简介 区域内
			   {
			      GameBrief_Select=true;
			   }
			   else
			   {
			    GameBrief_Select=false;			   
			   }
			    if(PtInRect(&r_exitgame,p1))//如果鼠标在 退出游戏 区域内
			   {
			      GameExit_Select=true;
			   }
			   else
			   {
			    GameExit_Select=false;			   
			   }
               if(PtInRect(&r_moegame,p1))//如果鼠标在 萌图欣赏 区域内
			   {
			      GameMoe_Select=true;
			   }
			   else
			   {
			    GameMoe_Select=false;			   
			   }
		   
		   }
		   if(game_state==-1)//再续前缘
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
		   if(game_state==2)//第一关
		   {
		       RECT r_A={226,683,240,700};//以下是鼠标判定
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
			   
		   if(game_state==10)//第五关
		  {
		    if(Level5_state==1)//第五关第二页对话选择一样或不一样
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
		   if(game_state==12)//第六关
		   {
			   RECT whole_grid={99,59,501,461};//整个填字区域
			   RECT eng1={106,64,139,99}, chi1={100,100,140,140},eng2={140,60,180,100},eng3={220,60,260,100},eng5={300,60,340,100},eng10={420,60,460,100},
				    eng4={180,100,220,140},chi6={340,100,380,140},eng7={380,100,420,140},chi3={260,140,300,180},eng11={460,140,500,180},chi4={180,180,220,220},
					eng6={220,180,260,220},chi8={380,180,420,220},eng12={420,180,460,220},chi16={100,220,140,260},eng18={140,220,180,260},eng8={300,220,340,260},
					chi5={220,260,260,300},eng9={260,260,300,300},chi9={380,260,420,300},chi15={140,300,180,340},eng16={180,300,220,340},chi17={340,300,380,340},
					eng17={100,340,140,380},chi11={260,340,300,380},eng14={460,340,500,380},chi13={180,380,220,420},eng15={340,380,380,420},chi14={100,420,140,460},
					chi18={260,420,300,460};
			   
			   if(PtInRect(&whole_grid,p1))//首先是在整个填字格子区域内
			   {
			   
				   level6_row=(p1.x-100)/40;   //记下鼠标所在格子的行列号
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
		   if(game_state==16)//第八关
		   {
		        
			    level8_row = (p1.x-87)/25;//转换屏幕坐标获取棋盘坐标
				level8_column = (p1.y-87)/25;
				RECT r_mousemove={87+level8_row*25,87+level8_column*25,87+(level8_row+1)*25,87+(level8_column+1)*25};//鼠标所在区域
				RECT r_board={90,90,510,510};//下棋的区域
				if(PtInRect(&r_board,p1))
					{
						IsInBoard=true;
				       
				    }
				else
					{
						IsInBoard=false;
						
				    }

				if(level8_state==0)//初始化选关卡节界面
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
		   if (game_state == 18)//第九关
		   {
			   RECT r_med = { 370, 715, 390, 735 };//药水说明显示
			   if (PtInRect(&r_med, p1))
				   level9_medecine_description = true;
			   else
				   level9_medecine_description = false;
			   if (reveal_medecine_number != 0 && level9_medicine[0] == false)//为了只显示固定区域
			   {
				   level9_temp_x = p1.x;//给临时坐标
				   level9_temp_y = p1.y;
			   }
			   RECT r_acc = { 420, 715, 440, 735 };//加速道具文字说明区域
			   if (PtInRect(&r_acc, p1))
				   level9_acctool_description = true;
			   else
				   level9_acctool_description = false;
			   RECT r_box={355,665,375,685};//箱子文字说明
			   if(PtInRect(&r_box,p1))
				   level9_box_description=true;
			   else
				   level9_box_description=false;
			   RECT r_flash={395,665,415,685};//闪电文字说明
			   if(PtInRect(&r_flash,p1))
				   level9_flash_description=true;
			   else
				   level9_flash_description=false;

			   level9_box_x=p1.x/20;//获取放置箱子的位置的矩阵坐标
			   level9_box_y=p1.y/20;

			   level9_flash_x=p1.x/20;//获取使用闪电的位置的矩阵坐标
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
		  //有问题
		  switch(wParam)
		  {
		  case 3://1毫秒计时器
			  {
					 
				if(game_state==-6) //飞机在海上
				{
				  plane_counter++;			  
				  dialog_counter++;								
				}
				  
				if (game_state == 18)
					 {
						 level9_chasingmonster_counter++;//追逐怪物计时器
						 if (level9_chasingmonster_counter  == 5)
						 {
							 chase = true;
							 level9_chasingmonster_counter = 0;
						 }
						 else
							 chase = false;
					 }
				if(game_state==-5)//游戏CG
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
			
				if(game_state==-7)//飞机在日本上空飞翔
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
				  //任务更新代码:第一个任务 飞到东京
				  if(mission1==true)//触发了第一个任务
				  {
				     Ex_counter+=8;
					 if( Ex_counter>=360)
						  Ex_counter=360;
				  
				  }
				
				}
				if(game_state==-102)//saber家
				{
				   it=s.find(1);
				   if(it!=s.end())//第一关已经过了
				   {
				      Ex_counter+=8;
					  if( Ex_counter>=360)
						  Ex_counter=360;				   
				   }				   
				}
				if(game_state==-303)//穹妹那儿
				{
				   it=s.find(2);
				   if(it!=s.end())//第2关已经过了
				   {
				      Ex_counter+=8;
					  if( Ex_counter>=360)
						  Ex_counter=360;				   
				   }				   
				}
				if(game_state==-403)//亚丝娜那儿
				{
				   it=s.find(3);
				   if(it!=s.end())//第3关已经过了
				   {
				      Ex_counter+=8;
					  if( Ex_counter>=360)
						  Ex_counter=360;				   
				   }				   
				}
				if(game_state==-503)//桐乃那儿
				{
				   it=s.find(4);
				   if(it!=s.end())//第4关已经过了
				   {
				      Ex_counter+=8;
					  if( Ex_counter>=360)
						  Ex_counter=360;				   
				   }				   
				}
				if(game_state==-1)//再续前缘
				{
				   if(tokyo==true||mingguwu==true||qingsen==true||jingdu==true||zhahuang==true||songshan==true||luerdao==true||jiuzhou==true||xinxie==true)//重要
				   {
				      map_stretch_counter+=12;
					  ///////////////////////////计时器，表示城市介绍时间
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
				///////////////////////////////////////////////////////////////////////////////////////机场计时器
				if(game_state==-100||game_state==-301||game_state==-401||game_state==-501)//东京机场,札幌机场,鹿儿岛机场,青森机场
				{
				   if(take_off==false)
				    {
					Tokyo_counter++;
				    Tokyo_transform_counter++;//飞机变小计时器 
				    if(Tokyo_counter>=250)
					   Tokyo_counter=250;
				    if(Tokyo_transform_counter>=60)
					   Tokyo_transform_counter=60;
				    }
				   else//飞机准备起飞
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
				if(game_state==-200||game_state==-300||game_state==-400||game_state==-500)/////////////////////////////////////////////////////////城市介绍
				{
				       map_stretch_counter+=12;
					  ///////////////////////////计时器，表示城市介绍时间
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
			  	 //四个圆圈依次进入画面
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
			  

			  
			  if(game_state==14)//第七关计时器
			  {			   
				lv7_color_counter++;//方块颜色计时器
                if(lv7_color_counter==6)
					lv7_color_counter=0;
			  }
			    if(game_state==16)//第八关
			  {
			    if(IsWin_level8(level8_board,AI_row,AI_column,2)||IsWin_level8(level8_board,level8_row,level8_column,1))
                     level8_counter++;			  
			  }
			
			 if(game_state==10)//第五关对琴里插入动画
				 {
				   if(Level5_state==0)
				   {
					Lv5_counter_whql++;
				   if( Lv5_counter_whql>=300)
				   Lv5_counter_whql--;
				   }
				   else if(Level5_state==5)//琴里退场动画
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
		  case 2:///////////////////////////////////1秒钟的计时器
			 {
			  
				
				if(game_state==4)
			     {			        
					Level2_counter++;//第二关计时器					
			     }		
			 
			  if(game_state==103)//第一关格言
			  {
			     Level1_Motto++;
				 if(Level1_Motto>=6)//不能使等于6
				 {
				    Level1_Motto=6;
					Level1_Motto_done=true;//第一关格言已经播放完了
				 }
			  }
			  if(game_state==104)//第二关格言
			  {
			     Level2_Motto++;
				 if(Level2_Motto>=9)
				 {
				    Level2_Motto=9;
					Level2_Motto_done=true;//第2关格言已经播放完了
				 }
			  
			  }
			  if(game_state==105)//第三关格言
			  {
			      Level3_Motto++;
				 if(Level3_Motto>=9)
				 {
				    Level3_Motto=9;
					Level3_Motto_done=true;//第3关格言已经播放完了
				 }
			  
			  }
			  if(game_state==106)//第四关格言
			  {
			      Level4_Motto++;
				 if(Level4_Motto>=9)
				 {
				    Level4_Motto=9;
					Level4_Motto_done=true;//第4关格言已经播放完了
				 }			  
			  }
			    if(game_state==107)//第6关格言
			  {
			      Level6_Motto++;
				 if(Level6_Motto>=9)
				 {
				    Level6_Motto=9;
					Level6_Motto_done=true;//第6关格言已经播放完了
				 }			  
			  }
				if(game_state==108)//第七关格言
				{
				   Level7_Motto++;
				   if(Level7_Motto>=9)
				   {
				      Level7_Motto=9;
				      Level7_Motto_done=true;//第7关格言已经播放完了
				   }
				 												
				}
				if(game_state==109)//第8关格言
				{
				   Level8_Motto++;
				   if(Level8_Motto>=9)
				   {
				      Level8_Motto=9;
				      Level8_Motto_done=true;//第7关格言已经播放完了
				   }
				 												
				}
			  if(game_state==10)//第五关
			  {
			     Lv5_counter_roll++;
				 if(Lv5_whql_animation_done==true&&Level5_state==5)//第五关毛笔字显示动画
				 {
				    Level5_Motto++;
					if(Level5_Motto>=7)
						{
							Level5_Motto=7;
							Level5_Motto_done=true;//7个毛笔字写完后的标志变量
					    }
				 }
			  }
			 break;   
			 }
		  case 4://第4关计时器 0.01s
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
				  if(game_state==18)//龙珠飞行动画 和 重力设置：每隔3秒钟产生重力3秒钟
				 {
					   
					 
					   
					   if (level9_acceffect_counter>=0)
					   level9_acceffect_counter++;
					   					   
					   level9_gravity_counter++;
					   if (level9_gravity_counter >= 90)
						   level9_gravity_counter = 0;
					   if ((level9_gravity_counter / 30) % 3 == 0)
						   gravity_activated = false;//激活重力系统
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
				  if(game_state==1||game_state==3||game_state==5||game_state==7||game_state==9||game_state==11||game_state==13||game_state==15)//测试prelude炫酷特效
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
			     
				 if(game_state==12)//第六关
				 {
				   if(right1==true) //第六关填完所有条目之后
				   {
				     Level6_counter++;
				   }
				 
				 }
				 if(game_state==16&&level8_state==1)
					 level8_lv1_counter++;
				 if(game_state==16&&level8_state==3)
					 level8_lv1_counter++;

				 if(game_state==18&&flash_used==true)//第九关比克大魔王体力计数器
					 level9_bike_counter++;
				
			  
			  }
		  
		  
          }
			break;
		}
	case WM_LBUTTONDOWN:///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////单击鼠标左键
		{
		   p =MAKEPOINTS(lParam);
		   POINT p1={p.x,p.y};	   
		   RECT rect={12,800-128+12,76,800-64+12};//音乐图标矩形区域
		   RECT r_accept={233,613,276,655};//接受挑战
		   RECT r_not_accept={330,613,379,655};//不接受挑战
		   RECT r_accept_asuna={233,413,276,455};
		   RECT r_not_accept_asuna={330,413,379,455};//不接受挑战
		   //点击邮件处理代码，所有gamestate都放在一起处理
		   RECT r_mail={530,0,590,45};
		   if(game_state==-7||game_state==-100||game_state==-101||game_state==-102||game_state==-301||game_state==-302||game_state==-303||game_state==-401||game_state==-402||game_state==-403||game_state==-501||game_state==-502||game_state==-503)
		   {
		       //任务列表显示
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
              //邮件感叹号显示
			   if(mission_viewed==false)
			   {
			      if(PtInRect(&r_mail,p1))
				  {
				     mission_viewed=true;
				  }			   		
			   }
			  
		   }
		   	   
		   if(game_state==-102)//saber家
		   {
		     if(challenge_activated==true)//按了回车
			 {
			    if(PtInRect(&r_accept,p1))//接受挑战
				{
				   game_state=1;//进入第一关
				   start=clock();
				}
				if(PtInRect(&r_not_accept,p1))// 放弃挑战
				{
				   game_state=-102;
				   challenge_activated=false;
				}
			 
			 }
		   	   
		   }
		   if(game_state==-303)//春日野穷那里
		   {
		       if(challenge_activated==true)//按了回车
			 {
			    if(PtInRect(&r_accept,p1))//接受挑战
				{
				   game_state=3;//进入第2关
				   start_level2_pre=clock();
				}
				if(PtInRect(&r_not_accept,p1))// 放弃挑战
				{
				   game_state=-303;
				   challenge_activated=false;
				}
			 
			 }
		   
		   }
		   if(game_state==-403)//亚丝娜哪里
		   {
		    if(challenge_activated==true)//按了回车
			 {
			    if(PtInRect(&r_accept_asuna,p1))//接受挑战
				{
				   game_state=5;//进入第3关prelude
				   start_level3_pre=clock();
				}
				if(PtInRect(&r_not_accept_asuna,p1))// 放弃挑战
				{
				   game_state=-403;
				   challenge_activated=false;
				}
			 
			 }
		   
		   }
		    if(game_state==-503)//桐乃哪里
		   {
		    if(challenge_activated==true)//按了回车
			 {
			    if(PtInRect(&r_accept_asuna,p1))//接受挑战
				{
				   game_state=7;//进入第4关prelude
				   start_level4_pre=clock();
				}
				if(PtInRect(&r_not_accept_asuna,p1))// 放弃挑战
				{
				   game_state=-503;
				   challenge_activated=false;
				}
			 
			 }
		   
		   }
		   if(game_state==103)//第一关格言界面
		   {
		      if(Level1_Motto_done==true)
			  {
			     Level1_Motto_done=false;
				 game_state=-102;//第一关成功过关后回到saber家，得到下一步消息
				 challenge_activated=false;
				 Level1_Motto=0;
				 //要改的语句
				 InvalidateRect(hWnd,NULL,true);							  
			  }
		   
		   }
		   if(game_state==104)//第二关格言界面
		   {
		      if(Level2_Motto_done==true)
			  {
			     Level2_Motto_done=false;
				 game_state=-303;//回到巧克力工厂内部
				 Level2_Motto=0;
				 challenge_activated=false;
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   
		   }
		   if(game_state==105)//第3关格言界面
		   {
		      if(Level3_Motto_done==true)
			  {
			     Level3_Motto_done=false;
				 game_state=-403;//第四关prelude
				 Level3_Motto=0;
				 //start_level4_pre=clock();
				 challenge_activated=false;
				// j=1;
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   
		   }
		   if(game_state==106)//第4关格言界面
		   {
		      if(Level4_Motto_done==true)
			  {
			     Level4_Motto_done=false;
				 game_state=-503;//第5关prelude
				 Level4_Motto=0;
				 Level4_counter=0;
				 //start_level5_pre=clock();
				 //j=1;
				 challenge_activated=false;
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   		   		   		   
		   }
		   if(game_state==107)//第6关格言界面
		   {
		    if(Level6_Motto_done==true)//第六关格言播放结束
			  {
			     Level6_Motto_done=false;
				 game_state=13;//第7关prelude
				 Level6_Motto=0;
				 Level6_counter=0;
				 start_level7_pre=clock();
				 j=1;
				 InvalidateRect(hWnd,NULL,true);							  
			  }		   		   		   		   		   
		   }
		    if(game_state==108)//第7关格言界面
		   {
		    if(Level7_Motto_done==true)//第六关格言播放结束
			  {
			     Level7_Motto_done=false;
				 game_state=15;//第8关prelude
				 Level7_Motto=0;
				 start_level8_pre=clock();
				 for(int i=0;i<17;i++)//第八关变量归0
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
		   if(game_state==-7||game_state==-100||game_state==-101||game_state==-102||game_state==-301||game_state==-302||game_state==-303||game_state==-401||game_state==-402||game_state==-403||game_state==-501||game_state==-502||game_state==-503)//回到主菜单
		   {
			   RECT r_back={0,0,50,50};//退出
			   if(PtInRect(&r_back,p1))
			   {
			       if( IDYES==MessageBox(hWnd,L"确定回到主菜单么？面码需要你！！",L"留步~",MB_YESNO))
				   {
					   game_state=0;
					   TotalJapan_x=3400,TotalJapan_y=2400;
					   dir=1;
					   PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐	
				       InvalidateRect(hWnd,NULL,0);	
				   }
			   
			   }
		   
		   }
			if(game_state==0)//;主菜单界面
		   {
			  
			   
			   RECT r_save={90,686,150,746};
			   if(PtInRect(&r_save,p1))
			   {
			            //处理文件写入，即已经通过的关
						TCHAR filename[MAX_PATH]=L"save";//保存文件名
						TCHAR strDefExt[]=L"dat";//默认扩展名
						OPENFILENAME of={sizeof(OPENFILENAME)};//申明结构体,必须指定他的大小，否则不会弹出对话框的，这一点很重要
						of.hwndOwner = hWnd;
						of.hInstance = hInst;
						of.lpstrFilter = L"已过关卡(*.dat)\0.dat\0";
						of.nFilterIndex = 1;
						of.lpstrFile = filename;
						of.nMaxFile = MAX_PATH;
						of.lpstrDefExt = strDefExt;
						of.Flags = OFN_EXPLORER;
					   
					   
					   if(GetSaveFileName(&of)==true)
					   {
						   HANDLE hFile =CreateFile( //创建文件
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
							 if(s.size()!=0)//如果已经有关卡通过了
							   WriteFile(hFile,&(*it),sizeof(int),&byteToWrite,NULL);
						   }					 
							 CloseHandle(hFile);	
					   }
			   
			   }
			   
			   if(PtInRect(&r_startGame,p1))//开始游戏
				   {					   
					  chu2s=true;//播放圆圈右飞动画
				      PlaySound((LPCTSTR)IDR_WAVE1,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐
					 
			       }
                     			  			   
			    if(PtInRect(&r_exitGame,p1))//退出游戏
				   {
					  
					   PostQuitMessage(0);
			       }
				if(PtInRect(&r_briefGame,p1))//游戏简介
				   {
					  xun2s=true;//右飞动画
					  //IsLoad = false;
					  
			       }
				if(PtInRect(&r_MoeGame,p1))//萌图欣赏
				  {
				      shang2s=true;	
					  moe_bar=true;
					  for(int i=0;i<8;i++)
						  mp[i]=false;//8张信息简介开始都为false，都不出现
				  }
				if(PtInRect(&r_BgInfoGame,p1))
				{
				    game_state=-3;
					InvalidateRect(hWnd,NULL,true);
				}

		   }
		   if(game_state==2)//第一关
		   {
			  
			   RECT r_returnMenu={23,595,110,631};
			   RECT r_A={226,683,240,700};//以下是键盘按键判定
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
			     
				   if( IDYES==MessageBox(hWnd,L"确定要放弃挑战么?",L"留步~",MB_YESNO))
				   {
					   game_state=-102;//回到saber家
					   challenge_activated=false;
					   //PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐	
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
					
					MessageBox(hWnd,L"Good Job!密码正确！",L"恭喜",MB_OK);
					s.insert(1);//第一关已过
					game_state=103;///////////////////////////进入第一关格言界面,100+关卡数表示格言界面
					Password="";
					Ex_counter=0;//感叹号计时器归0，以便于下一次计时
					InvalidateRect(hWnd,NULL,0);
					
				  }
				  else
				  {				    
					MessageBox(hWnd,L"密码错误！",L"悲剧",MB_OK);
					Password="";
					InvalidateRect(hWnd,NULL,0);	
				  }
			   }

		   }
		   if(game_state==4)//第二关
		   {
		      RECT r_returnMenu={28,556,80,588};
			  if(PtInRect(&r_returnMenu,p1))
			   {
			        if( IDYES==MessageBox(hWnd,L"确定要放弃挑战么?",L"留步~",MB_YESNO))
				   {
					   Level2_counter=0;//计时器归零
					   game_state=-303;
					   challenge_activated=false;
				       InvalidateRect(hWnd,NULL,true);	
				   }
								 			 	 		   
			   }
		   
		   }
		   if(game_state==6)//第三关
		   {
		      RECT r_returnMenu={28,556,80,588};
			  if(PtInRect(&r_returnMenu,p1))
			   {
			        if( IDYES==MessageBox(hWnd,L"确定放弃挑战么？面码需要你！！",L"留步~",MB_YESNO))
				   {
					     death_level3=0;
				         game_state=-403;
						 challenge_activated=false;
						 PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐	
						 InvalidateRect(hWnd,NULL,true);
						 PosX3=93,PosY3=93;//重设第三关玩家初始位置
						 flag_save1=false;//第三关存盘变量重置
						 flag_coin1=true, flag_coin2=true, flag_coin3=true;//第三关金币标志变量
				   }
				
			   }
		   
		   }

		   if(game_state==8)//第4关
		   {
		      RECT r_returnMenu={28,47,102,78};
			   if(PtInRect(&r_returnMenu,p1))//回到主菜单
			   {
			        if( IDYES==MessageBox(hWnd,L"确定要放弃挑战么？面码需要你！！",L"留步~",MB_YESNO))
				   {					    
				         //各种变量归零
					     timebar_y=360;
					     Level4_counter=0;				         
					     zoom_flag=false;
					     game_state=-503;
						 challenge_activated=false;
						 Level4_state=0;//变量归零，防止出错
						 flag_level4_start=false;//标志变量归零
						 InvalidateRect(hWnd,NULL,true);
				   }				
			   }		   
			   RECT r_start={240,150,340,250};//第四关开始游戏
			   if(PtInRect(&r_start,p1)&&flag_level4_start==false)
			   {
				 /////////////////////////////////////////////////////////////////初始化状态矩阵，得到随机矩阵，不能再gamedoublebuffer中进行，否则会不断变化
				 row=rand()%10+1;
				 column=rand()%10+1;
				 random_letter=rand()%26;//不出现的字母，只出现一次的字母 要寻找的字母
				 for(int i=0;i<=9;i++)
					 for(int j=0;j<=9;j++)
					 {
					    letter=rand()%26;
						if(letter==random_letter&&letter!=25)
						letter+=1;//使得letter不是不出现的字母
						if(letter==25)
						letter-=1;//如果字母出现z，则减少一
						 if(!(i==row&&j==column))
						 b[i][j]=letter;
					 }
				 Level4_state=1;//进入第四关第一小关
				 flag_level4_start=true;//这个标志变量为true的话表示在开始游戏之后再点击开始游戏按钮不起作用,防止误点击
				 zoom_flag=false;
				 level4_board=true;
				 InvalidateRect(hWnd,NULL,true);			   			   
			   }
              if(Level4_state==1)//第四关已经开始了游戏，这个对第四关每一小关都是有效的，现在是第一关
			  {
				  RECT  r_matrix={50,250,550,750};//字母方块区域
			      if(PtInRect(&r_matrix,p1))//如果点击坐标在字母方块区域内
				  {
					  RECT r_letter={letter_x,letter_y,letter_x+50,letter_y+50};//如果点击坐标在要寻找的方块内
					  if(PtInRect(&r_letter,p1))
					  {
					    
						  MessageBox(hWnd,L"恭喜你获得称号：放大镜",L"过关",MB_OK);
                          timebar_y=360;
						  Level4_counter=0;
						   row=rand()%10+1;
				          column=rand()%10+1;
				          random_letter=rand()%26;//不出现的字母，只出现一次的字母 要寻找的字母
				   for(int i=0;i<=9;i++)
					 for(int j=0;j<=9;j++)
					 {
					    letter=rand()%26;
						if(letter==random_letter&&letter!=25)
						letter+=1;//使得letter不是不出现的字母
						if(letter==25)
						letter-=1;//如果字母出现z，则减少一
						 if(!(i==row&&j==column))
						 b[i][j]=letter;
					 }
                     Level4_state=2;
					 flag_level4_start=true;//这个标志变量为true的话表示在开始游戏之后再点击开始游戏按钮不起作用,防止误点击
				     zoom_flag=false;
				     level4_board=true;
					 Level4_counter=0;
				     InvalidateRect(hWnd,NULL,true);			   							  						  						
				   }
					  else
					  {					    				    
						 MessageBox(hWnd,L"骚年你弱爆了！",L"失败",MB_OK);                   
						 timebar_y=360;
						 Level4_counter=0;
						 Level4_state=0;
						 flag_level4_start=false;
						 level4_board=false;
					  }
				   				  
				  }
			  }


			  else  if(Level4_state==2)//第四关已经开始了游戏，这个对第四关每一小关都是有效的，现在是第2关
			  {
				  RECT  r_matrix={50,250,550,750};//字母方块区域
			      if(PtInRect(&r_matrix,p1))//如果点击坐标在字母方块区域内
				  {
					  RECT r_letter={letter_x,letter_y,letter_x+50,letter_y+50};//如果点击坐标在要寻找的方块内
					  if(PtInRect(&r_letter,p1))
					  {
					    					  
						  MessageBox(hWnd,L"恭喜你获得称号：扫描电子显微镜",L"过关",MB_OK);						
                          timebar_y=360;
						  Level4_counter=0;
						   row=rand()%10+1;
				          column=rand()%10+1;
				          random_letter=rand()%26;//不出现的字母，只出现一次的字母 要寻找的字母
				   for(int i=0;i<=9;i++)
					 for(int j=0;j<=9;j++)
					 {
					    letter=rand()%26;
						if(letter==random_letter&&letter!=25)
						letter+=1;//使得letter不是不出现的字母
						if(letter==25)
						letter-=1;//如果字母出现z，则减少一
						 if(!(i==row&&j==column))
						 b[i][j]=letter;
					 }
                     Level4_state=3;
					 flag_level4_start=true;//这个标志变量为true的话表示在开始游戏之后再点击开始游戏按钮不起作用,防止误点击
				     zoom_flag=false;
				     level4_board=true;
					 Level4_counter=0;
				     InvalidateRect(hWnd,NULL,true);			   							  						  						
				   }
					  else
					  {					    				    
						 MessageBox(hWnd,L"别气馁，下次继续努力！",L"失败",MB_OK);                   
						 timebar_y=360;
						 Level4_counter=0;
						 Level4_state=0;
						 flag_level4_start=false;
						 level4_board=false;
					  }
				   				  
				  }
			  }
		     else  if(Level4_state==3)//第四关已经开始了游戏，这个对第四关每一小关都是有效的，现在是第3关
			  {
				  RECT  r_matrix={50,250,550,750};//字母方块区域
			      if(PtInRect(&r_matrix,p1))//如果点击坐标在字母方块区域内
				  {
					  RECT r_letter={letter_x,letter_y,letter_x+50,letter_y+50};//如果点击坐标在要寻找的方块内
					  if(/*PtInRect(&r_letter,p1)*/true)
					  {
					    
						  MessageBox(hWnd,L"恭喜你获得称号：哈勃天文望远镜",L"过关",MB_OK);
						  s.insert(4);//第4关已过
						  Ex_counter=0;
                          timebar_y=360;
						  Level4_counter=0;
						   row=rand()%10+1;
				          column=rand()%10+1;
				          random_letter=rand()%26;//不出现的字母，只出现一次的字母 要寻找的字母
				   for(int i=0;i<=9;i++)
					 for(int j=0;j<=9;j++)
					 {
					    letter=rand()%26;
						if(letter==random_letter&&letter!=25)
						letter+=1;//使得letter不是不出现的字母
						if(letter==25)
						letter-=1;//如果字母出现z，则减少一
						 if(!(i==row&&j==column))
						 b[i][j]=letter;
					 }
                     game_state=106;///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////第4关格言部分
				     zoom_flag=false;
				     level4_board=true;
					 Level4_counter=0;
					 Level4_state=0;
					 flag_level4_start=false;
					 //Level5_state=0;//第五关第一页对话
				     InvalidateRect(hWnd,NULL,true);			   							  						  						
				   }
					  else
					  {					    				    
						 MessageBox(hWnd,L"这个真的看人品了~",L"失败",MB_OK);                   
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

             if(game_state==10)//第五关
			{ 
				   RECT r_returnMenu={28,47,102,78};
				   if(PtInRect(&r_returnMenu,p1))//回到主菜单
				   {
						if( IDYES==MessageBox(hWnd,L"确定回到主菜单么？面码需要你！！",L"留步~",MB_YESNO))
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
							 Level5_Motto_done=false;//7个毛笔字写完后的标志变量
							 PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐	
							 InvalidateRect(hWnd,NULL,true);
					   }				
				   }		   						
				  if(Level5_state==0&&Lv5_dialog1==true)//第一页动画放完了
				  {			     
					Level5_state=1;//进入第二页对话
					
				  }

				  else  if(Level5_state==1)//第二页选择界面,else if解决大问题啊，不能用if，否则会同时触发2个事件
				  {
					  RECT r_same={400,700,450,720};
					  RECT r_notsame={460,700,530,720};
					  if(PtInRect(&r_same,p1))
					  {
					     MessageBox(hWnd,L"明明看上去就不一样，还说一样，不诚实的孩子！",L"违心话",MB_OK);
					  }
					   if(PtInRect(&r_notsame,p1))
					  {					     
						 MessageBox(hWnd,L"A和B的颜色其实是一样的，是不是觉得很神奇呢！",L"不可思议",MB_OK);
						 Level5_state=2;//第三页对话
					  }				  				  
				  }
				  else  if(Level5_state==2)//第3页点击按钮界面
				  {
					  RECT r_button={540,706,770,736};
					  if(PtInRect(&r_button,p1))
					  {
					    Level5_Picture=!Level5_Picture;//点击就变一次
						Level5_state=3;
					  }				  				  
				  }
				  else  if(Level5_state==3)//第4页界面
				  {
				      RECT r_button={540,706,770,736};
					  RECT r_NextArrow={320,700,360,740};//箭头区域去下一页
					  if(PtInRect(&r_button,p1))
					  {
					    Level5_Picture=!Level5_Picture;//点击就变一次
						Level5_state=2;
					  }
					  if(PtInRect(&r_NextArrow,p1))
					  {
					    Level5_state=4;//第5页
					  }

				  }
				  else if(Level5_state==4)
				  {
				     Level5_state=5;//第6页界面	
					 Level5_final_animation=true;//最后一页动画播放标志变量,开始播放最终动画，琴里和对话框退场
					 Lv5_counter_whql=0;//五河计时器归零
					 roll_x1=0;	
					
				  }
				  else if(Level5_state==5)//最后一页界面
				  {				  
				   if(Level5_Motto_done==true)
					 {
					
						 game_state=11;/////////////////////////////////////////进入第六关prelude各种变量清零
						 memset(grid_letter,'  ',sizeof(grid_letter));//初始化第六关填字方格 空格
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
						 Level5_state=0;//不能少
						 Level5_final_animation=false;//最后一页动画播放标志变量,开始播放最终动画，琴里和对话框退场
						 start_level6_pre=clock();//prelude 开始计时
						 j=0;
						 InvalidateRect(hWnd,NULL,true);
					 }				  
				  
				  }
			 

			 }
			 if(game_state==12)//第6关
			 {
				 RECT r_return={26,594,104,629};//回到主菜单
				 RECT r_shixiang={420,550,520,650};//点击十香出现对话框
				 if(PtInRect(&r_return,p1))
				 {
				    if(IDYES==MessageBox(hWnd,L"确定回到主菜单么？面码需要你！！",L"留步~",MB_YESNO))
					{
						game_state=0;
						 memset(grid_letter,'  ',sizeof(grid_letter));//初始化第六关填字方格 空格
						 grid_letter[2][0]=grid_letter[7][0]=grid_letter[4][1]=grid_letter[9][1]=grid_letter[1][2]=grid_letter[8][2]=grid_letter[0][3]=grid_letter[1][3]=grid_letter[4][3]=grid_letter[5][3]=grid_letter[6][3]=
						 grid_letter[2][4]=grid_letter[4][4]=grid_letter[7][4]=grid_letter[9][4]=grid_letter[0][5]=grid_letter[2][5]=grid_letter[6][5]=grid_letter[0][6]=grid_letter[3][6]=grid_letter[1][7]=
						 grid_letter[3][7]=grid_letter[6][7]=grid_letter[8][7]=L'0'; grid_letter[3][2]=L'0'; grid_letter[5][6]=L'0'; grid_letter[1][8]=L'0'; grid_letter[5][8]=L'0';
						  grid_letter[3][9]=L'0'; grid_letter[7][9]=L'0'; grid_letter[8][9]=L'0';
						PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐
						Level6_counter=0;
						right1=true;
					}
				 
				 
				 }
				 if(PtInRect(&r_shixiang,p1))
				 {
				    
					 hHook=SetWindowsHookEx(WH_CBT,(HOOKPROC)CBTHookProc,hInst,NULL);  
					 MessageBox(hWnd,L"夜刀神十香: 面码酱只需要把鼠标移动到想要填字的方格中,然后再按下键盘,填入对应词条的拼音首字母即可啦~ 注意如果一个词条(填了一半)如果像这种形式 电子KD 面码酱需要分别把鼠标移动到 电 和 子的方块中再分别按下D和Z键才能得到 电子科大 的结果哦~ 十香比较懒啦，所以这个小bug就不修复了",L"来自十香的温馨提示",MB_OK);				 				 				 
				 }
			 
			 }
			 if(game_state==14)//第七关
			 {
				RECT r_returnMenu={28,556,80,588};				
				if(click_start==false)
				 if(PtInRect(&r_returnMenu,p1))
				 {
				     if(IDYES==MessageBox(hWnd,L"确定回到主菜单么？面码需要你！！",L"留步~",MB_YESNO))
					 {
				        click_start=false;
						game_state=0;
						lv7_death=0;//死亡数清零
						lv7_win=false;
						pad_x=250,pad_y=700;//第七关下挡板左上角坐标
                        uppad_x=250,uppad_y=60;//第七关上挡板左上角坐标
					    for(int i=0;i<=11;i++)
		                 for(int j=0;j<=11;j++)
		                 {
							if(i%2==0&&j%2==0)
							brick_grid[i][j]=1;//有砖块
							else
							brick_grid[i][j]=0;
		                  }
					    PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐
					 }
				 }
				 else 
				 {
			         click_start=true;
				 }

			 }
			 
			if(game_state==16)//第八关
			{
			  RECT r_returnMenu={28,556-525,80,588-525};
			  RECT r_board={90,90,510,510};//下棋的区域
			  if(PtInRect(&r_returnMenu,p1))
				 {
				     if(IDYES==MessageBox(hWnd,L"确定回到主菜单么？面码需要你！！",L"留步~",MB_YESNO))
					 {				        
						game_state=0;
						for(int i=0;i<17;i++)//棋盘矩阵清零
							for(int j=0;j<17;j++)
								level8_board[i][j]=0;
						IsDraw=false;
						level8_chess_counter=0;
						level8_counter=0;
					    PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐
					 }
				 }
			  RECT r_lv1={306,693,410,710};//选择小关区域
			  RECT r_lv2={306,710,410,726};
			  RECT r_lv3={306,727,410,742};
			 
			  if(level8_state==0)
			  {
			  if(PtInRect(&r_lv1,p1))
				  {
					  if(MessageBox(hWnd,L"           ★   点击 是 接受挑战\n           ★   点击 否 放弃挑战",L"FIGHT!",MB_YESNO)==IDYES)
					      level8_state=1;//第一小关
			      }
			  if(PtInRect(&r_lv2,p1))
				  {
					 if(MessageBox(hWnd,L"           ★   点击 是 接受挑战\n           ★   点击 否 放弃挑战",L"FIGHT!",MB_YESNO)==IDYES)
					  level8_state=2;//第2小关
			      }
			  if(PtInRect(&r_lv3,p1))
				 {
					  if(MessageBox(hWnd,L"           ★   点击 是 接受挑战\n           ★   点击 否 放弃挑战",L"FIGHT!",MB_YESNO)==IDYES)
					 level8_state=3;//第3小关
			     }
			  }
			 if(level8_state==0)
			 {
			    if(PtInRect(&r_board,p1))
					MessageBox(hWnd,L"请先在下方选择要挑战的关卡~",L"Action Forbidden",MB_OK);			 
			 }
			  
			  if(level8_state!=0)//如果第八关不在初始状态下，也就是开始了关卡挑战
			{
			  if(PtInRect(&r_board,p1))//如果鼠标点击在下棋区域内，才画棋子
			  {
			     
				 if(level8_state==2&&level8_board[level8_row][level8_column]==0)
				 {
				     level8_lv2_stepcounter++;//步数加一
				 }
				 level8_row = (p1.x-87)/25;//转换屏幕坐标获取棋盘坐标
				 level8_column = (p1.y-87)/25;
				 if(level8_board[level8_row][level8_column]!=0)//如果该点已经放置棋子
					 MessageBox(hWnd,L"此处已有棋子啦~",L"TAT",MB_OK);
				 else
				     {
						 if(level8_state==3)
						 {
						    level8_timebar=161;
			                level8_lv1_counter=0;
						 }
						 level8_chess_counter++;//玩家下棋子数加一
						 level8_board[level8_row][level8_column]=1;//1表示人下的白棋子，2表示电脑下的黑棋子，0表示没有棋子,将棋盘矩阵的对应点标记
				         //电脑下棋
						 if(level8_chess_counter==1)//玩家走的第一步棋，白棋,目的是为了让电脑下棋在中间第一个黑棋周围,否则要乱走
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
		   if(game_state==18)//第九关
		   {
			   RECT r_return = {57,723,121,746};
			   RECT r_info = {215,725,283,746};
			   if(PtInRect(&r_return,p1))
			   {
		           if(IDYES==MessageBox(hWnd,L"确定回到主菜单么？面码需要你！！",L"留步~",MB_YESNO))
					 {				        
						game_state=0;
						//数据清零
					    PlaySound((LPCTSTR)IDR_WAVE2,NULL,SND_ASYNC|SND_LOOP |SND_RESOURCE);	//切换播放的音乐
					 }
			   }
			   if(PtInRect(&r_info,p1))
			   {
			       MessageBox(hWnd,L"在黑暗中前行，光明终将到来",L"游戏背景",MB_OK);
			   }
		   
		   }

		   if(game_state==-1)//再续前缘
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
			    TCHAR filename[MAX_PATH]=L"save";//保存文件名
				TCHAR strDefExt[]=L"dat";//默认扩展名
				OPENFILENAME of={sizeof(OPENFILENAME)};//申明结构体,必须指定他的大小，否则不会弹出对话框的，这一点很重要
				of.lpstrDefExt = strDefExt;
				of.hwndOwner = hWnd;
				of.hInstance = hInst;
				of.lpstrFilter = L"已过关卡(*.dat)\0";//必须是这种形式的才有效
				of.nFilterIndex = 1;
				of.lpstrFile = filename;
				of.lpstrFile[0] = '\0'; 
				of.nMaxFile = MAX_PATH;
				of.nMaxFileTitle = MAX_PATH;
				of.Flags = OFN_PATHMUSTEXIST|OFN_FILEMUSTEXIST|OFN_HIDEREADONLY;
				if(GetOpenFileName(&of)==true)//点击确定按钮
				{				 
				    s.clear();//清空所有图形,不是empty()
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
					   DWORD bytesRead;//实际读出的字节数
					   ReadFile(hFile,&temp,sizeof(int),&bytesRead,NULL);
					   if(bytesRead == 0) break;
					   s.insert(temp);
					
					}
					CloseHandle(hFile);
					IsLoad =true;//已经载入了文件
				}
			  
			  
			  }

		   }
		   if(game_state==-2)//萌图欣赏界面
		   {
			  RECT activate_bar={250,754,350,770};//点此激活功能条
			  RECT deactivate_bar={250,695,350,713};//点此关闭功能条
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

			  RECT r_returnMenu={303,720,358,765};//回到主菜单
			  RECT r_back={186,720,235,765};//后退箭头
			  RECT r_forward={244,720,296,765};//前进箭头
			  RECT r_info={364,721,415,765};//萌妹信息
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
			       mp[moePicture_i]=true;//当前的为真			   			   
			   }
			   else if(PtInRect(&r_info,p1)&&moe_bar==true&&mp[moePicture_i]==true)
			   {
			       mp[moePicture_i]=false;//当前的为假 		
			   }
		   }
        
		   if(game_state==-3)//游戏信息界面
		  {
		     RECT r_returnMenu={28,556,80,588};			  
			 if(PtInRect(&r_returnMenu,p1))
			  {
			     game_state=0;
				 InvalidateRect(hWnd,NULL,true);			
			  }
		  
		  }
		//所有关都有
		   if(PtInRect(&rect,p1)&&game_state!=8&&game_state!=16&&game_state!=18)//判断音乐函数,鼠标是否在矩形内的函数,第4关除外
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
			   if(PtInRect(&r_level8,p1))//第4关图标位置改变了
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
		       if(PtInRect(&r_level16,p1))//第8关图标位置改变了
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
			    if(PtInRect(&r_music,p1))//第8关图标位置改变了
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
		// 分析菜单选择:
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
		Game.GamePaint(hdc);//游戏画图函数,里面包含了各种绘图函数
		EndPaint(hWnd, &ps);
		break;
		}
	case WM_DESTROY:
		DeleteDC(hMusicONDC);
		DeleteDC(hMusicOFFDC);
		//删去所有DC
		PostQuitMessage(0);
		break;
	default:
		{						 
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
	}
	return 0;
}

// “关于”框的消息处理程序。
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

void Level8_AI()//第八关电脑下棋
{
 ///////////////////////五子棋棋型权重表,switch千万不能忘了break语句，否则以后的语句全部执行
	 
//成5, 100分

//活4、双死4、死4活3， 90分

//双活3， 80分

//死3活3， 70分

//死4， 60分

//双死4   0分

//活3， 50分

//双活2， 40分

//死3， 30分

//活2， 20分

//死2， 10分

//单子 0分

//level8_Ai[][][4],其中0表示横，1表示竖，2表示右斜，3表示左斜
	for(int i=0;i<17;i++)
		for(int j=0;j<17;j++)
			for(int k=0;k<4;k++)
			{
			  level8_Ai[i][j][k]=0;
			  level8_player[i][j][k]=0;
			}
	
	for(int i=0;i<17;i++)//遍历整个棋盘,目的是给每一个点打出权值分
		for(int j=0;j<17;j++)
		{
		   if(level8_board[i][j]==0)//在棋盘上遇到一个空白点时，然后要向其上下左右左斜右斜方向进行查找
			{
				///////先判断AI落在这个位置时的分值情况,有一点注意：电脑先下，所以同等情况下(如一个白棋活2，一个黑棋活2)，电脑先走黑棋活2，防止乱走
				//判断该点向左的情况
				int total_hen=0;//横向相连棋子数				
				int sum_left=0;
				int sum_right=0;
				int temp_left=i;
				int temp_right=i;
				bool dielive_right;//用来判断死活情况
				bool dielive_left;
				while(1)
				{
				   if(level8_board[temp_left-1][j]==2)//如果是电脑下的黑棋
				   {
				      sum_left+=level8_board[temp_left-1][j];
					  temp_left--;//向左搜寻
				   }
				   else
					   {
						   if(level8_board[temp_left-1][j]==0)//为空白处，没有棋子
							   dielive_left=true;
						   else 
							   dielive_left=false;
						   break;//跳出循环
				       }
				}
				total_hen+=sum_left;
				//判断该点向右的情况
				while(1)
				{
				   if(level8_board[temp_right+1][j]==2)//如果是电脑下的黑棋
				   {
				      sum_right+=level8_board[temp_right+1][j];
					  temp_right++;//向右搜寻
				   }
				   else
					   {
						   if(level8_board[temp_right+1][j]==0)//为空白处，没有棋子
							   dielive_right=true;//活 棋型
						   else 
							   dielive_right=false;
						   break;//跳出循环	
				       }
				}
				total_hen+=sum_right;
				total_hen+=2;//加上本来此处要下的棋子值2
				switch(total_hen)//判断横向的棋型情况
				{
				 case 2://单子
					 level8_Ai[i][j][0]=0;
					 break;
				 case 4://死2或者活2
					 {
					        //活2
                        if(dielive_left==true&&dielive_right==true)//左右都是空白才是活棋
							level8_Ai[i][j][0]=25;//黑棋活2 权值要大一些,比原来大5
						else//死2
							level8_Ai[i][j][0]=10;	
						break;
					 }
				 case 6://死3或者活3
					 {
					        //活3
						if(dielive_left==true&&dielive_right==true)//左右都是空白才是活棋
							level8_Ai[i][j][0]=55;//黑棋活3 权值要大一些,比原来大5
						else//死3
							level8_Ai[i][j][0]=30;	
						break;
					 }
				 case 8://活4或者死4
					 {
					    //活4
						if(dielive_left==true&&dielive_right==true)//左右都是空白才是活棋
							level8_Ai[i][j][0]=95;
						else//死4
						{
							if(dielive_left==false&&dielive_right==false)
							    level8_Ai[i][j][0]=0;//双死4 为0分
							else
								level8_Ai[i][j][0]=60;
						}
						break;
					 }
				 case 10://成5
					 {
					    level8_Ai[i][j][0]=100;	//黑棋成5的话要比白棋成5优先
						break;
					 }
               			    				
				}
				
				///////////判断该点向上和向下的情况
				int total_shu=0;//竖向相连棋子数				
				int sum_up=0;
				int sum_down=0;
				int temp_up=j;
				int temp_down=j;
				bool dielive_up;//用来判断死活情况
				bool dielive_down;
				while(1)
				{
				   if(level8_board[i][temp_up-1]==2)//如果是电脑下的黑棋
				   {
				      sum_up+=level8_board[i][temp_up-1];
					  temp_up--;//向上搜寻
				   }
				   else
					   {
						   if(level8_board[i][temp_up-1]==0)//为空白处，没有棋子
							   dielive_up=true;
						   else 
							   dielive_up=false;
						   break;//跳出循环
				       }
				}
				total_shu+=sum_up;
				//判断该点向下的情况
				while(1)
				{
				   if(level8_board[i][temp_down+1]==2)//如果是电脑下的黑棋
				   {
				      sum_down+=level8_board[i][temp_down+1];
					  temp_down++;//向右搜寻
				   }
				   else
					   {
						   if(level8_board[i][temp_down+1]==0)//为空白处，没有棋子
							   dielive_down=true;//活 棋型
						   else 
							   dielive_down=false;
						   break;//跳出循环	
				       }
				}
				total_shu+=sum_down;
				total_shu+=2;//加上本来此处要下的棋子值2
				switch(total_shu)//判断竖向的棋型情况
				{
				 case 2://单子
					 level8_Ai[i][j][1]=0;
					 break;
				 case 4://死2或者活2
					 {
					        //活2
                        if(dielive_up==true&&dielive_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][1]=25;
						else//死2
							level8_Ai[i][j][1]=10;	
						break;
					 }
				 case 6://死3或者活3
					 {
					        //活3
						if(dielive_up==true&&dielive_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][1]=55;
						else//死3
							level8_Ai[i][j][1]=30;
						break;
					 }
				 case 8://活4或者死4
					 {
					    //活4
						if(dielive_up==true&&dielive_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][1]=95;
						else//死4
							{
								if(dielive_up==false&&dielive_down==false)
								    level8_Ai[i][j][1]=0;
								else
									level8_Ai[i][j][1]=60;
						    }
						break;
					 }
				 case 10://成5
					 {
					    level8_Ai[i][j][1]=100;
						break;
					 }
               			    				
				}
				///////////判断该点右斜情况
				int total_youxie=0;//横向相连棋子数				
				int sum_youxie_up=0;
				int sum_youxie_down=0;
				int temp_youxie_upj=j;//每个方向上2个坐标
				int temp_youxie_upi=i;
				int temp_youxie_downj=j;
				int temp_youxie_downi=i;
				bool dielive_youxie_up;//用来判断死活情况
				bool dielive_youxie_down;
				while(1)
				{  //右斜上
				   if(level8_board[temp_youxie_upi-1][temp_youxie_upj+1]==2)//如果是电脑下的黑棋
				   {
				      sum_youxie_up+=level8_board[temp_youxie_upi-1][temp_youxie_upj+1];
					  temp_youxie_upi--;//向上搜寻
					  temp_youxie_upj++;
				   }
				   else
					   {
						   if(level8_board[temp_youxie_upi-1][temp_youxie_upj+1]==0)//为空白处，没有棋子
							   dielive_youxie_up=true;
						   else 
							   dielive_youxie_up=false;
						   break;//跳出循环
				       }
				}
			   total_youxie+=sum_youxie_up;
			   	while(1)
				{  //右斜下
				   if(level8_board[temp_youxie_downi+1][temp_youxie_downj-1]==2)//如果是电脑下的黑棋
				   {
				      sum_youxie_down+=level8_board[temp_youxie_downi+1][temp_youxie_downj-1];
					  temp_youxie_downi++;//向上搜寻
					  temp_youxie_downj--;
				   }
				   else
					   {
						   if(level8_board[temp_youxie_downi+1][temp_youxie_downj-1]==0)//为空白处，没有棋子
							   dielive_youxie_down=true;
						   else 
							   dielive_youxie_down=false;
						      
						   break;//跳出循环
				       }
				}
				total_youxie+=sum_youxie_down;
				total_youxie+=2;
				switch(total_youxie)//判断斜向的棋型情况
				{
				 case 2://单子
					 level8_Ai[i][j][2]=0;
					 break;
				 case 4://死2或者活2
					 {
					        //活2
                        if(dielive_youxie_up==true&&dielive_youxie_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][2]=25;
						else//死2
							level8_Ai[i][j][2]=10;	
						break;
					 }
				 case 6://死3或者活3
					 {
					        //活3
						if(dielive_youxie_up==true&&dielive_youxie_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][2]=55;
						else//死3
							level8_Ai[i][j][2]=30;	
						break;
					 }
				 case 8://活4或者死4
					 {
					    //活4
						if(dielive_youxie_up==true&&dielive_youxie_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][2]=95;
						else//死4
						{
							if(dielive_youxie_up==false&&dielive_youxie_down==false)
							  level8_Ai[i][j][2]=0;//双死4
							else
                              level8_Ai[i][j][2]=60;
						}
						break;
					 }
				 case 10://成5
					 {
					    level8_Ai[i][j][2]=100;	
						break;
					 }
               			    				
				}
			   /////////////判断该点左斜情况
				int total_zuoxie=0;//横向相连棋子数				
				int sum_zuoxie_up=0;
				int sum_zuoxie_down=0;
				int temp_zuoxie_upj=j;//每个方向上2个坐标
				int temp_zuoxie_upi=i;
				int temp_zuoxie_downj=j;
				int temp_zuoxie_downi=i;
				bool dielive_zuoxie_up;//用来判断死活情况
				bool dielive_zuoxie_down;
				while(1)
				{  //左斜下
				   if(level8_board[temp_zuoxie_downi+1][temp_zuoxie_downj+1]==2)//如果是电脑下的黑棋
				   {
				      sum_zuoxie_down+=level8_board[temp_zuoxie_downi+1][temp_zuoxie_downj+1];
					  temp_zuoxie_downi++;//向上搜寻
					  temp_zuoxie_downj++;
				   }
				   else
					   {
						   if(level8_board[temp_zuoxie_downi+1][temp_zuoxie_downj+1]==0)//为空白处，没有棋子
							   dielive_zuoxie_down=true;
						   else 
							   dielive_zuoxie_down=false;
						   break;//跳出循环
				       }
				}
				total_zuoxie+=sum_zuoxie_down;
				while(1)
				{  //左斜上
				   if(level8_board[temp_zuoxie_upi-1][temp_zuoxie_upj-1]==2)//如果是电脑下的黑棋
				   {
				      sum_zuoxie_up+=level8_board[temp_zuoxie_upi-1][temp_zuoxie_upj-1];
					  temp_zuoxie_upi--;//向下搜寻
					  temp_zuoxie_upj--;
				   }
				   else
					   {
						   if(level8_board[temp_zuoxie_upi-1][temp_zuoxie_upj-1]==0)//为空白处，没有棋子
							   dielive_zuoxie_up=true;
						   else 
							   dielive_zuoxie_up=false;
						   break;//跳出循环
				       }
				}
				total_zuoxie+=sum_zuoxie_up;
				total_zuoxie+=2;
				switch(total_zuoxie)//判断斜向的棋型情况,这是AI判断最后一项，在此要加入双活3，死3活3，等判断，分值比较高一些
				{
				 case 2://单子
					 level8_Ai[i][j][3]=0;
					 break;
				 case 4://死2或者活2
					 {
					        //活2
                        if(dielive_zuoxie_up==true&&dielive_zuoxie_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][3]=25;
						else//死2
							level8_Ai[i][j][3]=10;	
						break;
					 }
				 case 6://死3或者活3
					 {
					        //活3
						if(dielive_zuoxie_up==true&&dielive_zuoxie_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][3]=55;
						else//死3
							level8_Ai[i][j][3]=30;	
						break;
					 }
				 case 8://活4或者死4
					 {
					    //活4
						if(dielive_zuoxie_up==true&&dielive_zuoxie_down==true)//左右都是空白才是活棋
							level8_Ai[i][j][3]=95;
						else//死4
							{
								if(dielive_zuoxie_up==false&&dielive_zuoxie_down==false)
								    level8_Ai[i][j][3]=0;
								else
									level8_Ai[i][j][3]=60;
						    }
						break;
					 }
				 case 10://成5
					 {
					    level8_Ai[i][j][3]=100;	
						break;
					 }
               			    				
				}
				//判断电脑黑棋的双活2, 52分，要高于白棋的活3的50分，而电脑黑棋活3为55分
				int shuanghuo2=0;
				for(int l=0;l<4;l++)
				{
				  if(level8_Ai[i][j][l]==25)
					  shuanghuo2++;
				}
				if(shuanghuo2==2)
					level8_Ai[i][j][0]=52;
				
				//判断是否是死3活3，70分  先判断死三活3 是因为它的权值比双活3小
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
					level8_Ai[i][j][0]=70;//死三活3权值70
				//判断是否是双活3 ,80分
				int shuanghuo3=0;
				for(int m=0;m<4;m++)
				{
				  if(level8_Ai[i][j][m]==55)//如果一个方向为活3
					  shuanghuo3++;
				}
				if(shuanghuo3==2)
					level8_Ai[i][j][0]=80;//双活3权重为80
				//判断是否是死4活3 90分
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
				//判断是否为双活4，电脑黑棋给96分，要高于电脑单活4的95分，低于白棋成5的98分
				//双活4分多种情况

				///////////////////////////////////////////////////////////////////////////////////再判断PLAYER落在这个位置时的分值情况
				//判断该点向左的情况
				int ptotal_hen=0;//横向相连棋子数				
				int psum_left=0;
				int psum_right=0;
				int ptemp_left=i;
				int ptemp_right=i;
				bool pdielive_right;//用来判断死活情况
				bool pdielive_left;
				while(1)
				{
				   if(level8_board[ptemp_left-1][j]==1)//如果是玩家下的白棋，用1表示
				   {
				      psum_left+=level8_board[ptemp_left-1][j];
					  ptemp_left--;//向左搜寻
				   }
				   else
					   {
						   if(level8_board[ptemp_left-1][j]==0)//为空白处，没有棋子
							   pdielive_left=true;
						   else 
							   pdielive_left=false;
						   break;//跳出循环
				       }
				}
				ptotal_hen+=psum_left;
				//判断该点向右的情况
				while(1)
				{
				   if(level8_board[ptemp_right+1][j]==1)//如果是人的白棋
				   {
				      psum_right+=level8_board[ptemp_right+1][j];
					  ptemp_right++;//向右搜寻
				   }
				   else
					   {
						   if(level8_board[ptemp_right+1][j]==0)//为空白处，没有棋子
							   pdielive_right=true;//活 棋型
						   else 
							   pdielive_right=false;
						   break;//跳出循环	
				       }
				}
				ptotal_hen+=psum_right;
				ptotal_hen+=1;//加上本来此处要下的棋子值1
				switch(ptotal_hen)//判断横向的棋型情况
				{
				 case 1://单子
					 level8_player[i][j][0]=0;
					 break;
				 case 2://死2或者活2
					 {
					        //活2
                        if(pdielive_left==true&&pdielive_right==true)//左右都是空白才是活棋
							level8_player[i][j][0]=20;
						else//死2
							level8_player[i][j][0]=10;	
						break;
					 }
				 case 3://死3或者活3
					 {
					        //活3
						if(pdielive_left==true&&pdielive_right==true)//左右都是空白才是活棋
							level8_player[i][j][0]=50;
						else//死3
							level8_player[i][j][0]=30;	
						break;
					 }
				 case 4://活4或者死4
					 {
					    //活4
						if(pdielive_left==true&&pdielive_right==true)//左右都是空白才是活棋
							level8_player[i][j][0]=90;
						else//死4
							level8_player[i][j][0]=60;
						break;
					 }
				 case 5://成5
					 {
					    level8_player[i][j][0]=98;	//白棋成5优先值要少于黑棋电脑
						break;
					 }
               			    				
				}
				///////////判断该点向上和向下的情况
				int ptotal_shu=0;//竖向相连棋子数				
				int psum_up=0;
				int psum_down=0;
				int ptemp_up=j;
				int ptemp_down=j;
				bool pdielive_up;//用来判断死活情况
				bool pdielive_down;
				while(1)
				{
				   if(level8_board[i][ptemp_up-1]==1)//如果是玩家白棋
				   {
				      psum_up+=level8_board[i][ptemp_up-1];
					  ptemp_up--;//向上搜寻
				   }
				   else
					   {
						   if(level8_board[i][ptemp_up-1]==0)//为空白处，没有棋子
							   pdielive_up=true;
						   else 
							   pdielive_up=false;
						   break;//跳出循环
				       }
				}
				ptotal_shu+=psum_up;
				//判断该点向下的情况
				while(1)
				{
				   if(level8_board[i][ptemp_down+1]==1)//如果是玩家白棋
				   {
				      psum_down+=level8_board[i][ptemp_down+1];
					  ptemp_down++;//向右搜寻
				   }
				   else
					   {
						   if(level8_board[i][ptemp_down+1]==0)//为空白处，没有棋子
							   pdielive_down=true;//活 棋型
						   else 
							   pdielive_down=false;
						   break;//跳出循环	
				       }
				}
				ptotal_shu+=psum_down;
				ptotal_shu+=1;//加上本来此处要下的棋子值2
				switch(ptotal_shu)//判断竖向的棋型情况
				{
				 case 1://单子
					 level8_player[i][j][1]=0;
					 break;
				 case 2://死2或者活2
					 {
					        //活2
                        if(pdielive_up==true&&pdielive_down==true)//左右都是空白才是活棋
							level8_player[i][j][1]=20;
						else//死2
							level8_player[i][j][1]=10;
						break;
					 }
				 case 3://死3或者活3
					 {
					        //活3
						if(pdielive_up==true&&pdielive_down==true)//左右都是空白才是活棋
							level8_player[i][j][1]=50;
						else//死3
							level8_player[i][j][1]=30;	
						break;
					 }
				 case 4://活4或者死4
					 {
					    //活4
						if(pdielive_up==true&&pdielive_down==true)//左右都是空白才是活棋
							level8_player[i][j][1]=90;
						else//死4
							level8_player[i][j][1]=60;	
						break;
					 }
				 case 5://成5
					 {
					    level8_player[i][j][1]=98;	
						break;
					 }			                			    				
				}
				///////////判断该点右斜情况
				int ptotal_youxie=0;//横向相连棋子数				
				int psum_youxie_up=0;
				int psum_youxie_down=0;
				int ptemp_youxie_upj=j;//每个方向上2个坐标
				int ptemp_youxie_upi=i;
				int ptemp_youxie_downj=j;
				int ptemp_youxie_downi=i;
				bool pdielive_youxie_up;//用来判断死活情况
				bool pdielive_youxie_down;
				while(1)
				{  //右斜上
				   if(level8_board[ptemp_youxie_upi-1][ptemp_youxie_upj+1]==1)//如果是人白棋
				   {
				      psum_youxie_up+=level8_board[ptemp_youxie_upi-1][ptemp_youxie_upj+1];
					  ptemp_youxie_upi--;//向上搜寻
					  ptemp_youxie_upj++;
				   }
				   else
					   {
						   if(level8_board[ptemp_youxie_upi-1][ptemp_youxie_upj+1]==0)//为空白处，没有棋子
							   pdielive_youxie_up=true;
						   else 
							   pdielive_youxie_up=false;
						   break;//跳出循环
				       }
				}
			   ptotal_youxie+=psum_youxie_up;
			   	while(1)
				{  //右斜下
				   if(level8_board[ptemp_youxie_downi+1][ptemp_youxie_downj-1]==1)//如果是电脑下的黑棋
				   {
				      psum_youxie_down+=level8_board[ptemp_youxie_downi+1][ptemp_youxie_downj-1];
					  ptemp_youxie_downi++;//向上搜寻
					  ptemp_youxie_downj--;
				   }
				   else
					   {
						   if(level8_board[ptemp_youxie_downi+1][ptemp_youxie_downj-1]==0)//为空白处，没有棋子
							   pdielive_youxie_down=true;
						   else 
							   pdielive_youxie_down=false;
						   break;//跳出循环
				       }
				}
				ptotal_youxie+=psum_youxie_down;
				ptotal_youxie+=1;
				switch(ptotal_youxie)//判断斜向的棋型情况
				{
				 case 1://单子
					 level8_player[i][j][2]=0;
					 break;
				 case 2://死2或者活2
					 {
					        //活2
                        if(pdielive_youxie_up==true&&pdielive_youxie_down==true)//左右都是空白才是活棋
							level8_player[i][j][2]=20;
						else//死2
							level8_player[i][j][2]=10;	
						break;
					 }
				 case 3://死3或者活3
					 {
					        //活3
						if(pdielive_youxie_up==true&&pdielive_youxie_down==true)//左右都是空白才是活棋
							level8_player[i][j][2]=50;
						else//死3
							level8_player[i][j][2]=30;	
						break;
					 }
				 case 4://活4或者死4
					 {
					    //活4
						if(pdielive_youxie_up==true&&pdielive_youxie_down==true)//左右都是空白才是活棋
							level8_player[i][j][2]=90;
						else//死4
							level8_player[i][j][2]=60;	
						break;
					 }
				 case 5://成5
					 {
					    level8_player[i][j][2]=98;	
						break;
					 }
               			    				
				}
				/////////////判断该点左斜情况
				int ptotal_zuoxie=0;//横向相连棋子数				
				int psum_zuoxie_up=0;
				int psum_zuoxie_down=0;
				int ptemp_zuoxie_upj=j;//每个方向上2个坐标
				int ptemp_zuoxie_upi=i;
				int ptemp_zuoxie_downj=j;
				int ptemp_zuoxie_downi=i;
				bool pdielive_zuoxie_up;//用来判断死活情况
				bool pdielive_zuoxie_down;
				while(1)
				{  //左斜下
				   if(level8_board[ptemp_zuoxie_downi+1][ptemp_zuoxie_downj+1]==1)//如果是电脑黑棋
				   {
				      psum_zuoxie_down+=level8_board[ptemp_zuoxie_downi+1][ptemp_zuoxie_downj+1];
					  ptemp_zuoxie_downi++;//向上搜寻
					  ptemp_zuoxie_downj++;
				   }
				   else
					   {
						   if(level8_board[ptemp_zuoxie_downi+1][ptemp_zuoxie_downj+1]==0)//为空白处，没有棋子
							   pdielive_zuoxie_down=true;
						   else 
							   pdielive_zuoxie_down=false;
						   break;//跳出循环
				       }
				}
				ptotal_zuoxie+=psum_zuoxie_down;
				while(1)
				{  //左斜上
				   if(level8_board[ptemp_zuoxie_upi-1][ptemp_zuoxie_upj-1]==1)//如果是电脑下的黑棋
				   {
				      psum_zuoxie_up+=level8_board[ptemp_zuoxie_upi-1][ptemp_zuoxie_upj-1];
					  ptemp_zuoxie_upi--;//向上搜寻
					  ptemp_zuoxie_upj--;
				   }
				   else
					   {
						   if(level8_board[ptemp_zuoxie_upi-1][ptemp_zuoxie_upj-1]==0)//为空白处，没有棋子
							   pdielive_zuoxie_up=true;
						   else 
							   pdielive_zuoxie_up=false;
						   break;//跳出循环
				       }
				}
				ptotal_zuoxie+=psum_zuoxie_up;
				ptotal_zuoxie+=1;
				switch(ptotal_zuoxie)//判断斜向的棋型情况
				{
				 case 1://单子
					 level8_player[i][j][3]=0;
					 break;
				 case 2://死2或者活2
					 {
					        //活2
                        if(pdielive_zuoxie_up==true&&pdielive_zuoxie_down==true)//左右都是空白才是活棋
							level8_player[i][j][3]=20;
						else//死2
							level8_player[i][j][3]=10;	
						break;
					 }
				 case 3://死3或者活3
					 {
					        //活3
						if(pdielive_zuoxie_up==true&&pdielive_zuoxie_down==true)//左右都是空白才是活棋
							level8_player[i][j][3]=50;
						else//死3
							level8_player[i][j][3]=30;	
						break;
					 }
				 case 4://活4或者死4
					 {
					    //活4
						if(pdielive_zuoxie_up==true&&pdielive_zuoxie_down==true)//左右都是空白才是活棋
							level8_player[i][j][3]=90;
						else//死4
							level8_player[i][j][3]=60;	
						break;
					 }
				 case 5://成5
					 {
					    level8_player[i][j][3]=98;	
						break;
					 }
               			    				
				}	
				//判断玩家白棋的双活2,
				int pshuanghuo2=0;
				for(int l=0;l<4;l++)
				{
				  if(level8_player[i][j][l]==20)
					  pshuanghuo2++;
				}
				if(pshuanghuo2==2)
					level8_player[i][j][0]=40;
			   //判断玩家下棋是否是死3活3，70分  先判断死三活3 是因为它的权值比双活3小
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
					level8_player[i][j][0]=68;//死三活3权值68
				//判断是否是双活3 ,80分
				int pshuanghuo3=0;
				for(int m=0;m<4;m++)
				{
				  if(level8_player[i][j][m]==55)//如果一个方向为活3
					  pshuanghuo3++;
				}
				if(pshuanghuo3==2)
					level8_player[i][j][0]=78;//双活3权重为78
				//判断是否是死4活3 90分
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
					level8_player[i][j][0]=88;//死4活3权值88，比电脑90少2
						
			}
		}
    ///////////////////////////////////////遍历player和ai矩阵找到最大的一个点下棋
	int max=0,maxi=0,maxj=0;
	for(int i=0;i<17;i++)
		for(int j=0;j<17;j++)
			for(int k=0;k<4;k++)
			{
			  if(level8_board[i][j]==0)//如果此处无棋子才能下棋
			  {
				if(level8_player[i][j][k]>=max)
				  {
					  max=level8_player[i][j][k];
					  maxi=i;
					  maxj=j;
					  AI_row=i;//记录下电脑的坐标
					  AI_column=j;
			      }
			   if(level8_Ai[i][j][k]>=max)
				  {
					  max=level8_Ai[i][j][k];
					  maxi=i;
					  maxj=j;
					  AI_row=i;//记录下电脑的坐标
					  AI_column=j;
			      }
			  }
			
			}
	level8_board[maxi][maxj]=2;//电脑下棋


}
BOOL WINAPI CircleCapture( HDC hdcDst, int nXOriginDst, int nYOriginDst, int nDiameterDst,
						   HDC hdcSrc, int nXOriginSrc, int nYOriginSrc, int nDiameterSrc,
						   int nWidth, DWORD dwColor )
{
    /*
    设计思想是：  首先创建两个DC，一个是用于临时操作，一个用于遮罩效果，
                  然后将源DC中指定圆形区域拷贝到临时DC，接着用遮罩DC和
                  临时DC进行与操作，最后将临时DC透明拷贝到目标DC

    遮罩DC的设计：先将背景刷黑，然后画一个白色的圆，这样的话，与操作将
                  圆外面的内容去掉，透明拷贝的时候只拷贝圆里面的内容。
	*/
	
	//初始化临时DC
	HDC     hdcTemp     = CreateCompatibleDC( hdcDst );
	HBITMAP hBitmapTemp = CreateCompatibleBitmap( hdcDst, nDiameterDst, nDiameterDst );
	
	SelectObject( hdcTemp, hBitmapTemp );
	
	//初始化圆形遮罩DC
	HDC     hdcCircle     = CreateCompatibleDC( hdcDst );
	HBITMAP hBitmapCircle = CreateCompatibleBitmap( hdcDst, nDiameterDst, nDiameterDst );
	
	SelectObject( hdcCircle, hBitmapCircle );
	
	//将圆形遮罩DC背景刷黑，尽管创建DC后背景就是黑色的，不过为了安全，还是刷一次
	RECT rtCircle = { 0, 0, nDiameterDst, nDiameterDst };
	
	FillRect( hdcCircle, &rtCircle, ( HBRUSH )GetStockObject( BLACK_BRUSH ));
	
	//在圆形遮罩DC上面绘制白色圆
	HGDIOBJ hOldBrush = SelectObject( hdcCircle, ( HBRUSH )GetStockObject( WHITE_BRUSH ));
	
	Ellipse( hdcCircle, 0, 0, nDiameterDst, nDiameterDst );
	
	SelectObject( hdcCircle, hOldBrush );
	
	//首先将源DC上指定圆形区域的内容拷贝到临时DC
	StretchBlt( hdcTemp, 0, 0, nDiameterDst, nDiameterDst, 
		hdcSrc, nXOriginSrc, nYOriginSrc, nDiameterSrc, nDiameterSrc, SRCCOPY );
	
	//然后将临时DC和圆形遮罩DC进行与操作
	BitBlt( hdcTemp, 0, 0, nDiameterDst, nDiameterDst, hdcCircle, 0, 0, SRCAND );
	
	//在临时DC绘制一个空心红色圆，以标识圆里面的内容
	HPEN hPen = CreatePen( PS_SOLID, nWidth, dwColor );
	
	HGDIOBJ hOldPen = SelectObject( hdcTemp, hPen );
	
	hOldBrush = SelectObject( hdcTemp, ( HBRUSH )GetStockObject( NULL_BRUSH ));
	
	Ellipse( hdcTemp, 0, 0, nDiameterDst, nDiameterDst );
	
	SelectObject( hdcTemp, hOldBrush );
	SelectObject( hdcTemp, hOldPen );
	
	DeleteObject( hPen );
	
	//最后用黑色作为透明色拷贝临时DC到目标DC
	TransparentBlt( hdcDst, nXOriginDst, nYOriginDst, nDiameterDst, nDiameterDst,
		hdcTemp, 0, 0, nDiameterDst, nDiameterDst, RGB( 0, 0, 0 ));
	
	//释放资源
	DeleteDC( hdcTemp );
	DeleteObject( hBitmapTemp );
	
	DeleteDC( hdcCircle );
	DeleteObject( hBitmapCircle );
	
	return TRUE;
}
