#pragma once
#include "time.h"
#include "stdafx.h"
#include "stdlib.h"
#include <vector>
#include <set>
using namespace std;
int tokyo_visited=false;//表示东京未访问,设置此变量的目的是为了设置不同的对话框和任务
bool plane_direction=false;//表示飞机位置显示，东京机场，降落时为135度 false ，起飞时为275度 true
bool take_off=false;//飞机起飞标志变量，目的是为了触发计时器
HDC hMail;//邮件信息
HDC hMenuHead;//菜单头部
HDC hMenuBody;//菜单中间项
HDC hExclimation;//感叹号图标
HDC hMissionFinish;// 任务完成绿色爱心
int Ex_counter=0;//感叹号计数器
bool mission1=false;//任务1触发标志
bool click_mail=false;//点击邮件的标志变量
bool mission_viewed=false;//查看了新任务与否的标志变量,false为未查看
//触发挑战的变量
bool challenge_activated=false;
//游戏人物dc，具体人物
HDC  hAnimationPersonnel[10];
HDC  hCRYQ;//穹妹
HDC  hYSN;//亚丝娜
HDC  hGBTN;//桐乃
//游戏人物家的dc
HDC hSaberHome;
HDC hSaberHomeDC;//表示兼容位图
////////////////////////////////////每个城市的街区dc
HDC hCityBlock[10];
HDC hMark;
HDC hMarkHome;
HDC hTokyoDowntown;

HDC hZhaHuangDowntownJR;//札幌市区兼容位图
HDC hZhaHuangDowntown;
HDC hZhaHuangFactoryJR;//札幌巧克力工厂内部兼容位图
HDC hZhaHuangFactory;

HDC hQingsenDowntownJR;//青森市区兼容位图
HDC hQingsenParkJR;
HDC hQingsenDowntown;
HDC hQingsenPark;

HDC hLuerdaoDowntownJR;//鹿儿岛市区兼容位图
HDC hLuerdaoDowntown;
HDC hLuerdaoVolcanoJR;//鹿儿岛火山景点兼容位图
HDC hLuerdaoVolcano;


//人物走动图像
HDC hWalkFrame;
int male_player_x=330,male_player_y=340;
int nRow=0,nColumn=0;//表示现在显示人物的哪一帧
int nFrameDelay=70;//延迟70毫秒
int nNextFrameTime=0;//下一帧绘制时间
//日本完整大图DC
HDC hTotalJapanDC;
HDC hTotalJapanBGDC;
HDC KyBd;
HDC hEnter;
HDC hMissionBar;
HDC hBack;
int TotalJapan_x=3400,TotalJapan_y=2400;//表示在日本大图飞行时：窗口左上角坐标
int dir=1;//飞机向上初始化
set<int> s;//表示存储关卡的集合
set<int>::iterator it;
int music_type=0;//0表示主菜单播放水龙吟,1表示关卡播放wwhm
bool moe_bar=false;//萌图欣赏界面导航条出现与否的标志变量
bool mp[8];//8张萌妹信息的标志变量
bool IsLoad = false;//再续前缘的点击文件夹变量
bool tokyo=false;//表示读档时的放大花朵
int map_stretch_counter=0;
int tokyo_counter1=0,tokyo_counter2=0;//东京文字计时器
int plane_counter=0;
int dialog_counter=0;//飞机在海上飞的对话计时器
POINT plane={TotalJapan_x+300,TotalJapan_y+400};//飞机中心点坐标
////////////日本机场dc
HDC hAirportDC[9];
HDC hRotate135;//飞机135度
HDC hLand;
//机场dc，具体个每一个机场加载 兼容位图
HDC hTokyoAirport;
HDC hZhaHuangAirport;
HDC hLuerdaoAirport;
HDC hQingsenAirport;
//////////城市介绍DC
int Intro_counter=0;
HDC hTokyoIntro;
HDC hZhanghuangIntro;
HDC hLuerdaoIntro;
HDC hQingsenIntro;
//////////////////////日本机场计时器
int Tokyo_counter=0;
int Tokyo_transform_counter=0;//飞机变小计时器 

/////////////////////游戏CG 计数器
int b_counter=0;//表示字母b的counter
int r_counter=0;
int a_counter=0;
int n_counter=0;
int t_counter=0;
int nan_counter=600;
int nan_acc=30;
int niao_counter=0;

bool mingguwu = false;
bool qingsen = false;
bool jingdu = false;
bool zhahuang =false;
bool songshan = false;
bool luerdao = false;
bool jiuzhou =false;
bool xinxie =false;

/////////关卡开头特效变量
HDC cross_hdc;//十字架hdc
HDC hlv1dc;//第一关dc
HDC hLevelPrelude[30];//一共十关的30张prelude图片dc
int lv1_counter=0;//第一关prelude计时器
int lv1_counter1=0;//第一关preldue计时器1
int lv1_counter2=0;//第一关preldue计时器2
int lv1_counter3=0;//第一关preldue计时器3 0.001s
int lv1_counter4=0;//第一关preldue计时器2 0.001s
bool phase1_done=false;//prelude第一阶段完成标志,0.5秒的空白
bool phase2_done=false;//prelude第二阶段完成标志,中心十字架停留0.3秒
bool phase3_done=false;//prelude第三阶段完成标志,4个中心十字架已经移动完成
bool phase4_done=false;//prelude第4阶段完成标志,8个中心十字架已经移动完成

////////
bool GameStart_Select=false;//表示开始游戏未被选中
bool GameBrief_Select=false;//表示游戏简介未选中
bool GameExit_Select=false;//表示游戏退出未选中
bool GameMoe_Select=false;//表示萌图欣赏未选中

bool rect_a=false;//false表示鼠标不在该区域内
bool rect_s=false;
bool rect_u=false;
bool rect_n=false;

//////第七关
int pad_x=250,pad_y=700;//第七关下挡板左上角坐标
int uppad_x=250,uppad_y=60;//第七关上挡板左上角坐标
bool click_start=false;//第七关点击鼠标球就发出去
int brick_grid[12][12];//第七关砖块格子，1表示有砖块，0表示没有砖块
bool lv7_win=true;//胜利标志变量
int lv7_death=0;//第七关阵亡数
int lv7_color_counter=0;//第七关颜色状态矩阵计数器
int color[6][6]={0,2,4,6,8,10,//第七关颜色状态矩阵
                 2,4,6,8,10,0,
                 4,6,8,10,0,2,
                 6,8,10,0,2,4,
                 8,10,0,2,4,6,
                 10,0,2,4,6,8};

int level6_row=0;//第六关鼠标格子行列号
int level6_column=0;
char input;
bool Level1_Motto_done=false;//第一关结束标志，进入motto界面
int Level1_Motto=0;//第一关格言界面计时器
bool Level2_Motto_done=false;//第2关结束标志，进入motto界面
int Level2_Motto=0;//第2关格言界面计时器
bool Level3_Motto_done=false;//第2关结束标志，进入motto界面
int Level3_Motto=0;//第2关格言界面计时器
bool Level4_Motto_done=false;//第4关结束标志，进入motto界面
int Level4_Motto=0;//第4关格言界面计时器
bool Level6_Motto_done=false;//第6关结束标志，进入motto界面
int Level6_Motto=0;//第6关格言界面计时器
bool Level7_Motto_done=false;//第7关结束标志，进入motto界面
int Level7_Motto=0;//第7关格言界面计时器

//主菜单四个圆圈的计数器,鼠标移动上去时开始计数
int chu=0;
int xun=0;
int li=0;
int shang=0;
//主菜单四个圆圈计数器，播放开始动画，4个圆圈依次进入画面
int chu1=0;
int xun1=0;
int li1=0;
int shang1=0;
//按下主菜单4个按钮后的动画计时器，圆圈向右飞出窗口
int chu2=0;
int xun2=0;
int li2=0;
int shang2=0;
//四个向右飞出的动画开始播放标志
bool chu2s=false;
bool xun2s=false;
bool li2s=false;
bool shang2s=false;


int random_letter;//不出现的字母				 
int row; //产生一个随机坐标1-10以表示要找的方块  行x
int column;//产生一个随机坐标1-10以表示要找的方块  列y
int letter;
int b[10][10];//随机字母状态矩阵
bool grid[10][10]={false};//第6关鼠标移动时显示提示的布尔矩阵
TCHAR grid_letter[10][10];//第6关填字格子具体字母矩阵
bool right1=true;//第六关填字正确的标志
bool zoom_flag=false;
bool level4_board=false;//第四关字母牌子标志变量,false为不显示
int Level4_counter;//第四关计时器
int Level6_counter;//第六关计时器
int timebar_y=360;//时间槽y坐标

int Lv5_counter_whql=0;//第5关五河琴里动画计数器
int whql_x=-320;//琴里左上角坐标
int whql_x1=-20;
int Lv5_counter_roll=0;//第五关卷轴计时器
int roll_x=600;//第五关卷轴右上角坐标
int roll_x1=600;
bool Lv5_whql_animation_done=false;//五河琴里动画已经放完的标志
bool Lv5_dialog1=false;//第一页对话标志变量
int Level5_state=0;//第五关游戏状态，0表示第一页对话
bool Level5_same,Level5_notsame;//第五关选择一样还是不一样的标志变量，未选择时为fasle
bool Level5_Picture=false;//第五关图片变化标志变量，false为原图
bool Level5_final_animation=false;//最后一页动画播放标志变量
int Level5_Motto=0;//毛笔字计时器
bool Level5_Motto_done=false;//7个毛笔字写完后的标志变量

int j=1;
int death_level3=0;
int game_state=-5;
int music_state=1;//音乐开关状态，1为开
int choose_state=0;
int moePicture_i=0;//萌图欣赏图片的标号
int Level2_counter;
int flag_save1=false;//第三关存盘标志变量，放在全局变量是为了保证退出第三关时该变量归false
bool flag_coin1=true, flag_coin2=true, flag_coin3=true;//第三关金币标志变量,要改为true
bool flag_level4_start=false;
int PosX3=93,PosY3=93;//第三关玩家初始位置,需要全局设置，以便退出游戏时回复 原来是93 93
int Level4_state=0;
int letter_x,letter_y;
//第八关
bool Level8_Motto_done=false;
int Level8_Motto=0;//第八关毛笔字计时器
bool level8_lv1_win=false,level8_lv2_win=false,level8_lv3_win=false;//每一关过关标志变量
int level8_lv2_stepcounter=0;//第八关第二小关步数计时器
int level8_timebar=161;//第八关计时器rectangle
int level8_lv1_counter=0;//第八关第一小关计时器，15秒的
bool level8_lv1=false;//3个变量是3关卡的方框
bool level8_lv2=false;
bool level8_lv3=false;
int level8_state=0;//第八关具体关卡数，一共三关，0表示准备界面，1 2 3 表示1到3小关
int IsInBoard=false;//鼠标是否在棋盘区域内
int level8_chess_counter=0;//第八关下棋棋子数，玩家下的棋子数
int level8_row;//第八关棋盘横坐标
int level8_column;//第八关棋盘纵坐标
int AI_row;//第八关AI的下棋坐标
int AI_column;
int level8_board[17][17];//第八关棋盘矩阵
bool IsDraw;//第八关判断和棋的标志变量
int level8_counter=0;//第八关计时器：作用是为了显示5连棋子
int level8_player[17][17][4];//第八关玩家下棋分值矩阵,其中4代表4条线上的权重值
int level8_Ai[17][17][4];//第八关电脑下棋分值矩阵,其中4代表4条线上的权重值
//第九关
int level9_timebar;
int level9_bike_counter;//比克体力时间计数器
int level9_flash_x,level9_flash_y;
int level9_flash_placed_x,level9_flash_placed_y;
bool level9_flash_description=false;
bool flash=true;//闪电未吃的标志
bool flash_used=false;//闪电使用标志，false表示未使用

int level9_box_placed_x,level9_box_placed_y;
bool level9_box_placed=false;//箱子放置的标志，false表示未放置
int level9_box_x,level9_box_y;//第九关箱子矩阵坐标
int level9_ball3_x=17,level9_ball3_y=18;//第三颗龙珠矩阵坐标
bool level9_box_description=false;
bool level9_box=true;//箱子未吃的标志
int chase_step_count=0;//记录下玩家和追逐怪距离的变量
bool chase = false;
int level9_chasingmonster_counter=0;//追逐怪物计时器
int chasingmonsterx=29, chasingmonstery=20;//追逐玩家的怪物
int path[31][30];//路径数组
int level9_player_x, level9_player_y;//第九关寻路玩家坐标
int level9_temp_x, level9_temp_y;//显像药水鼠标移动临时坐标
int level9_acceffect_counter=-1;//加速效果显示计时器,0,5秒显示
bool level9_acctool_description=false;//加速道具使用说明
int level9_acc_tool = 30;//30次使用加速道具的机会
bool gravity_activated=false;//重力系统未激活
int level9_gravity_counter = 0;//3秒重力计数器
float y_velocity = 0.0;//y方向上速度
float gravity = 0.2;//重力加速度			
int level9_px=300,level9_py=300;
int level9_medecine_coordinate_array[6] = {-1,-1,-1,-1,-1,-1};//记录3次显像的xy坐标
int reveal_medecine_number=3;//显像药水数量3,每一瓶都必须用在特定的地方才能过关
int level9_ball1_counter_dx=0,level9_ball1_counter_dy=0,level9_ball2_counter_dx=0,level9_ball2_counter_dy=0,level9_ball3_counter_dx=0,level9_ball3_counter_dy=0,
	level9_ball4_counter_dx=0,level9_ball4_counter_dy=0,level9_ball5_counter_dx=0,level9_ball5_counter_dy=0,level9_ball6_counter_dx=0,level9_ball6_counter_dy=0,
	level9_ball7_counter_dx=0,level9_ball7_counter_dy=0;//龙珠飞行计时器
//7颗龙珠存在标志，若玩家吃了就为false，未吃为true
bool level9ball_flag[7] = { true, true, true, true, true, true, true };
//锁和钥匙的标志，0，1为红蓝锁，3,2为红蓝钥匙
bool level9lockkey[5] = {true,true,true,true};//存放锁0,1，钥匙2,3
bool IsEatGrayKey=true;//是否吃了灰色钥匙,true表示未吃
bool level9_medecine_description = false;//鼠标 移动在药上的说明显示
bool level9_medicine[2] = { true, true };//药水被吃标记
int level9_maze[31][30]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//第九关迷宫矩阵,必须在定义时就初始化，不能先定义再初始化
		                  0,1,1,1,1,1,1,1,1,1,1,7,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,0,1,0,//特别说明： 2 代表红色锁，4代表蓝色锁
						  0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,2,0,1,0,1,0,1,0,
                          0,1,0,0,0,1,1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,0,1,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,1,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,
						  0,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,//10行
						  0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,
		                  1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
						  0,1,0,0,0,0,0,0,0,5,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,
						  0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,4,0,0,0,0,0,0,0,0,0,1,0,
						  0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,
                          0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
						  0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,1,0,1,0,
						  0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1,0,1,0,
						  0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,//20行
		                  0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,
		                  0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,0,0,0,0,0,1,0,1,0,
						  0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,0,1,1,0,0,0,0,1,1,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,1,0,1,0,
                          0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,0,1,0,0,1,0,1,0,
						  0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,0,0,0,0,1,1,0,1,0,
						  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,1,0,
						  0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,1,0,
						  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
						  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

HDC ChallengeDlg[3];
HDC hMainTitle[4];
HDC hCGword[7];
HDC Plane[8];
HDC hCityDC[36];//再续前缘DC们
HDC hLevel9Temp2ndDC, hLevel9StateBarDC, hLevel9ActorDC, hLevel9BrickDC[4], hLevel9BallDC[7], hLevel9KeyDC[4], hLevel9PortalDC, hLevel9Monster[5], hLevel9MedicineDC[2], hLevel9BirdDC, hLevel9GsystemDC, hLevel9AccDC, hLevel9AccEffectDC, hLevel9DialogDC,hLevel9ThornDC[3],hLevel9BarrierDC,hLevel9GrayLockDC,hLevel9GrayKeyDC;
HDC hMusicONDC,hSaveDC,hMusicOFFDC,hBgDC,hGameStartNDC,hGameStartYDC,hGameExitDC,hReturnMenuDC,hBriefDC,hBriefBGDC,hFlowerDC,hPictureDC[8],hMoeDC,hUpperEdgeDC,hLowerEdgeDC,hGameInfoDC,hGameInfoBgDC,hKeyBoardDC,hLevel1BgDC,hLevel9BanDC,hLevel9PinkBarrierDC,hLevel9FlashDC,hLevel9BikeDC
,hInputBoxDC,hTitleDC,hTitle1DC,hTitle2DC,hStarDC,hStar1DC,hLevelPreDC,hBallDC[5],hLevel2BgDC,hTVDC,hLevel2PlayerDC,hLevel2MMDC,hLevel2BoardDC,hLetterDC[26],hLevel4TimeDC,hMoeBar1,hMoeBar2,hMoeP[8],hLevel9BGDC,hJapanDC,hFolderDC,hFlowerBigDC,hCartoonJapanDC,hCartoonJapanDC1,hSilverDialog,hStartMianma
,hLevel3BGDC,hLevel3FrameDC,hLevel3GameBoardDC,hLevel3PlayerDC,hLevel3FailDC,hLevel3PassDC,hLevel3MonsterDC[4],hLevel3CoinDC,hLevel3SaveDC,hLevel3AsunaDC, hLevel4BGDC,hLevel4StartDC,
hLevel4ZoomDC,hLevel4BoardDC,hLevel4TNDC,hLevel5BGDC,hLevel5Pic,hLevel5Pic_Transformed,hLevel5QLDC,hLevel5DialogDC,hLevel5RollDC,hLevel5MouseDC,hLevel5ButtonDC,hLevel5ArrowDC,hLevel5MottoDC[7],hLevel1MottoDC[6],hLevel2MottoDC[9],hLevel3MottoDC[9],hLevel7MottoDC[9],hLevel8MottoDC[9]
,hLevel4MottoDC[9],hMottoBGDC,hMenuDC[8],hCloud1DC,hCloud2DC,hLevel6BGDC,hLevel6GridDC,hLevel6SXDC,hLevel6AnswerDC[15],hLevel6MottoDC[9],hLevel7BGDC,hLevel7BG1DC,hLevel7PadDC,hLevel7Pad1DC,hLevel7BallDC,hLevel7BrickDC[6],hLevel7DeathDC,hLevel7QCFDC
,hLevel7QCFdlgDC,hMoePictureDC,hLevel8BGDC,hLevel8BoardDC,hLevel8Black,hLevel8White,hLevel8SQKS,hLevel8Tick;
///////////////////////////////Z主菜单选中4项的dc
HDC hGameStart_SelectedDC,hGameBrief_SelectedDC,hGameExit_SelectedDC,hMoePicture_SelectedDC,hLoadDC,hCGDC,hGameCGDC,hPrelude_flyonseaDC;
HDC hTempMenuDC,hTempDC,hTemp1DC,hTemp3DC,hTemp4DC,hTemp5DC,hTemp6DC,hTemp7DC,hTemp8DC,hTemp9DC;//每一关用不同的tempdc防止出现贴图错误
HDC hTempMotto1DC,hTempMotto2DC,hTempMotto3DC,hTempMotto4DC,hTempMotto6DC,hTempMotto7DC,hTempMotto8DC;//每一关格言dc
int InitCursorPosX,InitCursorPosY;
CString Password="",Level1Pre="LEVEL 1",Level1Title="隐藏的密码",Level2Pre="LEVEL 2",Level2Title="漫长的20秒",Level3Pre="LEVEL 3",Level3Title="亚丝娜的猫",str_counter,
Level4Pre="LEVEL 4",Level4Title="千里眼桐乃",Level5Pre="LEVEL 5",Level5Title="琴里的福利",Level6Pre="LEVEL 6",Level6Title="博学的十香",Level7Pre="LEVEL 7",Level7Title="迷の打砖块",Level5Dialog1_1="面码同学，琴里姐姐这一关",Level5Dialog1_2="可是福利关哦！非常简单~",Level5Dialog1_3="姐姐是不会为难你滴！",
Level5Dialog2_1="面码酱看到上面的图了嘛！",Level5Dialog2_2="你觉得 方块A 和 方块B的",Level5Dialog2_3="颜色一样吗？",Level5Dialog2_4="请选择： 一样   不一样",
Level5Dialog3_1="好，现在姐姐就让你相信",Level5Dialog3_2="A和B的颜色是一样的!请",Level5Dialog3_3="点击右下角按钮，接下来",Level5Dialog3_4="就是见证奇迹的时刻！",Level5Dialog3_5="(再次点击即可还原！)"
,Level5Dialog4_1="现在你相信了吧！AB颜色",Level5Dialog4_2="是完全一样的!如果你还不",Level5Dialog4_3="信，请截图后用画图打开选",Level5Dialog4_4="取取色工具查看2者RGB值！"
,Level5Dialog5_1="有时候眼睛会欺骗你,面码!",Level5Dialog5_2="在不清楚真相时不要妄下定",Level5Dialog5_3="论，记住姐姐的人生忠告！",Level5Motto="Who a person truly is cannot be seen with the eye",
Level1Motto="All warfare is based on deception",Level2Motto="Most powerful is he who controls his own power",Level3Motto="Fear not for the future, weep not for the past",Level6Motto="Nothing is impossible to a willing heart",
Level4Motto="If you ignore the past, you jeopardize your future",Level7Motto="Man proposes,God disposes",Level8Motto="Business before pleasure";//必须在这里初始化才行

clock_t start,finish,start_level2_pre,finish_level2_pre,start_level3_pre,finish_level3_pre,start_level4_pre,finish_level4_pre,start_level5_pre,finish_level5_pre,
	    finish_level6_pre,start_level6_pre, finish_level7_pre,start_level7_pre,finish_level8_pre,start_level8_pre,start_cg,finish_cg;

set<int> mission_set;//任务集合，表示有哪些任务，从1到10
set<int>::iterator m_it,m_it2,m_it3,m_it4,m_it5,m_it6,m_it7,m_it8;
void Show_Mission(HDC hdc)//点击邮件显示任务完成情况
{

    LOGFONT lf;
	SetBkMode(hdc,TRANSPARENT);
	SetTextColor(hdc,RGB(255,255,255));
	ZeroMemory(&lf,sizeof(LOGFONT));   
	HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	SelectObject(hdc,hfont);	
	CString str_mission[5]={L"飞抵东京找到Saber",L"飞抵札幌问问穹妹",L"飞抵鹿儿岛求助亚丝娜",L"飞抵青森找到桐乃",L"飞抵新泻询问琴里"};
	int last,i=0;
	last=mission_set.size();//取集合大小
	if(last==1)//只有第一个任务就只画头部
	  {
		  TransparentBlt(hdc,383,50,224,55,hMenuHead,0,0,224,55,RGB(0,0,0));//任务菜单头部
		  TextOut(hdc,435,75,str_mission[0],str_mission[0].GetLength());//具体任务说明
	  }
	else
	{
		TransparentBlt(hdc,383,50,224,55,hMenuHead,0,0,224,55,RGB(0,0,0));//任务菜单头部
		TextOut(hdc,435,75,str_mission[0],str_mission[0].GetLength());//具体任务说明
		it=s.find(1);
		if(it!=s.end())
		   {
		      //画绿色爱心，任务完成
		      TransparentBlt(hdc,404,76,20,20,hMissionFinish,0,0,20,20,RGB(255,255,255));
		   }
		for(i=2;i<=last;i++)
		{
	       TransparentBlt(hdc,383,105+(i-2)*45,224,45,hMenuBody,0,0,224,45,RGB(0,0,0));//任务菜单中间项
		   TextOut(hdc,435,75+(i-1)*45,str_mission[i-1],str_mission[i-1].GetLength());
		   it= s.find(i);
		   if(it!=s.end())
		   {
		      //画绿色爱心，任务完成
		      TransparentBlt(hdc,404,76+(i-1)*45,20,20,hMissionFinish,0,0,20,20,RGB(255,255,255));
		   }
		}
	}

	DeleteObject(hfont);
	SetTextColor(hdc,RGB(0,0,0));

}
void Walk(int x1,int y1,int x2,int y2)//人物走路代码,4个坐标表示矩形的左上角和右下角坐标
{
    
	if(KEY_DOWN(VK_DOWN))//向下走
			{
			   nColumn=0;
			   if(male_player_y<=y2)
			    male_player_y++;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第一行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  
			
			}
			if(KEY_DOWN(VK_UP))//向上走
			{
			   if(male_player_y>=y1)
			   male_player_y--;
			   nColumn=3;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  					
			
			}
			if(KEY_DOWN(VK_RIGHT))//向右走
			{
			   if(male_player_x<=x2)
				male_player_x++;
			   nColumn=2;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  								
			}
			if(KEY_DOWN(VK_LEFT))
			{
			    if(male_player_x>=x1)
				male_player_x--;
			    nColumn=1;
			    if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  											
			}
}
struct point//寻路算法点结构
{
	int row;
	int column;
	int parentnodei;//父亲节点号，是vp【】的编号
};
vector<point> vp;
void BFS(int srcx, int srcy, int destx, int desty)//宽度优先搜索
{
	point P={srcx,srcy,-1};
	vp.push_back(P);//插入起始节点
	path[srcy][srcx] = 1;
	int s = 1, i = 0;
	while (i != s)//直到搜索完所有节点
	{
		//以下是4个方向上的寻路
		if (vp[i].row - 1 >= 0)//必须加这句话,否则出错数组越界
		if (level9_maze[vp[i].row - 1][vp[i].column] == 0)
		{
			level9_maze[vp[i].row - 1][vp[i].column] = 3;//访问该节点
			if (vp[i].row - 1 == destx &&vp[i].column == desty)//最终节点
			{
				path[vp[i].column][vp[i].row - 1] = 1;
				path[vp[i].column][vp[i].row] = 1;
				int tempnode = i;//寻路，通过前继节点来找
				while (vp[tempnode].parentnodei != -1)//
				{
					path[vp[tempnode].column][vp[tempnode].row] = 1;
					chase_step_count++;
					tempnode = vp[tempnode].parentnodei;
				}
			}
			point temp1={ vp[i].row - 1, vp[i].column, i };
			vp.push_back(temp1);

		}
		if (vp[i].row + 1 <= 29)
		if (level9_maze[vp[i].row + 1][vp[i].column] == 0)
		{
			level9_maze[vp[i].row + 1][vp[i].column] = 3;
			if (vp[i].row + 1 == destx &&vp[i].column == desty)//最终节点
			{
				path[vp[i].column][vp[i].row + 1] = 1;
				path[vp[i].column][vp[i].row] = 1;
				int tempnode = i;//寻路，通过前继节点来找
				while (vp[tempnode].parentnodei != -1)//
				{
					path[vp[tempnode].column][vp[tempnode].row] = 1;
					chase_step_count++;
					tempnode = vp[tempnode].parentnodei;
				}
			}
			point temp2={ vp[i].row + 1, vp[i].column, i };
			vp.push_back(temp2);
		}
		if (vp[i].column + 1 <= 29)
		if (level9_maze[vp[i].row][vp[i].column + 1] == 0)
		{
			level9_maze[vp[i].row][vp[i].column + 1] = 3;
			if (vp[i].row == destx &&vp[i].column + 1 == desty)//最终节点
			{
				path[vp[i].column + 1][vp[i].row] = 1;
				path[vp[i].column][vp[i].row] = 1;
				int tempnode = i;//寻路，通过前继节点来找
				while (vp[tempnode].parentnodei != -1)//
				{
					path[vp[tempnode].column][vp[tempnode].row] = 1;
					chase_step_count++;
					tempnode = vp[tempnode].parentnodei;
				}
			}
			point temp3={ vp[i].row, vp[i].column + 1, i };
			vp.push_back(temp3);
		}
		if (vp[i].column - 1 >= 0)
		if (level9_maze[vp[i].row][vp[i].column - 1] == 0)
		{
			level9_maze[vp[i].row][vp[i].column - 1] = 3;
			if (vp[i].row == destx &&vp[i].column - 1 == desty)//最终节点
			{
				path[vp[i].column - 1][vp[i].row] = 1;
				path[vp[i].column][vp[i].row] = 1;
				int tempnode = i;//寻路，通过前继节点来找
				while (vp[tempnode].parentnodei != -1)//
				{
					path[vp[tempnode].column][vp[tempnode].row] = 1;
					chase_step_count++;
					tempnode = vp[tempnode].parentnodei;
				}
			}
			point temp4={ vp[i].row, vp[i].column - 1, i };
			vp.push_back(temp4);

		}

		//已经把当前节点所有周围节点都遍历了,全部加入list中
		s = vp.size();//更新vp的大小
		i++;//继续搜寻下一个节点

	}

}
struct Ball
	{
	 int x;//小球位置
	 int y;
	 int dx;//小球方向
	 int dy;
}ball[5]={289,145,5,5,208,201,4,-4,373,201,-4,4,341,294,-4,-4,238,293,4,4};//必须在这里初始化，不能再WM_CREATE中初始化
struct Level7_Ball//第七关球的结构体
{
  int x;
  int y;
  int dx;
  int dy;
}ball_lv7={pad_x+43,pad_y-25,-4,-4};

//第三关怪物，慢慢补充到10个左右
struct Monster_Level3
{
	int x;//怪物位置
	int y;
	int dx;//怪物移动方向
	int dy;
}Monster[11] = { 139, 64, 0, 3, 180, 70, 0, 2, 213, 226, 0, -2, 78, 168, 2, 0, 119, 335, 0, -2, 118, 335, 4, 0, 333, 291, -2, 0, 282, 215, 10, 0, 287, 113, 3, 0, 457, 222, 0, -2, 396, 179, 0, 2 }, Monster_level9[9] = {40,240,1,0,   140,260,-1,0,  60,500,2,0,   260,440,-2,0,  40,380,1,0,   380,160,1,-1,  540,160,-1,-1, 400,260,1,0, 460,260,1,0};
bool CGameMap::GamePointDistance(POINT p1,POINT p2,int distance)//碰撞判断函数,2物体中心点距离小于distance即为true
{
	if((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)<=distance*distance)
		return true;
	return false;
}
void Level8_AI();//第八关AI
bool IsWin_level8(int a[17][17],int row,int column,int chess);//第八关五子棋判断胜利函数

void CGameMap::GameDoubleBuffer(HWND hwnd,HDC hdc)
{
    int i;
	static int PosX=288,PosY=225;//第二关玩家位置
	srand(time(0));//随机数初始化

	//////////////////////////////////////////////////////////////////////以下是每一关格言界面
	if(game_state==103)//第一关结束后格言界面
	{
	  BitBlt(hTempMotto1DC,0,0,600,780,hMottoBGDC,0,0,SRCCOPY);
	  LOGFONT lf;
	  ZeroMemory(&lf,sizeof(LOGFONT));   
	  //这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
	  HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
	  SetTextColor(hTempMotto1DC,RGB(255,255,255));
	  SelectObject(hTempMotto1DC,hfont);
	  SetBkMode(hTempMotto1DC,TRANSPARENT);
	  DeleteObject(hfont);
      for(int k=0;k<Level1_Motto;k++)
		  TransparentBlt(hTempMotto1DC,120+60*k,300,60,60,hLevel1MottoDC[k],0,0,60,60,RGB(0,0,0));
	  if(Level1_Motto_done==true)
	  {
	   TextOut(hTempMotto1DC,130,380,Level1Motto,Level1Motto.GetLength());
	   TransparentBlt(hTempMotto1DC,520,640,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标
	  
	  }

	  
	  BitBlt(hdc,0,0,600,800,hTempMotto1DC,0,0,SRCCOPY);//第二次缓冲	
	}
	else if(game_state==104)//第二关结束后格言部分
	{
		BitBlt(hTempMotto2DC,0,0,600,780,hMottoBGDC,0,0,SRCCOPY);
	    LOGFONT lf;
	  ZeroMemory(&lf,sizeof(LOGFONT));   
	  //这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
	  HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
	  SetTextColor(hTempMotto2DC,RGB(255,255,255));
	  SelectObject(hTempMotto2DC,hfont);
	  SetBkMode(hTempMotto2DC,TRANSPARENT);
	  DeleteObject(hfont);
	  for(int k=0;k<Level2_Motto;k++)
		  TransparentBlt(hTempMotto2DC,30+60*k,300,60,60,hLevel2MottoDC[k],0,0,60,60,RGB(0,0,0));
	  if(Level2_Motto_done==true)
	  {
	   TextOut(hTempMotto2DC,60,380,Level2Motto,Level2Motto.GetLength());
	   TransparentBlt(hTempMotto2DC,520,640,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标
	  
	  }
	   BitBlt(hdc,0,0,600,800,hTempMotto2DC,0,0,SRCCOPY);//第二次缓冲
		
	
	}
	else if(game_state==105)//第三关结束后格言部分
	{
		BitBlt(hTempMotto3DC,0,0,600,780,hMottoBGDC,0,0,SRCCOPY);
	    LOGFONT lf;
	  ZeroMemory(&lf,sizeof(LOGFONT));   
	  //这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
	  HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
	  SetTextColor(hTempMotto3DC,RGB(255,255,255));
	  SelectObject(hTempMotto3DC,hfont);
	  SetBkMode(hTempMotto3DC,TRANSPARENT);
	  DeleteObject(hfont);
	   for(int k=0;k<Level3_Motto;k++)
		  TransparentBlt(hTempMotto3DC,30+60*k,300,60,60,hLevel3MottoDC[k],0,0,60,60,RGB(0,0,0));
	  if(Level3_Motto_done==true)
	  {
	   TextOut(hTempMotto3DC,60,380,Level3Motto,Level3Motto.GetLength());
	   TransparentBlt(hTempMotto3DC,520,640,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标
	  
	  }
	   BitBlt(hdc,0,0,600,800,hTempMotto3DC,0,0,SRCCOPY);//第二次缓冲
	}
	else if(game_state==106)//第四关结束后格言部分
	{
	 
		BitBlt(hTempMotto4DC,0,0,600,780,hMottoBGDC,0,0,SRCCOPY);
	  LOGFONT lf;
	  ZeroMemory(&lf,sizeof(LOGFONT));   
	  //这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
	  HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
	  SetTextColor(hTempMotto4DC,RGB(255,255,255));
	  SelectObject(hTempMotto4DC,hfont);
	  SetBkMode(hTempMotto4DC,TRANSPARENT);
	  DeleteObject(hfont);
	    for(int k=0;k<Level4_Motto;k++)
		  TransparentBlt(hTempMotto4DC,30+60*k,300,60,60,hLevel4MottoDC[k],0,0,60,60,RGB(0,0,0));
	  if(Level4_Motto_done==true)
	  {
	   TextOut(hTempMotto4DC,60,380,Level4Motto,Level4Motto.GetLength());
	   TransparentBlt(hTempMotto4DC,520,640,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标
	  
	  }
	 BitBlt(hdc,0,0,600,800,hTempMotto4DC,0,0,SRCCOPY);//第二次缓冲	
	}
	else if(game_state==107)//第六关格言部分
	{		 
	    
		BitBlt(hTempMotto6DC,0,0,600,780,hMottoBGDC,0,0,SRCCOPY);
	     LOGFONT lf;
	     ZeroMemory(&lf,sizeof(LOGFONT));   
	     //这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
	     HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
	     SetTextColor(hTempMotto6DC,RGB(255,255,255));
		  SelectObject(hTempMotto6DC,hfont);
		  SetBkMode(hTempMotto6DC,TRANSPARENT);
		  DeleteObject(hfont);
			for(int k=0;k<Level6_Motto;k++)
			  TransparentBlt(hTempMotto6DC,30+60*k,300,60,60,hLevel6MottoDC[k],0,0,60,60,RGB(0,0,0));
		  if(Level6_Motto_done==true)
		  {
		   TextOut(hTempMotto6DC,100,380,Level6Motto,Level6Motto.GetLength());
		   TransparentBlt(hTempMotto6DC,520,640,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标	  
	      }	  	  	  	
	     BitBlt(hdc,0,0,600,800,hTempMotto6DC,0,0,SRCCOPY);//第二次缓冲	
	}
	else if(game_state==108)//第七关结束后格言部分
	{
	 	
	     BitBlt(hTempMotto7DC,0,0,600,780,hMottoBGDC,0,0,SRCCOPY);
	     LOGFONT lf;
	     ZeroMemory(&lf,sizeof(LOGFONT));   
	     //这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
	     HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
	     SetTextColor(hTempMotto7DC,RGB(255,255,255));
		  SelectObject(hTempMotto7DC,hfont);
		  SetBkMode(hTempMotto7DC,TRANSPARENT);
		  DeleteObject(hfont);
			for(int k=0;k<Level7_Motto;k++)
			  TransparentBlt(hTempMotto7DC,30+60*k,300,60,60,hLevel7MottoDC[k],0,0,60,60,RGB(0,0,0));
		  if(Level7_Motto_done==true)
		  {
		   TextOut(hTempMotto7DC,140,380,Level7Motto,Level7Motto.GetLength());
		   TransparentBlt(hTempMotto7DC,520,640,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标	  
	      }	  	  	  	
	     BitBlt(hdc,0,0,600,800,hTempMotto7DC,0,0,SRCCOPY);//第二次缓冲	
	
	}
	else if(game_state==109)//第八关结束后格言部分
	{	   
	  
		BitBlt(hTempMotto8DC,0,0,600,780,hMottoBGDC,0,0,SRCCOPY);
	    LOGFONT lf;
	     ZeroMemory(&lf,sizeof(LOGFONT));   
	     //这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
	     HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
	     SetTextColor(hTempMotto8DC,RGB(255,255,255));
		  SelectObject(hTempMotto8DC,hfont);
		  SetBkMode(hTempMotto8DC,TRANSPARENT);
		  DeleteObject(hfont);
		  	for(int k=0;k<Level8_Motto;k++)
			  TransparentBlt(hTempMotto8DC,30+60*k,300,60,60,hLevel8MottoDC[k],0,0,60,60,RGB(0,0,0));
		  if(Level8_Motto_done==true)
		  {
		   TextOut(hTempMotto8DC,140,380,Level8Motto,Level8Motto.GetLength());
		   TransparentBlt(hTempMotto8DC,520,640,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标	  
	      }	  	  	  	
	     BitBlt(hdc,0,0,600,800,hTempMotto8DC,0,0,SRCCOPY);//第二次缓冲	
	
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////测试炫酷效果
	else if(game_state==1||game_state==3||game_state==5||game_state==7||game_state==9||game_state==11||game_state==13||game_state==15)//第1,2,关prelude
	{
	    int temp=((game_state+1)/2-1)*3;
		BitBlt(hlv1dc,0,0,600,780,hMottoBGDC,0,0,SRCCOPY);
		if(phase1_done==true)//第一阶段完成:0.5秒钟的时间，然后出现中心的一个十字架
		    TransparentBlt(hlv1dc,285,380,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画中心十字架
		if(phase2_done==true)//第二阶段完成，画中心4个十字架分别向左右移动 还有直线
		{		    
			TransparentBlt(hlv1dc,285-lv1_counter1*3,380,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架1
		    TransparentBlt(hlv1dc,285+lv1_counter1*3,380,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架2
			TransparentBlt(hlv1dc,285-lv1_counter1*9,380,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架3
		    TransparentBlt(hlv1dc,285+lv1_counter1*9,380,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架4
		}
		if(phase3_done==true)//第三阶段完成，开始画上下各4个十字架分别往上下移动
		{		
		    TransparentBlt(hlv1dc,210,380-lv1_counter2*3,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架1  上面一排
		    TransparentBlt(hlv1dc,360,380-lv1_counter2*3,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架2
			TransparentBlt(hlv1dc,60,380-lv1_counter2*3,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架3
		    TransparentBlt(hlv1dc,510,380-lv1_counter2*3,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架4

			TransparentBlt(hlv1dc,210,380+lv1_counter2*3,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架1   下面一排
		    TransparentBlt(hlv1dc,360,380+lv1_counter2*3,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架2
			TransparentBlt(hlv1dc,60,380+lv1_counter2*3,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架3
		    TransparentBlt(hlv1dc,510,380+lv1_counter2*3,30,30,cross_hdc,0,0,30,30,RGB(255,252,209));//画十字架4
			
			HPEN hPen = CreatePen(PS_SOLID,1,RGB(255,255,255));
		    SelectObject(hlv1dc,hPen);
			MoveToEx(hlv1dc,88,395-lv1_counter2*3,NULL);LineTo(hlv1dc,512,395-lv1_counter2*3);//上面长实线
		    MoveToEx(hlv1dc,88,395+lv1_counter2*3,NULL);LineTo(hlv1dc,512,395+lv1_counter2*3);//下面长实线
			DeleteObject(hPen);
		
		}
		if(phase4_done==true)
		{
		   HPEN hPen = CreatePen(PS_SOLID,1,RGB(255,255,255));
		   SelectObject(hlv1dc,hPen);
		   //MoveToEx(hlv1dc,88,319,NULL);LineTo(hlv1dc,512,319);//上面长实线
		   MoveToEx(hlv1dc,88,470,NULL);LineTo(hlv1dc,512,470);//上面长实线

		   MoveToEx(hlv1dc,74,334,NULL);LineTo(hlv1dc,74,457);//中间4根实线
		   MoveToEx(hlv1dc,224,334,NULL);LineTo(hlv1dc,224,457);//实线
           MoveToEx(hlv1dc,374,334,NULL);LineTo(hlv1dc,374,457);//实线
           MoveToEx(hlv1dc,525,334,NULL);LineTo(hlv1dc,525,457);//实线
		   //画3张图片
		   TransparentBlt(hlv1dc,82,328,136,136,hLevelPrelude[temp],0,0,136,136,RGB(0,0,0));//画第一张图
		   if(game_state==1)
		   {
		      TransparentBlt(hlv1dc,250,350,110,100,hLevelPrelude[temp+1],0,0,110,100,RGB(255,255,248));//画第2张图
		      TransparentBlt(hlv1dc,405,350,110,100,hLevelPrelude[temp+2],0,0,110,100,RGB(255,255,248));//画第3张图
		   }
		   else
		   {
		      TransparentBlt(hlv1dc,250,350,110,100,hLevelPrelude[temp+1],0,0,110,100,RGB(252,254,252));//画第2张图,颜色有色差 不爽
		      TransparentBlt(hlv1dc,405,350,110,100,hLevelPrelude[temp+2],0,0,110,100,RGB(252,254,252));//画第3张图	   
		   }		 		
		   DeleteObject(hPen);
		
		}
					
		
		BitBlt(hdc,0,0,600,780,hlv1dc,0,0,SRCCOPY);//第二次缓冲
	}
	else if(game_state==-1)//再续前缘
	{
	 				
	   if(tokyo==false)
	   BitBlt(hLoadDC,0,0,600,800,hBriefBGDC,0,0,SRCCOPY);//画背景图片
	   if(IsLoad==true)
	      {
			 /////////////////////////////////  
			   TransparentBlt(hLoadDC,200,200,50,50,Plane[3],0,0,50,50,RGB(0,0,0));//画飞机
			  if(tokyo==true)
			   {
			    //alpha通道混合图片
		/*COLORREF nColorB,nColorC;
		COLORREF RedB,BlueB,GreenB;
		COLORREF RedC,BlueC,GreenC;
		COLORREF resultR,resultG,resultB;
		int x,y;
		for(x=0;x<=600;x++)
			for(y=0;y<=800;y++)
			{
			   nColorB = GetPixel(hBriefBGDC,x,y);
			   nColorC = GetPixel(hCityDC[0],x,y);
			   
			   RedB = GetRValue(nColorB);
			   BlueB = GetBValue(nColorB);
			   GreenB = GetGValue(nColorB);
			   RedC = GetRValue(nColorC);
			   BlueC = GetBValue(nColorC);
			   GreenC = GetGValue(nColorC);
			   double alpha =0.5;
			   resultR = (int)(RedB*alpha+(1.0-alpha)*RedC);
			   resultG = (int)(GreenB*alpha+(1.0-alpha)*GreenC);
			   resultB = (int)(BlueB*alpha+(1.0-alpha)*BlueC);
			  
			   SetPixel(hLoadDC,x,y,RGB(resultR,resultG,resultB));
			
			}*/
		    //画东京图片
               BitBlt(hLoadDC,0,0,600,800,hCityDC[0],0,0,SRCCOPY);		   
			   }
			   ///////////////////////////////
			   
			   if(tokyo==false&&mingguwu==false&&qingsen==false&&jingdu==false&&songshan==false&&luerdao==false&&jiuzhou==false&&xinxie==false)
			   //TransparentBlt(hLoadDC,0,50,600,600,hJapanDC,0,0,600,600,RGB(166,194,222));//画日本地图 
			   BitBlt(hLoadDC,0,0,600,800,hCartoonJapanDC,0,0,SRCCOPY);//画卡通日本地图 
			   
			   ///////////////////////////////////////////
			   it=s.find(1);
			   if(it!=s.end())//东京地区
			   {				
				 if(tokyo==false&&mingguwu==false)
				 {
					 TransparentBlt(hLoadDC,407,396,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
				 }
				 else if(tokyo==true)//tokyo==true
				    {						
						
						TransparentBlt(hLoadDC,map_stretch_counter,map_stretch_counter+50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
					    if(map_stretch_counter==450)
						  {
							  HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		                      SelectObject(hLoadDC,hPen);
							  MoveToEx(hLoadDC,530,600,NULL);LineTo(hLoadDC,530-tokyo_counter1,600+tokyo_counter1);
							  MoveToEx(hLoadDC,450,680,NULL);LineTo(hLoadDC,450-tokyo_counter2,680);
							  DeleteObject(hPen);	
							  if(tokyo_counter2==100)
								   TransparentBlt(hLoadDC,350,650,60,30,hCityDC[3],0,0,60,30,RGB(0,0,0));

							  TransparentBlt(hLoadDC,210+tokyo_counter1,10,300,75,hCityDC[1],0,0,300,75,RGB(4,2,4));
							  TransparentBlt(hLoadDC,370-tokyo_counter1,90,150,52,hCityDC[2],0,0,150,52,RGB(4,2,4));

							  TransparentBlt(hLoadDC,520,590,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
							 
						  }
				    }
			   }
			   ////////////////////////////////////名古屋  
               it=s.find(2);//注意find函数返回的是迭代器的位置，不是bool函数
			   if(it!=s.end())//找到了该数字
			   {
			      
				  if(mingguwu==true)
				   BitBlt(hLoadDC,0,0,600,800,hCityDC[4],0,0,SRCCOPY);//画名古屋	
				  if(tokyo==false&&mingguwu==false)
				     TransparentBlt(hLoadDC,288,441,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));	
				  else if(mingguwu==true)
				  {
			        TransparentBlt(hLoadDC,map_stretch_counter,50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
				    if(map_stretch_counter==450)
					{
					     HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		                 SelectObject(hLoadDC,hPen);
						 MoveToEx(hLoadDC,510,160,NULL);LineTo(hLoadDC,510-tokyo_counter1,160-tokyo_counter1);
						 MoveToEx(hLoadDC,430,80,NULL);LineTo(hLoadDC,430-tokyo_counter2,80);
						 DeleteObject(hPen);
						 if(tokyo_counter2==100)
							   TransparentBlt(hLoadDC,330,50,85,30,hCityDC[5],0,0,85,30,RGB(0,0,0));
						 TransparentBlt(hLoadDC,390-tokyo_counter1,700,300,75,hCityDC[7],0,0,300,75,RGB(4,2,4));
						 TransparentBlt(hLoadDC,219+tokyo_counter1,650,161,50,hCityDC[6],0,0,161,50,RGB(4,2,4));
					
						 TransparentBlt(hLoadDC,500,150,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
					}
				  }

			   
			   }
			   //////////////////////////////////青森
			   it=s.find(3);
			   if(it!=s.end())
			   {
			      if(qingsen==true)
					  BitBlt(hLoadDC,0,0,600,800,hCityDC[8],0,0,SRCCOPY);
				  if(tokyo==false&&mingguwu==false&&qingsen==false)
				     TransparentBlt(hLoadDC,477,234,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
				  else if(qingsen==true)
				  {
				    TransparentBlt(hLoadDC,0,50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
				    if(map_stretch_counter==450)
					{
						HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
						SelectObject(hLoadDC,hPen);
						MoveToEx(hLoadDC,95,107,NULL);LineTo(hLoadDC,95+tokyo_counter1,107-tokyo_counter1);
						MoveToEx(hLoadDC,175,27,NULL);LineTo(hLoadDC,175+tokyo_counter2,27);
						DeleteObject(hPen);
						if(tokyo_counter2==100)
							TransparentBlt(hLoadDC,217,27,60,30,hCityDC[9],0,0,60,30,RGB(0,0,0));
						TransparentBlt(hLoadDC,-80+tokyo_counter1,705,277,75,hCityDC[11],0,0,277,75,RGB(4,2,4));
						TransparentBlt(hLoadDC,80-tokyo_counter1,665,180,40,hCityDC[10],0,0,180,40,RGB(4,2,4));				
						TransparentBlt(hLoadDC,85,97,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
					}
				  }			   			   		   		   			   
			   }
               /////////////////////////////////////京都
			   it=s.find(4);
			   if(it!=s.end())
			   {
			     if(jingdu==true)
					 BitBlt(hLoadDC,0,0,600,800,hCityDC[12],0,0,SRCCOPY);//画名古屋	
				 if(tokyo==false&&mingguwu==false&&qingsen==false&&jingdu==false)
				     TransparentBlt(hLoadDC,240,360,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
				 else if(jingdu==true)
				 {
				   TransparentBlt(hLoadDC,0,50+map_stretch_counter,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
				   if(map_stretch_counter==450)
				   {
				     HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
					 SelectObject(hLoadDC,hPen);
					 MoveToEx(hLoadDC,55,600,NULL);LineTo(hLoadDC,55+tokyo_counter1,600+tokyo_counter1);
					 MoveToEx(hLoadDC,135,680,NULL);LineTo(hLoadDC,135+tokyo_counter2,680);
					 DeleteObject(hPen);
				     if(tokyo_counter2==100)
							TransparentBlt(hLoadDC,167,650,69,30,hCityDC[14],0,0,69,30,RGB(0,0,0));
				     TransparentBlt(hLoadDC,80-tokyo_counter1,0,295,75,hCityDC[15],0,0,295,75,RGB(4,2,4));
					 TransparentBlt(hLoadDC,-80+tokyo_counter1,75,138,50,hCityDC[13],0,0,138,50,RGB(4,2,4));		
				     TransparentBlt(hLoadDC,45,590,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
				   }				 			 
				 }			   			   			   
			   }
			//////////////////////////////////札幌
			it=s.find(5);
			if(it!=s.end())
			{
			   if(zhahuang==true)
				   BitBlt(hLoadDC,0,0,600,800,hCityDC[16],0,0,SRCCOPY);
			   if(tokyo==false&&mingguwu==false&&qingsen==false&&jingdu==false&&zhahuang==false)
				     TransparentBlt(hLoadDC,460,130,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
			   else if(zhahuang==true)
			   {
			     TransparentBlt(hLoadDC,map_stretch_counter,map_stretch_counter+50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
				 if(map_stretch_counter==450)
				 {
				              HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		                      SelectObject(hLoadDC,hPen);
							  MoveToEx(hLoadDC,547,521,NULL);LineTo(hLoadDC,547-tokyo_counter1,521+tokyo_counter1);
							  MoveToEx(hLoadDC,467,601,NULL);LineTo(hLoadDC,467-tokyo_counter2,601);
							  DeleteObject(hPen);	
							  if(tokyo_counter2==100)
							    TransparentBlt(hLoadDC,337,600,60,30,hCityDC[18],0,0,60,30,RGB(0,0,0));
							  TransparentBlt(hLoadDC,80-tokyo_counter1,0,288,75,hCityDC[19],0,0,288,75,RGB(4,2,4));
					          TransparentBlt(hLoadDC,-80+tokyo_counter1,75,175,50,hCityDC[17],0,0,175,50,RGB(4,2,4));		
				              TransparentBlt(hLoadDC,537,511,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));			 
				 }		   		   
			   }												
			}
			/////////////////////////////////////松山
			it=s.find(6);
			if(it!=s.end())
			{
			  if(songshan==true)
				   BitBlt(hLoadDC,0,0,600,800,hCityDC[20],0,0,SRCCOPY);
			  if(tokyo==false&&mingguwu==false&&qingsen==false&&jingdu==false&&zhahuang==false&&songshan==false)
				     TransparentBlt(hLoadDC,177,449,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
			  else if(songshan==true)
			  {
			     TransparentBlt(hLoadDC,0,50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
				 if(map_stretch_counter==450)
				 {
				    HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		            SelectObject(hLoadDC,hPen);
					MoveToEx(hLoadDC,33,160,NULL);LineTo(hLoadDC,33+tokyo_counter1,160+tokyo_counter1);
					MoveToEx(hLoadDC,111,240,NULL);LineTo(hLoadDC,111+tokyo_counter2,240);
					DeleteObject(hPen);	
					if(tokyo_counter2==100)
							TransparentBlt(hLoadDC,152,210,60,30,hCityDC[21],0,0,60,30,RGB(0,0,0));
				    TransparentBlt(hLoadDC,80-tokyo_counter1,705,272,75,hCityDC[23],0,0,272,75,RGB(4,2,4));
					TransparentBlt(hLoadDC,-80+tokyo_counter1,635,172,60,hCityDC[22],0,0,172,60,RGB(4,2,4));		
				    TransparentBlt(hLoadDC,23,150,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
				 }
			  
			  
			  }
			
			}
			///////////////////////////////////////////鹿儿岛
			it=s.find(7);
			if(it!=s.end())
			{
			  if(luerdao==true)
				   BitBlt(hLoadDC,0,0,600,800,hCityDC[24],0,0,SRCCOPY);
			  if(tokyo==false&&mingguwu==false&&qingsen==false&&jingdu==false&&zhahuang==false&&songshan==false&&luerdao==false)
				     TransparentBlt(hLoadDC,84,492,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
			  else if(luerdao==true)
			  {			     
			     TransparentBlt(hLoadDC,0,50+map_stretch_counter,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
				 if(map_stretch_counter==450)
				 {
				    HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		            SelectObject(hLoadDC,hPen);
					MoveToEx(hLoadDC,23,640,NULL);LineTo(hLoadDC,23+tokyo_counter1,640+tokyo_counter1);
					MoveToEx(hLoadDC,103,720,NULL);LineTo(hLoadDC,103+tokyo_counter2,720);
					DeleteObject(hPen);					    
					if(tokyo_counter2==100)
							TransparentBlt(hLoadDC,111,690,93,30,hCityDC[25],0,0,93,30,RGB(0,0,0));
					TransparentBlt(hLoadDC,386-tokyo_counter1,0,294,75,hCityDC[26],0,0,294,75,RGB(4,2,4));
					TransparentBlt(hLoadDC,226+tokyo_counter1,75,195,60,hCityDC[27],0,0,195,60,RGB(4,2,4));	
				    TransparentBlt(hLoadDC,13,630,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
				 }
			  
			  }
			
			}
			///////////////////////////////////北九州
			it=s.find(8);
			if(it!=s.end())
			{
			   if(jiuzhou==true)
			      BitBlt(hLoadDC,0,0,600,800,hCityDC[28],0,0,SRCCOPY);
			   if(tokyo==false&&mingguwu==false&&qingsen==false&&jingdu==false&&zhahuang==false&&songshan==false&&luerdao==false&&jiuzhou==false)
				     TransparentBlt(hLoadDC,96,363,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
			   else if(jiuzhou==true)
			   {
			        TransparentBlt(hLoadDC,map_stretch_counter,50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
			        if(map_stretch_counter==450)
					{
					   HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		               SelectObject(hLoadDC,hPen);
					   MoveToEx(hLoadDC,470,165,NULL);LineTo(hLoadDC,470-tokyo_counter1,165-tokyo_counter1);
					   MoveToEx(hLoadDC,390,85,NULL);LineTo(hLoadDC,390-tokyo_counter2,85);
					   DeleteObject(hPen);
					   if(tokyo_counter2==100)
							TransparentBlt(hLoadDC,290,55,90,30,hCityDC[29],0,0,90,30,RGB(0,0,0));
					   TransparentBlt(hLoadDC,214+tokyo_counter1,705,306,75,hCityDC[31],0,0,306,75,RGB(4,2,4));
					   TransparentBlt(hLoadDC,374-tokyo_counter1,655,219,50,hCityDC[30],0,0,219,50,RGB(4,2,4));					
					   TransparentBlt(hLoadDC,460,155,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
					}			   
			   }			  			  		  					
			}
			//////////////////////////////////新泻
			it=s.find(9);
			if(it!=s.end())
			{
			  if(xinxie==true)
				  BitBlt(hLoadDC,0,0,600,800,hCityDC[32],0,0,SRCCOPY);
			   if(tokyo==false&&mingguwu==false&&qingsen==false&&jingdu==false&&zhahuang==false&&songshan==false&&luerdao==false&&jiuzhou==false&&xinxie==false)
				     TransparentBlt(hLoadDC,379,285,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
			   else if(xinxie==true)
			   {
			     TransparentBlt(hLoadDC,map_stretch_counter,50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
				 if(map_stretch_counter==450)
				 {
				       HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		               SelectObject(hLoadDC,hPen);
					   MoveToEx(hLoadDC,525,135,NULL);LineTo(hLoadDC,525-tokyo_counter1,135+tokyo_counter1);
					   MoveToEx(hLoadDC,445,215,NULL);LineTo(hLoadDC,445-tokyo_counter2,215);
					   DeleteObject(hPen);
					   if(tokyo_counter2==100)
							TransparentBlt(hLoadDC,345,185,73,30,hCityDC[34],0,0,73,30,RGB(0,0,0));
					   TransparentBlt(hLoadDC,220+tokyo_counter1,705,300,75,hCityDC[33],0,0,300,75,RGB(4,2,4));
					   TransparentBlt(hLoadDC,380-tokyo_counter1,645,269,60,hCityDC[35],0,0,269,60,RGB(4,2,4));			
				       TransparentBlt(hLoadDC,515,125,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
				 }		   
			   }					
			}   
	      }
	   else
         { 
			   TransparentBlt(hLoadDC,200,325,202,155,hFolderDC,0,0,202,155,RGB(255,255,255));//画文件夹
			   SetBkMode(hLoadDC,TRANSPARENT);
			   SetTextColor(hLoadDC,RGB(255,255,255));
			   CString str = L"点击文件夹选取存档文件",str1=L"(save.dat)";
			   LOGFONT lf;
			   ZeroMemory(&lf,sizeof(LOGFONT));   
			   HFONT hfont=  CreateFont(20,11,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
			   SelectObject(hLoadDC,hfont);		 
			   TextOut(hLoadDC,195,490,str,str.GetLength());
			   TextOut(hLoadDC,245,510,str1,str1.GetLength());
			   DeleteObject(hfont);
	     }
	 
	   if(tokyo==false&&mingguwu==false&&qingsen==false&&jingdu==false&&zhahuang==false&&songshan==false&&luerdao==false&&jiuzhou==false&&xinxie==false)//如果未点击东京才画
	   {
		   if(music_state==1)		//画音乐图标 
			TransparentBlt(hLoadDC,12,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
		   else
			TransparentBlt(hLoadDC,12,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系  
			//回到主菜单 牌子
		   TransparentBlt(hLoadDC,-20,-20,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));
	   }
	 

	  //第二次缓冲
	   BitBlt(hdc,0,0,600,800,hLoadDC,0,0,SRCCOPY);//画背景图片
	
	}
	else if(game_state==-2)//萌图欣赏界面
	{
		BitBlt(hMoePictureDC,0,0,600,800,hPictureDC[moePicture_i],0,0,SRCCOPY);//画背景图片
		if(moe_bar==false)
		TransparentBlt(hMoePictureDC,250,754,100,18,hMoeBar1,0,0,100,18,RGB(255,255,255));//画导航条
		else
		{
		  TransparentBlt(hMoePictureDC,250,695,100,18,hMoeBar1,0,0,100,18,RGB(255,255,255));//画导航条
		  TransparentBlt(hMoePictureDC,178,713,244,60,hMoeBar2,0,0,244,60,RGB(237,28,36));//功能条
		}
		/////////////////////////////////画女孩信息
		if(mp[0]==true)
			BitBlt(hMoePictureDC,50,350,500,277,hMoeP[1],0,0,SRCCOPY);//面码
		if(mp[1]==true)
			BitBlt(hMoePictureDC,50,350,500,197,hMoeP[6],0,0,SRCCOPY);//亚丝娜
		if(mp[2]==true)
			BitBlt(hMoePictureDC,50,350,500,256,hMoeP[0],0,0,SRCCOPY);//桐乃
		if(mp[3]==true)
			BitBlt(hMoePictureDC,50,350,500,210,hMoeP[7],0,0,SRCCOPY);//十香
		if(mp[4]==true)
			BitBlt(hMoePictureDC,50,250,500,427,hMoeP[2],0,0,SRCCOPY);//泉此方
		if(mp[5]==true)
			BitBlt(hMoePictureDC,50,350,500,301,hMoeP[4],0,0,SRCCOPY);//琴里
		if(mp[6]==true)
			BitBlt(hMoePictureDC,50,350,500,239,hMoeP[5],0,0,SRCCOPY);//小圆
		if(mp[7]==true)
			BitBlt(hMoePictureDC,50,350,500,209,hMoeP[3],0,0,SRCCOPY);//狂三
	   //第二次缓冲
	   BitBlt(hdc,0,0,600,800,hMoePictureDC,0,0,SRCCOPY);//画背景图片
	
	}
	else if(game_state==-5)//游戏CG
	{
	   BitBlt(hGameCGDC,0,0,600,800,hCGDC,0,0,SRCCOPY);//画背景图片
	   //画brant字母
	   TransparentBlt(hGameCGDC,65+b_counter,230+b_counter,150-2*b_counter,150-2*b_counter,hCGword[0],0,0,150,150,RGB(4,2,4));//b
	   if(b_counter==35)
	   TransparentBlt(hGameCGDC,145+r_counter,230+r_counter,150-2*r_counter,150-2*r_counter,hCGword[1],0,0,150,150,RGB(4,2,4));//r
	   if(r_counter==35)
	   TransparentBlt(hGameCGDC,225+a_counter,230+a_counter,150-2*a_counter,150-2*a_counter,hCGword[2],0,0,150,150,RGB(4,2,4));//a
	   if(a_counter==35)
	   TransparentBlt(hGameCGDC,305+n_counter,230+n_counter,150-2*n_counter,150-2*n_counter,hCGword[3],0,0,150,150,RGB(4,2,4));//n
	   if(n_counter==35)
	   TransparentBlt(hGameCGDC,385+t_counter,230+t_counter,150-2*t_counter,150-2*t_counter,hCGword[4],0,0,150,150,RGB(4,2,4));//t
	   if(t_counter==35)
	   TransparentBlt(hGameCGDC,nan_counter,365,100,36,hCGword[5],0,0,100,36,RGB(0,0,0));//studio
	   TransparentBlt(hGameCGDC,-150+niao_counter,780-niao_counter,150,150,hCGword[6],0,0,150,150,RGB(0,0,0));//南小鸟
	
	   BitBlt(hdc,0,0,600,800,hGameCGDC,0,0,SRCCOPY);//画背景图片
	}
	else if(game_state==-6)//飞机在海上
	{
	  
	   Sleep(10);//必要，减慢游戏进程的语句
	   BitBlt(hPrelude_flyonseaDC,0,0,600,800, hCartoonJapanDC1,0,0,SRCCOPY);//画背景海
	   TransparentBlt(hPrelude_flyonseaDC,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码
	   TransparentBlt(hPrelude_flyonseaDC,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框
	   TransparentBlt(hPrelude_flyonseaDC,250,680-plane_counter,100,100,Plane[1],0,0,100,100,RGB(0,0,0));//画飞机
	    ///游戏对话说明
	   CString str1=L"回家！回家！",str2_1=L"在外求学4年，面码",str2_2=L"我也该回家啦~",str3_1=L"灰机在天上画出一",str3_2=L"道优美的弧线",
		       str4_1=L"望着机窗外广阔湛蓝",str4_2=L"的大海，面码的心情",str4_3=L"格外的舒畅~~",str5_1=L"远处的陆地轮廓愈" ,str5_2=L"发清晰，飞机徐徐",str5_3=L"下降...";
	   LOGFONT lf;
	   SetBkMode(hPrelude_flyonseaDC,TRANSPARENT);
	   ZeroMemory(&lf,sizeof(LOGFONT));   
	   HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	   SelectObject(hPrelude_flyonseaDC,hfont);	
	   if(dialog_counter<=150)
	     TextOut(hPrelude_flyonseaDC,115,610,str1,str1.GetLength());
	   if(dialog_counter>150&&dialog_counter<=300)
         {
			 TextOut(hPrelude_flyonseaDC,106,595,str2_1,str2_1.GetLength());
			 TextOut(hPrelude_flyonseaDC,106,610,str2_2,str2_2.GetLength());
	     }
	   if(dialog_counter>300&&dialog_counter<=450)
         {
			 TextOut(hPrelude_flyonseaDC,106,595,str3_1,str3_1.GetLength());
			 TextOut(hPrelude_flyonseaDC,106,610,str3_2,str3_2.GetLength());
	     }
	    if(dialog_counter>450&&dialog_counter<=600)
         {
			 TextOut(hPrelude_flyonseaDC,106,595,str4_1,str4_1.GetLength());
			 TextOut(hPrelude_flyonseaDC,106,610,str4_2,str4_2.GetLength());
			 TextOut(hPrelude_flyonseaDC,106,625,str4_3,str4_3.GetLength());
	     }
		if(dialog_counter>600)
		{
		     TextOut(hPrelude_flyonseaDC,106,595,str5_1,str5_1.GetLength());
			 TextOut(hPrelude_flyonseaDC,106,610,str5_2,str5_2.GetLength());
			 TextOut(hPrelude_flyonseaDC,106,625,str5_3,str5_3.GetLength());
			
		}
		if(dialog_counter>=650)//进入日本大图区域
		{
		   game_state=-7;
		   dialog_counter=0;
		   plane_counter=0;
		
		}




	   DeleteObject(hfont);
	
	   BitBlt(hdc,0,0,600,800,hPrelude_flyonseaDC,0,0,SRCCOPY);//第二次缓冲
	}
	else if(game_state==-7)//飞机进入日本大图区域
	{
	     Sleep(10);
		 //计时器归零
		 map_stretch_counter=0;
		 tokyo_counter1=0;
		 tokyo_counter2=0;
		 LOGFONT lf;
	     SetBkMode(hTotalJapanBGDC,TRANSPARENT);
		 SetTextColor(hTotalJapanBGDC,RGB(0,0,0));
	     ZeroMemory(&lf,sizeof(LOGFONT));   
	     HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	     SelectObject(hTotalJapanBGDC,hfont);	
		 BitBlt(hTotalJapanBGDC,0,0,600,800,hTotalJapanDC,TotalJapan_x,TotalJapan_y,SRCCOPY);//画日本大图的一部分测试   
		//按键测试 上下左右 开飞机
		if(KEY_DOWN(VK_UP)&&TotalJapan_y>=0)
			{
				TotalJapan_y--;
				dir=1;//向上的飞机
		    }
		if(KEY_DOWN(VK_DOWN)&&TotalJapan_y<=2400)
			{
				TotalJapan_y++;
				dir=0;//向下的飞机
		    }
		if(KEY_DOWN(VK_LEFT)&&TotalJapan_x>=20)
			{
				TotalJapan_x--;
				dir=3;
		    }
		if(KEY_DOWN(VK_RIGHT)&&TotalJapan_x<=3200)
			{
				TotalJapan_x++;
				dir=2;
		    }
		//同时按了2个键
		if(KEY_DOWN(VK_UP)&&KEY_DOWN(VK_LEFT)&&TotalJapan_y>=0&&TotalJapan_x>=20)
		{
		     TotalJapan_y--;
			 TotalJapan_x--;
			 dir=6;
		}
		if(KEY_DOWN(VK_UP)&&KEY_DOWN(VK_RIGHT)&&TotalJapan_y>=0&&TotalJapan_x<=3200)
		{
		     TotalJapan_y--;
			 TotalJapan_x++;
			 dir=4;
		}
		if(KEY_DOWN(VK_DOWN)&&KEY_DOWN(VK_RIGHT)&&TotalJapan_y<=2400&&TotalJapan_x<=3200)
		{
		     TotalJapan_y++;
			 TotalJapan_x++;
			 dir=5;
		}
		if(KEY_DOWN(VK_DOWN)&&KEY_DOWN(VK_LEFT)&&TotalJapan_y<=2400&&TotalJapan_x>=20)
		{
		     TotalJapan_y++;
			 TotalJapan_x--;
			 dir=7;
		}
		//画面码和对话框
	    TransparentBlt(hTotalJapanBGDC,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码   		
		TransparentBlt(hTotalJapanBGDC,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
		TransparentBlt(hTotalJapanBGDC,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
		TransparentBlt(hTotalJapanBGDC,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
		//画任务完成情况
	    if(click_mail==true)//点击了邮件
		{
		  Show_Mission(hTotalJapanBGDC);
		}
		//进入特定游戏区域触发对话框
		if((TotalJapan_x+300)>=3200&&(TotalJapan_y+400)>=2200)//初始对话
		{
		   //初始说明
			CString str1_1=L"作为机长！你需要",str1_2=L"要帮助面码回家。",str1_3=L"这可不是一个简单的",str1_4=L"任务哦~Good Luck";
			TransparentBlt(hTotalJapanBGDC,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		 
			TransparentBlt(hTotalJapanBGDC,225,660,150,100,KyBd,0,0,150,100,RGB(0,0,0));//键盘		 
			TextOut(hTotalJapanBGDC,103,585,str1_1,str1_1.GetLength());
			TextOut(hTotalJapanBGDC,103,600,str1_2,str1_2.GetLength());
			TextOut(hTotalJapanBGDC,103,615,str1_3,str1_3.GetLength());
			TextOut(hTotalJapanBGDC,103,630,str1_4,str1_4.GetLength());
		
		}
		//第一站：东京
		CString str=L"    11区空域";
		TextOut(hTotalJapanBGDC,240,10,str,str.GetLength());
		it=s.find(1);
		if(it==s.end())//未找到1，也就是说要进入第一关
		{	   		    
			if(!((TotalJapan_x+300)>=3200&&(TotalJapan_y+400)>=2200)&&((TotalJapan_x+300)>=3000&&(TotalJapan_y+400)>=2000))
		   {
		      
			  mission_set.insert(1);//任务一放入集合中
			  mission1=true;
			  TransparentBlt(hTotalJapanBGDC,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		
			  CString  str1_1=L"世界之大，去哪找",str1_2=L"面码的家啊？要不 ",str1_3=L"先去 东京 吧！那",str1_4=L"里人多好问路~";			
			  TextOut(hTotalJapanBGDC,103,585,str1_1,str1_1.GetLength());
			  TextOut(hTotalJapanBGDC,103,600,str1_2,str1_2.GetLength());
			  TextOut(hTotalJapanBGDC,103,615,str1_3,str1_3.GetLength());
			  TextOut(hTotalJapanBGDC,103,630,str1_4,str1_4.GetLength());	
			 
		   }
		//////////////////////////////////////////////////////////任务代码   
		  if( mission1==true)
		   {
		      //画感叹号任务
			  if(mission_viewed==false)//这里画了一次，所以要加限制条件
			    TransparentBlt(hTotalJapanBGDC,200+Ex_counter,390-Ex_counter,200-Ex_counter/2,200-Ex_counter/2,hExclimation,0,0,200,200,RGB(0,0,0));//感叹号
			  if(Ex_counter<300)
			    mission_viewed=false;//有新任务到来，设置false，表示未查看新任务
		   }
		 
		}
	    //飞机飞进札幌区域
		if(TotalJapan_x+300>=2246&&TotalJapan_x+300<=2529&&TotalJapan_y+400>=400&&TotalJapan_y+400<=600)
		{
		   m_it=mission_set.find(2);//第二个任务触发了
		   if(m_it!=mission_set.end())
		   {
			   TransparentBlt(hTotalJapanBGDC,2372-TotalJapan_x,417-TotalJapan_y,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
			   TransparentBlt(hTotalJapanBGDC,2372-TotalJapan_x+40,417-TotalJapan_y-5,60,30,hCityDC[18],0,0,60,30,RGB(0,0,0));
			   //画下降按键
			   TransparentBlt(hTotalJapanBGDC,275,510,50,45,hLand,0,0,50,45,RGB(0,0,0));
		   }
		}
		//飞机飞进鹿儿岛区域		
		if(TotalJapan_x+300>=300&&TotalJapan_x+300<=590&&TotalJapan_y+400>=2763&&TotalJapan_y+400<=3048)
		{		
		   m_it=mission_set.find(3);//第二个任务触发了
		   if(m_it!=mission_set.end())
		   {
			   TransparentBlt(hTotalJapanBGDC,364-TotalJapan_x,2991-TotalJapan_y,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
			   TransparentBlt(hTotalJapanBGDC,364-TotalJapan_x+40,2991-TotalJapan_y-5,93,30,hCityDC[25],0,0,93,30,RGB(0,0,0));
			   //画下降按键
			   TransparentBlt(hTotalJapanBGDC,275,510,50,45,hLand,0,0,50,45,RGB(0,0,0));
		   }
		
		
		}
		
		//飞机进入东京区域
		if(TotalJapan_x+300>=1868&&TotalJapan_x+300<=2303&&TotalJapan_y+400>=1952&&TotalJapan_y+400<=2395)
		{
		        //画东京城市的标记，圆圈,这样的好处在于东京可以被擦除，否则如果画在日本dc上就不行
		        TransparentBlt(hTotalJapanBGDC,2044-TotalJapan_x,2135-TotalJapan_y,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
			    TransparentBlt(hTotalJapanBGDC,2044-TotalJapan_x+40,2135-TotalJapan_y-5,60,30,hCityDC[3],0,0,60,30,RGB(0,0,0));
				//画下降按键
				TransparentBlt(hTotalJapanBGDC,275,510,50,45,hLand,0,0,50,45,RGB(0,0,0));
				//SetTextColor(hTotalJapanBGDC,RGB(255,255,255));
				//CString str=L"降落飞机";
				//TextOut(hTotalJapanBGDC,330,540,str,str.GetLength());
				
		}
		//飞机飞入青森区域
		if(TotalJapan_x+300>=2090&&TotalJapan_x+300<=2400&&TotalJapan_y+400>=829&&TotalJapan_y+400<=1088)
		{
		        //画青森城市的标记，圆圈,这样的好处在于东京可以被擦除，否则如果画在日本dc上就不行
		        m_it=mission_set.find(4);//第二个任务触发了
				if(m_it!=mission_set.end())
				{
					TransparentBlt(hTotalJapanBGDC,2239-TotalJapan_x,981-TotalJapan_y,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
					TransparentBlt(hTotalJapanBGDC,2239-TotalJapan_x+40,981-TotalJapan_y-5,60,30,hCityDC[9],0,0,60,30,RGB(0,0,0));
					//画下降按键
					TransparentBlt(hTotalJapanBGDC,275,510,50,45,hLand,0,0,50,45,RGB(0,0,0));
				}	
		
		}

		DeleteObject(hfont);
		if(dir<4)
		   TransparentBlt(hTotalJapanBGDC,250,350,100,100,Plane[dir],0,0,100,100,RGB(0,0,0));//画飞机,最后画，因为飞机要在最上面一层
		else
		   TransparentBlt(hTotalJapanBGDC,230,330,141,141,Plane[dir],0,0,141,141,RGB(0,0,0));//画飞机,最后画，因为飞机要在最上面一层

		BitBlt(hdc,0,0,600,800,hTotalJapanBGDC,0,0,SRCCOPY);//第二次缓冲
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////机场代码,具体进入某一关
	else if(game_state==-100)//东京机场：-100 以后的机场都一次减少10,而-101则表示属于东京的场景,-110表示切换到了下一个城市
	{
		LOGFONT lf;
	    SetBkMode(hTokyoAirport,TRANSPARENT);
	    ZeroMemory(&lf,sizeof(LOGFONT));   
	    HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	    SelectObject(hTokyoAirport,hfont);	
		POINT male_player={male_player_x,male_player_y};

		RECT r_airport={117,315,589,500};
		RECT r_downtown={113,377,153,447};
		RECT r_houjilou={441,310,500,400};

		BitBlt(hTokyoAirport,0,0,600,800,hAirportDC[0],0,0,SRCCOPY);//画东京机场
		if(plane_direction==false)
		  TransparentBlt(hTokyoAirport,550-Tokyo_counter,600-Tokyo_counter,139-Tokyo_transform_counter,139-Tokyo_transform_counter,hRotate135,0,0,139,139,RGB(0,0,0));//画135度飞机
		else
		  TransparentBlt(hTokyoAirport,300+Tokyo_counter,350+Tokyo_counter,81+Tokyo_transform_counter,81+Tokyo_transform_counter, Plane[5],0,0,141,141,RGB(0,0,0));//画275度飞机
		TransparentBlt(hTokyoAirport,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码   
	    TransparentBlt(hTokyoAirport,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
		TransparentBlt(hTokyoAirport,113,407,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--市区方向
		TransparentBlt(hTokyoAirport,461,366,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--候机楼
		TransparentBlt(hTokyoAirport,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
		TransparentBlt(hTokyoAirport,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
		///////////////////////////////////////////////////////////////////////任务代码
		if(mission_viewed==false)//如果未查看新任务的话，就画感叹号
           {
             TransparentBlt(hTokyoAirport,560,30,20,20,hExclimation,0,0,200,200,RGB(0,0,0));//感叹号
           }
		if(click_mail==true)
		{
		    Show_Mission(hTokyoAirport);
		}
		CString str=L"  东京羽田机场";
		TextOut(hTokyoAirport,240,10,str,str.GetLength());	
		if(Tokyo_counter<=250&&tokyo_visited==false)
		{
		    CString str1_1=L"终于到啦！",str1_2=L"接下来得去市区",str1_3=L"找几个朋友问问";
			TransparentBlt(hTokyoAirport,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		 
			TextOut(hTokyoAirport,103,595,str1_1,str1_1.GetLength());
			TextOut(hTokyoAirport,103,610,str1_2,str1_2.GetLength());
			TextOut(hTokyoAirport,103,625,str1_3,str1_3.GetLength());
		
		}
		if(PtInRect(&r_downtown,male_player))//进入市区
		{
		    CString str1_1=L"这边是市区方向！",str1_2=L"按下 Enter 键进入",str1_3=L"市区（天空树）";
			TransparentBlt(hTokyoAirport,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		 
			TextOut(hTokyoAirport,103,595,str1_1,str1_1.GetLength());
			TextOut(hTokyoAirport,103,610,str1_2,str1_2.GetLength());
			TextOut(hTokyoAirport,103,625,str1_3,str1_3.GetLength());
			if(KEY_DOWN(VK_RETURN))
			{
			   game_state=-101;//东京市区
			   male_player_x=20;
			   male_player_y=660;
			}
		}
		if(PtInRect(&r_houjilou,male_player))
		{
		
		    CString str1_1=L"这里是候机楼！",str1_2=L"按下 Enter 键乘机",str1_3=L"离开东京~";
			TransparentBlt(hTokyoAirport,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		 
			TextOut(hTokyoAirport,103,595,str1_1,str1_1.GetLength());
			TextOut(hTokyoAirport,103,610,str1_2,str1_2.GetLength());
			TextOut(hTokyoAirport,103,625,str1_3,str1_3.GetLength());
			if(KEY_DOWN(VK_RETURN))
			{
			 
			   Tokyo_counter=0;
			   Tokyo_transform_counter=0;//飞机起飞计时器归零
			   plane_direction=true;//275度飞机准备起飞
			   take_off=true;
			}
		
		}
		//飞机飞入日本大图
		if(Tokyo_transform_counter==60&&take_off==true)
		{
		   game_state=-7;//日本大图区域
		   TotalJapan_y=2011;//日本大图区域飞机坐标
		   TotalJapan_x=1840;
		   Tokyo_counter=0;
		   Tokyo_transform_counter=0;//飞机起飞计时器归零
		}
		DeleteObject(hfont);
		//处理人物走动
		if(Tokyo_counter>=250)//飞机已经停下来
		{
			
		    Sleep(10);			
			if(KEY_DOWN(VK_DOWN))//向下走
			{
			   nColumn=0;
			   if(male_player_y<=500)
			    male_player_y++;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第一行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  
			
			}
			if(KEY_DOWN(VK_UP))//向上走
			{
			   if(male_player_y>=315)
			   male_player_y--;
			   nColumn=3;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  					
			
			}
			if(KEY_DOWN(VK_RIGHT))//向右走
			{
			   if(male_player_x<=589)
				male_player_x++;
			   nColumn=2;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  								
			}
			if(KEY_DOWN(VK_LEFT))
			{
			    if(male_player_x>=117)
				male_player_x--;
			    nColumn=1;
			    if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  											
			}
			
			TransparentBlt(hTokyoAirport,male_player_x,male_player_y,17,25,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
		}

		BitBlt(hdc,0,0,600,800,hTokyoAirport,0,0,SRCCOPY);//第二次缓冲
	}
	else if(game_state==-101)//东京市区天空树
	{
	    Sleep(10);
		POINT p={male_player_x+17,male_player_y+25};
		tokyo_visited=true;
		LOGFONT lf;
	    SetBkMode(hTokyoDowntown,TRANSPARENT);
	    ZeroMemory(&lf,sizeof(LOGFONT));   
	    HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	    SelectObject(hTokyoDowntown,hfont);	

		BitBlt(hTokyoDowntown,0,0,600,800,hCityBlock[0],0,0,SRCCOPY);//画东京市区
		TransparentBlt(hTokyoDowntown,480,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码   
	    TransparentBlt(hTokyoDowntown,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
		TransparentBlt(hTokyoDowntown,15,720,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记
		TransparentBlt(hTokyoDowntown,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
		TransparentBlt(hTokyoDowntown,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
		///////////////////////////////////////////////////////////////任务处理代码
		if(mission_viewed==false)//如果未查看新任务的话，就画感叹号
           {
             TransparentBlt(hTokyoDowntown,560,30,20,20,hExclimation,0,0,200,200,RGB(0,0,0));//感叹号
           }
		if(click_mail==true)
		{
		    Show_Mission(hTokyoDowntown);
		}
		CString str1=L"东京天空树";
		TextOut(hTokyoDowntown,240,10,str1,str1.GetLength());
		//画朋友家标记
		TransparentBlt(hTokyoDowntown,416,603,20,30,hMarkHome,0,0,20,30,RGB(0,0,0));
		


		RECT r_backToAirport={0,720,60,780};
		
		if(PtInRect(&r_backToAirport,p))
		{
		  TransparentBlt(hTokyoDowntown,430,525,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		
		  CString str1_1=L"这边是机场方向！",str1_2=L"按下 Enter 键进入",str1_3=L"机场";
		  TextOut(hTokyoDowntown,440,535,str1_1,str1_1.GetLength());
		  TextOut(hTokyoDowntown,440,550,str1_2,str1_2.GetLength());
		  TextOut(hTokyoDowntown,440,565,str1_3,str1_3.GetLength());
		  if(KEY_DOWN(VK_RETURN))
		  {
		     game_state=-100;//东京机场
			 male_player_x=163;
			 male_player_y=377;
		  
		  }
		
		}
	  	DeleteObject(hfont);
			if(KEY_DOWN(VK_DOWN))//向下走
			{
			   nColumn=0;
			  if((male_player_x>=0&&male_player_x<=560&&male_player_y+50<=720&&male_player_y>=620)||(male_player_x>=0&&male_player_x+17<=60&&male_player_y>=0&&male_player_y<=780))
				male_player_y++;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第一行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  
			
			}
			/////////////////特殊条件不能少，我太2了。。。。。。  
			//最底下横着的路
			if(male_player_y<620&&male_player_x>=43&&male_player_x<=480)
                male_player_y+=3;
			if(male_player_y+50>720&&male_player_x>=43&&male_player_x<=480)
                male_player_y-=3;
			if(male_player_x<0&&male_player_y>=620&&male_player_y+50<=720)
				male_player_x+=3;
			if(male_player_x>480&&male_player_y>=620&&male_player_y+50<=720)
				male_player_x-=3;
			//竖着的路
			if(male_player_y<=0&&male_player_x>=0&&male_player_x+17<=60)
               male_player_y+=3;
			if(male_player_x<=0&&male_player_y>=0&&male_player_y+50<=720)
				male_player_x+=3;
			if(male_player_x+17>=60&&male_player_y>=0&&male_player_y+50<=670)
				male_player_x-=3;
            


			if(KEY_DOWN(VK_UP))//向上走
			{
			 if((male_player_x>=0&&male_player_x<=560&&male_player_y+50<=720&&male_player_y>=620)||(male_player_x>=0&&male_player_x+17<=60&&male_player_y>=0&&male_player_y<=780))
				male_player_y--;
		
			   nColumn=3;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  					
			
			}
			if(KEY_DOWN(VK_RIGHT))//向右走
			{
			   if((male_player_x>=0&&male_player_x<=560&&male_player_y+50<=720&&male_player_y>=620)||(male_player_x>=0&&male_player_x+17<=60&&male_player_y>=0&&male_player_y<=780))
				male_player_x++;
			  
			   nColumn=2;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  								
			}
			if(KEY_DOWN(VK_LEFT))
			{
			    if((male_player_x>=0&&male_player_x<=560&&male_player_y+50<=720&&male_player_y>=620)||(male_player_x>=0&&male_player_x+17<=60&&male_player_y>=0&&male_player_y<=780))
				male_player_x--;
			
			    nColumn=1;
			    if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  											
			}
			
			TransparentBlt(hTokyoDowntown,male_player_x,male_player_y,34,50,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
			//朋友家区域触发对话框
		    RECT r_friend1={416,630,446,670};
		    if(PtInRect(&r_friend1,p))
		    {
				TransparentBlt(hTokyoDowntown,430,525,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		
				CString str1_1=L"这里是Saber家~你",str1_2=L"可以向她询问哦",str1_3=L"按下 Enter 键进入";
				TextOut(hTokyoDowntown,440,535,str1_1,str1_1.GetLength());
				TextOut(hTokyoDowntown,440,550,str1_2,str1_2.GetLength());
				TextOut(hTokyoDowntown,440,565,str1_3,str1_3.GetLength());
				if(KEY_DOWN(VK_RETURN))
				{
				   game_state=-102;//saber家
				   male_player_x=190;
				   male_player_y=379;
			
				}
		 
		     }
		
		BitBlt(hdc,0,0,600,800,hTokyoDowntown,0,0,SRCCOPY);//第二次缓冲
		
    }
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////城市介绍代码
	else if(game_state==-102)//saber家
	{
	    
		LOGFONT lf;
	    SetBkMode(hSaberHomeDC,TRANSPARENT);
	    ZeroMemory(&lf,sizeof(LOGFONT));   
	    HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	    SelectObject(hSaberHomeDC,hfont);		
		
		Sleep(10);	
		POINT p1={male_player_x+17,male_player_y+25};
		BitBlt(hSaberHomeDC,0,0,600,800,hCGDC,0,0,SRCCOPY);//必须画背景，否则画上去的图不消失
		BitBlt(hSaberHomeDC,100,100,400,388,hSaberHome,0,0,SRCCOPY);
		TransparentBlt(hSaberHomeDC,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
		TransparentBlt(hSaberHomeDC,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码   			
		TransparentBlt(hSaberHomeDC,305,290,50,73,hAnimationPersonnel[0],0,0,50,73,RGB(0,0,0)); 
		TransparentBlt(hSaberHomeDC,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
		TransparentBlt(hSaberHomeDC,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏		
		   
		if(mission_viewed==false)//如果未查看新任务的话，就画感叹号
           {
             TransparentBlt(hSaberHomeDC,560,30,20,20,hExclimation,0,0,200,200,RGB(0,0,0));//感叹号
           }
			
		CString str=L"   Saber家";
		TextOut(hSaberHomeDC,240,10,str,str.GetLength());		

		RECT r_challenge={273,320,320,370};
		if(PtInRect(&r_challenge,p1)&&challenge_activated==false)
			 {
			    
				TransparentBlt(hSaberHomeDC,220,556,100,93,hEnter,0,0,100,93,RGB(0,0,0));			
				
		     }
		if(PtInRect(&r_challenge,p1)&&KEY_DOWN(VK_RETURN))
		{		
		   challenge_activated=true;		
		}
		//第一关过关后saber给出提示
		it=s.find(1);	
		if(it!=s.end())//第一关已经过了
	    {
			   if(mission_viewed==false)//这里画了一次，所以要加限制条件
			    TransparentBlt(hSaberHomeDC,200+Ex_counter,390-Ex_counter,200-Ex_counter/2,200-Ex_counter/2,hExclimation,0,0,200,200,RGB(0,0,0));//感叹号
			   if(Ex_counter<300)
			    mission_viewed=false;//有新任务到来，设置false，表示未查看新任务		
		 }
		if(PtInRect(&r_challenge,p1))
		{
			if(it!=s.end())//第一关已经过了
			{
		       TransparentBlt(hSaberHomeDC,140,500,335,177,ChallengeDlg[0],0,0,335,177,RGB(0,0,0));		       
			   CString str1_0=L"Saber:",str1_1=L"哼！看来这点挑战难不倒你。那我",str1_2=L"就告诉你面码家在哪吧！其实我也",str1_3=L"不知道，不过札幌市的春日野穹知道",str1_4=L"按 回车 可以继续挑战我哦！";
			   TextOut(hSaberHomeDC,186,546,str1_0,str1_0.GetLength());
			   TextOut(hSaberHomeDC,186,561,str1_1,str1_1.GetLength());
			   TextOut(hSaberHomeDC,186,576,str1_2,str1_2.GetLength());
			   TextOut(hSaberHomeDC,186,591,str1_3,str1_3.GetLength());
			   TextOut(hSaberHomeDC,186,621,str1_4,str1_4.GetLength());
			   mission_set.insert(2);//任务2放入任务集合中
			   //mission_set.insert(3);
			}
			 
		}
		if(click_mail==true)
		{
		    Show_Mission(hSaberHomeDC);
		}
		
		//开始接受挑战
		if(challenge_activated==true)
		{		
		    		
			//画iphone对话框，如果触发的话
			TransparentBlt(hSaberHomeDC,140,500,335,177,ChallengeDlg[0],0,0,335,177,RGB(0,0,0));
			TransparentBlt(hSaberHomeDC,230,610,50,50,ChallengeDlg[2],0,0,50,50,RGB(0,0,0));//钩
			TransparentBlt(hSaberHomeDC,330,610,50,50,ChallengeDlg[1],0,0,50,50,RGB(0,0,0));//叉
			//写文字对话
			CString str1_1=L"Saber酱可以告诉你一些线索,不过",str1_2=L"我要考考你的推理能力~ 猜出密码",str1_3=L"就告诉你！你愿意接受挑战吗？",str1_4=L"";
			TextOut(hSaberHomeDC,186,546,str1_1,str1_1.GetLength());
			TextOut(hSaberHomeDC,186,561,str1_2,str1_2.GetLength());
			TextOut(hSaberHomeDC,186,576,str1_3,str1_3.GetLength());
		    
		}

   if(challenge_activated==false)
   {
		if(KEY_DOWN(VK_DOWN))//向下走
			{
			   nColumn=0;
			   if(male_player_y+50<=460)
			    male_player_y++;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第一行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  
			
			}
			if(KEY_DOWN(VK_UP))//向上走
			{
			   if(male_player_y>=270)
			   male_player_y--;
			   nColumn=3;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  					
			
			}
			if(KEY_DOWN(VK_RIGHT))//向右走
			{
			   if(male_player_x+17<=457)
				male_player_x++;
			   nColumn=2;
			   if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  								
			}
			if(KEY_DOWN(VK_LEFT))
			{
			    if(male_player_x>=130)
				male_player_x--;
			    nColumn=1;
			    if(timeGetTime()>nNextFrameTime)
			    {
					nNextFrameTime=timeGetTime()+nFrameDelay;
					nRow++;//显示第4行的人物图像
					if(nRow>3)
				     nRow=0;						    
			    }			  											
			}
   }
			
		
		DeleteObject(hfont);
        TransparentBlt(hSaberHomeDC,male_player_x,male_player_y,34,50,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角	
		BitBlt(hdc,0,0,600,800,hSaberHomeDC,0,0,SRCCOPY);//第二次缓冲
		RECT r_back={147,423,208,468};
		if(PtInRect(&r_back,p1))
		{
		  game_state=-101;
		  male_player_x=416;
		  male_player_y=650;
		}
    }
    /////////////////////////////////////////////////////城市开头介绍
   else if(game_state==-200)
	{
	  BitBlt(hTokyoIntro,0,0,600,800,hCityDC[0],0,0,SRCCOPY);//画东京
	  TransparentBlt(hTokyoIntro,map_stretch_counter,map_stretch_counter+50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
	  if(map_stretch_counter==450)
		{
			HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		    SelectObject(hTokyoIntro,hPen);
			MoveToEx(hTokyoIntro,530,600,NULL);LineTo(hTokyoIntro,530-tokyo_counter1,600+tokyo_counter1);
			MoveToEx(hTokyoIntro,450,680,NULL);LineTo(hTokyoIntro,450-tokyo_counter2,680);
			DeleteObject(hPen);	
			if(tokyo_counter2==100)
				TransparentBlt(hTokyoIntro,350,650,60,30,hCityDC[3],0,0,60,30,RGB(0,0,0));

			TransparentBlt(hTokyoIntro,210+tokyo_counter1,10,300,75,hCityDC[1],0,0,300,75,RGB(4,2,4));
			TransparentBlt(hTokyoIntro,370-tokyo_counter1,90,150,52,hCityDC[2],0,0,150,52,RGB(4,2,4));

			TransparentBlt(hTokyoIntro,520,590,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
							 
	    }
	  ///跳到机场
	  if(Intro_counter>=600)
		  {
			  game_state=-100;
			  Intro_counter=0;
	      }
	
	  BitBlt(hdc,0,0,600,800,hTokyoIntro,0,0,SRCCOPY);//第二次缓冲
	}
   else if(game_state==-300)//札幌介绍
   {
     BitBlt(hZhanghuangIntro,0,0,600,800,hCityDC[16],0,0,SRCCOPY);//画札幌
	 TransparentBlt(hZhanghuangIntro,map_stretch_counter,map_stretch_counter+50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
     if(map_stretch_counter==450)
	 {
				HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
		        SelectObject(hZhanghuangIntro,hPen);
				MoveToEx(hZhanghuangIntro,547,521,NULL);LineTo(hZhanghuangIntro,547-tokyo_counter1,521+tokyo_counter1);
				MoveToEx(hZhanghuangIntro,467,601,NULL);LineTo(hZhanghuangIntro,467-tokyo_counter2,601);
				DeleteObject(hPen);	
				if(tokyo_counter2==100)
				TransparentBlt(hZhanghuangIntro,337,600,60,30,hCityDC[18],0,0,60,30,RGB(0,0,0));
				TransparentBlt(hZhanghuangIntro,80-tokyo_counter1,0,288,75,hCityDC[19],0,0,288,75,RGB(4,2,4));
				TransparentBlt(hZhanghuangIntro,-80+tokyo_counter1,75,175,50,hCityDC[17],0,0,175,50,RGB(4,2,4));		
				TransparentBlt(hZhanghuangIntro,537,511,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));			 
	 }		
	 //跳到札幌机场
	 if(Intro_counter>=600)
		  {
			  game_state=-301;
			  Intro_counter=0;
	      }
     BitBlt(hdc,0,0,600,800,hZhanghuangIntro,0,0,SRCCOPY);//第二次缓冲
   }
  
   else if(game_state==-301)//札幌机场
   {
        BitBlt(hZhaHuangAirport,0,0,600,800,hAirportDC[1],0,0,SRCCOPY);//画札幌机场
	    LOGFONT lf;
	    SetBkMode(hZhaHuangAirport,TRANSPARENT);
	    ZeroMemory(&lf,sizeof(LOGFONT));   
	    HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	    SelectObject(hZhaHuangAirport,hfont);	
		POINT male_player={male_player_x+17,male_player_y+25};

		RECT r_houjilou={147,620,187,680};
		RECT r_downtown={32,738,72,780};
		TransparentBlt(hZhaHuangAirport,480,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码  
		/////////////////////////////////////////////////飞机入场动画
		if(plane_direction==false)
		  TransparentBlt(hZhaHuangAirport,564-Tokyo_counter,680-Tokyo_counter,141-Tokyo_transform_counter,141-Tokyo_transform_counter,Plane[6],0,0,141,141,RGB(0,0,0));//画135度飞机
		else
		  TransparentBlt(hZhaHuangAirport,314+Tokyo_counter,430+Tokyo_counter,81+Tokyo_transform_counter,81+Tokyo_transform_counter, Plane[5],0,0,141,141,RGB(0,0,0));//画275度飞机
				
	    TransparentBlt(hZhaHuangAirport,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
		TransparentBlt(hZhaHuangAirport,32,738,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--市区方向
		TransparentBlt(hZhaHuangAirport,148,620,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--候机楼
		TransparentBlt(hZhaHuangAirport,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
		TransparentBlt(hZhaHuangAirport,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
		CString str=L"  札幌机场";
		TextOut(hZhaHuangAirport,240,10,str,str.GetLength());	
		if(PtInRect(&r_houjilou,male_player))
		 {
			   TransparentBlt(hZhaHuangAirport,430,525,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框				   
			   CString str1_1=L"这边是机场候机楼！",str1_2=L"按下 Enter 键乘机",str1_3=L"离开札幌~";
		       TextOut(hZhaHuangAirport,440,535,str1_1,str1_1.GetLength());
		       TextOut(hZhaHuangAirport,440,550,str1_2,str1_2.GetLength());
		       TextOut(hZhaHuangAirport,440,565,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			     
				  Tokyo_counter=0;
			      Tokyo_transform_counter=0;//飞机起飞计时器归零
				  plane_direction=true;//275度飞机准备起飞
			      take_off=true;		   
			   }
		 }
		//飞机飞入日本大图
		if(Tokyo_transform_counter==60&&take_off==true)
		{
		   game_state=-7;//日本大图区域
		   TotalJapan_x=2100;//日本大图区域飞机坐标
		   TotalJapan_y=200;
		   Tokyo_counter=0;
		   Tokyo_transform_counter=0;//飞机起飞计时器归零
		}
		if(PtInRect(&r_downtown,male_player))
		 {
			   TransparentBlt(hZhaHuangAirport,430,525,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框				   
			   CString str1_1=L"这边是札幌著名巧克",str1_2=L"力工厂，按Enter键",str1_3=L"进入~";
		       TextOut(hZhaHuangAirport,440,535,str1_1,str1_1.GetLength());
		       TextOut(hZhaHuangAirport,440,550,str1_2,str1_2.GetLength());
		       TextOut(hZhaHuangAirport,440,565,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-302;
				  male_player_x=55;
				  male_player_y=713;
			   
			   }
		 }
	    if(click_mail==true)
		{
		    Show_Mission(hZhaHuangAirport);
		}
	    if(Tokyo_counter>=250)//飞机已经停下来
		{
			
		    Sleep(10);			
			Walk(0,460,460,780);		
			TransparentBlt(hZhaHuangAirport,male_player_x,male_player_y,17,25,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
		}
   
        BitBlt(hdc,0,0,600,800,hZhaHuangAirport,0,0,SRCCOPY);//第二次缓冲
		DeleteObject(hfont);
   }
    else if(game_state==-302)//札幌巧克力工厂外
	{
	  
       BitBlt(hZhaHuangDowntownJR,0,0,600,800,hZhaHuangDowntown,0,0,SRCCOPY);//画札幌市区
	   LOGFONT lf;
	   SetBkMode(hZhaHuangDowntownJR,TRANSPARENT);
	   ZeroMemory(&lf,sizeof(LOGFONT));   
	   HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	   SelectObject(hZhaHuangDowntownJR,hfont);	
	   POINT male_player={male_player_x+17,male_player_y+25};
	   TransparentBlt(hZhaHuangDowntownJR,480,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码  
	   TransparentBlt(hZhaHuangDowntownJR,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
	   TransparentBlt(hZhaHuangDowntownJR,15,713,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--机场方向
	   TransparentBlt(hZhaHuangDowntownJR,386,612,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--工厂内部
	   TransparentBlt(hZhaHuangDowntownJR,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
	   TransparentBlt(hZhaHuangDowntownJR,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
	   CString str=L"白色恋人巧克力工厂";
	   TextOut(hZhaHuangDowntownJR,240,10,str,str.GetLength());	
	   //走路代码
	   Sleep(10);			
	   Walk(0,640,450,780);
	   TransparentBlt(hZhaHuangDowntownJR,male_player_x,male_player_y,34,50,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
	   //地图标记文字提示
	   RECT r_airport={15,713,55,760};
	   RECT r_in={361,662,401,712};
	   if(PtInRect(&r_airport,male_player))
		 {
			   TransparentBlt(hZhaHuangDowntownJR,430,525,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框				   
			   CString str1_1=L"这边是机场方向！",str1_2=L"按下 Enter 键离开",str1_3=L"巧克力工厂~";
		       TextOut(hZhaHuangDowntownJR,440,535,str1_1,str1_1.GetLength());
		       TextOut(hZhaHuangDowntownJR,440,550,str1_2,str1_2.GetLength());
		       TextOut(hZhaHuangDowntownJR,440,565,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-301;
				  male_player_x=20;
				  male_player_y=690;
			   
			   }
		 }
	   if(PtInRect(&r_in,male_player))
		 {
			   TransparentBlt(hZhaHuangDowntownJR,430,525,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框				   
			   CString str1_1=L"这边是巧克力工厂大",str1_2=L"门，按Enter键进入",str1_3=L"工厂内部~";
		       TextOut(hZhaHuangDowntownJR,440,535,str1_1,str1_1.GetLength());
		       TextOut(hZhaHuangDowntownJR,440,550,str1_2,str1_2.GetLength());
		       TextOut(hZhaHuangDowntownJR,440,565,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-303;
				  male_player_x=558;
				  male_player_y=360;
				  challenge_activated=false;
			   
			   }
		 }
	   
	   //显示任务
	   if(click_mail==true)
		{
		    Show_Mission(hZhaHuangDowntownJR);
		}	
	   BitBlt(hdc,0,0,600,800,hZhaHuangDowntownJR,0,0,SRCCOPY);//第二次缓冲
	   DeleteObject(hfont);
    }
	else if(game_state==-303)//札幌市巧克力工厂内部
	{
	   BitBlt(hZhaHuangFactoryJR,0,0,600,800,hZhaHuangFactory,0,0,SRCCOPY);//画巧克力工厂内部
	   LOGFONT lf;
	   SetBkMode(hZhaHuangFactoryJR,TRANSPARENT);
	   ZeroMemory(&lf,sizeof(LOGFONT));   
	   HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	   SelectObject(hZhaHuangFactoryJR,hfont);	
	   POINT male_player={male_player_x+17,male_player_y+25};
	   TransparentBlt(hZhaHuangFactoryJR,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码   	 
	   TransparentBlt(hZhaHuangFactoryJR,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
	   TransparentBlt(hZhaHuangFactoryJR,558,320,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--出口	  
	   TransparentBlt(hZhaHuangFactoryJR,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
	   TransparentBlt(hZhaHuangFactoryJR,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
	   TransparentBlt(hZhaHuangFactoryJR,270,267,80,128,hCRYQ,0,0,80,128,RGB(0,0,0));//画穹妹
	   CString str=L"巧克力工厂内部";
	   TextOut(hZhaHuangFactoryJR,240,10,str,str.GetLength());	
	   //走路代码
	   Sleep(10);			
	   Walk(210,295,600,426);
	   TransparentBlt(hZhaHuangFactoryJR,male_player_x,male_player_y,34,50,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
	   // 文字提示
	   RECT r_out={558,320,600,380};
	   RECT r_challenge={351,342,408,421};//接受挑战区域
	   if(PtInRect(&r_challenge,male_player)&&challenge_activated==false)
	   {			    
		  TransparentBlt(hZhaHuangFactoryJR,220,556,100,93,hEnter,0,0,100,93,RGB(0,0,0));							
	   }
		if(PtInRect(&r_challenge,male_player)&&KEY_DOWN(VK_RETURN))
		{		
		   challenge_activated=true;		
		}
		
	   if(PtInRect(&r_out,male_player))
		 {
			   TransparentBlt(hZhaHuangFactoryJR,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框			   
			   CString str1_1=L"这边是工厂出口",str1_2=L"按下 Enter 键离开",str1_3=L"巧克力工厂~";
		       TextOut(hZhaHuangFactoryJR,103,585,str1_1,str1_1.GetLength());
			   TextOut(hZhaHuangFactoryJR,103,600,str1_2,str1_2.GetLength());
			   TextOut(hZhaHuangFactoryJR,103,615,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-302;
				  male_player_x=361;
				  male_player_y=700;
			   
			   }
		 }
	   //第二关过关了的代码
	   it=s.find(2);
	   if(it!=s.end())//第2关已经过了
	    {
			   if(mission_viewed==false)//这里画了一次，所以要加限制条件
			    TransparentBlt(hZhaHuangFactoryJR,200+Ex_counter,390-Ex_counter,200-Ex_counter/2,200-Ex_counter/2,hExclimation,0,0,200,200,RGB(0,0,0));//感叹号
			   if(Ex_counter<300)
			    mission_viewed=false;//有新任务到来，设置false，表示未查看新任务		
		 }
	   if(PtInRect(&r_challenge,male_player))
		{
			if(it!=s.end())//第一关已经过了
			{
		       TransparentBlt(hZhaHuangFactoryJR,140,500,335,177,ChallengeDlg[0],0,0,335,177,RGB(0,0,0));		       
			   CString str1_0=L"春日野穹:",str1_1=L"太感谢尼桑了~~终于打过啦！我可是",str1_2=L"手残党哟！！说实话我不知道面码家",str1_3=L"在哪，不过鹿儿岛的亚丝娜同学略知一",str1_4=L"二，你可以问问她！",str1_5=L"按 回车 可以继续挑战我哦！";
			   TextOut(hZhaHuangFactoryJR,186,546,str1_0,str1_0.GetLength());
			   TextOut(hZhaHuangFactoryJR,186,561,str1_1,str1_1.GetLength());
			   TextOut(hZhaHuangFactoryJR,186,576,str1_2,str1_2.GetLength());
			   TextOut(hZhaHuangFactoryJR,186,591,str1_3,str1_3.GetLength());
			   TextOut(hZhaHuangFactoryJR,186,606,str1_4,str1_4.GetLength());
			   TextOut(hZhaHuangFactoryJR,186,630,str1_5,str1_5.GetLength());
			   mission_set.insert(3);//任务3放入任务集合中
			}
			 
		}
	    //开始接受挑战
		if(challenge_activated==true)
		{		
		    		
			//画iphone对话框，如果触发的话
			TransparentBlt(hZhaHuangFactoryJR,140,500,335,177,ChallengeDlg[0],0,0,335,177,RGB(0,0,0));
			TransparentBlt(hZhaHuangFactoryJR,230,610,50,50,ChallengeDlg[2],0,0,50,50,RGB(0,0,0));//钩
			TransparentBlt(hZhaHuangFactoryJR,330,610,50,50,ChallengeDlg[1],0,0,50,50,RGB(0,0,0));//叉
			//写文字对话
			CString str1_1=L"我春日野穹可以告诉你面码家",str1_2=L"在哪，但是你要帮助我过了这个",str1_3=L"小游戏！你愿意试一试吗？";
			TextOut(hZhaHuangFactoryJR,186,546,str1_1,str1_1.GetLength());
			TextOut(hZhaHuangFactoryJR,186,561,str1_2,str1_2.GetLength());
			TextOut(hZhaHuangFactoryJR,186,576,str1_3,str1_3.GetLength());
		    
		}

	    //显示任务
	   if(click_mail==true)
		{
		    Show_Mission(hZhaHuangFactoryJR);
		}	

	   BitBlt(hdc,0,0,600,800,hZhaHuangFactoryJR,0,0,SRCCOPY);//第二次缓冲
	   DeleteObject(hfont);
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
	else if(game_state==-400)//鹿儿岛介绍
   {
     BitBlt(hLuerdaoIntro,0,0,600,800,hCityDC[24],0,0,SRCCOPY);//画鹿儿岛
	 TransparentBlt(hLuerdaoIntro,0,50+map_stretch_counter,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
	 if(map_stretch_counter==450)
	 {
				HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
				SelectObject(hLuerdaoIntro,hPen);
				MoveToEx(hLuerdaoIntro,23,640,NULL);LineTo(hLuerdaoIntro,23+tokyo_counter1,640+tokyo_counter1);
				MoveToEx(hLuerdaoIntro,103,720,NULL);LineTo(hLuerdaoIntro,103+tokyo_counter2,720);
				DeleteObject(hPen);					    
				if(tokyo_counter2==100)
						TransparentBlt(hLuerdaoIntro,111,690,93,30,hCityDC[25],0,0,93,30,RGB(0,0,0));
				TransparentBlt(hLuerdaoIntro,386-tokyo_counter1,0,294,75,hCityDC[26],0,0,294,75,RGB(4,2,4));
				TransparentBlt(hLuerdaoIntro,226+tokyo_counter1,75,195,60,hCityDC[27],0,0,195,60,RGB(4,2,4));	
				TransparentBlt(hLuerdaoIntro,13,630,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
	  }
	 if(Intro_counter>=600)//跳到鹿儿岛机场
		  {
			  game_state=-401;
			  Intro_counter=0;
	      }
   
     BitBlt(hdc,0,0,600,800,hLuerdaoIntro,0,0,SRCCOPY);//第二次缓冲
   }
	else if(game_state==-401)//鹿儿岛机场
	{
	    BitBlt(hLuerdaoAirport,0,0,600,800,hAirportDC[4],0,0,SRCCOPY);//画鹿儿岛机场
	    LOGFONT lf;
	    SetBkMode(hLuerdaoAirport,TRANSPARENT);
	    ZeroMemory(&lf,sizeof(LOGFONT));   
	    HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	    SelectObject(hLuerdaoAirport,hfont);	
		POINT male_player={male_player_x+17,male_player_y+25};

		RECT r_houjilou={208,450,238,500};
		RECT r_downtown={262,715,302,765};
		TransparentBlt(hLuerdaoAirport,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码  
		/////////////////////////////////////////////////飞机入场动画
		if(plane_direction==false)
		  TransparentBlt(hLuerdaoAirport,500-Tokyo_counter,680-Tokyo_counter,141-Tokyo_transform_counter,141-Tokyo_transform_counter,Plane[6],0,0,141,141,RGB(0,0,0));//画135度飞机
		else
		  TransparentBlt(hLuerdaoAirport,250+Tokyo_counter,430+Tokyo_counter,81+Tokyo_transform_counter,81+Tokyo_transform_counter, Plane[5],0,0,141,141,RGB(0,0,0));//画275度飞机
		
		TransparentBlt(hLuerdaoAirport,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
		TransparentBlt(hLuerdaoAirport,262,715,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--市区方向
		TransparentBlt(hLuerdaoAirport,208,450,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--候机楼
		TransparentBlt(hLuerdaoAirport,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
		TransparentBlt(hLuerdaoAirport,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
		CString str=L"  鹿儿岛空港";
		TextOut(hLuerdaoAirport,240,10,str,str.GetLength());	
	     if(PtInRect(&r_houjilou,male_player))
		 {
			   TransparentBlt(hLuerdaoAirport,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		 			   
			   CString str1_1=L"这边是机场候机楼！",str1_2=L"按下 Enter 键乘机",str1_3=L"离开鹿儿岛~";
		       TextOut(hLuerdaoAirport,103,595,str1_1,str1_1.GetLength());
			   TextOut(hLuerdaoAirport,103,610,str1_2,str1_2.GetLength());
			   TextOut(hLuerdaoAirport,103,625,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {			     
				  Tokyo_counter=0;
			      Tokyo_transform_counter=0;//飞机起飞计时器归零
				  plane_direction=true;//275度飞机准备起飞
			      take_off=true;		   
			   }
		 }
		//飞机飞入日本大图
		if(Tokyo_transform_counter==60&&take_off==true)
		{
		   game_state=-7;//日本大图区域
		   TotalJapan_x=100;//日本大图区域飞机坐标
		   TotalJapan_y=2400;
		   Tokyo_counter=0;
		   Tokyo_transform_counter=0;//飞机起飞计时器归零
		}
		if(PtInRect(&r_downtown,male_player))
		 {
			   TransparentBlt(hLuerdaoAirport,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框				   
			   CString str1_1=L"这边是鹿儿岛樱岛",str1_2=L"火山景点，按Enter",str1_3=L"键进入~";
		       TextOut(hLuerdaoAirport,103,595,str1_1,str1_1.GetLength());
			   TextOut(hLuerdaoAirport,103,610,str1_2,str1_2.GetLength());
			   TextOut(hLuerdaoAirport,103,625,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-402;
				  male_player_x=356;
				  male_player_y=724;
			   
			   }
		 }
	    if(click_mail==true)
		{
		    Show_Mission(hLuerdaoAirport);
		}
	    if(Tokyo_counter>=250)//飞机已经停下来
		{
			
		    Sleep(10);			
			Walk(0,460,600,800);		
			TransparentBlt(hLuerdaoAirport,male_player_x,male_player_y,17,25,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
		}
		
		
		
		DeleteObject(hfont);
		BitBlt(hdc,0,0,600,800,hLuerdaoAirport,0,0,SRCCOPY);//第二次缓冲	
	}
	else if(game_state==-402)//鹿儿岛市区
	{
	   BitBlt(hLuerdaoDowntownJR,0,0,600,800,hLuerdaoDowntown,0,0,SRCCOPY);//画鹿儿岛市区
	   LOGFONT lf;
	   SetBkMode(hLuerdaoDowntownJR,TRANSPARENT);
	   ZeroMemory(&lf,sizeof(LOGFONT));   
	   HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	   SelectObject(hLuerdaoDowntownJR,hfont);	
	   POINT male_player={male_player_x+17,male_player_y+25};
	   TransparentBlt(hLuerdaoDowntownJR,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码  
	   TransparentBlt(hLuerdaoDowntownJR,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
	   TransparentBlt(hLuerdaoDowntownJR,461,716,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--机场方向
	   TransparentBlt(hLuerdaoDowntownJR,297,461,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--火山方向
	   TransparentBlt(hLuerdaoDowntownJR,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
	   TransparentBlt(hLuerdaoDowntownJR,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
	   CString str=L"通往观景台之路";
	   TextOut(hLuerdaoDowntownJR,240,10,str,str.GetLength());	
	   //走路代码
	   Sleep(10);			
	   Walk(254,448,538,780);
	   TransparentBlt(hLuerdaoDowntownJR,male_player_x,male_player_y,34,50,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
	    //地图标记文字提示
	   RECT r_airport={461,716,500,776};
	   RECT r_in={297,450,342,490};
	   if(PtInRect(&r_airport,male_player))
		 {
			   TransparentBlt(hLuerdaoDowntownJR,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		   
			   CString str1_1=L"这边是机场方向！",str1_2=L"按下 Enter 键离开",str1_3=L"樱岛火山~";
		       TextOut(hLuerdaoDowntownJR,103,595,str1_1,str1_1.GetLength());
			   TextOut(hLuerdaoDowntownJR,103,610,str1_2,str1_2.GetLength());
			   TextOut(hLuerdaoDowntownJR,103,625,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-401;
				  male_player_x=262;
				  male_player_y=675;
			   
			   }
		 }
	   if(PtInRect(&r_in,male_player))
		 {
			   TransparentBlt(hLuerdaoDowntownJR,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		   
			   CString str1_1=L"这边是火山观景！",str1_2=L"台，按下 Enter 进入",str1_3=L"火山观景台~";
		       TextOut(hLuerdaoDowntownJR,103,595,str1_1,str1_1.GetLength());
			   TextOut(hLuerdaoDowntownJR,103,610,str1_2,str1_2.GetLength());
			   TextOut(hLuerdaoDowntownJR,103,625,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-403;
				  male_player_x=472;
				  male_player_y=694;
				  challenge_activated=false;
			   
			   }
		 }
	    if(click_mail==true)
		{
		    Show_Mission(hLuerdaoDowntownJR);
		}
	   DeleteObject(hfont);
	   BitBlt(hdc,0,0,600,800,hLuerdaoDowntownJR,0,0,SRCCOPY);//第二次缓冲	
	}

	else if(game_state==-403)//鹿儿岛樱岛火山
	{
	 
	   BitBlt(hLuerdaoVolcanoJR,0,0,600,800,hLuerdaoVolcano,0,0,SRCCOPY);//画鹿儿岛火山景点
	   LOGFONT lf;
	   SetBkMode(hLuerdaoVolcanoJR,TRANSPARENT);
	   ZeroMemory(&lf,sizeof(LOGFONT));   
	   HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	   SelectObject(hLuerdaoVolcanoJR,hfont);	
	   POINT male_player={male_player_x+17,male_player_y+25};
	   //TransparentBlt(hLuerdaoVolcanoJR,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码   	 
	   TransparentBlt(hLuerdaoVolcanoJR,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
	   TransparentBlt(hLuerdaoVolcanoJR,562,724,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--出口	  
	   TransparentBlt(hLuerdaoVolcanoJR,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
	   TransparentBlt(hLuerdaoVolcanoJR,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
	   TransparentBlt(hLuerdaoVolcanoJR,15,486,200,274,hYSN,0,0,200,274,RGB(0,0,0));//画亚丝娜
	   CString str=L"樱岛火山观景台";
	   TextOut(hLuerdaoVolcanoJR,240,10,str,str.GetLength());	
	    //走路代码
	   Sleep(10);			
	   Walk(150,660,600,780);
	   TransparentBlt(hLuerdaoVolcanoJR,male_player_x,male_player_y,68,100,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
	   // 文字提示
	   RECT r_out={526,683,600,770};
	   RECT r_challenge={137,675,300,780};//接受挑战区域
	   if(PtInRect(&r_out,male_player))
	   {
	          TransparentBlt(hLuerdaoVolcanoJR,248,341,100,93,hEnter,0,0,100,93,RGB(0,0,0));				        
		      if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-402;
				  male_player_x=297;
				  male_player_y=540;
				  challenge_activated=false;
			   
			   }
	   
	   }
	   if(PtInRect(&r_challenge,male_player)&&challenge_activated==false)
	   {			    
		  TransparentBlt(hLuerdaoVolcanoJR,248,341,100,93,hEnter,0,0,100,93,RGB(0,0,0));							
	   }
	   if(PtInRect(&r_challenge,male_player)&&KEY_DOWN(VK_RETURN))
		{		
		   challenge_activated=true;		
		}
	  
       //第3关过关了的代码
	   it=s.find(3);
	   if(it!=s.end())//第3关已经过了
	    {
			   if(mission_viewed==false)//这里画了一次，所以要加限制条件
			    TransparentBlt(hLuerdaoVolcanoJR,200+Ex_counter,390-Ex_counter,200-Ex_counter/2,200-Ex_counter/2,hExclimation,0,0,200,200,RGB(0,0,0));//感叹号
			   if(Ex_counter<300)
			    mission_viewed=false;//有新任务到来，设置false，表示未查看新任务		
		 }
	   if(PtInRect(&r_challenge,male_player))
		{
			if(it!=s.end())//第一关已经过了
			{
		       TransparentBlt(hLuerdaoVolcanoJR,140,300,335,177,ChallengeDlg[0],0,0,335,177,RGB(0,0,0));		       
			   CString str1_0=L"亚丝娜:",str1_1=L"阿里嘎多~~我的小猫终于回到家",str1_2=L"啦！！面码家嘛，我也布吉岛啊！！",str1_3=L"别灰心，青森市的高板桐乃好像",str1_4=L"去过面码家，你去找她吧！",str1_5=L"按 回车 可以继续挑战我哦！";
			   TextOut(hLuerdaoVolcanoJR,186,346,str1_0,str1_0.GetLength());
			   TextOut(hLuerdaoVolcanoJR,186,361,str1_1,str1_1.GetLength());
			   TextOut(hLuerdaoVolcanoJR,186,376,str1_2,str1_2.GetLength());
			   TextOut(hLuerdaoVolcanoJR,186,391,str1_3,str1_3.GetLength());
			   TextOut(hLuerdaoVolcanoJR,186,406,str1_4,str1_4.GetLength());
			   TextOut(hLuerdaoVolcanoJR,186,430,str1_5,str1_5.GetLength());
			   mission_set.insert(4);//任务4放入任务集合中
			}
			 
		}
	    //开始接受挑战
		if(challenge_activated==true)
		{		
		    		
			//画iphone对话框，如果触发的话
			TransparentBlt(hLuerdaoVolcanoJR,140,300,335,177,ChallengeDlg[0],0,0,335,177,RGB(0,0,0));
			TransparentBlt(hLuerdaoVolcanoJR,230,410,50,50,ChallengeDlg[2],0,0,50,50,RGB(0,0,0));//钩
			TransparentBlt(hLuerdaoVolcanoJR,330,410,50,50,ChallengeDlg[1],0,0,50,50,RGB(0,0,0));//叉
			//写文字对话
			CString str1_1=L"亚丝娜女神的宠物猫被困住了，她",str1_2=L"现心急如焚，或许你得先帮助她解",str1_3=L"救小猫！你愿意试一试吗？";
			TextOut(hLuerdaoVolcanoJR,186,346,str1_1,str1_1.GetLength());
			TextOut(hLuerdaoVolcanoJR,186,361,str1_2,str1_2.GetLength());
			TextOut(hLuerdaoVolcanoJR,186,376,str1_3,str1_3.GetLength());
		    
		}


	   if(click_mail==true)
		{
		    Show_Mission(hLuerdaoVolcanoJR);
		}
	   BitBlt(hdc,0,0,600,800,hLuerdaoVolcanoJR,0,0,SRCCOPY);//第二次缓冲	
	}
	
	else if(game_state==-500)//青森介绍
   {
     BitBlt(hQingsenIntro,0,0,600,800,hCityDC[8],0,0,SRCCOPY);//画青森
	 TransparentBlt(hQingsenIntro,0,50,600-map_stretch_counter,600-map_stretch_counter,hJapanDC,0,0,600,600,RGB(166,194,222));//地图缩放
	 if(map_stretch_counter==450)
		{
			HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,255,255));
			SelectObject(hQingsenIntro,hPen);
			MoveToEx(hQingsenIntro,95,107,NULL);LineTo(hQingsenIntro,95+tokyo_counter1,107-tokyo_counter1);
			MoveToEx(hQingsenIntro,175,27,NULL);LineTo(hQingsenIntro,175+tokyo_counter2,27);
			DeleteObject(hPen);
			if(tokyo_counter2==100)
				TransparentBlt(hQingsenIntro,217,27,60,30,hCityDC[9],0,0,60,30,RGB(0,0,0));
			TransparentBlt(hQingsenIntro,-80+tokyo_counter1,705,277,75,hCityDC[11],0,0,277,75,RGB(4,2,4));
			TransparentBlt(hQingsenIntro,80-tokyo_counter1,665,180,40,hCityDC[10],0,0,180,40,RGB(4,2,4));				
			TransparentBlt(hQingsenIntro,85,97,20,20,hFlowerDC,0,0,20,20,RGB(255,255,255));
		}
				  		   			   		   		   			   
	 if(Intro_counter>=600)//跳到青森机场
		  {
			  game_state=-501;
			  Intro_counter=0;
	      }
   
     BitBlt(hdc,0,0,600,800,hQingsenIntro,0,0,SRCCOPY);//第二次缓冲
   }
	else if(game_state==-501)//青森机场
	{
	    BitBlt(hQingsenAirport,0,0,600,800,hAirportDC[6],0,0,SRCCOPY);//画青森机场
	    LOGFONT lf;
	    SetBkMode(hQingsenAirport,TRANSPARENT);
	    ZeroMemory(&lf,sizeof(LOGFONT));   
	    HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	    SelectObject(hQingsenAirport,hfont);	
		POINT male_player={male_player_x+17,male_player_y+25};

		RECT r_houjilou={383,234,413,274};
		RECT r_downtown={469,97,509,147};
		TransparentBlt(hQingsenAirport,480,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码  
		/////////////////////////////////////////////////飞机入场动画
		if(plane_direction==false)
		  TransparentBlt(hQingsenAirport,Tokyo_counter,620-Tokyo_counter,141-Tokyo_transform_counter,141-Tokyo_transform_counter,Plane[4],0,0,141,141,RGB(0,0,0));//画135度飞机
		else
		  TransparentBlt(hQingsenAirport,250-Tokyo_counter-Tokyo_transform_counter,370+Tokyo_counter+Tokyo_transform_counter,81+Tokyo_transform_counter,81+Tokyo_transform_counter, Plane[7],0,0,141,141,RGB(0,0,0));//画275度飞机
		
		TransparentBlt(hQingsenAirport,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
		TransparentBlt(hQingsenAirport,469,97,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--市区方向
		TransparentBlt(hQingsenAirport,383,234,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--候机楼
		TransparentBlt(hQingsenAirport,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
		TransparentBlt(hQingsenAirport,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
		CString str=L"   青森空港";
		TextOut(hQingsenAirport,240,10,str,str.GetLength());	
	     if(PtInRect(&r_houjilou,male_player))
		 {
			   TransparentBlt(hQingsenAirport,430,525,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框				   
			   CString str1_1=L"这边是机场候机楼！",str1_2=L"按下 Enter 键乘机",str1_3=L"离开青森~";
		       TextOut(hQingsenAirport,440,535,str1_1,str1_1.GetLength());
		       TextOut(hQingsenAirport,440,550,str1_2,str1_2.GetLength());
		       TextOut(hQingsenAirport,440,565,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			     
				  Tokyo_counter=0;
			      Tokyo_transform_counter=0;//飞机起飞计时器归零
				  plane_direction=true;//275度飞机准备起飞
			      take_off=true;		   
			   }
		 }
		//飞机飞入日本大图
		if(Tokyo_transform_counter==60&&take_off==true)
		{
		   game_state=-7;//日本大图区域
		   TotalJapan_x=2000;//日本大图区域飞机坐标
		   TotalJapan_y=600;
		   Tokyo_counter=0;
		   Tokyo_transform_counter=0;//飞机起飞计时器归零
		}
		if(PtInRect(&r_downtown,male_player))
		 {
			   TransparentBlt(hQingsenAirport,430,525,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框				   
			   CString str1_1=L"这边是青森弘前公",str1_2=L"园，按下 Enter 键进",str1_3=L"入公园~";
		       TextOut(hQingsenAirport,440,535,str1_1,str1_1.GetLength());
		       TextOut(hQingsenAirport,440,550,str1_2,str1_2.GetLength());
		       TextOut(hQingsenAirport,440,565,str1_3,str1_3.GetLength());
			   if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-502;
				  male_player_x=356;
				  male_player_y=724;
			   
			   }
		 }
	    if(click_mail==true)
		{
		    Show_Mission(hQingsenAirport);
		}
	    if(Tokyo_counter>=250)//飞机已经停下来
		{
			
		    Sleep(10);			
			Walk(300,0,600,400);		
			TransparentBlt(hQingsenAirport,male_player_x,male_player_y,17,25,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
		}
		
		
		
		DeleteObject(hfont);
		BitBlt(hdc,0,0,600,800,hQingsenAirport,0,0,SRCCOPY);//第二次缓冲	
				
	}
	else if(game_state==-502)//青森樱花小道
	{
	   BitBlt(hQingsenDowntownJR,0,0,600,800,hQingsenDowntown,0,0,SRCCOPY);//画青森市区
	   LOGFONT lf;
	   SetBkMode(hQingsenDowntownJR,TRANSPARENT);
	   ZeroMemory(&lf,sizeof(LOGFONT));   
	   HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	   SelectObject(hQingsenDowntownJR,hfont);	
	   POINT male_player={male_player_x+17,male_player_y+25};
	   TransparentBlt(hQingsenDowntownJR,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码  
	   TransparentBlt(hQingsenDowntownJR,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
	   TransparentBlt(hQingsenDowntownJR,260,710,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--机场方向
	   TransparentBlt(hQingsenDowntownJR,287,381,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--公园方向
	   TransparentBlt(hQingsenDowntownJR,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
	   TransparentBlt(hQingsenDowntownJR,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
	   CString str=L"   樱花小道";
	   TextOut(hQingsenDowntownJR,240,10,str,str.GetLength());	
	   //走路代码
	   Sleep(10);			
	   Walk(252,395,367,780);
	   TransparentBlt(hQingsenDowntownJR,male_player_x,male_player_y,34,50,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
	   //文字说明
	   RECT r_in={280,400,320,460};
	   RECT r_airport={250,700,290,780};
	   if(PtInRect(&r_in,male_player))//进入市区
		{
		    CString str1_1=L"这边是弘前公园！",str1_2=L"按下 Enter 键进",str1_3=L"入公园";
			TransparentBlt(hQingsenDowntownJR,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		 
			TextOut(hQingsenDowntownJR,103,595,str1_1,str1_1.GetLength());
			TextOut(hQingsenDowntownJR,103,610,str1_2,str1_2.GetLength());
			TextOut(hQingsenDowntownJR,103,625,str1_3,str1_3.GetLength());
			if(KEY_DOWN(VK_RETURN))
			{
			   game_state=-503;//青森公园
			   male_player_x=420;
			   male_player_y=660;
			   challenge_activated=false;
			}
		}
	   if(PtInRect(&r_airport,male_player))//进入机场
		{
		    CString str1_1=L"这边是青森空港！",str1_2=L"按下 Enter 键进",str1_3=L"进入空港";
			TransparentBlt(hQingsenDowntownJR,90,580,164,100,hSilverDialog,0,0,164,100,RGB(0,0,0));//对话框		 
			TextOut(hQingsenDowntownJR,103,595,str1_1,str1_1.GetLength());
			TextOut(hQingsenDowntownJR,103,610,str1_2,str1_2.GetLength());
			TextOut(hQingsenDowntownJR,103,625,str1_3,str1_3.GetLength());
			if(KEY_DOWN(VK_RETURN))
			{
			   game_state=-501;//
			   male_player_x=360;
			   male_player_y=720;
			}
		}
	    if(click_mail==true)
		{
		    Show_Mission(hQingsenDowntownJR);
		}
	   DeleteObject(hfont);
	   BitBlt(hdc,0,0,600,800,hQingsenDowntownJR,0,0,SRCCOPY);//第二次缓冲
	}
	else if(game_state==-503)//青森公园
	{
	   BitBlt(hQingsenParkJR,0,0,600,800,hQingsenPark,0,0,SRCCOPY);//画青森弘前公园
	   LOGFONT lf;
	   SetBkMode(hQingsenParkJR,TRANSPARENT);
	   ZeroMemory(&lf,sizeof(LOGFONT));   
	   HFONT hfont=  CreateFont(18,9,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	   SelectObject(hQingsenParkJR,hfont);	
	   POINT male_player={male_player_x+17,male_player_y+25};
	   //TransparentBlt(hLuerdaoVolcanoJR,0,620,125,160,hStartMianma,0,0,125,160,RGB(0,0,0));//面码   	 
	   TransparentBlt(hQingsenParkJR,10,0,30,43,hBack,0,0,30,43,RGB(255,255,255));//画退出键
	   TransparentBlt(hQingsenParkJR,480,700,25,37,hMark,0,0,25,37,RGB(0,0,0));//画地图标记--出口	  
	   TransparentBlt(hQingsenParkJR,530,0,60,45,hMail,0,0,60,45,RGB(0,0,0));//邮件消息
	   TransparentBlt(hQingsenParkJR,200,0,200,40,hMissionBar,0,0,200,40,RGB(0,0,0));//画任务栏
	   TransparentBlt(hQingsenParkJR,46,560,120,200,hGBTN,0,0,120,200,RGB(0,0,0));//画桐乃
	   CString str=L"弘前公园樱花桥";
	   TextOut(hQingsenParkJR,240,10,str,str.GetLength());	
	    //走路代码
	   Sleep(10);			
	   Walk(126,660,435,780);
	   TransparentBlt(hQingsenParkJR,male_player_x,male_player_y,68,100,hWalkFrame,34*nRow,nColumn*50,34,50,RGB(255,255,255));//游戏人物主角
	   // 文字提示
	   RECT r_out={450,670,550,770};
	   RECT r_challenge={126,660,190,780};//接受挑战区域
	   if(PtInRect(&r_out,male_player))
	   {
	          TransparentBlt(hQingsenParkJR,248,341,100,93,hEnter,0,0,100,93,RGB(0,0,0));				        
		      if(KEY_DOWN(VK_RETURN))
			   {
			      game_state=-502;
				  male_player_x=280;
				  male_player_y=460;
				  challenge_activated=false;
			   
			   }
	   
	   }
	   if(PtInRect(&r_challenge,male_player)&&challenge_activated==false)
	   {			    
		  TransparentBlt(hQingsenParkJR,248,341,100,93,hEnter,0,0,100,93,RGB(0,0,0));							
	   }
	   if(PtInRect(&r_challenge,male_player)&&KEY_DOWN(VK_RETURN))
		{		
		   challenge_activated=true;		
		}
	  
       //第4关过关了的代码
	   it=s.find(4);
	   if(it!=s.end())//第4关已经过了
	    {
			   if(mission_viewed==false)//这里画了一次，所以要加限制条件
			    TransparentBlt(hQingsenParkJR,200+Ex_counter,390-Ex_counter,200-Ex_counter/2,200-Ex_counter/2,hExclimation,0,0,200,200,RGB(0,0,0));//感叹号
			   if(Ex_counter<300)
			    mission_viewed=false;//有新任务到来，设置false，表示未查看新任务		
		 }
	   if(PtInRect(&r_challenge,male_player))
		{
			if(it!=s.end())//第4关已经过了
			{
		       TransparentBlt(hQingsenParkJR,140,300,335,177,ChallengeDlg[0],0,0,335,177,RGB(0,0,0));		       
			   CString str1_0=L"高板桐乃:",str1_1=L"哼~~我才没有输给你呢！我不服，",str1_2=L"我才不知道面码家在哪里呢（傲娇中）",str1_3=L"你还是去问别人吧，提示一下：去新",str1_4=L"泻市找五河琴里。",str1_5=L"按 回车 可以继续挑战我哦！";
			   TextOut(hQingsenParkJR,186,346,str1_0,str1_0.GetLength());
			   TextOut(hQingsenParkJR,186,361,str1_1,str1_1.GetLength());
			   TextOut(hQingsenParkJR,186,376,str1_2,str1_2.GetLength());
			   TextOut(hQingsenParkJR,186,391,str1_3,str1_3.GetLength());
			   TextOut(hQingsenParkJR,186,406,str1_4,str1_4.GetLength());
			   TextOut(hQingsenParkJR,186,430,str1_5,str1_5.GetLength());
			   mission_set.insert(5);//任务4放入任务集合中
			}
			 
		}
	    //开始接受挑战
		if(challenge_activated==true)
		{		
		    		
			//画iphone对话框，如果触发的话
			TransparentBlt( hQingsenParkJR,140,300,335,177,ChallengeDlg[0],0,0,335,177,RGB(0,0,0));
			TransparentBlt(hQingsenParkJR,230,410,50,50,ChallengeDlg[2],0,0,50,50,RGB(0,0,0));//钩
			TransparentBlt(hQingsenParkJR,330,410,50,50,ChallengeDlg[1],0,0,50,50,RGB(0,0,0));//叉
			//写文字对话
			CString str1_1=L"桐乃很傲娇，她总喜欢挑战别人",str1_2=L"只有战胜桐乃她才能给你答案，你",str1_3=L"愿意试一试吗？";
			TextOut(hQingsenParkJR,186,346,str1_1,str1_1.GetLength());
			TextOut(hQingsenParkJR,186,361,str1_2,str1_2.GetLength());
			TextOut(hQingsenParkJR,186,376,str1_3,str1_3.GetLength());
		    
		}


	   if(click_mail==true)
		{
		    Show_Mission(hQingsenParkJR);
		}
	   DeleteObject(hfont);
	   BitBlt(hdc,0,0,600,800,hQingsenParkJR,0,0,SRCCOPY);//第二次缓冲	
	
	}
	else if(game_state==0)//主菜单
	{
	
	 BitBlt(hTempMenuDC,0,0,600,800,hBgDC,0,0,SRCCOPY);//画背景图片
	  //画出主菜单	
	 
	  //TransparentBlt(hTempMenuDC,15,320,40,40,hFlowerDC,0,0,40,40,RGB(255,255,255));//画3朵花
	  //TransparentBlt(hTempMenuDC,15,390,40,40,hFlowerDC,0,0,40,40,RGB(255,255,255));//画3朵花
	  //TransparentBlt(hTempMenuDC,15,460,40,40,hFlowerDC,0,0,40,40,RGB(255,255,255));//画3朵花
	  //TransparentBlt(hTempMenuDC,15,530,40,40,hFlowerDC,0,0,40,40,RGB(255,255,255));//画4朵花
	  //TransparentBlt(hTempMenuDC,6,270,240,50,hUpperEdgeDC,0,0,240,50,RGB(255,255,255));//画上边框
	  //TransparentBlt(hTempMenuDC,6,580,240,50,hLowerEdgeDC,0,0,240,50,RGB(255,255,255));//画下边框
	  TransparentBlt(hTempMenuDC,510,800-128+12,64,64,hGameInfoDC,0,0,64,64,RGB(255,255,255));//画游戏信息图标
	  //TransparentBlt(hTempMenuDC,0,0,100,100,hStarDC,0,0,100,100,RGB(255,255,255));//画五角星
	  TransparentBlt(hTempMenuDC,90,686,60,60,hSaveDC,0,0,60,60,RGB(255,255,255));//画存盘图标
	 
	  TransparentBlt(hTempMenuDC,25,15,170,170,hMainTitle[0],0,0,170,170,RGB(252,254,252));//画游戏标题
	  TransparentBlt(hTempMenuDC,180,30,150,150,hMainTitle[1],0,0,150,150,RGB(252,254,252));//画游戏标题
	  TransparentBlt(hTempMenuDC,340,40,200,64,hMainTitle[2],0,0,200,64,RGB(255,255,255));//画游戏标题
	  //TransparentBlt(hTempMenuDC,30,35,250,125,hTitleDC,0,0,250,125,RGB(0,0,0));//画游戏标题
	 // TransparentBlt(hTempMenuDC,250,100,300,80,hTitle1DC,0,0,300,80,RGB(0,0,0));//画游戏标题
	  // TransparentBlt(hTempMenuDC,490,50,80,80,hStar1DC,0,0,80,80,RGB(255,255,255));//画五角星小
	  // TransparentBlt(hTempMenuDC,350,10,80,80,hStar1DC,0,0,80,80,RGB(255,255,255));//画五角星小
	   TransparentBlt(hTempMenuDC,140,600,150,60,hCloud1DC,0,0,150,60,RGB(255,255,255));//画云朵1下
	  TransparentBlt(hTempMenuDC,12,210,100,55,hCloud2DC,0,0,100,55,RGB(255,255,255));//画云朵2上
	   //TransparentBlt(hdc,450,35,160,60,hTitle2DC,0,0,160,60,RGB(0,0,0));//画游戏标题
     //创建黄色实心画刷
	   HBRUSH yellow_brush = CreateSolidBrush(RGB(255,242,0));
	   HPEN null_pen = (HPEN)GetStockObject(NULL_PEN);
	   SelectObject(hTempMenuDC,yellow_brush);
	   SelectObject(hTempMenuDC,null_pen);
	  //向又飞出动画
	   if(chu2==40)
	   {
	    game_state=-502; //	进入游戏背景说明,飞机在海上飞 (-6原来是)  			      					
		InvalidateRect(hwnd,NULL,true);
		chu2s=false;
	   }
	   if(xun2==40)
	   {
	     game_state=-1;	
		 xun2s=false;
		 InvalidateRect(hwnd,NULL,true);
	   }
	   if(shang2==40)
	   {
	     game_state=-2;
		 shang2s=false;
		 InvalidateRect(hwnd,NULL,true);	   
	   }
	   
	   
	   if(chu2s==true)
	   {
	      Ellipse(hTempMenuDC,chu2*20,270,80+chu2*20,340);	
	      TransparentBlt(hTempMenuDC,10+chu2*20,280,45,45,hMenuDC[0],0,0,45,45,RGB(247,247,247));
	   }
	   else
	   {
			   if(GameStart_Select==false)//游戏开始
			 {
				Ellipse(hTempMenuDC,-70+chu1*6,270,chu1*6,340);	
				TransparentBlt(hTempMenuDC,-60+chu1*6,280,45,45,hMenuDC[0],0,0,45,45,RGB(247,247,247));
				chu=0;
			 }
			 else//动画效果，向左移动
			 {
				Ellipse(hTempMenuDC,80-chu*3,270,150-chu*3,340);	
				TransparentBlt(hTempMenuDC,90-chu*3,280,45,45,hMenuDC[0],0,0,45,45,RGB(247,247,247));
				if(chu==24)//画出入江湖
					TransparentBlt(hTempMenuDC,80,280,179,50,hMenuDC[4],0,0,179,50,RGB(255,255,255));
			 }

	   }
	 
	   if(xun2s==true)
	    {
	      Ellipse(hTempMenuDC,xun2*20,360,70+xun2*20,430);	
	      TransparentBlt(hTempMenuDC,10+xun2*20,370,45,45,hMenuDC[1],0,0,45,45,RGB(247,247,247));	 
	    }
	  else
	   {
			   if(GameBrief_Select==false)//游戏简介
			   {
				   Ellipse(hTempMenuDC,-70+xun1*6,360,xun1*6,430);
				   TransparentBlt(hTempMenuDC,-60+xun1*6,370,45,45,hMenuDC[1],0,0,45,45,RGB(247,247,247));
				   xun=0;
			   }
			 else
			 {
				   Ellipse(hTempMenuDC,80-xun*3,360,150-xun*3,430);
				   TransparentBlt(hTempMenuDC,90-xun*3,370,45,45,hMenuDC[1],0,0,45,45,RGB(247,247,247));
				   if(xun==24)//画出入江湖
					TransparentBlt(hTempMenuDC,80,370,180,50,hMenuDC[5],0,0,180,50,RGB(255,255,255));
			 }
	   }

	 
	 if(GameExit_Select==false)//退出游戏
	   {
		   Ellipse(hTempMenuDC,-70+li1*6,450,li1*6,520);
		   TransparentBlt(hTempMenuDC,-58+li1*6,460,45,45,hMenuDC[2],0,0,45,45,RGB(247,247,247));
		   li=0;
	  }
	 else
	 {
	       Ellipse(hTempMenuDC,80-li*3,450,150-li*3,520);
		   TransparentBlt(hTempMenuDC,92-li*3,460,45,45,hMenuDC[2],0,0,45,45,RGB(247,247,247));
		    if(li==24)//画出入江湖
			TransparentBlt(hTempMenuDC,80,460,180,50,hMenuDC[6],0,0,180,50,RGB(255,255,255));
	 }
	  
	 if(shang2s==true)
	 {
			Ellipse(hTempMenuDC,shang2*20,540,70+shang2*20,610);
			TransparentBlt(hTempMenuDC,10+shang2*20,550,45,45,hMenuDC[3],0,0,45,45,RGB(247,247,247));	 
	 }
	 else
	 {
			 if(GameMoe_Select==false)//萌图欣赏
			   {
				   Ellipse(hTempMenuDC,-70+shang1*6,540,shang1*6,610);
				   TransparentBlt(hTempMenuDC,-58+shang1*6,550,45,45,hMenuDC[3],0,0,45,45,RGB(247,247,247));
				   shang=0;
			   }
			 else
			 {
				   Ellipse(hTempMenuDC,80-shang*3,540,150-shang*3,610);
				   TransparentBlt(hTempMenuDC,94-shang*3,550,45,45,hMenuDC[3],0,0,45,45,RGB(247,247,247));
				   if(shang==24)//画出入江湖
					TransparentBlt(hTempMenuDC,80,548,180,50,hMenuDC[7],0,0,180,50,RGB(255,255,255));	 
			 }
	 }
	 
	 //DeleteObject(hFont);
	 DeleteObject(yellow_brush);
	 DeleteObject(null_pen);
	  if(music_state==1)		//画音乐图标 
		TransparentBlt(hTempMenuDC,12,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	 else
		TransparentBlt(hTempMenuDC,12,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
	
	  
	 BitBlt(hdc,0,0,600,800,hTempMenuDC,0,0,SRCCOPY);//第二次缓冲
	}
	
	else if(game_state==2)//第一关
	{

	BitBlt(hTemp1DC,0,0,600,800,hLevel1BgDC,0,0,SRCCOPY);
	if(music_state==1)		//画音乐图标 
		TransparentBlt(hTemp1DC,12,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	else
		TransparentBlt(hTemp1DC,12,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
   //画回到主菜单图标
   TransparentBlt(hTemp1DC,-20,490,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单;
   
   //画键盘
   TransparentBlt(hTemp1DC,160,570,550,200,hKeyBoardDC,0,0,550,200,RGB(255,255,255));
   //画输入框
   TransparentBlt(hTemp1DC,330,510,300,65,hInputBoxDC,0,0,300,65,RGB(255,255,255));
   //设置字体     
   SetBkMode(hTemp1DC,TRANSPARENT);
		LOGFONT lf;
		ZeroMemory(&lf,sizeof(LOGFONT));   
		lf.lfWidth=20;
		lf.lfHeight=40;
		SetTextColor(hTemp1DC,RGB(200,0,0));
		lstrcpy(lf.lfFaceName,L"Impact");//必须是lstrcpy才行否则会出错
		HFONT hFont = CreateFontIndirect(&lf);
		SelectObject(hTemp1DC,hFont);
   TextOut(hTemp1DC,355,520,Password,Password.GetLength());
   DeleteObject(hFont);
    HPEN hPen = CreatePen(PS_SOLID,2,RGB(255,0,0));
	HPEN hOld = (HPEN)SelectObject(hTemp1DC,hPen);
	HBRUSH hBr = (HBRUSH)GetStockObject(HOLLOW_BRUSH);
	SelectObject(hTemp1DC,hBr);
	DeleteObject(hBr);
   if(rect_a==true)
   {
      Rectangle(hTemp1DC,221,680,240,700);
   }
    if(rect_s==true)
   {
      Rectangle(hTemp1DC,243,680,262,700);
   }
	 if(rect_n==true)
   {
      Rectangle(hTemp1DC,344,702,361,722);
   }
	  if(rect_u==true)
   {
      Rectangle(hTemp1DC,348,658,364,677);
   }
   //必须要删除才行
   SelectObject(hTemp1DC,hOld);
   DeleteObject(hPen);
   BitBlt(hdc,0,0,600,800,hTemp1DC,0,0,SRCCOPY);//第二次缓冲
	
	
	}
	else if(game_state==4)//第二关
  {
      
	  finish=clock();
	  Sleep(10);
	  //双缓冲
	  if(KEY_DOWN(VK_LEFT))
	  {
	     PosX-=4;	     
	  }
	  if(KEY_DOWN(VK_RIGHT))
	  {
	     PosX+=4;	     
	  }
	  if(KEY_DOWN(VK_UP))
	  {
	     PosY-=4;	     
	  }
	  if(KEY_DOWN(VK_DOWN))
	  {
	     PosY+=4;	     
	  }
	    
	   BitBlt(hTempDC,0,0,600,780,hLevel2BgDC,0,0,SRCCOPY);//加载背景
	   TransparentBlt(hTempDC,10,10,578,500,hTVDC,0,0,578,500,RGB(255,255,255));//加载电视
       TransparentBlt(hTempDC,PosX,PosY,25,25,hLevel2PlayerDC,0,0,25,25,RGB(255,255,255));//加载玩家	  
	   TransparentBlt(hTempDC,-20,450,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
	   TransparentBlt(hTempDC,55,580,200,222,hLevel2MMDC,0,0,200,222,RGB(0,0,0));	//加载面码
       if(music_state==1)//画音乐图标 
		TransparentBlt(hTempDC,12,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	   else
		TransparentBlt(hTempDC,12,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
	   //画时间
	   HFONT hfont=  CreateFont(40,25,0,0,0,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH, L"Agency FB");	     		  
	   SelectObject(hTempDC,hfont);
	   str_counter.Format(L"%dS",Level2_counter);
	   SetBkMode(hTempDC,TRANSPARENT);	   
	    SetTextColor(hTempDC,RGB(0,0,0));
       //画牌子
	   TransparentBlt(hTempDC,455,-5,150,110,hLevel2BoardDC,0,0,150,110,RGB(255,255,255));//加载牌子
       TextOut(hTempDC,510,40,str_counter,str_counter.GetLength());//打出时间
	   DeleteObject(hfont);
	 
	  if(finish-start>=2000)
	  {
	   for(i=0;i<5;i++)
	   {	  
		ball[i].x+=ball[i].dx;
		ball[i].y+=ball[i].dy;	
	   }
	  
	  }
	  for(i=0;i<5;i++)
	  {	  
	  TransparentBlt(hTempDC,ball[i].x,ball[i].y,25,25,hBallDC[i],0,0,25,25,RGB(255,255,255));	   
	     if(ball[i].x<=88||ball[i].x+25>=511)
		  ball[i].dx=-ball[i].dx;
	     if(ball[i].y<=75||ball[i].y+25>=381)
		  ball[i].dy=-ball[i].dy;
	   }		 
	 BitBlt(hdc,0,0,600,800,hTempDC,0,0,SRCCOPY);
  //玩家碰撞检测,不用鼠标消息时因为无法使得鼠标移出TV范围时游戏暂停，也就是随意
    CString str;
	int left_sec=20-Level2_counter;
	//胜利判断
	if(Level2_counter>=20||KEY_DOWN(VK_HOME))//要改为20秒
	{	
		MessageBox(hwnd,L"过关！漫长的20秒，不是吗？",L"恭喜",MB_OK);
		game_state=104;//第二关格言部分
		Level2_counter=0;//这句话必须得写上去，如果游戏状态不在第二关的话，该变量必须归零	
		s.insert(2);//第2关已过
		Ex_counter=0;//感叹号计时器归0，以便于下一次计时
		InvalidateRect(hwnd,NULL,true);
	}
	if(PosX<=78||PosX>=500||PosY<=65||PosY>=380)
	{
	              
				   str.Format(L"撞墙啦！你的成绩为%dS!再坚持%d秒就过关啦~",Level2_counter,left_sec);
	               MessageBox(hwnd,str,L"TAT",MB_OK);
				   PosX=288,PosY=225;//重置玩家位置
				   Level2_counter=0;//必须将其归零，否则时间会一直加下去
				   InvalidateRect(hwnd,NULL,false);				
	}
	 
	 for(int i=0;i<=4;i++)
			{
					
				RECT rect = {ball[i].x,ball[i].y,ball[i].x+25,ball[i].y+25};
				if((PosX+12-(ball[i].x+12))*(PosX+12-(ball[i].x+12))+(PosY+12-(ball[i].y+12))*(PosY+12-(ball[i].y+12))<=25*25)
				{
				   str.Format(L"撞到小球啦！你的成绩为%dS!再坚持%d秒就过关啦~",Level2_counter,left_sec);
				   MessageBox(hwnd,str,L"TAT",MB_OK);
				   PosX=288,PosY=225;//重置玩家位置
				   Level2_counter=0;
				   InvalidateRect(hwnd,NULL,false);				
				}
			    
			}

	}	    		  
///////////////////////////////////////////////////////////////////////////////////////////////////关卡分界线	 
	else	if(game_state==6)//第三关
	{
	   Sleep(10);
	  //7个区域
	 
	   /////测试用
	   POINT pCoin1={213+15,74+15};//金币中心点
	   POINT pCoin2={82+15,170+15};//金币中心点
	   POINT pCoin3={495+15,72+15};//金币中心点
	   POINT pSave1={90,270};//存盘点1中心点
	   RECT r_rect={66,58,525,365};//整个区域
	   RECT r1={66,136,162,163};//以下是不能碰的区域,也就是墙壁
	   RECT r2={153,251,273,277};
	   RECT r3={248,58,273,251};
	   RECT r4={361,164,384,365};
	   RECT r5={361,137,446,164};
	   RECT r6={440,250,525,276};
	   //下面是小洞中心点
	   POINT h1={92,212},h2={90,348},h3={303,267},h4={505,118},h5={224,227},h6={221,303},h7={301,91},h8={408,191},h9={412,348},Win={483,325};
	   POINT p1={PosX3,PosY3},p2={PosX3+20,PosY3+20},Player={PosX3+10,PosY3+10};//玩家左上角和右下角坐标
       //怪物1运动状态
	   POINT m1={Monster[0].x+12,Monster[0].y+12};//怪物1中心点
	   Monster[0].y+=Monster[0].dy;
	   if(Monster[0].y+25>=137)
		   Monster[0].dy=-Monster[0].dy;
	   if(Monster[0].y<=64)
		   Monster[0].dy=-Monster[0].dy;
	   //怪物2运动状态
	   POINT m2={Monster[1].x+12,Monster[1].y+12};//怪物2中心点
	   Monster[1].y+=Monster[1].dy;
	   if(Monster[1].y+25>=251)
		   Monster[1].dy=-Monster[1].dy;
	   if(Monster[1].y<=64)
		   Monster[1].dy=-Monster[1].dy;
	     //怪物3运动状态
	   POINT m3={Monster[2].x+12,Monster[2].y+12};//怪物3中心点
	   Monster[2].y+=Monster[2].dy;
	   if(Monster[2].y+25>=251)
		   Monster[2].dy=-Monster[2].dy;
	   if(Monster[2].y<=64)
		   Monster[2].dy=-Monster[2].dy;
	   //怪物4运动状态
	   POINT m4={Monster[3].x+12,Monster[3].y+12};//怪物4中心点
	   Monster[3].x+=Monster[3].dx;
	   if(Monster[3].x+25>=247)
		   Monster[3].dx=-Monster[3].dx;
	   if(Monster[3].x<=78)
		   Monster[3].dx=-Monster[3].dx;
	    //怪物5运动状态
	   POINT m5={Monster[4].x+12,Monster[4].y+12};//怪物5中心点
	   Monster[4].y+=Monster[4].dy;
	   if(Monster[4].y+25>=361)
		   Monster[4].dy=-Monster[4].dy;
	   if(Monster[4].y<=174)
		   Monster[4].dy=-Monster[4].dy;
	    //怪物6运动状态
	   POINT m6={Monster[5].x+12,Monster[5].y+12};//怪物6中心点
	   Monster[5].x+=Monster[5].dx;
	   if(Monster[5].x+25>=352)
		   Monster[5].dx=-Monster[5].dx;
	   if(Monster[5].x<=118)
		   Monster[5].dx=-Monster[5].dx;
	     //怪物7运动状态
	   POINT m7={Monster[6].x+12,Monster[6].y+12};//怪物7中心点
	   Monster[6].x+=Monster[6].dx;
	   if(Monster[6].x+25>=358)
		   Monster[6].dx=-Monster[6].dx;
	   if(Monster[6].x<=251)
		   Monster[6].dx=-Monster[6].dx;
	     //怪物8运动状态
	   POINT m8={Monster[7].x+12,Monster[7].y+12};//怪物8中心点
	   Monster[7].x+=Monster[7].dx;
	   if(Monster[7].x+25>=358)
		   Monster[7].dx=-Monster[7].dx;
	   if(Monster[7].x<=282)
		   Monster[7].dx=-Monster[7].dx;
	      //怪物9运动状态
	   POINT m9={Monster[8].x+12,Monster[8].y+12};//怪物9中心点
	   Monster[8].x+=Monster[8].dx;
	   if(Monster[8].x+25>=518)
		   Monster[8].dx=-Monster[8].dx;
	   if(Monster[8].x<=287)
		   Monster[8].dx=-Monster[8].dx;
	    //怪物10运动状态
	   POINT m10={Monster[9].x+12,Monster[9].y+12};//怪物10中心点
	   Monster[9].y+=Monster[9].dy;
	   if(Monster[9].y+25>=247)
		   Monster[9].dy=-Monster[9].dy;
	   if(Monster[9].y<=66)
		   Monster[9].dy=-Monster[9].dy;
	      //怪物11运动状态
	   POINT m11={Monster[10].x+12,Monster[10].y+12};//怪物11中心点
	   Monster[10].y+=Monster[10].dy;
	   if(Monster[10].y+25>=360)
		   Monster[10].dy=-Monster[10].dy;
	   if(Monster[10].y<=179)
		   Monster[10].dy=-Monster[10].dy;
	   //玩家碰到传送门
	    if(GamePointDistance(Player,h3,23))
		{
		  PosX3=290,PosY3=112;	
		}
	      
	   //玩家碰到小洞
	   if(GamePointDistance(Player,h1,23)||GamePointDistance(Player,h2,23)||GamePointDistance(Player,h4,23)||GamePointDistance(Player,h5,23)
		  ||GamePointDistance(Player,h6,23)||GamePointDistance(Player,h8,23)||GamePointDistance(Player,h9,23))
	  { 
	     death_level3++;
		 TransparentBlt(hdc,75,600,195,219,hLevel3FailDC,0,0,195,219,RGB(255,255,255));	  
		 MessageBox(hwnd,L"亚丝娜：看来你还不是我的对手！",L"TAT",MB_OK);
		if(flag_save1==false)//非存盘点出生
		{
			PosX3=93,PosY3=93;
		    flag_coin1=true;
		    flag_coin2=true;
		    flag_coin3=true;
		}
		else 
        {
			PosX3=80,PosY3=260;
			flag_coin3=true;
		}		
		
	  }
	   	   
	   //玩家碰到边界
	   if(PtInRect(&r_rect,p1)&&PtInRect(&r_rect,p2) && !PtInRect(&r1,p1)&&!PtInRect(&r1,p2)&&!PtInRect(&r2,p1)&&!PtInRect(&r2,p2)&&!PtInRect(&r3,p1)&&!PtInRect(&r3,p2)
		&&!PtInRect(&r4,p1)&&!PtInRect(&r4,p2)&&!PtInRect(&r5,p1)&&!PtInRect(&r5,p2)&&!PtInRect(&r6,p1)&&!PtInRect(&r6,p2))
	{
		  if(KEY_DOWN(VK_LEFT))
		  {
			 PosX3-=3;	     
		  }
		  if(KEY_DOWN(VK_RIGHT))
		  {
			 PosX3+=3;	     
		  }
		  if(KEY_DOWN(VK_UP))
		  {
			 PosY3-=3;	     
		  }
		  if(KEY_DOWN(VK_DOWN))
		  {
			 PosY3+=3;	     
		  }
	}
	else//玩家撞墙就重新归位
	{
	    death_level3++;
		TransparentBlt(hdc,75,600,195,219,hLevel3FailDC,0,0,195,219,RGB(255,255,255));	   
		MessageBox(hwnd,L"亚丝娜：呜呜呜，小猫又死了一次！",L"TAT",MB_OK);
		if(flag_save1==false)//存盘点出生
		{
		 PosX3=93,PosY3=93;
		 flag_coin1=true;
		 flag_coin2=true;
		 flag_coin3=true;
		}
		else 
        {PosX3=80,PosY3=260;flag_coin3=true;}
		
		
	}
	//玩家碰到存盘点
	if(GamePointDistance(Player,pSave1,30))
	{
	   flag_save1=true;
	}
   //玩家吃金币
   if(GamePointDistance(Player,pCoin1,25))
   {
      flag_coin1=false;//不能使用count++，因为会一直加下去
	 
   }
   if(GamePointDistance(Player,pCoin2,25))
   {
      flag_coin2=false;//不能使用count++，因为会一直加下去
	  
   }
   if(GamePointDistance(Player,pCoin3,25))
   {
      flag_coin3=false;//不能使用count++，因为会一直加下去
	  
   }
	//胜利判断 
   if((GamePointDistance(Player,Win,23)&&flag_coin1==false&&flag_coin2==false&&flag_coin3==false)||KEY_DOWN(VK_HOME))//玩家达到胜利区域并且金币吃够了
	{
	    death_level3=0;
		flag_coin1=true, flag_coin2=true, flag_coin3=true;//第三关金币标志变量 过关得重新设置这些变量,退出第三关也一样///////////////要改回来
		//重要：重置玩家位置,否则胜利后再进游戏，玩家直接胜利  
		PosX3=93,PosY3=93;
		MessageBox(hwnd,L"亚丝娜：终于送回家了呢~看来我小看你了！",L"LOL",MB_OK);
		s.insert(3);//第3关已过
		Ex_counter=0;//感叹号计时器归0，以便于下一次计时
		game_state=105;//进入第三关格言部分
		Level4_state=0;//进入第四关未开始游戏的状态
		InvalidateRect(hwnd,NULL,true);
		
	}
	//玩家碰到怪物1就重新来过,需要添加更多的怪物点
	if(GamePointDistance(Player,m1,22)||GamePointDistance(Player,m2,22)||GamePointDistance(Player,m3,22)||GamePointDistance(Player,m4,22)||GamePointDistance(Player,m5,22)
		||GamePointDistance(Player,m6,22)||GamePointDistance(Player,m7,22)||GamePointDistance(Player,m8,22)||GamePointDistance(Player,m9,22)||GamePointDistance(Player,m10,22)
		||GamePointDistance(Player,m11,22))
	{
	    death_level3++;
		TransparentBlt(hdc,75,600,195,219,hLevel3FailDC,0,0,195,219,RGB(255,255,255));	   
		MessageBox(hwnd,L"亚丝娜：汝等弱爆了！",L"TAT",MB_OK);
		if(flag_save1==false)//存盘点出生
		{
			PosX3=93,PosY3=93;/////////////////////////////////////////////////////////////////原来是93 93
			flag_coin1=true;//恢复金币
			flag_coin2=true;
			flag_coin3=true;
		}
		else 
        {
			PosX3=80,PosY3=260;flag_coin3=true;
		}
		
	}
	////////////////////////////////////画图函数
	   BitBlt(hTemp3DC,0,0,600,800,hLevel3BGDC,0,0,SRCCOPY);	
	   BitBlt(hTemp3DC,20,10,550,400,hLevel3FrameDC,0,0,SRCCOPY);//画游戏边框
	   BitBlt(hTemp3DC,45,35,500,352,hLevel3GameBoardDC,0,0,SRCCOPY);//画游戏board
	    if(music_state==1)//画音乐图标 
		TransparentBlt(hTemp3DC,12,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	   else
		TransparentBlt(hTemp3DC,12,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
	    TransparentBlt(hTemp3DC,-20,450,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
		//画1-10怪物
	   for(i=0;i<11;i++)
		TransparentBlt(hTemp3DC,Monster[i].x,Monster[i].y,25,25,hLevel3MonsterDC[i%4],0,0,25,25,RGB(255,255,255));
	  
	   //画金币
	   if(flag_coin1==true)
		   TransparentBlt(hTemp3DC,213,74,30,30,hLevel3CoinDC,0,0,30,30,RGB(255,255,255));
	   if(flag_coin2==true)
		   TransparentBlt(hTemp3DC,78,168,30,30,hLevel3CoinDC,0,0,30,30,RGB(255,255,255));
	   if(flag_coin3==true)
		   TransparentBlt(hTemp3DC,490,72,30,30,hLevel3CoinDC,0,0,30,30,RGB(255,255,255));
	   //画存盘点
	   TransparentBlt(hTemp3DC,70,250,40,37,hLevel3SaveDC,0,0,40,37,RGB(255,255,255));
       TransparentBlt(hTemp3DC,PosX3,PosY3,20,20,hLevel3PlayerDC,0,0,20,20,RGB(255,255,255));//加载玩家
	   TransparentBlt(hTemp3DC,0,360,150,110,hLevel2BoardDC,0,0,150,110,RGB(255,255,255));//加载死亡计数板
	   TransparentBlt(hTemp3DC,200,560,400,240,hLevel3AsunaDC,0,0,400,240,RGB(255,255,255));//加载亚丝娜
	   //打出死亡次数
	   HFONT hfont3=  CreateFont(20,10,0,0,0,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH, L"Agency FB");	     		  
	   SelectObject(hTemp3DC,hfont3);
	   SetBkMode(hTemp3DC,TRANSPARENT);	   
	   SetTextColor(hTemp3DC,RGB(0,0,0));
       TextOut(hTemp3DC,55,395,L"DEATH:",6);//打出DEATH
	   CString death;
	   death.Format(L"%d",death_level3);
	   TextOut(hTemp3DC,75,425,death,death.GetLength());//打出死亡次数
	   DeleteObject(hfont3);
	   
	   BitBlt(hdc,0,0,600,800,hTemp3DC,0,0,SRCCOPY);	    
	}
  ///////////////////////////////////////////////////////////////////////////////////////////////////关卡分界线
else if(game_state==8)//第四关
	{
	 
		if(Level4_state==0)//未开始游戏的状态
	  {
	    BitBlt(hTemp4DC,0,0,600,780,hLevel4BGDC,0,0,SRCCOPY);//画背景
		if(music_state==1)//画音乐图标 
		TransparentBlt(hTemp4DC,12,140,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
		else
		TransparentBlt(hTemp4DC,12,140,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
		TransparentBlt(hTemp4DC,-20,-60,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
		TransparentBlt(hTemp4DC,0,350,37,317,hLevel4TimeDC,0,0,37,317,RGB(255,255,255));	//加载时间槽
		//TransparentBlt(hTemp4DC,240,150,100,100,hLevel4StartDC,0,0,100,100,RGB(255,255,255));	//画开始游戏按钮
	  }
	
	  
			
	else if(Level4_state==1)//按下开始游戏的第一关
 {					
	    BitBlt(hTemp4DC,0,0,600,780,hLevel4BGDC,0,0,SRCCOPY);//画背景
		if(music_state==1)//画音乐图标 
		TransparentBlt(hTemp4DC,12,140,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
		else
		TransparentBlt(hTemp4DC,12,140,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
		TransparentBlt(hTemp4DC,-20,-60,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
		TransparentBlt(hTemp4DC,0,350,37,317,hLevel4TimeDC,0,0,37,317,RGB(255,255,255));	//加载时间槽
		  
		  
		  timebar_y=360+Level4_counter*0.375;//时间槽y坐标 是增长的
		   letter_x=row*50;//记录下空缺方格的坐标
		   letter_y=200+column*50;
		   for(int i=1;i<=10;i++)
			for(int j=1;j<=10;j++)
			{			  
			 if(!(i==row&&j==column))//画出除了特定方块外的全部方块
			  {				  
				  BitBlt(hTemp4DC,i*50,200+j*50,50,50,hLetterDC[b[i-1][j-1]],0,0,SRCCOPY);//画出一个字母方块
			  }		    		
			}		     
	  
	  BitBlt(hTemp4DC,letter_x,letter_y,50,50,hLetterDC[random_letter],0,0,SRCCOPY);//画出需要寻找的那个字母方块,这个字母只出现一个	
	  if(level4_board==true)//画出找字母的牌子
      TransparentBlt(hTemp4DC,220,150,150,85,hLevel4BoardDC,0,0,150,85,RGB(255,255,255));
	 
	  SetBkMode(hTemp4DC,TRANSPARENT);
	  LOGFONT lf;
		ZeroMemory(&lf,sizeof(LOGFONT));   
		lf.lfWidth=20;
		lf.lfHeight=40;
		SetTextColor(hTemp4DC,RGB(255,0,0));
		lstrcpy(lf.lfFaceName,L"Impact");//必须是lstrcpy才行否则会出错
		HFONT hFont = CreateFontIndirect(&lf);
		SelectObject(hTemp4DC,hFont);
	  CString str,str1;
	  str.Format(L"%c",'A'+random_letter);
	  str1.Format(L"Level %d",Level4_state);
	  TextOut(hTemp4DC,320,195,str,str.GetLength());//打出要找的字母
	  TextOut(hTemp4DC,230,155,str1,str1.GetLength());//打出具体关卡数1-3
	  DeleteObject(hFont);
	 //快到deadline时显示出没找到的字母
    if(Level4_counter>=790)
	{
	   zoom_flag=true;
	}
	  //胜失败条件判断
	if(Level4_counter>=800)//8秒之后未找到字母
	{
	   
		MessageBox(hwnd,L"桐乃我可是宇宙第一千里眼，服不服？",L"TAT",MB_OK);
		zoom_flag=false;
		Level4_counter=0;
		timebar_y=360;
		Level4_state=0;
		flag_level4_start=false;
		level4_board=false;
		
	}
	
	  
}
	else if(Level4_state==2)//按下开始游戏后第二关
	{
	    BitBlt(hTemp4DC,0,0,600,780,hLevel4BGDC,0,0,SRCCOPY);//画背景
		if(music_state==1)//画音乐图标 
		TransparentBlt(hTemp4DC,12,140,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
		else
		TransparentBlt(hTemp4DC,12,140,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
		TransparentBlt(hTemp4DC,-20,-60,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
		TransparentBlt(hTemp4DC,0,350,37,317,hLevel4TimeDC,0,0,37,317,RGB(255,255,255));	//加载时间槽
		  
		  
		  timebar_y=360+Level4_counter*0.6;//时间槽y坐标 是增长的
		   letter_x=row*50;//记录下空缺方格的坐标
		   letter_y=200+column*50;
		   for(int i=1;i<=10;i++)
			for(int j=1;j<=10;j++)
			{			  
			 if(!(i==row&&j==column))//画出除了特定方块外的全部方块
			  {				  
				  BitBlt(hTemp4DC,i*50,200+j*50,50,50,hLetterDC[b[i-1][j-1]],0,0,SRCCOPY);//画出一个字母方块
			  }		    		
			}		     
	  
	  BitBlt(hTemp4DC,letter_x,letter_y,50,50,hLetterDC[random_letter],0,0,SRCCOPY);//画出需要寻找的那个字母方块,这个字母只出现一个	
	  if(level4_board==true)//画出找字母的牌子
      TransparentBlt(hTemp4DC,220,150,150,85,hLevel4BoardDC,0,0,150,85,RGB(255,255,255));
	 
	  SetBkMode(hTemp4DC,TRANSPARENT);
	  LOGFONT lf;
		ZeroMemory(&lf,sizeof(LOGFONT));   
		lf.lfWidth=20;
		lf.lfHeight=40;
		SetTextColor(hTemp4DC,RGB(255,0,0));
		lstrcpy(lf.lfFaceName,L"Impact");//必须是lstrcpy才行否则会出错
		HFONT hFont = CreateFontIndirect(&lf);
		SelectObject(hTemp4DC,hFont);
	  CString str,str1;
	  str.Format(L"%c",'A'+random_letter);
	  str1.Format(L"Level %d",Level4_state);
	  TextOut(hTemp4DC,320,195,str,str.GetLength());//打出要找的字母
	  TextOut(hTemp4DC,230,155,str1,str1.GetLength());//打出具体关卡数1-3
	  DeleteObject(hFont);
	 //快到deadline时显示出没找到的字母
    if(Level4_counter>=490)
	{
	   zoom_flag=true;
	}
	  //胜失败条件判断
	if(Level4_counter>=500)//5秒之后未找到字母
	{
	   
		MessageBox(hwnd,L"桐乃我可是宇宙第一千里眼，服不服？",L"TAT",MB_OK);
		zoom_flag=false;
		Level4_counter=0;
		timebar_y=360;
		Level4_state=0;
		flag_level4_start=false;
		level4_board=false;
		
	}
			
	}
	
	else if(Level4_state==3)//按下开始游戏的第3关
	{
	 BitBlt(hTemp4DC,0,0,600,780,hLevel4BGDC,0,0,SRCCOPY);//画背景
		if(music_state==1)//画音乐图标 
		TransparentBlt(hTemp4DC,12,140,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
		else
		TransparentBlt(hTemp4DC,12,140,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
		TransparentBlt(hTemp4DC,-20,-60,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
		TransparentBlt(hTemp4DC,0,350,37,317,hLevel4TimeDC,0,0,37,317,RGB(255,255,255));	//加载时间槽
		  
		  
		  timebar_y=360+Level4_counter*1.5;//时间槽y坐标 是增长的
		   letter_x=row*50;//记录下空缺方格的坐标
		   letter_y=200+column*50;
		   for(int i=1;i<=10;i++)
			for(int j=1;j<=10;j++)
			{			  
			 if(!(i==row&&j==column))//画出除了特定方块外的全部方块
			  {				  
				  BitBlt(hTemp4DC,i*50,200+j*50,50,50,hLetterDC[b[i-1][j-1]],0,0,SRCCOPY);//画出一个字母方块
			  }		    		
			}		     
	  
	  BitBlt(hTemp4DC,letter_x,letter_y,50,50,hLetterDC[random_letter],0,0,SRCCOPY);//画出需要寻找的那个字母方块,这个字母只出现一个	
	  if(level4_board==true)//画出找字母的牌子
      TransparentBlt(hTemp4DC,220,150,150,85,hLevel4BoardDC,0,0,150,85,RGB(255,255,255));
	 
	  SetBkMode(hTemp4DC,TRANSPARENT);
	  LOGFONT lf;
		ZeroMemory(&lf,sizeof(LOGFONT));   
		lf.lfWidth=20;
		lf.lfHeight=40;
		SetTextColor(hTemp4DC,RGB(255,0,0));
		lstrcpy(lf.lfFaceName,L"Impact");//必须是lstrcpy才行否则会出错
		HFONT hFont = CreateFontIndirect(&lf);
		SelectObject(hTemp4DC,hFont);
	  CString str,str1;
	  str.Format(L"%c",'A'+random_letter);
	  str1.Format(L"Level %d",Level4_state);
	  TextOut(hTemp4DC,320,195,str,str.GetLength());//打出要找的字母
	  TextOut(hTemp4DC,230,155,str1,str1.GetLength());//打出具体关卡数1-3
	  DeleteObject(hFont);
	 //快到deadline时显示出没找到的字母
    if(Level4_counter>=190)
	{
	   zoom_flag=true;
	}
	  //胜失败条件判断
	if(Level4_counter>=200)//2秒之后未找到字母,原来为200//////////////////////////////////////////////////////////////////////////////要修改的，现在测试用
	{
	   
		MessageBox(hwnd,L"桐乃我可是宇宙第一千里眼，服不服？",L"TAT",MB_OK);
		zoom_flag=false;
		Level4_counter=0;
		timebar_y=360;
		Level4_state=0;
		flag_level4_start=false;
		level4_board=false;
		
	}
	
	}
	 if(flag_level4_start==false)//点击开始按钮后按钮消失
      TransparentBlt(hTemp4DC,240,150,100,100,hLevel4StartDC,0,0,100,100,RGB(255,255,255));
     //点击start后显示字母牌子	
	  //时间槽减少效果,必须在这个双缓冲里进行，不能再paint中进行
	  HPEN hpen = CreatePen(PS_NULL,1,RGB(0,0,0));//去掉矩形边框
	  SelectObject(hTemp4DC,hpen);
	  LOGBRUSH lb={BS_SOLID,RGB(255,255,0)};//画出黄色的时间槽
	  HBRUSH hbr =(HBRUSH)CreateBrushIndirect(&lb);
	  SelectObject(hTemp4DC,hbr);
	  Rectangle(hTemp4DC,13,timebar_y,23,660);
	  DeleteObject(hbr);//必须要有delete，否则出现不可预知的错误
	  DeleteObject(hpen);

	  if(zoom_flag==true)//画出放大镜找到的字母
		  TransparentBlt(hTemp4DC,letter_x-20,letter_y-20,139,102,hLevel4ZoomDC,0,0,139,102,RGB(255,255,255));

	 // 画出桐乃
	 TransparentBlt(hTemp4DC,380,5,128,180,hLevel4TNDC,0,0,128,180,RGB(255,255,255));
	  BitBlt(hdc,0,0,600,800,hTemp4DC,0,0,SRCCOPY);//第二次缓冲
	}
//////////////////////////////////////////////////////////////////////关卡分界线，第5关
	else if(game_state==10)
	{
	 BitBlt(hTemp5DC,0,0,600,780,hLevel5BGDC,0,0,SRCCOPY);  //画背景
	 
	if(music_state==1)//画音乐图标 
		TransparentBlt(hTemp5DC,12,140,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	else
		TransparentBlt(hTemp5DC,12,140,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
	TransparentBlt(hTemp5DC,-20,-60,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
	
	if(Level5_final_animation==false)//最后一页动画播放标志变量)
	{
	if(Lv5_whql_animation_done==true)//当五河动画放完后再播放卷轴动画，从而有先后顺序
	{
		roll_x-=0.01;
	    if(roll_x<=0)
	    { 
			Lv5_dialog1=true;//第一页对话标志变量为真
			roll_x=0;
		}
		BitBlt(hTemp5DC,roll_x,560,600,200,hLevel5DialogDC,0,0,SRCCOPY);  //画对话框
	}
	
	BitBlt(hTemp5DC,580,545,20,230,hLevel5RollDC,0,0,SRCCOPY);  //画卷轴
	
	   whql_x+=Lv5_counter_whql*0.3;//0.3为速度因子,越小越慢
	   if(whql_x>=-20)
	   {   
		   Lv5_whql_animation_done=true;//动画放完了
		   whql_x-=Lv5_counter_whql*0.3;//为了使得琴里保持不动  
	   }	
	   TransparentBlt(hTemp5DC,whql_x,480,300,329,hLevel5QLDC,0,0,300,329,RGB(0,0,0));//画五河琴里
	}
	
	if(Level5_state==0)//第一页对话
	{
		if(Level5_Picture==false)
			TransparentBlt(hTemp5DC,50,0,500,383,hLevel5Pic,0,0,500,383,RGB(255,255,255));
		else
			TransparentBlt(hTemp5DC,50,0,500,383,hLevel5Pic_Transformed,0,0,500,383,RGB(255,255,255));
		if(Lv5_dialog1==true)//第五关第一页对话
				  {
				    		
					LOGFONT lf;
					ZeroMemory(&lf,sizeof(LOGFONT));   
					//这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
					HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
					SetTextColor(hTemp5DC,RGB(0,0,0));
				    SelectObject(hTemp5DC,hfont);
				    SetBkMode(hTemp5DC,TRANSPARENT);
													
					TextOut(hTemp5DC,320,620,Level5Dialog1_1,Level5Dialog1_1.GetLength());
					TextOut(hTemp5DC,320,650,Level5Dialog1_2,Level5Dialog1_2.GetLength());
					TextOut(hTemp5DC,320,680,Level5Dialog1_3,Level5Dialog1_3.GetLength());
		
					DeleteObject(hfont);
					TransparentBlt(hTemp5DC,520,680,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标
				
				  }
    }

	else if(Level5_state==1)//第二页对话
	{
					if(Level5_Picture==false)
						TransparentBlt(hTemp5DC,50,0,500,383,hLevel5Pic,0,0,500,383,RGB(255,255,255));
					else
						TransparentBlt(hTemp5DC,50,0,500,383,hLevel5Pic_Transformed,0,0,500,383,RGB(255,255,255)); 
		            LOGFONT lf;
					ZeroMemory(&lf,sizeof(LOGFONT));   
					//这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
					HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
					SetTextColor(hTemp5DC,RGB(0,0,0));
				    SelectObject(hTemp5DC,hfont);
				    SetBkMode(hTemp5DC,TRANSPARENT);
													
					TextOut(hTemp5DC,320,600,Level5Dialog2_1,Level5Dialog2_1.GetLength());
					TextOut(hTemp5DC,320,630,Level5Dialog2_2,Level5Dialog2_2.GetLength());
					TextOut(hTemp5DC,320,660,Level5Dialog2_3,Level5Dialog2_3.GetLength());
					TextOut(hTemp5DC,320,700,Level5Dialog2_4,Level5Dialog2_4.GetLength());
		            //选择画笔，未保存原来画笔，以后可能要回来修改的
					DeleteObject(hfont);
	                HPEN hPen = CreatePen(PS_SOLID,2,RGB(0,255,0));
					HPEN hOld = (HPEN)SelectObject(hTemp5DC,hPen);
					HBRUSH hBr = (HBRUSH)GetStockObject(HOLLOW_BRUSH);
					SelectObject(hTemp5DC,hBr);
					DeleteObject(hBr);
					if(Level5_same==true)//显示选择一样时的方框
					{
					  Rectangle(hTemp5DC,400,700,450,720);					
					}
					if(Level5_notsame==true)//显示选择不一样的方框
					{
					  Rectangle(hTemp5DC,460,700,530,720);					
					}
	                SelectObject(hTemp5DC,hOld);
	                DeleteObject(hPen);
	
	}
	else if(Level5_state==2)
	{
	   			if(Level5_Picture==false)
					TransparentBlt(hTemp5DC,50,0,500,383,hLevel5Pic,0,0,500,383,RGB(255,255,255));
				else
					TransparentBlt(hTemp5DC,50,0,500,383,hLevel5Pic_Transformed,0,0,500,383,RGB(255,255,255));
					LOGFONT lf;
					ZeroMemory(&lf,sizeof(LOGFONT));   
					//这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
					HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
					SetTextColor(hTemp5DC,RGB(0,0,0));
				    SelectObject(hTemp5DC,hfont);
				    SetBkMode(hTemp5DC,TRANSPARENT);
													
					TextOut(hTemp5DC,320,590,Level5Dialog3_1,Level5Dialog3_1.GetLength());
					TextOut(hTemp5DC,320,620,Level5Dialog3_2,Level5Dialog3_2.GetLength());
					TextOut(hTemp5DC,320,650,Level5Dialog3_3,Level5Dialog3_3.GetLength());
					TextOut(hTemp5DC,320,680,Level5Dialog3_4,Level5Dialog3_4.GetLength());
					TextOut(hTemp5DC,320,710,Level5Dialog3_5,Level5Dialog3_5.GetLength());
					DeleteObject(hfont);
					TransparentBlt(hTemp5DC,540,706,30,30,hLevel5ButtonDC,0,0,30,30,RGB(255,255,255));//画按钮
					
	
	}
	else if(Level5_state==3)//图片变化了后的对话，也就是第4页
	{
					if(Level5_Picture==false)
						TransparentBlt(hTemp5DC,50,0,500,383,hLevel5Pic,0,0,500,383,RGB(255,255,255));
					else
						TransparentBlt(hTemp5DC,50,0,500,383,hLevel5Pic_Transformed,0,0,500,383,RGB(255,255,255));
	                LOGFONT lf;
					ZeroMemory(&lf,sizeof(LOGFONT));   
					//这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
					HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
					SetTextColor(hTemp5DC,RGB(0,0,0));
				    SelectObject(hTemp5DC,hfont);
				    SetBkMode(hTemp5DC,TRANSPARENT);
													
					TextOut(hTemp5DC,320,590,Level5Dialog4_1,Level5Dialog4_1.GetLength());
					TextOut(hTemp5DC,320,620,Level5Dialog4_2,Level5Dialog4_2.GetLength());
					TextOut(hTemp5DC,320,650,Level5Dialog4_3,Level5Dialog4_3.GetLength());
					TextOut(hTemp5DC,320,680,Level5Dialog4_4,Level5Dialog4_4.GetLength());
					DeleteObject(hfont);
	                TransparentBlt(hTemp5DC,540,706,30,30,hLevel5ButtonDC,0,0,30,30,RGB(255,255,255));//画按钮
					TransparentBlt(hTemp5DC,320,700,40,40,hLevel5ArrowDC,0,0,40,40,RGB(255,255,255));//画箭头
					
	}
	else if(Level5_state==4)//最后一页咯
	{
	            
		            LOGFONT lf;
					ZeroMemory(&lf,sizeof(LOGFONT));   
					//这个函数能有有效改变字体大小，而下面的函数不行，还不知道为啥呢
					HFONT hfont=  CreateFont(20,10,0,0,700,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");	     		  
					SetTextColor(hTemp5DC,RGB(0,0,0));
				    SelectObject(hTemp5DC,hfont);
				    SetBkMode(hTemp5DC,TRANSPARENT);
													
					TextOut(hTemp5DC,320,590,Level5Dialog5_1,Level5Dialog5_1.GetLength());
					TextOut(hTemp5DC,320,620,Level5Dialog5_2,Level5Dialog5_2.GetLength());
					TextOut(hTemp5DC,320,650,Level5Dialog5_3,Level5Dialog5_3.GetLength());
					DeleteObject(hfont);
					TransparentBlt(hTemp5DC,520,680,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标
	
	
	}
	else if(Level5_state==5)//最终界面	
	{
	if(Lv5_whql_animation_done==true)//当五河动画放完后再播放卷轴动画，从而有先后顺序
	{
		roll_x1-=1;
	    if(roll_x1<=0)
	    { 
			roll_x1=0;
		}
	 BitBlt(hTemp5DC,roll_x1,0,600,780,hLevel5BGDC,0,0,SRCCOPY);  //画对话框
	}   
	  
	   whql_x1-=Lv5_counter_whql*0.3;//0.3为速度因子,越小越慢,不能还是原来的whql_x，必须另外设一个变量
	   if(whql_x1<=-320)
	   {   
		   Lv5_whql_animation_done=true;//动画放完了
		   whql_x1=-320;//为了使得琴里保持不动  
	   }	
	   TransparentBlt(hTemp5DC,whql_x1,480,300,329,hLevel5QLDC,0,0,300,329,RGB(0,0,0));//画五河琴里
	for(int i=0;i<Level5_Motto;i++)
	 TransparentBlt(hTemp5DC,100+60*i,300,60,60,hLevel5MottoDC[i],0,0,60,60,RGB(255,255,255));	//毛笔字
	if(Level5_Motto_done==true)//7个毛笔字写完后的标志变量)
	{
		TextOut(hTemp5DC,70,380,Level5Motto,Level5Motto.GetLength());
		TransparentBlt(hTemp5DC,500,700,60,60,hLevel5MouseDC,0,0,60,60,RGB(255,255,255));//滑鼠标
	
	}
	
	}

	if(music_state==1)//画音乐图标 
		TransparentBlt(hTemp5DC,12,140,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	else
		TransparentBlt(hTemp5DC,12,140,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
	TransparentBlt(hTemp5DC,-20,-60,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
	
	BitBlt(hdc,0,0,600,800,hTemp5DC,0,0,SRCCOPY);//第二次缓冲
  }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////关卡分界线//
else if(game_state==12)//第六关
  {
     
	  SetBkMode(hTemp6DC,TRANSPARENT);
	  LOGFONT lf;
	  ZeroMemory(&lf,sizeof(LOGFONT));   
	  HFONT hfont=  CreateFont(20,10,0,0,500,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"Impact");
	  SetTextColor(hTemp6DC,RGB(237,28,36));
	  SelectObject(hTemp6DC,hfont);
	  BitBlt(hTemp6DC,0,0,600,800,hLevel6BGDC,0,0,SRCCOPY);
   	if(music_state==1)		//画音乐图标 
		TransparentBlt(hTemp6DC,12,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	   else
		TransparentBlt(hTemp6DC,12,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
	  //回到主菜单 牌子
	  TransparentBlt(hTemp6DC,-20,490,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
   TransparentBlt(hTemp6DC,100,60,400,400,hLevel6GridDC,0,0,400,400,RGB(255,255,255));	//加载填字格子
   TransparentBlt(hTemp6DC,385,528,140,130,hLevel6SXDC,0,0,140,130,RGB(255,255,255));	//加载十香
  
   for(int i=0;i<10;i++)
	   for(int j=0;j<10;j++)
	   { 
		   if(grid_letter[i][j]!=L'0'&&grid_letter[i][j]!='  ')//2个空格保证打出的是空白，否则出错
	       {
		     if(grid_letter[i][j]>='A'&&grid_letter[i][j]<='Z')//选择字体，英文
			 {
			    LOGFONT lf;
	            ZeroMemory(&lf,sizeof(LOGFONT));   
	            HFONT hfont=  CreateFont(20,10,0,0,500,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"Impact");
	            SetTextColor(hTemp6DC,RGB(237,28,36));
	            SelectObject(hTemp6DC,hfont);
			    CString str;
		        str.Format(L"%c",grid_letter[i][j]);		  
		        TextOut(hTemp6DC,110+i*40,75+j*40,str,str.GetLength());	
			    DeleteObject(hfont);
			 }
			 else
			 {
			    LOGFONT lf;
	            ZeroMemory(&lf,sizeof(LOGFONT));   
	            HFONT hfont=  CreateFont(18,11,0,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	            SetTextColor(hTemp6DC,RGB(255,127,39));
	            SelectObject(hTemp6DC,hfont);		 
			    CString str;
		        str.Format(L"%c",grid_letter[i][j]);		  
		        TextOut(hTemp6DC,110+i*40,75+j*40,str,str.GetLength());
			    DeleteObject(hfont);
			 }			 
	       }
	   }
      DeleteObject(hfont);
	  ZeroMemory(&lf,sizeof(LOGFONT));   
	  HFONT hfont1=  CreateFont(20,10,0,0,500,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"微软雅黑");
	  SetTextColor(hTemp6DC,RGB(0,0,0));
	  SelectObject(hTemp6DC,hfont1);
//////////////////////////////////////////////下面是成功填出一个条目之后显示正确答案
   
   if(grid_letter[0][0]==L'X'&&grid_letter[0][2]==L'G'&&grid_letter[0][1]==L'B')
   {
     
		   grid_letter[0][0]=L'学';//必须加L就可以产生汉子了
           grid_letter[0][1]=L'霸';
	       grid_letter[0][2]=L'狗';
		  
   }
    if(grid_letter[1][0]==L'C'&&grid_letter[1][1]==L'W')
   {
      grid_letter[1][0]=L'厨';//必须加L就可以产生汉子了
      grid_letter[1][1]=L'王';	 
   }
	if(grid_letter[3][0]==L'L'&&grid_letter[4][0]==L'B'&&grid_letter[5][0]==L'X'&&grid_letter[6][0]==L'X')
   {
    
		   grid_letter[3][0]=L'腊';//必须加L就可以产生汉子了
           grid_letter[4][0]=L'笔';
	       grid_letter[5][0]=L'小';//必须加L就可以产生汉子了
           grid_letter[6][0]=L'新';	 
   }
	 if(grid_letter[5][0]==L'X'&&grid_letter[5][1]==L'H'&&grid_letter[5][2]==L'M')
   {
      grid_letter[5][0]=L'小';//必须加L就可以产生汉子了
      grid_letter[5][1]=L'黑';
	  grid_letter[5][2]=L'猫';
   }
   if(grid_letter[8][0]==L'Y'&&grid_letter[8][1]==L'C')
   {
      grid_letter[8][0]=L'杨';//必须加L就可以产生汉子了
      grid_letter[8][1]=L'春';	 
   }
    if(grid_letter[8][0]==L'Y'&&grid_letter[9][0]==L'M')
   {
      grid_letter[8][0]=L'杨';//必须加L就可以产生汉子了
      grid_letter[9][0]=L'幂';	 
   }
	if(grid_letter[0][1]==L'B'&&grid_letter[1][1]==L'W'&&grid_letter[2][1]==L'N'&&grid_letter[3][1]==L'R')
   {
     
		  grid_letter[0][1]=L'霸';//必须加L就可以产生汉子了
          grid_letter[1][1]=L'王';
	      grid_letter[2][1]=L'牛';//必须加L就可以产生汉子了
          grid_letter[3][1]=L'肉';	
	  
   }
   if(grid_letter[3][0]==L'L'&&grid_letter[3][1]==L'R')
   {	  
		  grid_letter[3][0]=L'腊';//必须加L就可以产生汉子了
          grid_letter[3][1]=L'肉';	
   }
    if(grid_letter[2][1]==L'N'&&grid_letter[2][2]==L'B'&&grid_letter[2][3]==L'S')
   {
      grid_letter[2][1]=L'牛';//必须加L就可以产生汉子了
      grid_letter[2][2]=L'逼';
	  grid_letter[2][3]=L'森';
   }
	 if(grid_letter[6][1]==L'Z'&&grid_letter[7][1]==L'Q'&&grid_letter[8][1]==L'C')
   {
      grid_letter[6][1]=L'致';//必须加L就可以产生汉子了
      grid_letter[7][1]=L'青';
	  grid_letter[8][1]=L'春';
   } 
  if(grid_letter[7][1]==L'Q'&&grid_letter[7][2]==L'C'&&grid_letter[7][3]==L'S')
   {
      grid_letter[7][1]=L'青';//必须加L就可以产生汉子了
      grid_letter[7][2]=L'城';
	  grid_letter[7][3]=L'山';
   }
   if(grid_letter[4][2]==L'T'&&grid_letter[5][2]==L'M'&&grid_letter[6][2]==L'S'&&grid_letter[7][2]==L'C')
   {
      grid_letter[4][2]=L'天';//必须加L就可以产生汉子了
      grid_letter[5][2]=L'猫';
	  grid_letter[6][2]=L'商';
	  grid_letter[7][2]=L'城';
   }
     if(grid_letter[9][2]==L'B'&&grid_letter[9][3]==L'J')
   {
      grid_letter[9][2]=L'保';//必须加L就可以产生汉子了
      grid_letter[9][3]=L'健';	 
   }
   if(grid_letter[2][3]==L'S'&&grid_letter[3][3]==L'L')
   {
      grid_letter[2][3]=L'森';//必须加L就可以产生汉子了
      grid_letter[3][3]=L'林';	 
   }
   if(grid_letter[3][3]==L'L'&&grid_letter[3][4]==L'S'&&grid_letter[3][5]==L'F')
   {
      grid_letter[3][3]=L'林';//必须加L就可以产生汉子了
      grid_letter[3][4]=L'师';
	  grid_letter[3][5]=L'傅';
   }
    if(grid_letter[7][3]==L'S'&&grid_letter[8][3]==L'X'&&grid_letter[9][3]==L'J')
   {
      grid_letter[7][3]=L'山';//必须加L就可以产生汉子了
      grid_letter[8][3]=L'形';
	  grid_letter[9][3]=L'健';
   }
	 if(grid_letter[8][3]==L'X'&&grid_letter[8][4]==L'E'&&grid_letter[8][5]==L'S'&&grid_letter[8][6]==L'X')
   {
      grid_letter[8][3]=L'形';//必须加L就可以产生汉子了
      grid_letter[8][4]=L'而';
	  grid_letter[8][5]=L'上';
	  grid_letter[8][6]=L'学';
   }
   if(grid_letter[0][4]==L'W'&&grid_letter[1][4]==L'S')
   {
      grid_letter[0][4]=L'王';//必须加L就可以产生汉子了
      grid_letter[1][4]=L'水';	 
   }
     if(grid_letter[1][4]==L'S'&&grid_letter[1][5]==L'M'&&grid_letter[1][6]==L'H')
   {
      grid_letter[1][4]=L'水';//必须加L就可以产生汉子了
      grid_letter[1][5]=L'墨';
	  grid_letter[1][6]=L'画';
   }
  if(grid_letter[5][4]==L'Z'&&grid_letter[5][5]==L'Y')
   {
      grid_letter[5][4]=L'直';//必须加L就可以产生汉子了
      grid_letter[5][5]=L'叶';	 
   }
  if(grid_letter[5][4]==L'Z'&&grid_letter[6][4]==L'N')
   {
      grid_letter[5][4]=L'直';//必须加L就可以产生汉子了
      grid_letter[6][4]=L'男';	 
   }
     if(grid_letter[3][5]==L'F'&&grid_letter[4][5]==L'L'&&grid_letter[5][5]==L'Y')
   {
      grid_letter[3][5]=L'傅';//必须加L就可以产生汉子了
      grid_letter[4][5]=L'里';
	  grid_letter[5][5]=L'叶';
   }
  if(grid_letter[4][5]==L'L'&&grid_letter[4][6]==L'Y'&&grid_letter[4][7]==L'R'&&grid_letter[4][8]==L'N'&&grid_letter[4][9]==L'L')
   {
      grid_letter[4][5]=L'里';//必须加L就可以产生汉子了
      grid_letter[4][6]=L'约';
	  grid_letter[4][7]=L'热';
	  grid_letter[4][8]=L'内';
	  grid_letter[4][9]=L'卢';
   }
  if(grid_letter[7][5]==L'B'&&grid_letter[7][6]==L'H'&&grid_letter[7][7]==L'G'&&grid_letter[7][8]==L'X')
   {
      grid_letter[7][5]=L'北';//必须加L就可以产生汉子了
      grid_letter[7][6]=L'回';
	  grid_letter[7][7]=L'归';
	  grid_letter[7][8]=L'线';	  
   }
   if(grid_letter[7][5]==L'B'&&grid_letter[8][5]==L'S'&&grid_letter[9][5]==L'G')
   {
      grid_letter[7][5]=L'北';//必须加L就可以产生汉子了
      grid_letter[8][5]=L'上';
	  grid_letter[9][5]=L'广';	 
   }
     if(grid_letter[1][6]==L'H'&&grid_letter[2][6]==L'X')
   {
      grid_letter[1][6]=L'画';//必须加L就可以产生汉子了
      grid_letter[2][6]=L'心';
	 
   }
   if(grid_letter[2][6]==L'X'&&grid_letter[2][7]==L'K'&&grid_letter[2][8]==L'T'&&grid_letter[2][9]==L'P')
   {
      grid_letter[2][6]=L'心';//必须加L就可以产生汉子了
      grid_letter[2][7]=L'宽';
	  grid_letter[2][8]=L'体';
	  grid_letter[2][9]=L'胖';	  
   }
    if(grid_letter[6][6]==L'G'&&grid_letter[7][6]==L'H'&&grid_letter[8][6]==L'X'&&grid_letter[9][6]==L'X')
   {
      grid_letter[6][6]=L'滚';//必须加L就可以产生汉子了
      grid_letter[7][6]=L'回';
	  grid_letter[8][6]=L'学';
	  grid_letter[9][6]=L'校';	  
   }
	 if(grid_letter[0][7]==L'N'&&grid_letter[0][8]==L'B'&&grid_letter[0][9]==L'J')
   {
      grid_letter[0][7]=L'脑';//必须加L就可以产生汉子了
      grid_letter[0][8]=L'白';
	  grid_letter[0][9]=L'金';	 
   }
   if(grid_letter[4][7]==L'R'&&grid_letter[5][7]==L'H')
   {
      grid_letter[4][7]=L'热';//必须加L就可以产生汉子了
      grid_letter[5][7]=L'火';
   }
    if(grid_letter[9][7]==L'M'&&grid_letter[9][8]==L'X'&&grid_letter[9][9]==L'T')
   {
      grid_letter[9][7]=L'马';//必须加L就可以产生汉子了
      grid_letter[9][8]=L'戏';
	  grid_letter[9][9]=L'团';	 
   }
	  if(grid_letter[2][8]==L'T'&&grid_letter[3][8]==L'Z'&&grid_letter[4][8]==L'N')
   {
      grid_letter[2][8]=L'体';//必须加L就可以产生汉子了
      grid_letter[3][8]=L'制';
	  grid_letter[4][8]=L'内';	 
   }
   if(grid_letter[6][8]==L'D'&&grid_letter[6][9]==L'Q')
   {
      grid_letter[6][8]=L'断';//必须加L就可以产生汉子了
      grid_letter[6][9]=L'桥';
   }
   	  if(grid_letter[6][8]==L'D'&&grid_letter[7][8]==L'X'&&grid_letter[8][8]==L'O'&&grid_letter[9][8]==L'X')
   {
      grid_letter[6][8]=L'断';//必须加L就可以产生汉子了
      grid_letter[7][8]=L'线';
	  grid_letter[8][8]=L'偶';	
	  grid_letter[9][8]=L'戏';	
   }
  if(grid_letter[0][9]==L'J'&&grid_letter[1][9]==L'S'&&grid_letter[2][9]==L'P')
   {
      grid_letter[0][9]=L'金';//必须加L就可以产生汉子了
      grid_letter[1][9]=L'三';
	  grid_letter[2][9]=L'胖';	 
   }
   if(grid_letter[4][9]==L'L'&&grid_letter[5][9]==L'G'&&grid_letter[6][9]==L'Q')
   {
      grid_letter[4][9]=L'卢';//必须加L就可以产生汉子了
      grid_letter[5][9]=L'沟';
	  grid_letter[6][9]=L'桥';	 
   }
	  
	  
//////////////////////////////////////////////////////////////
  if(grid[0][0]==true)/////////////////////////////以下是各个方块的描述
   {
	 TransparentBlt(hTemp6DC,145,530,160,102,hLevel6AnswerDC[0],0,0,160,102,RGB(255,255,255));	//加载狗
	 TextOut(hTemp6DC,120,660,L"纵1：电子科大著名的一只狗",13);
   }
  if(grid[0][1]==true)
  {
     TextOut(hTemp6DC,130,550,L"横一： 电子科大学子餐厅",12);
	 TextOut(hTemp6DC,130,570,L"3道牛肉菜之一，应该吃过",12);
	 TextOut(hTemp6DC,130,590,L"没吃过速度撞墙去！",9);
  }
  if(grid[1][0]==true)
  {
     TextOut(hTemp6DC,130,550,L"纵4： 电子科大清水河畔",12);  
	 TextOut(hTemp6DC,130,570,L"第一届__争霸赛， 2个字",13);
	 TextOut(hTemp6DC,130,590,L"常水河畔的肯定知道！",10);
  }
   if(grid[3][0]==true)
  {
     TextOut(hTemp6DC,130,550,L"纵3: 毛爷爷的别称,作死向",14);  
	 TextOut(hTemp6DC,130,580,L"横二: 内裤图案动感超人！",13);
  }
    if(grid[5][0]==true)
  {
     TextOut(hTemp6DC,100,520,L"纵5: 纵4的冠军,下面是其作品",16);  
	 TransparentBlt(hTemp6DC,145,570,160,102,hLevel6AnswerDC[1],0,0,160,102,RGB(255,255,255));
  }
   if(grid[8][0]==true)
  {
     TextOut(hTemp6DC,130,550,L"纵10: 电子科大图论著名教师",15);  
	 TextOut(hTemp6DC,130,570,L"以幽默风趣著称, 爱扯龙门阵",14);
	 TextOut(hTemp6DC,130,600,L"横七: 一位明星,TA游览动物园",16);
	 TextOut(hTemp6DC,130,620,L"时被毒蛇咬到了脚，幸亏医务",13);
	 TextOut(hTemp6DC,130,640,L"人员及时赶到,毒蛇才保住性命",14);
  }
   if(grid[2][1]==true)
  {
     TextOut(hTemp6DC,130,550,L"纵2: 电子科大人气最高的",13);  
	 TextOut(hTemp6DC,130,570,L"微积分教师的绰号,他的课",12); 
	 TextOut(hTemp6DC,130,590,L"一座难求！",5); 
  }
    if(grid[6][1]==true)
  {
     TextOut(hTemp6DC,120,520,L"横六: 一部电影,海报如下",13);  
	 TransparentBlt(hTemp6DC,145,570,160,102,hLevel6AnswerDC[2],0,0,160,102,RGB(255,255,255));
  }
  if(grid[7][1]==true)
  {
     TextOut(hTemp6DC,120,540,L"纵7: 电子科大骑行爱好者",13);  
	 TextOut(hTemp6DC,120,560,L"最常去的地方之一,国家4A",13); 
	 TextOut(hTemp6DC,120,580,L"级风景名胜",5); 
  }
  if(grid[4][2]==true)
  {
     TransparentBlt(hTemp6DC,150,500,142,150,hLevel6AnswerDC[3],0,0,142,150,RGB(255,255,255));	//加载狗
	 TextOut(hTemp6DC,120,660,L"横三: 如果你不知道就OUT了",15);  
  }
  if(grid[9][2]==true)
  {
     TextOut(hTemp6DC,100,550,L"纵11：去东莞常做的一件事儿",15);  
  }
  if(grid[2][3]==true)
  {
     TextOut(hTemp6DC,100,650,L"横四： 图论术语，如上图所示",14);
	 TransparentBlt(hTemp6DC,150,500,180,100,hLevel6AnswerDC[4],0,0,180,100,RGB(255,255,255));	//加载狗
  }
  if(grid[3][3]==true)
  {
     TextOut(hTemp6DC,100,550,L"纵6：电子科大人气最火爆驾校",15);
	 TextOut(hTemp6DC,100,570,L"的师傅,因不发帖不给考科目三",14);
	 TextOut(hTemp6DC,100,590,L"而被河畔群众广为吐槽",10);
  }
  if(grid[7][3]==true)
  {
     TextOut(hTemp6DC,120,640,L"横八：上图男主角名字,不",13);
	 TextOut(hTemp6DC,120,660,L"是我们敬爱的毕福剑老师！",12);
	 TransparentBlt(hTemp6DC,150,500,180,114,hLevel6AnswerDC[5],0,0,180,114,RGB(255,255,255));	//加载狗
  }
   if(grid[8][3]==true)
  {
     TextOut(hTemp6DC,140,530,L"纵12：哲学术语,形容",12);
	 TextOut(hTemp6DC,140,550,L"片面,孤立,静止的思维",11);
	 TextOut(hTemp6DC,140,570,L"方式",2);
	 
  }
  if(grid[0][4]==true)
  {    
	 TransparentBlt(hTemp6DC,150,500,180,126,hLevel6AnswerDC[6],0,0,180,126,RGB(255,255,255));	//加载狗
	 TextOut(hTemp6DC,140,650,L"横十六: 这可不是尿哦",11);
	 TextOut(hTemp6DC,140,670,L"也不是青岛纯生！！！",10);   
  }
  if(grid[1][4]==true)
  {    
	 TransparentBlt(hTemp6DC,150,500,180,120,hLevel6AnswerDC[7],0,0,180,120,RGB(255,255,255));	//加载狗
	 TextOut(hTemp6DC,160,640,L"纵18: 不言而喻",9);
  }
  if(grid[5][4]==true)
  {    
	 TransparentBlt(hTemp6DC,150,500,180,120,hLevel6AnswerDC[8],0,0,180,120,RGB(255,255,255));	//加载狗
	 TextOut(hTemp6DC,140,640,L"纵8: 如图,提示一下,是",13);
	 TextOut(hTemp6DC,140,660,L"刀剑神域男主角的妹妹",10);
	 TextOut(hTemp6DC,140,680,L"横十二: NOT GAY!",13);
  }
  if(grid[3][5]==true)
  {    
	 TransparentBlt(hTemp6DC,120,517,237,62,hLevel6AnswerDC[9],0,0,237,62,RGB(255,255,255));	//加载狗
	 TextOut(hTemp6DC,140,600,L"横五: 法国著名数学家",11);
	 TextOut(hTemp6DC,140,620,L"物理学家,曾提出上述著",11);
	 TextOut(hTemp6DC,140,640,L"名变换",3);
  }
  if(grid[4][5]==true)
  {    
	 TransparentBlt(hTemp6DC,120,517,180,106,hLevel6AnswerDC[10],0,0,180,106,RGB(255,255,255));	//加载狗
	 TextOut(hTemp6DC,130,660,L"纵9: 著名城市,以耶稣",12);	 
	 TextOut(hTemp6DC,130,680,L"像闻名于世界",6);	
  }
   if(grid[7][5]==true)
  {    	
	 TextOut(hTemp6DC,130,530,L"纵13: +23度26分",12);
	 TextOut(hTemp6DC,130,550,L"横九: 三个字,逃离___",13);
  } 
  if(grid[1][6]==true)
  {    	
	 TextOut(hTemp6DC,130,530,L"横十五:",4);
	 TextOut(hTemp6DC,120,560,L"“爱着你,像心跳,难触摸",12);
	 TextOut(hTemp6DC,130,580,L"画着你,画不出你的骨骼”",12);
  } 
  if(grid[2][6]==true)
  {    	
	 TextOut(hTemp6DC,130,530,L"纵16:",4);
	 TextOut(hTemp6DC,130,560,L"《礼记·大学》：“富润屋，",14);
	 TextOut(hTemp6DC,130,580,L"德润身,_ _ _ _“",13);
	
  } 
  if(grid[6][6]==true)
  {    	
	 TextOut(hTemp6DC,130,530,L"横十七:",4);
	 TextOut(hTemp6DC,130,560,L"星期天你父母可能会对",10);
	 TextOut(hTemp6DC,130,580,L"你说的一句话",6);
	
  } 
 if(grid[0][7]==true)
  {    	
	 TextOut(hTemp6DC,130,530,L"纵17:",4);
	 TextOut(hTemp6DC,130,560,L"今年过节不收礼",7);
	 TextOut(hTemp6DC,130,580,L"收礼还收_ _ _",9);
	 TextOut(hTemp6DC,130,600,L"我从没见人送过",7);
	
  } 
 if(grid[4][7]==true)
 {    	
	TransparentBlt(hTemp6DC,160,490,150,180,hLevel6AnswerDC[11],0,0,150,180,RGB(255,255,255));	//加载狗
	TextOut(hTemp6DC,140,680,L"横十一: 打球的都知道",11);
	
 }
 if(grid[9][7]==true)
 {    	
	TransparentBlt(hTemp6DC,140,520,180,100,hLevel6AnswerDC[12],0,0,180,100,RGB(255,255,255));	//加载狗
	TextOut(hTemp6DC,140,640,L"纵14: 一款著名的红白机",12);
	TextOut(hTemp6DC,140,660,L"游戏,小时候的经典",9);
	
 }
 if(grid[2][8]==true)
 {    	
	
	TextOut(hTemp6DC,130,530,L"横十三: 泛指公务员等代表",13);
	TextOut(hTemp6DC,130,550,L"国家权力或依靠国有资产获",12);
	TextOut(hTemp6DC,130,570,L"得收益的群体",6);
	
 }
 if(grid[6][8]==true)
 {    	
	
	TextOut(hTemp6DC,130,530,L"横十: 成语,出自冯梦",11);
	TextOut(hTemp6DC,130,550,L"龙《醒世恒言》卷六",10);
	TextOut(hTemp6DC,130,590,L"纵15: 西湖十景之一",11);
	
 }
 if(grid[0][9]==true)
 {    	
	
	TextOut(hTemp6DC,130,530,L"横十四: 朝鲜最高领导人",12);
	TextOut(hTemp6DC,130,550,L"的绰号",3);
	
 }
 if(grid[4][9]==true)
 {    	
	
	TransparentBlt(hTemp6DC,140,520,180,100,hLevel6AnswerDC[13],0,0,180,100,RGB(255,255,255));	//加载狗
	TextOut(hTemp6DC,130,640,L"横十八: 一座具有重大历",12);
	TextOut(hTemp6DC,130,660,L"史意义的桥",5);
		
 }
 BitBlt(hdc,0,0,600,800,hTemp6DC,0,0,SRCCOPY);//第二次缓冲
 DeleteObject(hfont1);
/////////////////////////////////////////下面是判断游戏是否成功，填出全部条目
   right1=true;
   for(int i=0;i<10;i++)
	   for(int j=0;j<10;j++)
	   {
	      if(grid_letter[i][j]!=L'0')
		  {
		     if((grid_letter[i][j]>='A'&&grid_letter[i][j]<='Z')||grid_letter[i][j]=='  ')
			 {
			    right1=false;
			 }
		  
		  }
		     
	   }
	if(right1==true)//如果全部填对
	{
	  if(Level6_counter==2)//为了打出最后一个条目来
	  {
	    MessageBox(hwnd,L"夜刀神十香：不错嘛！知识渊博！",L"上知天文，下知地理",MB_OK);	
	    game_state=107;//第6关格言部分
	    Level6_counter=0;
		memset(grid_letter,'  ',sizeof(grid_letter));//初始化第六关填字方格 空格
		grid_letter[2][0]=grid_letter[7][0]=grid_letter[4][1]=grid_letter[9][1]=grid_letter[1][2]=grid_letter[8][2]=grid_letter[0][3]=grid_letter[1][3]=grid_letter[4][3]=grid_letter[5][3]=grid_letter[6][3]=
		grid_letter[2][4]=grid_letter[4][4]=grid_letter[7][4]=grid_letter[9][4]=grid_letter[0][5]=grid_letter[2][5]=grid_letter[6][5]=grid_letter[0][6]=grid_letter[3][6]=grid_letter[1][7]=
		grid_letter[3][7]=grid_letter[6][7]=grid_letter[8][7]=L'0'; grid_letter[3][2]=L'0'; grid_letter[5][6]=L'0'; grid_letter[1][8]=L'0'; grid_letter[5][8]=L'0';
		grid_letter[3][9]=L'0'; grid_letter[7][9]=L'0'; grid_letter[8][9]=L'0';
	  }
	 
	}
}
else if(game_state==14)//第7关
{
	////////////////////////////////////处理挡板部分代码
	
	Sleep(10);//防止挡板移动过快，加上这句话的作用
	if(click_start==false)
	{
      BitBlt(hTemp7DC,0,0,600,800,hLevel7BG1DC,0,0,SRCCOPY);//画背景
	  lv7_win=true;
	  for(int i=0;i<=11;i++)
		  for(int j=0;j<=11;j++)
		  {
		    if(i%2==0&&j%2==0)
		    brick_grid[i][j]=1;//有砖块
			else
            brick_grid[i][j]=0;	
		  }
	  ball_lv7.x=pad_x+43;
	  ball_lv7.y=pad_y-25;
	  ball_lv7.dx=-4;
	  ball_lv7.dy=-4;
	}
	if(KEY_DOWN(VK_RIGHT)) 
	{
	  pad_x+=6;
	  uppad_x-=6;
	  if(click_start==false)
	  {
	    ball_lv7.x+=6;
	  }
	}
	if(KEY_DOWN(VK_LEFT))
	{
	  pad_x-=6;
	  uppad_x+=6;
	  if(click_start==false)
	  {
	    ball_lv7.x-=6;
	  }
	}
	if(pad_x<=0)//下挡板
		{
			pad_x=0;
			if(click_start==false)
			ball_lv7.x=43;
	    }
	if(pad_x+100>=600)
		{
			pad_x=500;
			if(click_start==false)
			ball_lv7.x=543;
	    }
	if(uppad_x<=0)//上挡板
	{
	   uppad_x=0;
	
	}
	if(uppad_x+100>=600)
	{
	   uppad_x=500;	
	}
	if(click_start==true)//点击左键开始游戏之后
	{
	   lv7_win=true;//这句话非常重要
	   BitBlt(hTemp7DC,0,0,600,800,hLevel7BGDC,0,0,SRCCOPY);//画背景1
	   ball_lv7.x+=ball_lv7.dx;
	   ball_lv7.y+=ball_lv7.dy;
	  
	    if(ball_lv7.x<=0||ball_lv7.x>=600-15)//碰到左右墙壁反弹
		  ball_lv7.dx=-ball_lv7.dx;
	 
	      if(ball_lv7.y<=-20||ball_lv7.y>=795)
		  {					  
			  TransparentBlt(hTemp7DC,40,620,127,100,hLevel7QCFdlgDC,0,0,127,100,RGB(255,255,255));//画泉此方对话框	
               if(ball_lv7.y<=-25||ball_lv7.y>=800)//游戏失败
	            {
                     MessageBox(hwnd,L"不要灰心，万事开头难~我就不信你死100次还不过！！",L"小球飞走啦~",MB_OK);
		             lv7_death++;
		             click_start=false;
			    }
          }
		  
	  if(ball_lv7.y+15>=700&&ball_lv7.y+15<=720)//如果球打击下面反弹版就反弹
	  {
	      if(ball_lv7.x+15>=pad_x&&ball_lv7.x<=pad_x+100)
		  {
		    ball_lv7.dy=-ball_lv7.dy;
			if(KEY_DOWN(VK_RIGHT)) //加上一定的方向偏差
				ball_lv7.dx-=(rand()%2);
			else
				if(KEY_DOWN(VK_LEFT))
					ball_lv7.dx+=(rand()%2);
				else
                   ball_lv7.dx+=(-1+rand()%3);
		  }
	  }
	  if(ball_lv7.y<=80&&ball_lv7.y>=60)//上挡板打击就反弹
	  {
	    if(ball_lv7.x+15>=uppad_x&&ball_lv7.x<=uppad_x+100)
		{
		   ball_lv7.dy=-ball_lv7.dy;
		}	  	  
	  }
	  /////判断球是否打到砖块,2重循环来遍历整个砖块矩阵
	  for(int row=0;row<=11;row++)
	  {
	     for(int column=0;column<=11;column++)
		 {
			 if(brick_grid[row][column]!=0)
		    {
		       if((ball_lv7.y+7)>=250-7+column*20&&(ball_lv7.y+7)<=250+7+20+column*20&&(ball_lv7.x+7>=80+row*40-7&&ball_lv7.x+7<=80+row*40+40+7))
		       {
		          brick_grid[row][column]=0;
			      ball_lv7.dy=-ball_lv7.dy;
				  //不加方向偏差了，否则会出大事滴~
		       }
		 
		    }
	  
		 }
	  }
	  //胜利判断
	  for(int row=0;row<=11;row++)
		  for(int column=0;column<=11;column++)
		  {
		   if(brick_grid[row][column]==1)//如果存在一个砖块没打掉
			   {
				   lv7_win=false;
				   break;
		       }
		  }
	 if(lv7_win==true)//胜利
	 {
	  MessageBox(hwnd,L"喜大普奔，你过关啦！泉此方表示非常开心~",L"贺电！",MB_OK);
	  lv7_death=0;
	  game_state=108;//第七关格言部分
	  lv7_win=false;
	  for(int i=0;i<=11;i++)
		for(int j=0;j<=11;j++)
		  {
		    if(i%2==0&&j%2==0)
		    brick_grid[i][j]=1;//有砖块
			else
            brick_grid[i][j]=0;
		  }
	 for(int i=0;i<17;i++)//棋盘矩阵清零
		for(int j=0;j<17;j++)
		level8_board[i][j]=0;
	 IsDraw=false;//和棋为false
	 level8_lv1_win=false;
	 level8_lv2_win=false;
	 level8_lv3_win=false;
	 pad_x=250,pad_y=700;//第七关下挡板左上角坐标
     uppad_x=250,uppad_y=60;//第七关上挡板左上角坐标	  
	 }
	
     TransparentBlt(hTemp7DC,10,685,90,87,hLevel7QCFDC,0,0,90,87,RGB(255,255,255));//画泉此方	
	}
	
	////////////////////////////////////////////////////////////////////////////画砖块
	for(int row=0;row<=11;row++)
	{
		for(int column=0;column<=11;column++)
		{
		  if(brick_grid[row][column]!=0)
		  BitBlt(hTemp7DC,80+row*40,250+column*20,40,20,hLevel7BrickDC[color[lv7_color_counter][column/2]/2],0,0,SRCCOPY);//颜色循环出现
		}
	}
	
	///////////////////////////////////////////////////////////////////////////
	if(click_start==false)//画音乐图标和返回主菜单
	{
	  if(music_state==1)		//画音乐图标 
		TransparentBlt(hTemp7DC,12,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	 else
		TransparentBlt(hTemp7DC,12,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
        //画回到主菜单图标
        TransparentBlt(hTemp7DC,-20,450,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
	}
	TransparentBlt(hTemp7DC,480,-2,120,120,hLevel7DeathDC,0,0,120,120,RGB(255,255,255));//画阵亡数
	TransparentBlt(hTemp7DC,uppad_x,uppad_y,100,20,hLevel7Pad1DC,0,0,100,20,RGB(0,0,0));//画上反弹板子
	TransparentBlt(hTemp7DC,pad_x,pad_y,100,20,hLevel7PadDC,0,0,100,20,RGB(0,0,0));//画下反弹板子
	TransparentBlt(hTemp7DC,ball_lv7.x,ball_lv7.y,15,15,hLevel7BallDC,0,0,15,15,RGB(255,255,255));//画弹球	
	//打字：阵亡数字
	LOGFONT lf;
	ZeroMemory(&lf,sizeof(LOGFONT));   
	HFONT hfont=  CreateFont(20,10,3150,0,400,0,0,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,L"Impact");	     		  
	SetTextColor(hTemp7DC,RGB(255,255,255));
	SelectObject(hTemp7DC,hfont);
	SetBkMode(hTemp7DC,TRANSPARENT);
	CString str_death;
	str_death.Format(L"%d",lv7_death);
	TextOut(hTemp7DC,572,46,str_death,str_death.GetLength());
	DeleteObject(hfont);
	BitBlt(hdc,0,0,600,800,hTemp7DC,0,0,SRCCOPY);//第二次缓冲
}
else if(game_state==16)//第八关
{
		
	     IsDraw=true;	
	     BitBlt(hTemp8DC,0,0,600,800,hLevel8BGDC,0,0,SRCCOPY);
		 //画棋盘背景
		 BitBlt(hTemp8DC,50,50,500,500,hLevel8BoardDC,0,0,SRCCOPY);
		 //画棋盘4根边界线,创建画笔 宽度为2
		 HPEN hPen = CreatePen(PS_SOLID,4,RGB(0,0,0));
		 SelectObject(hTemp8DC,hPen);
		 //棋盘边界4根粗线
		 MoveToEx(hTemp8DC,100,100,NULL);LineTo(hTemp8DC,500,100);
		 MoveToEx(hTemp8DC,100,100,NULL);LineTo(hTemp8DC,100,500);
		 MoveToEx(hTemp8DC,500,100,NULL);LineTo(hTemp8DC,500,500);
		 MoveToEx(hTemp8DC,100,500,NULL);LineTo(hTemp8DC,500,500);
		 DeleteObject(hPen);
		 //外围4根细线，为了美观
		 HPEN hPen1 = CreatePen(PS_SOLID,2,RGB(0,0,0));
		 SelectObject(hTemp8DC,hPen1);
		 MoveToEx(hTemp8DC,96,96,NULL);LineTo(hTemp8DC,504,96);
		 MoveToEx(hTemp8DC,96,96,NULL);LineTo(hTemp8DC,96,504);
		 MoveToEx(hTemp8DC,504,96,NULL);LineTo(hTemp8DC,504,504);
		 MoveToEx(hTemp8DC,96,504,NULL);LineTo(hTemp8DC,504,504);
		 DeleteObject(hPen1);
		 //棋盘格子横竖线,16X16个方格
		 HPEN hPen2= CreatePen(PS_SOLID,1,RGB(0,0,0));
		 SelectObject(hTemp8DC,hPen2);
		 for(int i=1;i<=15;i++)
		 {
		   MoveToEx(hTemp8DC,100,100+i*25,NULL);LineTo(hTemp8DC,500,100+i*25);
		   MoveToEx(hTemp8DC,100+i*25,100,NULL);LineTo(hTemp8DC,100+i*25,500);
		 }
		 //画天元点
		 HBRUSH hbr = (HBRUSH)GetStockObject(BLACK_BRUSH);
		 SelectObject(hTemp8DC,hbr);
		 Ellipse(hTemp8DC,297,297,303,303);//中心天元
		 Ellipse(hTemp8DC,172,172,178,178);
		 Ellipse(hTemp8DC,422,172,428,178);
		 Ellipse(hTemp8DC,172,422,178,428);
		 Ellipse(hTemp8DC,422,422,428,428);
		 DeleteObject(hPen2);
		 DeleteObject(hbr);
		 //画绿色勾
		 if(level8_lv1_win==true)
		 TransparentBlt(hTemp8DC,250,690,20,20,hLevel8Tick,0,0,20,20,RGB(255,255,255));
		 if(level8_lv2_win==true)
		 TransparentBlt(hTemp8DC,250,705,20,20,hLevel8Tick,0,0,20,20,RGB(255,255,255));
		 if(level8_lv3_win==true)
		 TransparentBlt(hTemp8DC,250,720,20,20,hLevel8Tick,0,0,20,20,RGB(255,255,255));
		 //画鼠标将要下棋的绿色方框区域
		if(IsInBoard==true&&level8_board[level8_row][level8_column]==0)
		{
		    HPEN hPen = CreatePen(PS_SOLID,1,RGB(0,255,0));
			SelectObject(hTemp8DC,hPen);
			//画上水平线
			MoveToEx(hTemp8DC,87+level8_row*25,87+level8_column*25,NULL);LineTo(hTemp8DC,87+level8_row*25+9,87+level8_column*25);
			MoveToEx(hTemp8DC,87+level8_row*25+16,87+level8_column*25,NULL);LineTo(hTemp8DC,87+level8_row*25+25,87+level8_column*25);
			//画下水平线
			MoveToEx(hTemp8DC,87+level8_row*25,87+level8_column*25+25,NULL);LineTo(hTemp8DC,87+level8_row*25+9,87+level8_column*25+25);
			MoveToEx(hTemp8DC,87+level8_row*25+16,87+level8_column*25+25,NULL);LineTo(hTemp8DC,87+level8_row*25+25,87+level8_column*25+25);
			//画左垂线
			MoveToEx(hTemp8DC,87+level8_row*25,87+level8_column*25,NULL);LineTo(hTemp8DC,87+level8_row*25,87+level8_column*25+9);
			MoveToEx(hTemp8DC,87+level8_row*25,87+level8_column*25+16,NULL);LineTo(hTemp8DC,87+level8_row*25,87+level8_column*25+25);
		    //画右垂线
			MoveToEx(hTemp8DC,87+level8_row*25+25,87+level8_column*25,NULL);LineTo(hTemp8DC,87+level8_row*25+25,87+level8_column*25+9);
			MoveToEx(hTemp8DC,87+level8_row*25+25,87+level8_column*25+16,NULL);LineTo(hTemp8DC,87+level8_row*25+25,87+level8_column*25+25);
			DeleteObject(hPen);
			
		}
	
		 TransparentBlt(hTemp8DC,0,620,200,180,hLevel8SQKS,0,0,200,180,RGB(0,0,0));//画时崎狂三
		////////level8 state=0,初始化界面	
		if(level8_state==0)
		{		  
		   level8_board[8][8]=0;
		   HPEN hPen = CreatePen(PS_SOLID,2,RGB(153,217,234));
		   HBRUSH hBr = (HBRUSH)GetStockObject(HOLLOW_BRUSH);
		   SelectObject(hTemp8DC,hBr);
		   SelectObject(hTemp8DC,hPen);
		  if(level8_lv1==true)
		  {
		    Rectangle(hTemp8DC,306,693,410,710);
		  }
		   if(level8_lv2==true)
		  {
		    Rectangle(hTemp8DC,306,710,410,726);
		  }
		   if(level8_lv3==true)
		  {
		    Rectangle(hTemp8DC,306,726,410,742);
		  }
		  DeleteObject(hBr);
		  DeleteObject(hPen);

		}
		else if(level8_state==1)//第一关
		{
		    //电脑下的第一步棋
			level8_board[8][8]=2;
			//画时间槽
			TransparentBlt(hTemp8DC,518,150,37,317,hLevel4TimeDC,0,0,37,317,RGB(255,255,255));
			level8_timebar=161+level8_lv1_counter*0.2;
			//时间槽减少效果,必须在这个双缓冲里进行，不能再paint中进行
			HPEN hpen = CreatePen(PS_NULL,1,RGB(0,0,0));//去掉矩形边框
			SelectObject(hTemp8DC,hpen);
			LOGBRUSH lb={BS_SOLID,RGB(255,255,0)};//画出黄色的时间槽
			HBRUSH hbr =(HBRUSH)CreateBrushIndirect(&lb);
			SelectObject(hTemp8DC,hbr);
			//画减少的时间
			Rectangle(hTemp8DC,532,level8_timebar,541,457);
			DeleteObject(hbr);//必须要有delete，否则出现不可预知的错误
			DeleteObject(hpen);
			//判断游戏失败，15秒内未赢
			if(level8_lv1_counter>=1500)
			{
			   MessageBox(hwnd,L"面码输啦：狂三我也不是那么好战胜的呢~",L"TAT",MB_OK);
			   level8_state=0;
			   level8_lv1_counter=0;
			   level8_timebar=161;
			   for(int i=0;i<17;i++)
				   for(int j=0;j<17;j++)
					   level8_board[i][j]=0;

			}

			 							
		}
		else if(level8_state==2)//第二关
		{
		   //电脑下的第一步棋
			level8_board[8][8]=2;
			TransparentBlt(hTemp8DC,10,490,150,110,hLevel2BoardDC,0,0,150,110,RGB(255,255,255));//加载死亡计数板
			SetBkMode(hTemp8DC,TRANSPARENT);
	        LOGFONT lf;
			ZeroMemory(&lf,sizeof(LOGFONT));   
			lf.lfWidth=8;
			lf.lfHeight=16;
			SetTextColor(hTemp8DC,RGB(0,0,0));
			lstrcpy(lf.lfFaceName,L"微软雅黑");//必须是lstrcpy才行否则会出错
			HFONT hFont = CreateFontIndirect(&lf);
			SelectObject(hTemp8DC,hFont);
			TextOut(hTemp8DC,55,530,L"已走步数:",5);			
			CString str1,str2;
			str1.Format(L"%d",level8_lv2_stepcounter);
			str2.Format(L"%d",20-level8_lv2_stepcounter);
			TextOut(hTemp8DC,120,530,str1,str1.GetLength());
			TextOut(hTemp8DC,120,550,str2,str2.GetLength());
			TextOut(hTemp8DC,55,550,L"剩余步数:",5);	
			if(level8_lv2_stepcounter>=21)
			{
		        MessageBox(hwnd,L"2333，面码继续加油呀！作者最好记录是11步哟~",L"再接再厉",MB_OK);
				level8_state=0;
				level8_lv2_stepcounter=0;
				for(int i=0;i<17;i++)//棋盘矩阵清零
			    for(int j=0;j<17;j++)
			     level8_board[i][j]=0;

			}

		    DeleteObject(hFont);
		}
		else if(level8_state==3)//第三关
		{
			//电脑下的第一步棋
			level8_board[8][8]=2;
			level8_timebar=161+level8_lv1_counter*3;
			//画时间槽
			TransparentBlt(hTemp8DC,518,150,37,317,hLevel4TimeDC,0,0,37,317,RGB(255,255,255));
			//时间槽减少效果,必须在这个双缓冲里进行，不能再paint中进行
			HPEN hpen = CreatePen(PS_NULL,1,RGB(0,0,0));//去掉矩形边框
			SelectObject(hTemp8DC,hpen);
			LOGBRUSH lb={BS_SOLID,RGB(255,255,0)};//画出黄色的时间槽
			HBRUSH hbr =(HBRUSH)CreateBrushIndirect(&lb);
			SelectObject(hTemp8DC,hbr);
			//画减少的时间			
			Rectangle(hTemp8DC,532,level8_timebar,541,457);
			DeleteObject(hbr);//必须要有delete，否则出现不可预知的错误
			DeleteObject(hpen);
			if(level8_lv1_counter>=100)
			{
			  MessageBox(hwnd,L"表灰心！面码还需要更快的反应呢~",L"TAT",MB_OK);
			  level8_state=0;
			  level8_timebar=161;
			  level8_lv1_counter=0;
			  for(int i=0;i<17;i++)
				   for(int j=0;j<17;j++)
					   level8_board[i][j]=0;
			}
		
		}
	    //判断3个小关都过关了，也就是本关通过
		if(level8_lv1_win==true&&level8_lv2_win==true&&level8_lv3_win==true)
		{
		   MessageBox(hwnd,L"恭喜面码，看来狂三我还需要提升自己的IQ啊~",L"恭喜",MB_OK);
		   game_state=109;//第八关格言部分
		   level8_lv1_win=false;
		   level8_lv2_win=false;
		   level8_lv3_win=false;
		   for(int i=0;i<17;i++)
				  for(int j=0;j<17;j++)
					 level8_board[i][j]=0;
		   //变量清0
		
		}
		//画音乐图标 
		if(music_state==1)		
		TransparentBlt(hTemp8DC,500,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	    else
		TransparentBlt(hTemp8DC,500,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
        //画回到主菜单图标
        TransparentBlt(hTemp8DC,-20,-75,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	//回到主菜单
        //画上已经下了的棋子
		for(int i=0;i<17;i++)
			for(int j=0;j<17;j++)
			{
			  if(level8_board[i][j]==1)//人下的白棋子
				 TransparentBlt(hTemp8DC,87+i*25,87+j*25,25,25,hLevel8White,0,0,25,25,RGB(255,255,255));
			  if(level8_board[i][j]==2)//电脑下的黑棋子
				 TransparentBlt(hTemp8DC,87+i*25,87+j*25,25,25,hLevel8Black,0,0,25,25,RGB(255,255,255));

			}
		////////////////////////判断和棋,如果下满棋盘
        for(int i=0;i<17;i++)
			for(int j=0;j<17;j++)
			{
			  if(level8_board[i][j]==0)
				  IsDraw=false;
			}
		if(IsDraw==true)
		{
		  MessageBox(hwnd,L"不分伯仲呀~",L"和棋",MB_OK);
		  for(int i=0;i<17;i++)//棋盘矩阵清零
			 for(int j=0;j<17;j++)
			   level8_board[i][j]=0;	
		  level8_chess_counter=0;
		  level8_counter=0;
		  level8_lv1_counter=0;
		  level8_timebar=161;
		}
		////////////////////////判断人胜利
	   if(IsWin_level8(level8_board,level8_row,level8_column,1))
		{					      
			if(level8_state==1)
					level8_lv1_win=true;
			if(level8_state==2)
					level8_lv2_win=true;
			if(level8_state==3)
					level8_lv3_win=true;
			if(level8_counter==1)
			{
				MessageBox(hwnd,L"你战胜了狂三酱~！",L"胜利",MB_OK);
				level8_counter=0;
				level8_lv2_stepcounter=0;
				level8_state=0;//回到选关初始化界面
				level8_chess_counter=0;
				level8_lv1_counter=0;
			    level8_timebar=161;
				for(int i=0;i<17;i++)//棋盘矩阵清零
			       for(int j=0;j<17;j++)
			         level8_board[i][j]=0;	
			}
		}
		
		///////////////////////判断电脑胜利
		if(IsWin_level8(level8_board,AI_row,AI_column,2))
		{
			if(level8_counter==1)
			{
			    MessageBox(hwnd,L"你败给了狂三酱~！",L"失败",MB_OK);
				level8_lv2_stepcounter=0;
				level8_counter=0;
				level8_chess_counter=0;
				level8_lv1_counter=0;
			    level8_timebar=161;
				for(int i=0;i<17;i++)//棋盘矩阵清零
				for(int j=0;j<17;j++)
				level8_board[i][j]=0;
				level8_state=0;//回到选关初始化界面
			}
		}

		 BitBlt(hdc,0,0,600,800,hTemp8DC,0,0,SRCCOPY);//第二次缓冲
}
else if (game_state == 18)//第九关
{
	
	HFONT hfont1 = CreateFont(18, 9, 0, 0, 500, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH, L"微软雅黑");
	SelectObject(hTemp9DC, hfont1);
	//迷宫矩阵初始化在最开头的变量定义                  	
	POINT level9_player = { level9_px + 10, level9_py + 10 };
	level9_player_x = (level9_px + 10) / 20 ;//第九关玩家寻路矩阵坐标
	level9_player_y = (level9_py + 10) / 20 ;
	Sleep(10);//减慢速度
	HPEN hPen = (HPEN)GetStockObject(NULL_PEN);
	HBRUSH hBr = (HBRUSH)GetStockObject(BLACK_BRUSH);
	//在内存dc中画黑色rect，产生迷雾效果
	SelectObject(hTemp9DC, hBr);
	SelectObject(hTemp9DC, hPen);
	Rectangle(hTemp9DC, 0, 0, 600, 800);//画黑色迷雾     
	DeleteObject(hBr);
	DeleteObject(hPen);
	if(flash_used==true)//闪电已经使用，触发怪物追逐玩家过程
	{
	//bfs
	BFS(chasingmonstery, chasingmonsterx, level9_player_y, level9_player_x);
	//处理怪物追逐玩家
	while ((chasingmonsterx!= level9_player_x||chasingmonstery != level9_player_y)&&chase==true)//这里是或者的关系，不是and的关系,尼玛这个错找了半天啊
	{
		
		if (path[chasingmonsterx- 1][chasingmonstery] == 1 && chasingmonsterx - 1>=0)
		{
			chasingmonsterx -= 1;
			chase = false;//为了怪物每次只走一格
			break;
		}
		 if (path[chasingmonsterx + 1][chasingmonstery] == 1 && chasingmonsterx + 1<=29)
		{			
			chasingmonsterx += 1;	
			chase = false;
		    break;
		}
		 if (path[chasingmonsterx][chasingmonstery + 1] == 1 && chasingmonstery + 1<=29)
		{
			chasingmonstery += 1;	
			chase = false;
			break;
		}
		if (path[chasingmonsterx][chasingmonstery - 1] == 1 && chasingmonstery - 1>=0)
		{
			chasingmonstery -= 1;
			chase = false;
			break;
		}
	
	}
	//打印路劲
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (path[i][j] == 1)
			{
				HPEN hpen = CreatePen(PS_NULL, 1, RGB(0, 0, 0));//去掉矩形边框
				SelectObject(hTemp4DC, hpen);
				LOGBRUSH lb={ BS_SOLID, RGB(0, 255, 0) };
				HBRUSH hbr = (HBRUSH)CreateBrushIndirect(&lb);
				SelectObject(hTemp9DC, hbr);
                //画路径方块
				Rectangle(hTemp9DC, i * 20, j * 20, i * 20 + 21, j * 20 + 21);
				DeleteObject(hbr);//必须要有delete，否则出现不可预知的错误
				DeleteObject(hpen);
			}
		}
	}
	//画追逐玩家的怪物
	CircleCapture(hTemp9DC, chasingmonsterx*20- 30, chasingmonstery*20 - 30, 80, hLevel9Temp2ndDC, chasingmonsterx*20 - 30, chasingmonstery*20 - 30, 80, 0, NULL);//神级函数，将源dc圆形区域拷贝到目标dc，一般的bitblt只有方形
	TransparentBlt(hTemp9DC, chasingmonsterx * 20, chasingmonstery * 20, 20, 20, hLevel9BikeDC, 0, 0, 20, 20, RGB(255, 255, 255));
	//level9_maze矩阵还原和path路劲矩阵还原
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (level9_maze[i][j] == 3)
				level9_maze[i][j] = 0;
            path[i][j] = 0; 
		}
	}
	vp.clear();//vector清空
	chase_step_count = 0;//归0
	
	}//end of flash_used==false
	//////////////内存dc中状态栏之类的 使用dc：temp9dc
	TransparentBlt(hTemp9DC, 0, 620, 600, 150, hLevel9StateBarDC, 0, 0, 600, 150, RGB(76, 76, 76));//画状态栏	 
	TransparentBlt(hTemp9DC, 480, 600, 120, 172, hLevel9BirdDC, 0, 0, 120, 172, RGB(255, 255, 255));//画南小鸟	
	TransparentBlt(hTemp9DC, 420, 715, 20, 20, hLevel9AccDC, 0, 0, 20, 20, RGB(255, 255, 255));//画加速道具
	//画加速道具的未使用次数
	CString acc_tool;
	SetBkMode(hTemp9DC, TRANSPARENT);
	acc_tool.Format(L"X%d", level9_acc_tool);
	if (level9_acc_tool>0)
	  SetTextColor(hTemp9DC, RGB(51, 255, 51));
	else
	  SetTextColor(hTemp9DC, RGB(255, 0, 0));
	TextOut(hTemp9DC, 440, 715, acc_tool, acc_tool.GetLength());
	//////////////第二次dc上画各种迷宫之类的物体，使用dc：hLevel9Temp2ndDC
	BitBlt(hLevel9Temp2ndDC, 0, 0, 600, 780, hLevel9BGDC, 0, 0, SRCCOPY);//背景
	if (level9_acctool_description == true)
	{
		CString str = L"这是 加速符文 哦！用来给", str1 = L"自己加速！按住↑键的同时",str2=L"再按m使用,数量有限,务必",str3=L"珍惜,在重力环境下有用的说";
		SetBkMode(hTemp9DC, TRANSPARENT);
		SetTextColor(hTemp9DC, RGB(0, 0, 0));
		TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		TextOut(hTemp9DC, 300, 530, str, str.GetLength());
		TextOut(hTemp9DC, 300, 550, str1, str1.GetLength());
		TextOut(hTemp9DC, 300, 570, str2, str2.GetLength());
		TextOut(hTemp9DC, 300, 590, str3, str3.GetLength());
	}
	 //全地图重力区域设置
	 RECT r_gravity7 = { 40, 340, 280, 520 };//第七课龙珠重力区域
	 RECT r_all_gravity = { 0, 0, 600, 800 };//整个游戏屏幕重力区域
	 RECT r_gravity1 = {380,20,560,180};
	 RECT r_gravity_medecine = {580,0,600,380};
	 RECT r_gravity2={340,240,540,280};//第二课龙珠重力区域
	 RECT r_gravitybarrier={260,40,280,260};//箱子重力区域
	 RECT r_gravity6={340,420,380,600};//第六颗龙珠重力区域
	 RECT r_gravity5={400, 420, 520, 560 };//第五颗龙珠重力区域
	 RECT r_remover={20,20,240,220};//7颗龙珠都吃完了，寻找remover的区域
	
	 
	 //画加速符文禁用标志
	 if(PtInRect(&r_gravity7,level9_player)||PtInRect(&r_gravity5,level9_player)||PtInRect(&r_remover,level9_player))
		 TransparentBlt(hTemp9DC,417,712,25,25,hLevel9BanDC,0,0,25,25,RGB(255,255,255));
	 //画第五颗龙珠下面一排尖刺
	 for(i=0;i<6;i++)
		 TransparentBlt(hLevel9Temp2ndDC,400+i*20,540,20,20,hLevel9ThornDC[0],0,0,20,20,RGB(255,255,255));
	 if (PtInRect(&r_gravity7, level9_player) || PtInRect(&r_gravity1, level9_player) || PtInRect(&r_gravity_medecine, level9_player)||PtInRect(&r_gravity2, level9_player)||PtInRect(&r_gravitybarrier, level9_player)||PtInRect(&r_gravity6, level9_player)||PtInRect(&r_gravity5, level9_player)||PtInRect(&r_remover, level9_player))//如果玩家进入重力区域
	 {	
		 TransparentBlt(hTemp9DC, 0, 0, 150, 50, hLevel9GsystemDC, 0, 0, 150, 50, RGB(255, 255, 255));
		 level9_py += y_velocity;//加速度语句，不用时间t变量也行，这样最简单
		 y_velocity += gravity;		
		 if (level9_maze[(level9_py) / 20][(level9_px) / 20] != 0 || level9_maze[(level9_py) / 20][(level9_px+17) / 20] != 0)//如果上方一个方格是障碍物，则速度归零
		 {
			 level9_py = 20*((level9_py-5)/20+1);	
			 y_velocity = 0.8;//设置向下速度
			 		 
		 }		 
		 if (level9_maze[(level9_py + 20) / 20][(level9_px) / 20] != 0 || level9_maze[(level9_py + 20) / 20][(level9_px+17) / 20] != 0)//如果下方一个方块是障碍，速度归零
		 {
			 level9_py = 20 * ((level9_py + 20) / 20-1)+2;
			 y_velocity = 0;//速度归零,万万不能少，找这个错花了1小时啊
		 }
		  //玩家按键处理，向上跳，按上箭头,加上y_velocity==0是为了防止一直连跳
		 if (KEY_DOWN(VK_UP)&&y_velocity==0)
		 {
			 y_velocity = -2.0;//给出一个向上的速度
		 }
		
	 }
	 //紫色障碍物文字提示
	 RECT r_pink={220,0,240,20};
	 if(PtInRect(&r_pink,level9_player))
	 {
	     CString str = L"面码需要凑齐七颗龙珠才",str1=L"能进去哦~";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0, 0, 0));
		 TransparentBlt(hTemp9DC, 270,510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 290, 540, str, str.GetLength());
		 TextOut(hTemp9DC, 290, 560, str1, str1.GetLength());
	 }
	 if(KEY_DOWN(VK_TAB))
	 {
	   for(int i=0;i<7;i++)
        level9ball_flag[i]=false; 
	 }
	 
	 //紫色障碍物消除条件达成：收集齐了7颗龙珠
	 if( level9ball_flag[0]==false&&level9ball_flag[1]==false&&level9ball_flag[2]==false&&level9ball_flag[3]==false&&level9ball_flag[4]==false&&level9ball_flag[5]==false&&level9ball_flag[6]==false)
	 {
	    level9_maze[1][11]=0;//去除紫色障碍物
	 
	 }
	 //出生点游戏操作提示
	 RECT r_spawn = { 300,300,320,320 };
	 if (PtInRect(&r_spawn, level9_player))
	 {
		 CString str = L"游戏操作：键盘方向键↑↓←→",str1=L"任务目标 : 收集齐7颗龙珠",str2=L"祝面码好运~ 我是萌物南小鸟";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0, 0, 0));
		 TransparentBlt(hTemp9DC, 270,510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 290, 540, str, str.GetLength());
		 TextOut(hTemp9DC, 290, 560, str1, str1.GetLength());
		 TextOut(hTemp9DC, 290, 590, str2, str2.GetLength());
		 TransparentBlt(hTemp9DC, 480, 560, 20, 20, hLevel9BallDC[0], 0, 0, 20, 20, RGB(255, 255, 255));
	 }
		 
	 //画怪物
	 POINT monster1 = { Monster_level9[0].x + 10, Monster_level9[0].y + 10 };
	 Monster_level9[0].x += Monster_level9[0].dx;
	 if (Monster_level9[0].x >= 140 || Monster_level9[0].x <= 40)
		 Monster_level9[0].dx = -Monster_level9[0].dx;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[0].x, Monster_level9[0].y, 20, 20, hLevel9Monster[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物1 
	 POINT monster2 = { Monster_level9[1].x + 10, Monster_level9[1].y + 10 };
	 Monster_level9[1].x += Monster_level9[1].dx;
	 if (Monster_level9[1].x <= 40 || Monster_level9[1].x >= 140)
		 Monster_level9[1].dx = -Monster_level9[1].dx;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[1].x, Monster_level9[1].y, 20, 20, hLevel9Monster[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物2
	 POINT monster3 = { Monster_level9[2].x + 10, Monster_level9[2].y + 10 };
	 Monster_level9[2].x += Monster_level9[2].dx;
	 if (Monster_level9[2].x <= 60 || Monster_level9[2].x >= 260)
		 Monster_level9[2].dx = -Monster_level9[2].dx;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[2].x, Monster_level9[2].y, 20, 20, hLevel9Monster[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物3 
	 POINT monster4 = { Monster_level9[3].x + 10, Monster_level9[3].y + 10 };
	 Monster_level9[3].x += Monster_level9[3].dx;
	 if (Monster_level9[3].x <= 40 || Monster_level9[3].x >= 260)
		 Monster_level9[3].dx = -Monster_level9[3].dx;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[3].x, Monster_level9[3].y, 20, 20, hLevel9Monster[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物4
	 POINT monster5 = { Monster_level9[4].x + 10, Monster_level9[4].y + 10 };
	 Monster_level9[4].x += Monster_level9[4].dx;
	 if (Monster_level9[4].x <= 40 || Monster_level9[4].x >= 140)
		 Monster_level9[4].dx = -Monster_level9[4].dx;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[4].x, Monster_level9[4].y, 20, 20, hLevel9Monster[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物5
	 POINT monster6 = { Monster_level9[5].x + 10, Monster_level9[5].y + 10 };
	 Monster_level9[5].x += Monster_level9[5].dx;
	 Monster_level9[5].y += Monster_level9[5].dy;
	 if (Monster_level9[5].x <= 380 || Monster_level9[5].x >= 500)
		 Monster_level9[5].dx = -Monster_level9[5].dx;
	 if (Monster_level9[5].y <= 40 || Monster_level9[5].y >= 160)
		 Monster_level9[5].dy = -Monster_level9[5].dy;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[5].x, Monster_level9[5].y, 20, 20, hLevel9Monster[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物6
	 POINT monster7 = { Monster_level9[6].x + 10, Monster_level9[6].y + 10 };
	 Monster_level9[6].x += Monster_level9[6].dx;
	 Monster_level9[6].y += Monster_level9[6].dy;
	 if (Monster_level9[6].x <= 400|| Monster_level9[6].x >= 540)
		 Monster_level9[6].dx = -Monster_level9[6].dx;
	 if (Monster_level9[6].y <= 20 || Monster_level9[6].y >= 160)
		 Monster_level9[6].dy = -Monster_level9[6].dy;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[6].x, Monster_level9[6].y, 20, 20, hLevel9Monster[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物7
	 //第二个龙珠的尖刺
	 POINT monster8 = { Monster_level9[7].x + 10, Monster_level9[7].y + 10 };
	 Monster_level9[7].x += Monster_level9[7].dx;
	 Monster_level9[7].y += Monster_level9[7].dy;
	 if (Monster_level9[7].x <= 400|| Monster_level9[7].x >= 440)
		 Monster_level9[7].dx = -Monster_level9[7].dx;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[7].x, Monster_level9[7].y, 20, 20, hLevel9ThornDC[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物8

	 POINT monster9 = { Monster_level9[8].x + 10, Monster_level9[8].y + 10 };
	 Monster_level9[8].x += Monster_level9[8].dx;
	 Monster_level9[8].y += Monster_level9[8].dy;
	 if (Monster_level9[8].x <= 460|| Monster_level9[8].x >= 500)
		 Monster_level9[8].dx = -Monster_level9[8].dx;
	 TransparentBlt(hLevel9Temp2ndDC, Monster_level9[8].x, Monster_level9[8].y, 20, 20, hLevel9ThornDC[0], 0, 0, 20, 20, RGB(255, 255, 255));//画怪物9

	 //第六颗龙珠的3个尖刺中心点
	 POINT p6_1={350,570},p6_2={370,510},p6_3={350,470};
	 //玩家碰到怪物死亡重生,各种变量清零
	 RECT r_ball5_death={400,540,520,560};//第五颗龙珠一排尖刺区域
	 POINT chasingmonster={chasingmonsterx*20+10,chasingmonstery*20+10};
	 if (GamePointDistance(level9_player, monster1, 14) || GamePointDistance(level9_player, monster2, 14) || GamePointDistance(level9_player, monster3, 17) || GamePointDistance(level9_player, monster4, 17) || GamePointDistance(level9_player, monster5, 17) ||GamePointDistance(level9_player, monster6, 17)
		 ||GamePointDistance(level9_player, monster8, 15)||GamePointDistance(level9_player, monster9, 15)||GamePointDistance(level9_player, p6_1, 15)||GamePointDistance(level9_player, p6_2, 15)||GamePointDistance(level9_player, p6_3, 15)||PtInRect(&r_ball5_death,level9_player)||(GamePointDistance(chasingmonster,level9_player,20)&&flash_used==true))
	 {
		 MessageBox(hwnd, L"通往正义之路往往荆棘载途，大侠请重新来过！", L"战死沙场", MB_OK);
		 level9_px = 300;//560
		 level9_py = 300;//0
		 level9_ball1_counter_dx = 0, level9_ball1_counter_dy = 0, level9_ball2_counter_dx = 0, level9_ball2_counter_dy = 0, level9_ball3_counter_dx = 0, level9_ball3_counter_dy = 0,
		 level9_ball4_counter_dx = 0, level9_ball4_counter_dy = 0, level9_ball5_counter_dx = 0, level9_ball5_counter_dy = 0, level9_ball6_counter_dx = 0, level9_ball6_counter_dy = 0,
		 level9_ball7_counter_dx = 0, level9_ball7_counter_dy = 0;//龙珠飞行计时器
		 for (int i = 0; i < 7;i++)
		 level9ball_flag[i] = true;
		 for (int i = 0; i < 4; i++)
		 level9lockkey[i] = true;
		 IsEatGrayKey=true;
		 level9_maze[4][22] = 2; level9_maze[13][18] = 4;
		 reveal_medecine_number = 3;
		 level9_medecine_description = false;
		 level9_medicine[0] = true;
		 level9_acc_tool = 30;
		 level9_box=true;
		 level9_box_placed=false;//箱子放置的标志，false表示未放置
         level9_ball3_x=17,level9_ball3_y=18;//第三颗龙珠矩阵坐标
         level9_box_description=false;
		 level9_maze[level9_box_placed_y][level9_box_placed_x] = 0;//清除箱子
		 level9_flash_description=false;
		 level9_maze[1][11]=7;
         flash=true;//闪电未吃的标志
         flash_used=false;//闪电使用标志，false表示未使用
		 level9_maze[level9_flash_placed_y][level9_flash_placed_x]=1;//恢复墙壁
		 chasingmonsterx=29;chasingmonstery=20;
		 level9_bike_counter=0;
		 for (int i = 0; i < 6; i++)
			 level9_medecine_coordinate_array[i] = -1;
	 }
	 //画加速符文使用效果
	 if (level9_acceffect_counter >= 20)
		 level9_acceffect_counter = -1;//未按m键的状态
	 if (level9_acceffect_counter <= 20 && level9_acceffect_counter >=0)
		 TransparentBlt(hLevel9Temp2ndDC, level9_px-1, level9_py+20, 20, 25, hLevel9AccEffectDC, 0, 0, 20, 25, RGB(255, 255, 255));
	 //画传送门
	 TransparentBlt(hLevel9Temp2ndDC, 440, 200 ,20, 20, hLevel9PortalDC, 0, 0, 20, 20, RGB(255, 255, 255));
	 TransparentBlt(hLevel9Temp2ndDC, 40, 240, 20, 20, hLevel9PortalDC, 0, 0, 20, 20, RGB(255, 255, 255));
	 TransparentBlt(hLevel9Temp2ndDC, 140, 320, 20, 20, hLevel9PortalDC, 0, 0, 20, 20, RGB(255, 255, 255));//重力区域进入传送门
	 TransparentBlt(hLevel9Temp2ndDC, 40, 340, 20, 20, hLevel9PortalDC, 0, 0, 20, 20, RGB(255, 255, 255));//重力区域出去传送门
	 //传送门语言提示
	 RECT r_portal1 = { 440, 200, 460, 220 }, r_portal2 = { 40, 240, 60, 260 };
	 if (PtInRect(&r_portal1, level9_player) || PtInRect(&r_portal2, level9_player))
	 {
		 CString str = L"面码需要按下 SPACE 键进",str1=L"行人物位置传送哦！她将会",str2=L"带你去一个未知的地方";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0,0,0));		 
		 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
		 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());
		 TextOut(hTemp9DC, 300, 580, str2, str2.GetLength());
		 
	 }
	 //前2个传送门
	 if (PtInRect(&r_portal1, level9_player) && KEY_DOWN(VK_SPACE))//第一个传送门传送位置,传送到第二个门处
	 {
		 level9_px = 40;
		 level9_py = 240;
	 }
	 if (PtInRect(&r_portal2, level9_player) && KEY_DOWN(VK_SPACE))//第一个传送门传送位置,传送到第一个门处
	 {
		 level9_px = 440;
		 level9_py = 200;
	 }
	 //重力区域传送门
	 RECT r_portal_in_description = { 140, 300, 160, 320 }, r_portal_in = { 140, 320, 160, 340 }, r_portal_out= {40,340,60,360};
	 if (PtInRect(&r_portal_in_description, level9_player))
	 {
		 CString str = L"往下面码就将进入重力区域", str1 = L"啦！一个危机四伏的世界~",str2=L"这里不能使用加速符文！";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0, 0, 0));
		 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
		 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());
		 TextOut(hTemp9DC, 300, 580, str2, str2.GetLength());
	 }
	 if (PtInRect(&r_portal_in, level9_player))//人物传送
	 {
		 level9_px =40;
		 level9_py = 480;
	 }
	 if (PtInRect(&r_portal_out, level9_player))
	 {
		 level9_px = 140;
		 level9_py = 300;	 
	 }
	 //画第六颗龙珠的灰色尖刺
	 TransparentBlt(hLevel9Temp2ndDC,340,560,20,20,hLevel9ThornDC[1],0,0,20,20,RGB(255,255,255));
	 TransparentBlt(hLevel9Temp2ndDC,360,500,20,20,hLevel9ThornDC[2],0,0,20,20,RGB(255,255,255));
	 TransparentBlt(hLevel9Temp2ndDC,340,460,20,20,hLevel9ThornDC[1],0,0,20,20,RGB(255,255,255));
	 //关于第3颗龙珠吃不到的温馨提示
	 RECT r_ball3={340,360,360,380};
	 if(level9_box_placed==false&&PtInRect(&r_ball3,level9_player)&& level9ball_flag[2]==true)
	 {
	     CString str = L"顽皮的龙珠！！面码", str1 = L"似乎要用某个东西把",str2=L"路堵住才行,它是什么呢？";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0, 0, 0));
		 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
		 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());
		 TextOut(hTemp9DC, 300, 580, str2, str2.GetLength());
	 }
	 //画障碍物箱子（用于挡住移动的龙珠）
	 if(level9_box==true)
	    TransparentBlt(hLevel9Temp2ndDC,260,40,20,20,hLevel9BarrierDC,0,0,20,20,RGB(255,255,255));
	 else if(level9_box_placed==false)
		 TransparentBlt(hTemp9DC,355,665,20,20,hLevel9BarrierDC,0,0,20,20,RGB(255,255,255));
	 //判断箱子是否被吃
	 POINT Box={270,50};
	 if(GamePointDistance(Box,level9_player,20))
		 level9_box=false;//被吃了
	 //箱子说明
	 if(level9_box_description==true&&level9_box==false)
	 {
	     CString str = L"新物品Get！木头箱子 用来",str1=L"放置在某个区域,堵住某些道",str2=L"路,将鼠标移动到想要放置",str3=L"的位置，再按 Ctrl 键即可";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0, 0, 0));
		 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 300, 530, str, str.GetLength());
		 TextOut(hTemp9DC, 300, 550, str1, str1.GetLength());
		 TextOut(hTemp9DC, 300, 570, str2, str2.GetLength());
		 TextOut(hTemp9DC, 300, 590, str3, str3.GetLength());
	 }
	 //判断闪电是否被吃
	 POINT pflash={50,210};
	 if(GamePointDistance(level9_player,pflash,20))
	 { 
	    flash=false;//闪电已经被吃了
	 }
	 //画闪电
	 if(flash==true)
		 TransparentBlt(hLevel9Temp2ndDC, 40, 200, 20, 20, hLevel9FlashDC, 0, 0, 20, 20, RGB(255, 255, 255));
	 else if(flash_used==false)
		 TransparentBlt(hTemp9DC, 395, 665, 20, 20, hLevel9FlashDC, 0, 0, 20, 20, RGB(255, 255, 255));
	 //闪电说明
	 if(flash==false&&level9_flash_description==true&&flash_used==false)
	 {
	     CString str = L"新物品Get！上帝之怒：用来",str1=L"摧毁一块墙壁，将其变成通路",str2=L"将鼠标移动到想要去除的地方",str3=L"再按Enter键即可生效~";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0, 0, 0));
		 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 300, 530, str, str.GetLength());
		 TextOut(hTemp9DC, 300, 550, str1, str1.GetLength());
		 TextOut(hTemp9DC, 300, 570, str2, str2.GetLength());
		 TextOut(hTemp9DC, 300, 590, str3, str3.GetLength());
	 
	 }
	 //使用了闪电后的怪物追逐玩家过程
	 if(flash_used==true)
	 {	 
	     CString str = L"Attention: 龙珠已经凑齐",str1=L"觊觎已久的比克大魔王想要",str2=L"夺取你的战利品，任务目标：",str3=L"保护龙珠不被夺走！！";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0, 0, 0));
		 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 300, 530, str, str.GetLength());
		 TextOut(hTemp9DC, 300, 550, str1, str1.GetLength());
		 TextOut(hTemp9DC, 300, 570, str2, str2.GetLength());
		 TextOut(hTemp9DC, 300, 590, str3, str3.GetLength());
		 //////////////////////////////////画比克大魔王体力槽
		 TransparentBlt(hTemp9DC,518,150,37,317,hLevel4TimeDC,0,0,37,317,RGB(255,255,255));
		 level9_timebar=161+level9_bike_counter*0.2;
		 //时间槽减少效果,必须在这个双缓冲里进行，不能再paint中进行
		 HPEN hpen = CreatePen(PS_NULL,1,RGB(0,0,0));//去掉矩形边框
		 SelectObject(hTemp8DC,hpen);
		 LOGBRUSH lb={BS_SOLID,RGB(0,255,0)};//画出黄色的时间槽
		 HBRUSH hbr =(HBRUSH)CreateBrushIndirect(&lb);
		 SelectObject(hTemp9DC,hbr);
		 //画减少的时间
		 Rectangle(hTemp9DC,532,level9_timebar,541,457);
		 DeleteObject(hbr);//必须要有delete，否则出现不可预知的错误
		 DeleteObject(hpen);
	 }
	 ///////////////
	 CString medicine_tool;
	 medicine_tool.Format(L"X%d", reveal_medecine_number);
	 if (reveal_medecine_number>0)
		 SetTextColor(hTemp9DC, RGB(51, 255, 51));
	 else
		 SetTextColor(hTemp9DC, RGB(255, 0, 0));
	 if (level9_medicine[0] == false)//如果吃了药才显示
	 TextOut(hTemp9DC, 390, 715, medicine_tool, medicine_tool.GetLength());
	 //药水说明显示
	 if (level9_medecine_description == true && level9_medicine[0] == false)
	 {
		 CString str = L"新物品Get！女神之泪：用来",str1=L"永久照亮一块黑暗区域，将",str2=L"鼠标移动到想要照亮的区域，",str3=L"再按n键即可生效~";
		 SetBkMode(hTemp9DC, TRANSPARENT);
		 SetTextColor(hTemp9DC, RGB(0, 0, 0));
		 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		 TextOut(hTemp9DC, 300, 530, str, str.GetLength());
		 TextOut(hTemp9DC, 300, 550, str1, str1.GetLength());
		 TextOut(hTemp9DC, 300, 570, str2, str2.GetLength());
		 TextOut(hTemp9DC, 300, 590, str3, str3.GetLength());
	 }
	//画药水
	 if (level9_medicine[0]==true )
		 TransparentBlt(hLevel9Temp2ndDC, 480, 200, 20, 20, hLevel9MedicineDC[0], 0, 0, 20, 20, RGB(255, 255, 255));
	 else 
		 TransparentBlt(hTemp9DC, 370, 715, 20, 20, hLevel9MedicineDC[0], 0, 0, 20, 20, RGB(255, 255, 255));
	 //判断药水是否被吃
	 POINT reveal_med = { 490, 210 };
	 RECT r_med = {500,200,520,220};
	 if (GamePointDistance(level9_player, reveal_med, 20) )	
		 level9_medicine[0] = false;//药水被吃	 
	 //画钥匙：未被吃的钥匙
	 if (level9lockkey[3]==true)//红
	    TransparentBlt(hLevel9Temp2ndDC, 0, 200, 20, 20, hLevel9KeyDC[0], 0, 0, 20, 20, RGB(255, 255, 255));
	 else
		TransparentBlt(hTemp9DC, 235, 665, 20, 20, hLevel9KeyDC[0], 0, 0, 20, 20, RGB(255, 255, 255));
	 if (level9lockkey[2]==true)//蓝
		 TransparentBlt(hLevel9Temp2ndDC, 40, 540, 20, 20, hLevel9KeyDC[1], 0, 0, 20, 20, RGB(255, 255, 255));
	 else
	    TransparentBlt(hTemp9DC, 275, 665, 20, 20, hLevel9KeyDC[1], 0, 0, 20, 20, RGB(255, 255, 255));	 
	 if (IsEatGrayKey==true)//灰
		TransparentBlt(hLevel9Temp2ndDC,400,580,20,20,hLevel9GrayKeyDC,0,0,20,20,RGB(255,255,255));
	 else
	    TransparentBlt(hTemp9DC, 315, 665, 20, 20, hLevel9GrayKeyDC, 0, 0, 20, 20, RGB(255, 255, 255));	 
	 //画龙珠,1-7分别画
	 if(level9ball_flag[0]==true)//如果未被吃才画龙珠
	 TransparentBlt(hLevel9Temp2ndDC,460,80,20,20,hLevel9BallDC[0],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[1]==true)
	 TransparentBlt(hLevel9Temp2ndDC,340,240,20,20,hLevel9BallDC[1],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[2]==true)
	 TransparentBlt(hLevel9Temp2ndDC,level9_ball3_x*20,level9_ball3_y*20,20,20,hLevel9BallDC[2],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[3]==true)
	 TransparentBlt(hLevel9Temp2ndDC,140,260,20,20,hLevel9BallDC[3],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[4]==true)
	 TransparentBlt(hLevel9Temp2ndDC,420,500,20,20,hLevel9BallDC[4],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[5]==true)
	 TransparentBlt(hLevel9Temp2ndDC,340,420,20,20,hLevel9BallDC[5],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[6]==true)
	 TransparentBlt(hLevel9Temp2ndDC,260,500,20,20,hLevel9BallDC[6],0,0,20,20,RGB(255,255,255));
	 //龙珠中心位置以及玩家坐标
	 POINT dragonball1={470,90},dragonball2={350,250},dragonball3={level9_ball3_x*20+10,level9_ball3_y*20+10},dragonball4={150,270},dragonball5={430,510},dragonball6={350,430},dragonball7={270,510};	 
	 //判断是否龙珠被吃
	 if(GamePointDistance(dragonball1,level9_player,20))
		 level9ball_flag[0]=false;							             	 
	 if(GamePointDistance(dragonball2,level9_player,20))
		 level9ball_flag[1]=false;
	 if(GamePointDistance(dragonball3,level9_player,17))
		 level9ball_flag[2]=false;
	 if(GamePointDistance(dragonball4,level9_player,20))
		 level9ball_flag[3]=false;
	 if(GamePointDistance(dragonball5,level9_player,20))
		 level9ball_flag[4]=false;
	 if(GamePointDistance(dragonball6,level9_player,20))
		 level9ball_flag[5]=false;
	 if(GamePointDistance(dragonball7,level9_player,20))
		 level9ball_flag[6]=false;
	 //判断钥匙是否被吃
	 POINT bluekey = { 10, 210 }, redkey = { 50, 550 },graykey={410,610};
	 if (GamePointDistance(bluekey, level9_player, 20))
		 level9lockkey[3] = false;//蓝
	 if (GamePointDistance(redkey, level9_player, 20))
		 level9lockkey[2] = false;//红
	 if (GamePointDistance(graykey, level9_player, 20))
		IsEatGrayKey = false;//灰
	 TransparentBlt(hLevel9Temp2ndDC,level9_px,level9_py,17,17,hLevel9ActorDC,0,0,17,17,RGB(255,255,255));//画女主角
	 //闪电使用处理
	 if(KEY_DOWN(VK_RETURN)&&level9_maze[level9_flash_y][level9_flash_x] == 1&&flash==false&&flash_used==false)
	 {
	    level9_maze[level9_flash_y][level9_flash_x]=0;//去除墙壁
		flash_used=true;//闪电已经使用
		level9_flash_placed_x=level9_flash_x;
        level9_flash_placed_y=level9_flash_y;
	 }
	 //箱子放置按键处理
	 if (KEY_DOWN(VK_CONTROL) && level9_maze[level9_box_y][level9_box_x] == 0&&level9_box_placed==false&&(level9_box_x!=level9_player_x||level9_box_y!=level9_player_y)&&level9_box==false)
		 {
			 level9_maze[level9_box_y][level9_box_x] = 6;//箱子用6表示
			 level9_box_placed_x=level9_box_x;
			 level9_box_placed_y=level9_box_y;
			 level9_box_placed=true;//箱子已经放置
		 }
	 //箱子回收处理
	 if(abs(level9_player_x-level9_box_placed_x)+abs(level9_player_y-level9_box_placed_y)<=3&&level9_box_placed==true)//如果距离小于3则按键可以回收
	 {
	    CString str = L"面码可以按下 SHIFT 来",str1=L"回收用过的箱子哦~";
		SetBkMode(hTemp9DC, TRANSPARENT);
		SetTextColor(hTemp9DC, RGB(0, 0, 0));
		TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
		TextOut(hTemp9DC, 300, 540, str, str.GetLength());
		TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());		 
		if(KEY_DOWN(VK_SHIFT))//按shift回收箱子
		{
		   level9_box_placed=false;
		   level9_maze[level9_box_placed_y][level9_box_placed_x]=0;//恢复道路为0
		}
	 
	 }
	 
	 for(int i=0;i<31;i++)
		 for(int j=0;j<30;j++)
		 {
		   if(level9_maze[i][j]==1)
			   TransparentBlt(hLevel9Temp2ndDC,j*20,i*20,20,20,hLevel9BrickDC[0],0,0,20,20,RGB(255,255,255));//画砖块		   
		   //画锁，用来表示门的
		   else if (level9_maze[i][j] == 2)//红
		   TransparentBlt(hLevel9Temp2ndDC, j*20, i*20, 20, 20, hLevel9KeyDC[2], 0, 0, 20, 20, RGB(255, 255, 255));
		   else if (level9_maze[i][j] == 4)//蓝
		   TransparentBlt(hLevel9Temp2ndDC, j*20, i*20, 20, 20, hLevel9KeyDC[3], 0, 0, 20, 20, RGB(255, 255, 255));
		   else if(level9_maze[i][j]==5)
           TransparentBlt(hLevel9Temp2ndDC, j*20, i*20, 20, 20, hLevel9GrayLockDC, 0, 0, 20, 20, RGB(255, 255, 255));
		   else if(level9_maze[i][j]==6)
           TransparentBlt(hLevel9Temp2ndDC, j*20, i*20, 20, 20, hLevel9BarrierDC, 0, 0, 20, 20, RGB(255, 255, 255));
		   else if(level9_maze[i][j]==7)//紫色障碍物
		   TransparentBlt(hLevel9Temp2ndDC,j*20,i*20,20,20,hLevel9PinkBarrierDC,0,0,20,20,RGB(255,255,255));
		 }
	 
	
		 
	//////////////以上是第二次dc上画各种迷宫之类的物体
	 //画主角
	 CircleCapture(hTemp9DC, level9_px-35, level9_py-35, 90,hLevel9Temp2ndDC, level9_px-35, level9_py-35, 90,0,NULL );//神级函数，将源dc圆形区域拷贝到目标dc，一般的bitblt只有方形
	
	 //在画女主这之后画龙珠飞行动画
	 if(level9ball_flag[0]==false)
	 TransparentBlt(hTemp9DC,460-level9_ball1_counter_dx,80+level9_ball1_counter_dy,20,20,hLevel9BallDC[0],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[1]==false)
	 TransparentBlt(hTemp9DC,340-level9_ball2_counter_dx,240+level9_ball2_counter_dy,20,20,hLevel9BallDC[1],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[2]==false)
	 TransparentBlt(hTemp9DC,340-level9_ball3_counter_dx,360+level9_ball3_counter_dy,20,20,hLevel9BallDC[2],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[3]==false)
	 TransparentBlt(hTemp9DC,140-level9_ball4_counter_dx,260+level9_ball4_counter_dy,20,20,hLevel9BallDC[3],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[4]==false)
	 TransparentBlt(hTemp9DC,420-level9_ball5_counter_dx,500+level9_ball5_counter_dy,20,20,hLevel9BallDC[4],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[5]==false)
	 TransparentBlt(hTemp9DC,340-level9_ball6_counter_dx,420+level9_ball6_counter_dy,20,20,hLevel9BallDC[5],0,0,20,20,RGB(255,255,255));
	 if(level9ball_flag[6]==false)
	 TransparentBlt(hTemp9DC,260-level9_ball7_counter_dx,500+level9_ball7_counter_dy,20,20,hLevel9BallDC[6],0,0,20,20,RGB(255,255,255));
	 //游戏文字提示：拿钥匙开门
	 RECT r_redlock = { 420, 80, 440, 100 }, r_bluelock = {380,260,400,280},r_graylock={160,240,180,260};
	 if (PtInRect(&r_redlock, level9_player))
	 {
		 if (level9lockkey[3] == true)//如果钥匙未吃
		 {
			 CString str = L"喔~ 前面貌似堵住了,面码",str1=L"需要找到红色钥匙将锁打开！";
			 SetBkMode(hTemp9DC, TRANSPARENT);
			 SetTextColor(hTemp9DC, RGB(0, 0, 0));
			 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
			 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
			 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());
		 }
		 else //如果钥匙已吃了
		 {
			 CString str = L" 按 SPACE 使用红色钥匙",str1=L"开门！去拿到你的龙珠吧~";
			 SetBkMode(hTemp9DC, TRANSPARENT);
			 SetTextColor(hTemp9DC, RGB(0, 0, 0));
			 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
			 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
			 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());
		 }
	 }
	 if (KEY_DOWN(VK_SPACE) && level9lockkey[3] == false && PtInRect(&r_redlock, level9_player))
		 level9_maze[4][22] = 0;//解锁红色的
	 if (PtInRect(&r_bluelock, level9_player))
	 {
		 if (level9lockkey[2] == true)
		 {
			 CString str = L"喔~ 前面貌似堵住了,面码", str1 = L"需要找到蓝色钥匙将锁打开！";
			 SetBkMode(hTemp9DC, TRANSPARENT);
			 SetTextColor(hTemp9DC, RGB(0, 0, 0));
			 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
			 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
			 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());
		 }
		 else
		 {
			 CString str = L" 按 SPACE 使用蓝色钥匙", str1 = L"开门！去拿到你的龙珠吧~";
			 SetBkMode(hTemp9DC, TRANSPARENT);
			 SetTextColor(hTemp9DC, RGB(0, 0, 0));
			 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
			 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
			 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());
		 }
	 }
     if (KEY_DOWN(VK_SPACE) && level9lockkey[2] == false && PtInRect(&r_bluelock, level9_player))
		 level9_maze[13][18] = 0;//解锁蓝色的
	 if(PtInRect(&r_graylock,level9_player))
	 {
	    if(IsEatGrayKey==true)
		{
		     CString str = L"喔~ 前面貌似堵住了,面码", str1 = L"需要找到灰色钥匙将锁打开！";
			 SetBkMode(hTemp9DC, TRANSPARENT);
			 SetTextColor(hTemp9DC, RGB(0, 0, 0));
			 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
			 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
			 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());
		}
		else
		{		
		     CString str = L" 按 SPACE 使用灰色钥匙", str1 = L"开门！去拿到你的箱子吧~";
			 SetBkMode(hTemp9DC, TRANSPARENT);
			 SetTextColor(hTemp9DC, RGB(0, 0, 0));
			 TransparentBlt(hTemp9DC, 270, 510, 250, 139, hLevel9DialogDC, 0, 0, 250, 139, RGB(255, 255, 255));
			 TextOut(hTemp9DC, 300, 540, str, str.GetLength());
			 TextOut(hTemp9DC, 300, 560, str1, str1.GetLength());						
		}	   	 
	 }
	 if (KEY_DOWN(VK_SPACE) && IsEatGrayKey == false && PtInRect(&r_graylock, level9_player))
		 level9_maze[12][9] = 0;//解锁蓝色的
	 DeleteObject(hfont1);//万万不能少，否则会出现未知错误
	 //药水使用
	/* if (KEY_DOWN(VK_RETURN) && level9_medicine[0] == false && reveal_medecine_number>0)
	 {
		 reveal_medecine_number--;
	 }*/
	 if (level9_medicine[0] ==false)//药水使用显像
	 {
		
		 if (level9_medecine_coordinate_array[0] >= 0 && level9_medecine_coordinate_array[1] >= 0)
			 CircleCapture(hTemp9DC, level9_medecine_coordinate_array[0]-30, level9_medecine_coordinate_array[1]-30, 80, hLevel9Temp2ndDC, level9_medecine_coordinate_array[0]-30, level9_medecine_coordinate_array[1]-30, 80, 0, NULL);
		 if (level9_medecine_coordinate_array[2] >= 0 && level9_medecine_coordinate_array[3] >= 0)
			 CircleCapture(hTemp9DC, level9_medecine_coordinate_array[2]-30, level9_medecine_coordinate_array[3]-30, 80, hLevel9Temp2ndDC, level9_medecine_coordinate_array[2]-30, level9_medecine_coordinate_array[3]-30, 80, 0, NULL);
		 if (level9_medecine_coordinate_array[4] >= 0 && level9_medecine_coordinate_array[5] >= 0)
			 CircleCapture(hTemp9DC, level9_medecine_coordinate_array[4]-30, level9_medecine_coordinate_array[5]-30, 80, hLevel9Temp2ndDC, level9_medecine_coordinate_array[4]-30, level9_medecine_coordinate_array[5]-30, 80, 0, NULL);	 	 
	 }
	 ////////////////////////////第三颗龙珠闪避处理
	 if (abs(level9_player_x - level9_ball3_x) + abs(level9_player_y - level9_ball3_y) < 2)//如果2者之间矩阵距离小于2
	 {
		//注意矩阵坐标这里是反的，千万不要搞错
		if (level9_maze[level9_ball3_y][level9_ball3_x-1] == 0 && (abs(level9_player_x - (level9_ball3_x - 1)) + abs(level9_player_y - level9_ball3_y) >= 2))
		 {
			 level9_ball3_x--;	 
		 }
		  if (level9_maze[level9_ball3_y-1 ][level9_ball3_x] == 0 && (abs(level9_player_x - level9_ball3_x ) + abs(level9_player_y - (level9_ball3_y-1))>= 2))
		 {
			 level9_ball3_y--;
		 }
		if (level9_maze[level9_ball3_y][level9_ball3_x+1] == 0 && (abs(level9_player_x - (level9_ball3_x + 1)) + abs(level9_player_y - level9_ball3_y) >= 2))
		 {
			 level9_ball3_x++;
		 }
		
		 if (level9_maze[level9_ball3_y+1][level9_ball3_x] == 0 && (abs(level9_player_x - level9_ball3_x) + abs(level9_player_y - (level9_ball3_y + 1))>= 2))
		 {
			 level9_ball3_y++;
		 } 
	 }
	 //方向控制
	 if(KEY_DOWN(VK_LEFT))
	 {
	     if(level9_px>=0&&(level9_maze[level9_py/20][(level9_px-2)/20]==0&&level9_maze[(level9_py+17)/20][(level9_px-2)/20]==0))//迷宫墙壁碰撞判断,通过判断距离玩家中心点+-3距离的迷宫矩阵是否是1
		 level9_px-=2;
	 }
	  if(KEY_DOWN(VK_RIGHT))
	 {
	     if(level9_px+17<=600&&(level9_maze[level9_py/20][(level9_px+17+2)/20]==0&&level9_maze[(level9_py+17)/20][(level9_px+17+2)/20]==0))
		 level9_px+=2;
	 }
	   if(KEY_DOWN(VK_UP))
	 {
		 if (level9_py >= 0 && (level9_maze[(level9_py - 3) / 20][(level9_px) / 20] == 0 && level9_maze[(level9_py - 2) / 20][(level9_px + 17) / 20] == 0))		   
		 level9_py -= 2;		  
	 }
	    if(KEY_DOWN(VK_DOWN))
	 {
	     if(level9_py+17<=600&&(level9_maze[(level9_py+17+2)/20][(level9_px)/20]==0&&level9_maze[(level9_py+17+2)/20][(level9_px+17)/20]==0))
		 level9_py+=2;
	 }
     
     
	
     BitBlt(hdc,0,0,600,800,hTemp9DC,0,0,SRCCOPY);//第3次缓冲

}

}
void CGameMap::GamePaint(HDC hdc)
{
	//通过game-state的值来决定到底画那一关的图像或者初始背景
	srand(time(0));//随机数初始化	
	 if(game_state==4)//第二关
	{
	  //重新初始化球的位置 100,80,-5,5,150,80,5,-5,200,80,-5,5,100,140,-5,-5,100,180,5,5
	  ball[0].x=289,ball[0].y=145;ball[0].dx=rand()%2 ? 4:-4;ball[0].dy=rand()%2 ? 4:-4;
	   ball[1].x=208,ball[1].y=201;ball[1].dx=rand()%2 ? 4:-4;ball[1].dy=rand()%2 ? 4:-4;
	   ball[2].x=373,ball[2].y=201;ball[2].dx=rand()%2 ? 4:-4;ball[2].dy=rand()%2 ? 4:-4;
	   ball[3].x=341,ball[3].y=294;ball[3].dx=rand()%2 ? 4:-4;ball[3].dy=rand()%2 ? 4:-4;
	   ball[4].x=238,ball[4].y=293;ball[4].dx=rand()%2 ? 4:-4;ball[4].dy=rand()%2 ? 4:-4;
	   start=clock();//让小球初始静止一段时间
	   Level2_counter=0;
	}

	else if(game_state==13)//第七关prelude
	{
	  BitBlt(hdc,0,0,600,800,hLevelPreDC,0,0,SRCCOPY);	
	}
/////////////////////////////////////////////////////////////////////以下是除了关卡外的界面
	else if(game_state==-3)//进入游戏信息界面
	{
	   BitBlt(hdc,0,0,600,800,hGameInfoBgDC,0,0,SRCCOPY);//画背景图片
	   if(music_state==1)		//画音乐图标 
		TransparentBlt(hdc,12,800-128+12,64,64,hMusicONDC,0,0,64,64,RGB(255,255,255));//这个函数的前4个坐标是客户区坐标系，不是屏幕坐标系
	   else
		TransparentBlt(hdc,12,800-128+12,64,64,hMusicOFFDC,0,0,64,64,RGB(255,255,255));//这个函数的4个坐标是客户区坐标系，不是屏幕坐标系
	   //回到主菜单 牌子
	   TransparentBlt(hdc,-20,450,150,180,hReturnMenuDC,0,0,150,180,RGB(255,255,255));	
	   //书写游戏信息
	   SetBkMode(hdc,TRANSPARENT);
	   LOGFONT lf;
		lf.lfWidth = 15;
		lf.lfHeight = 15;
	   ZeroMemory(&lf,sizeof(LOGFONT));   
		//SetTextColor(hdc,RGB(200,0,0));
		lstrcpy(lf.lfFaceName,L"幼圆");//必须是lstrcpy才行否则会出错
		HFONT hFont = CreateFontIndirect(&lf);
		SelectObject(hdc,hFont);
	   TextOut(hdc,100,320,L"游戏关卡背景音乐：未闻花名ED中文版,Bilibili AV号627018",37);
	   TextOut(hdc,100,340,L"主菜单背景音乐：仙剑奇侠传2游戏原声《水龙吟》",25);
	     DeleteObject(hFont);
	}
	
}


bool IsWin_level8(int a[17][17],int row,int column,int chess)//第八关胜利判断函数
{
	if((a[row][column]==chess&&a[row][column-1]==chess&&a[row][column-2]==chess&&a[row][column-3]==chess&&a[row][column-4]==chess)||//列判断
       (a[row][column+1]==chess&&a[row][column]==chess&&a[row][column-1]==chess&&a[row][column-2]==chess&&a[row][column-3]==chess)||
	   (a[row][column+2]==chess&&a[row][column+1]==chess&&a[row][column]==chess&&a[row][column-1]==chess&&a[row][column-2]==chess)||
	   (a[row][column+3]==chess&&a[row][column+2]==chess&&a[row][column+1]==chess&&a[row][column]==chess&&a[row][column-1]==chess)||
	   (a[row][column+4]==chess&&a[row][column+3]==chess&&a[row][column+2]==chess&&a[row][column+1]==chess&&a[row][column]==chess)||
	   (a[row][column]==chess&&a[row+1][column]==chess&&a[row+2][column]==chess&&a[row+3][column]==chess&&a[row+4][column]==chess)||//行判断
	   (a[row-1][column]==chess&&a[row][column]==chess&&a[row+1][column]==chess&&a[row+2][column]==chess&&a[row+3][column]==chess)||
	   (a[row-2][column]==chess&&a[row-1][column]==chess&&a[row][column]==chess&&a[row+1][column]==chess&&a[row+2][column]==chess)||
	   (a[row-3][column]==chess&&a[row-2][column]==chess&&a[row-1][column]==chess&&a[row][column]==chess&&a[row+1][column]==chess)||
	   (a[row-4][column]==chess&&a[row-3][column]==chess&&a[row-2][column]==chess&&a[row-1][column]==chess&&a[row][column]==chess)||
	   (a[row][column]==chess&&a[row+1][column+1]==chess&&a[row+2][column+2]==chess&&a[row+3][column+3]==chess&&a[row+4][column+4]==chess)||//主对角判断
	   (a[row-1][column-1]==chess&&a[row][column]==chess&&a[row+1][column+1]==chess&&a[row+2][column+2]==chess&&a[row+3][column+3]==chess)||
	   (a[row-2][column-2]==chess&&a[row-1][column-1]==chess&&a[row][column]==chess&&a[row+1][column+1]==chess&&a[row+2][column+2]==chess)||
	   (a[row-3][column-3]==chess&&a[row-2][column-2]==chess&&a[row-1][column-1]==chess&&a[row][column]==chess&&a[row+1][column+1]==chess)||
	   (a[row-4][column-4]==chess&&a[row-3][column-3]==chess&&a[row-2][column-2]==chess&&a[row-1][column-1]==chess&&a[row][column]==chess)||
	   (a[row][column]==chess&&a[row+1][column-1]==chess&&a[row+2][column-2]==chess&&a[row+3][column-3]==chess&&a[row+4][column-4]==chess)||//副对角判断
	   (a[row-1][column+1]==chess&&a[row][column]==chess&&a[row+1][column-1]==chess&&a[row+2][column-2]==chess&&a[row+3][column-3]==chess)||
	   (a[row-2][column+2]==chess&&a[row-1][column+1]==chess&&a[row][column]==chess&&a[row+1][column-1]==chess&&a[row+2][column-2]==chess)||
	   (a[row-3][column+3]==chess&&a[row-2][column+2]==chess&&a[row-1][column+1]==chess&&a[row][column]==chess&&a[row+1][column-1]==chess)||
	   (a[row-4][column+4]==chess&&a[row-3][column+3]==chess&&a[row-2][column+2]==chess&&a[row-1][column+1]==chess&&a[row][column]==chess))
	     return true;
	return false;


}