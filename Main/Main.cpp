//Welcome to https://github.com/TeackReais/Multi-Tool/blob/master/Main/Main.cpp
//Thanks for github.com
//Created By XUKAI.
//Here is source.
//Enjoy using!!!!
#include "stdafx.h"
#include "stdafx.cpp"
#include "psapi.h"  
#include <fstream>
#define SPACE ' '
#define RNTER '\n'
#pragma warning(disable:4244)  //忽略转换错误警告4244



void thesecondbackover(void);
void theshow(void);
void thebackover(void);
void thecountdowndosth(char *who, char *whattodo, int numhour, int numminute, int numsecond, int least_countdown);
void therestartover(void);
void thetime(void);
int main() 
{
	char str4[80]; 
	_getcwd(str4, sizeof(str4));
	char str[100];
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND); //禁止关闭程序
	DrawMenuBar(GetConsoleWindow());
	system("title 多功能工具");
	system("mode con cols=65 lines=32");
	if (!system("taskkill /f /im start.exe") == NULL)
	{
		system("cls");
		system("taskkill /f /im explorer.exe");
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
		printf("愚蠢");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("之人。\n");
		system("start CountDownShutdown.exe");
		system("shutdown -f -s -t 30");
		Sleep(30000);
		exit(0);
	}
	else
	{
		system("cls");
		system("md .\\logs>nul");
		system("fsutil file createnew .\\logs\\Multi-tool.log 1000>nul");
		while (1)
		{
			system("echo @(list)>>.\\logs\\Multi-tool.log");
			system("cls");
			theshow();
			printf("输入：");
			scanf_s("%s", str, 10);
			{
				if (_stricmp(str, "C") == 0)
				{
					system("echo @输入:C>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start c:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "A") == 0)
				{
					system("echo @输入:A>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start a:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "B") == 0)
				{
					system("echo @输入:B>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start b:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "D") == 0)
				{
					system("echo @输入:D>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start d:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "E") == 0)
				{
					system("echo @输入:E>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start e:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "F") == 0)
				{
					system("echo @输入:F>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start f:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "G") == 0)
				{
					system("echo @输入:G>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start g:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "H") == 0)
				{
					system("echo @输入:H>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start h:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "I") == 0)
				{
					system("echo @输入:I>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start i:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "J") == 0)
				{
					system("echo @输入:J>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start j:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "K") == 0)
				{
					system("echo @输入:K>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start k:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "L") == 0)
				{
					system("echo @输入:L>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start l:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "M") == 0)
				{
					system("echo @输入:M>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start m:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "N") == 0)
				{
					system("echo @输入:N>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start n:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "O") == 0)
				{
					system("echo @输入:O>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start o:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "P") == 0)
				{
					system("echo @输入:P>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start p:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "Q") == 0)
				{
					system("echo @输入:Q>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start q:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "R") == 0)
				{
					system("echo @输入:R>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start r:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "S") == 0)
				{
					system("echo @输入:S>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start s:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "T") == 0)
				{
					system("echo @输入:T>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start t:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "U") == 0)
				{
					system("echo @输入:U>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start u:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "V") == 0)
				{
					system("echo @输入:V>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start v:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "W") == 0)
				{
					system("echo @输入:W>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start w:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "X") == 0)
				{
					system("echo @输入:X>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start x:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "Y") == 0)
				{
					system("echo @输入:Y>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start y:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "Z") == 0)
				{
					system("echo @输入:Z>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start z:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "1") == 0)
				{
					char str3[100];
					system("echo @输入:1(30S关机).>>.\\logs\\Multi-tool.log");
					system("cls");
					system("shutdown -f -s -t 30");
					system("start main/CountDownShutdown.exe");
					printf("系统将在30秒后关机。\n");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					printf("1.");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("终止关机任务");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("。\n");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					printf("2.");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("立刻关机");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("。\n");
					printf("输入:");
					scanf_s("%s", str3, 10);
					{
						if (_stricmp(str3, "1") == 0)
						{
							system("shutdown -a");
							system("echo @输入:1(取消关机)>>.\\logs\\Multi-tool.log");
							system("cls");
							system("taskkill /im CountDownShutdown.exe");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("关机任务已取消");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							thebackover();
							continue;
						}
						else if (_stricmp(str3, "2") == 0)
						{
							system("echo @输入:2(强行关机)>>.\\logs\\Multi-tool.log");
							system("shutdown -a");
							system("taskkill /im CountDownShutdown.exe");
							system("shutdown -f -s -t 0");
							exit(0);
						}
						else
						{
							system("echo @输入:(无指令)>>.\\logs\\Multi-tool.log");
							system("cls");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("没有该指令");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							thebackover();
							continue;
						}
					}
				}
				else if (_stricmp(str, "2") == 0)
				{
					char str3[100];
					system("echo @输入:2(30S重启)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("shutdown -f -r -t 30");
					system("start main/CountDownRestart.exe");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					printf("1.");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("终止重启任务");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("。\n");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					printf("2.");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("立刻重启。\n");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("。\n");
					printf("输入:");
					scanf_s("%s", str3, 10);
					{
						if (_stricmp(str3, "1") == 0)
						{
							system("shutdown -a");
							system("echo @输入:1(取消重启)>>.\\logs\\Multi-tool.log");
							system("cls");
							system("taskkill /im CountDownRestart.exe");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("重启任务已取消");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							thebackover();
							continue;
						}
						else if (_stricmp(str3, "2") == 0)
						{
							system("echo @输入:2(强行重启)>>.\\logs\\Multi-tool.log");
							system("shutdown -a");
							system("taskkill /im CountDownRestart.exe");
							system("shutdown -f -r -t 0");
							exit(0);
						}
						else
						{
							system("echo @输入:(无指令)>>.\\logs\\Multi-tool.log");
							system("cls");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("没有该指令");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							thebackover();
							continue;
						}
					}
				}
				else if (_stricmp(str, "3") == 0)
				{
					system("echo @输入:3(取消关机或重启)>>.\\logs\\Multi-tool.log");
					system("cls");
					if (!system("taskkill /f /im CountDownShutdown.exe") == NULL)
					{
						system("cls");
						if (!system("taskkill /f /im CountDownRestart.exe") == NULL)
						{
							if (!system("shutdown -a") == NULL)
							{
								system("echo @无任何重启或关闭任务运行。>>.\\logs\\Multi-tool.log");
								system("cls");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
								printf("无任何重启或关闭任务运行");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
								printf("。\n");
								thebackover();
								continue;
							}
							else
							{
								system("echo @关机或重启任务已取消。>>.\\logs\\Multi-tool.log");
								system("cls");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
								printf("关机或重启任务已取消");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
								printf("。\n");
								thebackover();
								continue;
							}
						}
						else
						{
							system("echo @重启任务已取消。>>.\\logs\\Multi-tool.log");
							system("cls");
							system("shutdown -a");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("重启任务已取消");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							thebackover();
							continue;
						}
					}
					else
					{
						system("echo @关机任务已取消。>>.\\logs\\Multi-tool.log");
						system("cls");
						system("shutdown -a");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("关机任务已取消");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("。\n");
						thebackover();
						continue;
					}
				}
				else if (_stricmp(str, "4") == 0)
				{
					system("echo @输入:4(任务管理器)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("taskmgr");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "5") == 0)
				{
					system("echo @输入:5(控制面板)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("control");
					thebackover();
					continue;
				}

				else if (_stricmp(str, "6") == 0)
				{
					system("echo @输入:6(计算器)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("calc");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "7") == 0)
				{
					system("echo @输入:7(注册表)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("regedit");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "8") == 0)
				{
					system("echo @输入:8(音乐)>>.\\logs\\Multi-tool.log");
					system("cls");
					Beep(500, 500);
					Beep(600, 500);
					Beep(700, 500);
					Beep(800, 500);
					Beep(900, 500);
					Beep(1000, 500);
					Beep(1100, 500);
					Beep(494, 200);
					Beep(523, 300);
					Beep(578, 400);
					Beep(659, 500);
					Beep(698, 600);
					Beep(784, 700);
					Beep(880, 800);
					Beep(932, 900);
					Beep(1046, 1000);
					Beep(1175, 1100);
					Beep(1381, 1200);
					Beep(1480, 1300);
					Beep(1661, 1400);
					thebackover();
					continue;
				}
				else if (_stricmp(str, "9") == 0)
				{
					system("echo @输入:9(IP信息)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("ipconfig");
					thebackover();
				}
				else if (_stricmp(str, "10") == 0)
				{
					system("echo @输入:10(自定义关机)>>.\\logs\\Multi-tool.log");
					DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND);
					DrawMenuBar(GetConsoleWindow());
					int thechartoint1;
					int thechartoint2;
					int thechartoint3;
					int thechartointall;
					char shutdownstart[100] = "shutdown -f -s -t ";
					char all[200];
					char shutdownstartorrestarttime1[200];
					char shutdownstartorrestarttime2[200];
					char shutdownstartorrestarttime3[200];
					system("cls");
					printf("禁止输入任何非正整数。\n");
					printf("请输入您想要在多少时间后关机(单位:hour)。\n");
					printf("输入:");
					scanf_s("%s", shutdownstartorrestarttime1, 10);
					printf("请输入您想要在多少时间后关机(单位:minute)。\n");
					printf("输入:");
					scanf_s("%s", shutdownstartorrestarttime2, 10);
					printf("请输入您想要在多少时间后关机(单位:second)。\n");
					printf("输入:");
					scanf_s("%s", shutdownstartorrestarttime3, 10);
					thechartoint1 = atof(shutdownstartorrestarttime1);
					thechartoint2 = atof(shutdownstartorrestarttime2);
					thechartoint3 = atof(shutdownstartorrestarttime3);
					thechartointall = thechartoint1 * 3600 + thechartoint2 * 60 + thechartoint3;
					if (thechartoint3 < 0, thechartoint3 < 0, thechartoint3 < 0)
					{
						printf("错误:数据不能为负。\n");
						continue;
					}
					else
					{
						if (thechartointall >= 315360000)
						{
							printf("错误:数据过大。\n");
							printf("总秒数不能超过315360000=10年。\n");
							continue;
						}
						_itoa_s(thechartointall, all, 200, 10);
						strcat_s(shutdownstart, all);
						if (!system(shutdownstart) == NULL)
						{
							system("cls");
							printf("错误!\n");
							printf("原因如下：\n");
							printf("1.输入数据太大。\n");
							printf("2.输入了非正整数。\n");
							printf("3.输入非数字字符串。\n");
							printf("4.已经有关机或重启计划存在。\n");
							continue;
						}
						else
						{
							AllocConsole();
							{
								thechartointall = atof(all);  //char to int
								thecountdowndosth("系统", "关机", thechartoint1, thechartoint2, thechartoint3, 0);
							}
							continue;
						}
					}
				}
				else if (_stricmp(str, "11") == 0)
				{
					system("echo @输入:11(自定义重启)>>.\\logs\\Multi-tool.log");
					DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND);
					DrawMenuBar(GetConsoleWindow());
					void therestartover(void);
					void thecountdowndosth(char *who, char *whattodo, int numhour, int numminute, int numsecond, int least_countdown);
					int thechartoint1;
					int thechartoint2;
					int thechartoint3;
					int thechartointall;
					char shutdownrestart[100] = "shutdown -f -r -t ";
					char all[200];
					char shutdownstartorrestarttime1[200];
					char shutdownstartorrestarttime2[200];
					char shutdownstartorrestarttime3[200];
					system("cls");
					printf("禁止输入任何非数字Z。\n");
					printf("请输入您想要在多少时间后重启(单位:hour)。\n");
					printf("输入:");
					scanf_s("%9s", shutdownstartorrestarttime1, 10);
					printf("请输入您想要在多少时间后重启(单位:minute)。\n");
					printf("输入:");
					scanf_s("%9s", shutdownstartorrestarttime2, 10);
					printf("请输入您想要在多少时间后重启(单位:second)。\n");
					printf("输入:");
					scanf_s("%9s", shutdownstartorrestarttime3, 10);
					thechartoint1 = atof(shutdownstartorrestarttime1);
					thechartoint2 = atof(shutdownstartorrestarttime2);
					thechartoint3 = atof(shutdownstartorrestarttime3);
					thechartointall = thechartoint1 * 3600 + thechartoint2 * 60 + thechartoint3;
					if (thechartoint3 < 0, thechartoint3 < 0, thechartoint3 < 0)
					{
						printf("错误:数据不能为负。\n");
						continue;
					}
					else
					{
						if (thechartointall >= 315360000)
						{
							printf("错误:数据过大。\n");
							printf("总秒数不能超过315360000=10年。\n");
							continue;
						}
						_itoa_s(thechartointall, all, 200, 10);
						strcat_s(shutdownrestart, all);
						if (!system(shutdownrestart) == NULL)
						{
							system("cls");
							printf("错误!\n");
							printf("原因如下：\n");
							printf("1.输入数据太大。\n");
							printf("2.输入了非正整数。\n");
							printf("3.输入非数字字符串。\n");
							printf("4.已经有关机或重启计划存在。\n");
							continue;
						}
						else
						{
							AllocConsole();
							{
								thechartointall = atof(all);  //char to int
								thecountdowndosth("系统", "重启", thechartoint1, thechartoint2, thechartoint3, 0);
							}
							continue;
						}
					}
				}
				else if (_stricmp(str, "12") == 0)
				{
					system("echo @输入:12(CMD)>>.\\logs\\Multi-tool.log");
					system("cls");
					DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND); //允许关闭CMD窗口
					DrawMenuBar(GetConsoleWindow());
					HANDLE con = GetStdHandle(STD_OUTPUT_HANDLE); //恢复原来窗口设置
					COORD buf = { 120,400 };
					SetConsoleScreenBufferSize(con, buf);
					system("title cmd");
					system("cls");
					system("cmd");
					continue;
				}
				else if (_stricmp(str, "13") == 0)
				{
					system("echo @输入:13(执行DOS)>>.\\logs\\Multi-tool.log");
					system("cls");
					char scmd[200];
					while (1)
					{
						system("cls");
						printf("请输入DOS命令。\n");
						printf("输入exit返回主菜单。\n");
						printf("输入:");
						scanf_s("%s", scmd, 200);
						if (_stricmp(scmd, "exit") != 0)
						{
							if (system(scmd) == NULL)
							{
								printf("Error");
								thesecondbackover();
								continue;
							}
							else
							{
								thesecondbackover();
								continue;
							}
						}
						else
						{
							break;
						}
						thebackover();
						break;
					}
				}
				else if (_stricmp(str, "14") == 0)
				{
					system("echo @输入:14(修复系统文件)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("sfc /SCANNOW");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "15") == 0)
				{
					while (1)
					{
						char str5[100];
						float X;
						float X_2;
						float X_3;
						float A;
						float Y;
						float B;
						float D;
						float C;
						system("cls");
						system("echo @输入:15(自定义计算)>>.\\logs\\Multi-tool.log");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("请");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
						printf("输入");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("计算内容");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("。\n");
						printf("1.A+D\n");
						printf("2.A-D\n");
						printf("3.A*D\n");
						printf("4.A/D\n");
						printf("5.X^2\n");
						printf("6.X^3\n");
						printf("7.Y=AX+B\n");
						printf("8.Y=AX^3+BX^2+C\n");
						printf("9.X^B\n");
						printf("输入exit返回主菜单。\n");
						printf("输入:");
						scanf_s("%s", str5, 10);
						if (_stricmp(str5, "1") == 0)
						{
							system("echo @输入:1>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A=");
							scanf_s("%f", &A);
							printf("D=");
							scanf_s("%f", &D);
							Y = A + D;
							printf("%.2f+%.2f=%.2f", A, D, Y);
							thesecondbackover();
							continue;

						}
						else if (_stricmp(str5, "2") == 0)
						{
							system("echo @输入:2>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A=");
							scanf_s("%f", &A);
							printf("D=");
							scanf_s("%f", &D);
							Y = A - D;
							printf("%.2f-%.2f=%.2f", A, D, Y);
							thesecondbackover();
							continue;

						}
						else if (_stricmp(str5, "3") == 0)
						{
							system("echo @输入:3>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A=");
							scanf_s("%f", &A);
							printf("D=");
							scanf_s("%f", &D);
							Y = A * D;
							printf("%.2f*%.2f=%.2f", A, D, Y);
							thesecondbackover();
							continue;

						}
						else if (_stricmp(str5, "4") == 0)
						{
							system("echo @输入:4>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A=");
							scanf_s("%f", &A);
							printf("D=");
							scanf_s("%f", &D);
							{
								if (D == 0)
								{
									system("cls");
									printf("除数不能为0。\n\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
									thesecondbackover();
									continue;
								}
								else
								{
									Y = A / D;
									printf("%.2f+%.2f=%.2f", A, D, Y);
									thesecondbackover();
									continue;
								}
							}
						}
						else if (_stricmp(str5, "5") == 0)
						{
							system("echo @输入:5>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A=");
							scanf_s("%f", &X);
							X_2 = X*X;
							printf("%.2f^2=%.2f\n", X, X_2);
							thesecondbackover();
							continue;

						}
						else if (_stricmp(str5, "6") == 0)
						{
							system("echo @输入:6>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A=");
							scanf_s("%f", &X);
							X_3 = X*X*X;
							printf("%.2f^3=%.2f\n", X, X_3);
							thesecondbackover();
							continue;
						}
						else if (_stricmp(str5, "7") == 0)
						{
							system("echo @输入:7>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A,X,B可以为0。\n");
							printf("X=");
							scanf_s("%f", &X);
							printf("A=");
							scanf_s("%f", &A);
							printf("B=");
							scanf_s("%f", &B);
							Y = A*X + B;
							printf("%.2f*%.2f+%.2f=%.2f\n", A, X, B, Y);
							thesecondbackover();
							continue;
						}
						else if (_stricmp(str5, "8") == 0)
						{
							system("echo @输入:8>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A,X,B可以为0。\n");
							printf("X=");
							scanf_s("%f", &X);
							printf("A=");
							scanf_s("%f", &A);
							printf("B=");
							scanf_s("%f", &B);
							printf("C=");
							scanf_s("%f", &C);
							X_2 = X*X;
							X_3 = X*X*X;
							Y = X_3*A + B*X_2 + C;
							printf("%.2f*%.2f^3+%.2f*%.2f^2+%.2f\n=%.2f*%.2f+%.2f*%.2f+%.2f\n=%.2f\n", A, X, B, X, C, A, X_3, B, X_2, C, Y);
							thesecondbackover();
							continue;
						}
						else if (_stricmp(str5, "9") == 0)
						{
							system("echo @输入:9>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("X=");
							scanf_s("%f", &X);
							printf("B=");
							scanf_s("%f", &B);
							if (X == 0 && B == 0)
							{
								printf("X和B不能同时为0。\n");
								thesecondbackover();
								continue;
							}
							else
							{
								printf("%.2f^%.2f=%.2f\n", X, B, pow(X, B));
								thesecondbackover();
								continue;
							}
						}
						else if (_stricmp(str5, "exit") == 0)
						{
							break;
						}
						else if (_stricmp(str, "16") == 0)
						{
							char str2[100];
							system("echo @输入:16(卸载文件)>>.\\logs\\Multi-tool.log");
							printf("输入");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
							printf("Y");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("确认");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							printf("输入:");
							scanf_s("%s", str2, 10);
							{
								if (_stricmp(str2, "Y") == 0)
								{
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
									printf("任务大约需要10秒。\n");
									system("fsutil file createnew .\\Del_Temp.bat");
									system("echo @echo 确认?>>.\\Del_Temp.bat");
									system("echo @pause>>.\\Del_Temp.bat");
									system("echo rmdir /s /q .\\main>>.\\Del_Temp.bat");
									Sleep(2000);
									printf("任务初始化中....\n");
									system("echo rmdir /s /q .\\logs>>.\\Del_Temp.bat");
									system("echo del /f /q start.exe>>.\\Del_Temp.bat");
									system("echo del /f /q ReadMe.txt>>.\\Del_Temp.bat");
									system("echo del Del_Temp.bat>>.\\Del_Temp.bat");
									system("echo exit>>.\\Del_Temp.bat");
									Sleep(2000);
									printf("任务执行中....\n");
									Sleep(2000);
									system("start Del_Temp.bat");
								}
								else
								{
									system("echo @输入:(无指令)>>.\\logs\\Multi-tool.log");
									thebackover();
									continue;
								}
							}
						}

						else if (_stricmp(str, "17") == 0)
						{
							system("echo @输入:17(关闭)>>.\\logs\\Multi-tool.log");
							system("cls");
							exit(0);
						}

						else
						{
							system("echo @输入:(无指令)>>.\\logs\\Multi-tool.log");
							system("cls");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("没有该指令");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							thebackover();
							continue;
						}
						thebackover();
						break;
					}
				}
				else if (_stricmp(str, "RW") == 0)
				{
					system("cls");
					char thetime[200];
					char KONGGE[200] = " ";
					char KONGGE2[200] = " ";
					char KONGGE3[200] = " ";
					char KONGGE4[200] = " ";
					char KONGGE5[200] = " ";
					char KONGGE6[200] = " ";
					char KONGGE7[200] = " ";
					char KONGGE8[200] = " ";
					char KONGGE9[200] = " ";
					char KONGGE10[200] = " ";
					char KONGGE11[200] = " ";
					char whattodo[200];
					char theat[200] = "at";
					char doyouneedaddcanshu1[200];
					char doyouneedaddcanshu2[200];
					char doyouneedaddcanshu3[200];
					char doyouneedaddcanshu4[200];
					char doyouneedaddcanshu5[200];
					char doyouneedaddcanshu6[200];
					char doyouneedaddcanshu7[200];
					char doyouneedaddcanshu8[200];
					char doyouneedaddcanshu9[200];
					printf("请输入工作时间。(例如:19:25)\n");
					printf("输入:");
					scanf_s("%s", thetime, 200);
					printf("请输入工作任务。(仅支持DOS(CMD)命令)\n");
					printf("输入:");
					scanf_s("%s", whattodo, 200);
					printf("是否需要增加参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
					scanf_s("%s", doyouneedaddcanshu1, 200);
					if (_stricmp(doyouneedaddcanshu1, "@over") == 0)
					{
						strcat_s(KONGGE, whattodo);
						strcat_s(thetime, KONGGE);
						strcat_s(KONGGE2, thetime);
						strcat_s(theat, KONGGE2);
						char areyouready[200];
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						printf("%s任务将在%s实施。\n", whattodo, thetime);
						printf("你输入的是%s。\n", theat);
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("输入");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
						printf("YES");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("确认");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("。\n");
						scanf_s("%s", areyouready, 200);
						if (_stricmp(areyouready, "YES") == 0)
						{
							system(theat);
							thebackover();
							continue;
						}
						else
						{
							thebackover();
							continue;
						}
					}
					else
					{
						printf("是否需要增加第2个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
						scanf_s("%s", doyouneedaddcanshu2, 200);
						if (_stricmp(doyouneedaddcanshu2, "@over") == 0)
						{
							strcat_s(KONGGE3, doyouneedaddcanshu1);
							strcat_s(whattodo, KONGGE3);
							strcat_s(KONGGE, whattodo);
							strcat_s(thetime, KONGGE);
							strcat_s(KONGGE2, thetime);
							strcat_s(theat, KONGGE2);
							char areyouready[200];
							HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
							printf("%s任务将在%s实施。\n", whattodo, thetime);
							printf("你输入的是%s。\n", theat);
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("输入");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
							printf("YES");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("确认");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							scanf_s("%s", areyouready, 200);
							if (_stricmp(areyouready, "YES") == 0)
							{
								system(theat);
								thebackover();
								continue;
							}
							else
							{
								thebackover();
								continue;
							}
						}
						else
						{
							printf("是否需要增加第3个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
							scanf_s("%s", doyouneedaddcanshu3, 200);
							if (_stricmp(doyouneedaddcanshu3, "@over") == 0)
							{
								strcat_s(KONGGE4, doyouneedaddcanshu2);
								strcat_s(doyouneedaddcanshu1, KONGGE4);
								strcat_s(KONGGE3, doyouneedaddcanshu1);
								strcat_s(whattodo, KONGGE3);
								strcat_s(KONGGE, whattodo);
								strcat_s(thetime, KONGGE);
								strcat_s(KONGGE2, thetime);
								strcat_s(theat, KONGGE2);
								char areyouready[200];
								HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
								printf("%s任务将在%s实施。\n", whattodo, thetime);
								printf("你输入的是%s。\n", theat);
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
								printf("输入");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
								printf("YES");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
								printf("确认");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
								printf("。\n");
								scanf_s("%s", areyouready, 200);
								if (_stricmp(areyouready, "YES") == 0)
								{
									system(theat);
									thebackover();
									continue;
								}
								else
								{
									thebackover();
									continue;
								}
							}
							else
							{
								printf("是否需要增加第4个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
								scanf_s("%s", doyouneedaddcanshu4, 200);
								if (_stricmp(doyouneedaddcanshu4, "@over") == 0)
								{
									strcat_s(KONGGE5, doyouneedaddcanshu3);
									strcat_s(doyouneedaddcanshu4, KONGGE5);
									strcat_s(KONGGE4, doyouneedaddcanshu2);
									strcat_s(doyouneedaddcanshu1, KONGGE4);
									strcat_s(KONGGE3, doyouneedaddcanshu1);
									strcat_s(whattodo, KONGGE3);
									strcat_s(KONGGE, whattodo);
									strcat_s(thetime, KONGGE);
									strcat_s(KONGGE2, thetime);
									strcat_s(theat, KONGGE2);
									char areyouready[200];
									HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
									printf("%s任务将在%s实施。\n", whattodo, thetime);
									printf("你输入的是%s。\n", theat);
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
									printf("输入");
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
									printf("YES");
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
									printf("确认");
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
									printf("。\n");
									scanf_s("%s", areyouready, 200);
									if (_stricmp(areyouready, "YES") == 0)
									{
										system(theat);
										thebackover();
										continue;
									}
									else
									{
										thebackover();
										continue;
									}
								}
								else
								{
									printf("是否需要增加第5个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
									scanf_s("%s", doyouneedaddcanshu5, 200);
									if (_stricmp(doyouneedaddcanshu5, "@over") == 0)
									{
										strcat_s(KONGGE6, doyouneedaddcanshu4);
										strcat_s(doyouneedaddcanshu3, KONGGE6);
										strcat_s(KONGGE5, doyouneedaddcanshu3);
										strcat_s(doyouneedaddcanshu4, KONGGE5);
										strcat_s(KONGGE4, doyouneedaddcanshu2);
										strcat_s(doyouneedaddcanshu1, KONGGE4);
										strcat_s(KONGGE3, doyouneedaddcanshu1);
										strcat_s(whattodo, KONGGE3);
										strcat_s(KONGGE, whattodo);
										strcat_s(thetime, KONGGE);
										strcat_s(KONGGE2, thetime);
										strcat_s(theat, KONGGE2);
										char areyouready[200];
										HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
										printf("%s任务将在%s实施。\n", whattodo, thetime);
										printf("你输入的是%s。\n", theat);
										SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
										printf("输入");
										SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
										printf("YES");
										SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
										printf("确认");
										SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
										printf("。\n");
										scanf_s("%s", areyouready, 200);
										if (_stricmp(areyouready, "YES") == 0)
										{
											system(theat);
											thebackover();
											continue;
										}
										else
										{
											thebackover();
											continue;
										}
									}
									else
									{
										printf("是否需要增加第6个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
										scanf_s("%s", doyouneedaddcanshu6, 200);
										if (_stricmp(doyouneedaddcanshu6, "@over") == 0)
										{
											strcat_s(KONGGE7, doyouneedaddcanshu5);
											strcat_s(doyouneedaddcanshu4, KONGGE7);
											strcat_s(KONGGE6, doyouneedaddcanshu4);
											strcat_s(doyouneedaddcanshu3, KONGGE6);
											strcat_s(KONGGE5, doyouneedaddcanshu3);
											strcat_s(doyouneedaddcanshu4, KONGGE5);
											strcat_s(KONGGE4, doyouneedaddcanshu2);
											strcat_s(doyouneedaddcanshu1, KONGGE4);
											strcat_s(KONGGE3, doyouneedaddcanshu1);
											strcat_s(whattodo, KONGGE3);
											strcat_s(KONGGE, whattodo);
											strcat_s(thetime, KONGGE);
											strcat_s(KONGGE2, thetime);
											strcat_s(theat, KONGGE2);
											char areyouready[200];
											HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
											printf("%s任务将在%s实施。\n", whattodo, thetime);
											printf("你输入的是%s。\n", theat);
											SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
											printf("输入");
											SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
											printf("YES");
											SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
											printf("确认");
											SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
											printf("。\n");
											scanf_s("%s", areyouready, 200);
											if (_stricmp(areyouready, "YES") == 0)
											{
												system(theat);
												thebackover();
												continue;
											}
											else
											{
												thebackover();
												continue;
											}
										}
										else
										{
											printf("是否需要增加第7个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
											scanf_s("%s", doyouneedaddcanshu7, 200);
											if (_stricmp(doyouneedaddcanshu7, "@over") == 0)
											{
												strcat_s(KONGGE8, doyouneedaddcanshu6);
												strcat_s(doyouneedaddcanshu5, KONGGE8);
												strcat_s(KONGGE7, doyouneedaddcanshu5);
												strcat_s(doyouneedaddcanshu4, KONGGE7);
												strcat_s(KONGGE6, doyouneedaddcanshu4);
												strcat_s(doyouneedaddcanshu3, KONGGE6);
												strcat_s(KONGGE5, doyouneedaddcanshu3);
												strcat_s(doyouneedaddcanshu4, KONGGE5);
												strcat_s(KONGGE4, doyouneedaddcanshu2);
												strcat_s(doyouneedaddcanshu1, KONGGE4);
												strcat_s(KONGGE3, doyouneedaddcanshu1);
												strcat_s(whattodo, KONGGE3);
												strcat_s(KONGGE, whattodo);
												strcat_s(thetime, KONGGE);
												strcat_s(KONGGE2, thetime);
												strcat_s(theat, KONGGE2);
												char areyouready[200];
												HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
												printf("%s任务将在%s实施。\n", whattodo, thetime);
												printf("你输入的是%s。\n", theat);
												SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
												printf("输入");
												SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
												printf("YES");
												SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
												printf("确认");
												SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
												printf("。\n");
												scanf_s("%s", areyouready, 200);
												if (_stricmp(areyouready, "YES") == 0)
												{
													system(theat);
													thebackover();
													continue;
												}
												else
												{
													thebackover();
													continue;
												}
											}
											else
											{
												printf("是否需要增加第8个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
												scanf_s("%s", doyouneedaddcanshu8, 200);
												if (_stricmp(doyouneedaddcanshu8, "@over") == 0)
												{
													strcat_s(KONGGE9, doyouneedaddcanshu7);
													strcat_s(doyouneedaddcanshu6, KONGGE9);
													strcat_s(KONGGE8, doyouneedaddcanshu6);
													strcat_s(doyouneedaddcanshu5, KONGGE8);
													strcat_s(KONGGE7, doyouneedaddcanshu5);
													strcat_s(doyouneedaddcanshu4, KONGGE7);
													strcat_s(KONGGE6, doyouneedaddcanshu4);
													strcat_s(doyouneedaddcanshu3, KONGGE6);
													strcat_s(KONGGE5, doyouneedaddcanshu3);
													strcat_s(doyouneedaddcanshu4, KONGGE5);
													strcat_s(KONGGE4, doyouneedaddcanshu2);
													strcat_s(doyouneedaddcanshu1, KONGGE4);
													strcat_s(KONGGE3, doyouneedaddcanshu1);
													strcat_s(whattodo, KONGGE3);
													strcat_s(KONGGE, whattodo);
													strcat_s(thetime, KONGGE);
													strcat_s(KONGGE2, thetime);
													strcat_s(theat, KONGGE2);
													char areyouready[200];
													HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
													printf("%s任务将在%s实施。\n", whattodo, thetime);
													printf("你输入的是%s。\n", theat);
													SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
													printf("输入");
													SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
													printf("YES");
													SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
													printf("确认");
													SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
													printf("。\n");
													scanf_s("%s", areyouready, 200);
													if (_stricmp(areyouready, "YES") == 0)
													{
														system(theat);
														thebackover();
														continue;
													}
													else
													{
														thebackover();
														continue;
													}
												}
												else
												{
													printf("是否需要增加第9个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
													scanf_s("%s", doyouneedaddcanshu9, 200);
													if (_stricmp(doyouneedaddcanshu9, "@over") == 0)
													{
														strcat_s(KONGGE10, doyouneedaddcanshu8);
														strcat_s(doyouneedaddcanshu7, KONGGE10);
														strcat_s(KONGGE9, doyouneedaddcanshu7);
														strcat_s(doyouneedaddcanshu6, KONGGE9);
														strcat_s(KONGGE8, doyouneedaddcanshu6);
														strcat_s(doyouneedaddcanshu5, KONGGE8);
														strcat_s(KONGGE7, doyouneedaddcanshu5);
														strcat_s(doyouneedaddcanshu4, KONGGE7);
														strcat_s(KONGGE6, doyouneedaddcanshu4);
														strcat_s(doyouneedaddcanshu3, KONGGE6);
														strcat_s(KONGGE5, doyouneedaddcanshu3);
														strcat_s(doyouneedaddcanshu4, KONGGE5);
														strcat_s(KONGGE4, doyouneedaddcanshu2);
														strcat_s(doyouneedaddcanshu1, KONGGE4);
														strcat_s(KONGGE3, doyouneedaddcanshu1);
														strcat_s(whattodo, KONGGE3);
														strcat_s(KONGGE, whattodo);
														strcat_s(thetime, KONGGE);
														strcat_s(KONGGE2, thetime);
														strcat_s(theat, KONGGE2);
														char areyouready[200];
														HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
														printf("%s任务将在%s实施。\n", whattodo, thetime);
														printf("你输入的是%s。\n", theat);
														SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
														printf("输入");
														SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
														printf("YES");
														SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
														printf("确认");
														SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
														printf("。\n");
														scanf_s("%s", areyouready, 200);
														if (_stricmp(areyouready, "YES") == 0)
														{
															system(theat);
															thebackover();
															continue;
														}
														else
														{
															thebackover();
															continue;
														}
													}
													else
													{
														printf("是否需要增加第10个参数(例如shutdown (-f) (-s) (-t) (0)，\n最多支持增加10个参数),如果不需要，请输入( @over )。\n");
														scanf_s("%s", doyouneedaddcanshu9, 200);
														if (_stricmp(doyouneedaddcanshu9, "@over") == 0)
														{
															strcat_s(KONGGE11, doyouneedaddcanshu9);
															strcat_s(doyouneedaddcanshu8, KONGGE11);
															strcat_s(KONGGE10, doyouneedaddcanshu8);
															strcat_s(doyouneedaddcanshu7, KONGGE10);
															strcat_s(KONGGE9, doyouneedaddcanshu7);
															strcat_s(doyouneedaddcanshu6, KONGGE9);
															strcat_s(KONGGE8, doyouneedaddcanshu6);
															strcat_s(doyouneedaddcanshu5, KONGGE8);
															strcat_s(KONGGE7, doyouneedaddcanshu5);
															strcat_s(doyouneedaddcanshu4, KONGGE7);
															strcat_s(KONGGE6, doyouneedaddcanshu4);
															strcat_s(doyouneedaddcanshu3, KONGGE6);
															strcat_s(KONGGE5, doyouneedaddcanshu3);
															strcat_s(doyouneedaddcanshu4, KONGGE5);
															strcat_s(KONGGE4, doyouneedaddcanshu2);
															strcat_s(doyouneedaddcanshu1, KONGGE4);
															strcat_s(KONGGE3, doyouneedaddcanshu1);
															strcat_s(whattodo, KONGGE3);
															strcat_s(KONGGE, whattodo);
															strcat_s(thetime, KONGGE);
															strcat_s(KONGGE2, thetime);
															strcat_s(theat, KONGGE2);
															char areyouready[200];
															HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
															printf("%s任务将在%s实施。\n", whattodo, thetime);
															printf("你输入的是%s。\n", theat);
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
															printf("输入");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
															printf("YES");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
															printf("确认");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
															printf("。\n");
															scanf_s("%s", areyouready, 200);
															if (_stricmp(areyouready, "YES") == 0)
															{
																system(theat);
																thebackover();
																continue;
															}
															else
															{
																thebackover();
																continue;
															}
														}
														else
														{
															strcat_s(KONGGE11, doyouneedaddcanshu9);
															strcat_s(doyouneedaddcanshu8, KONGGE11);
															strcat_s(KONGGE10, doyouneedaddcanshu8);
															strcat_s(doyouneedaddcanshu7, KONGGE10);
															strcat_s(KONGGE9, doyouneedaddcanshu7);
															strcat_s(doyouneedaddcanshu6, KONGGE9);
															strcat_s(KONGGE8, doyouneedaddcanshu6);
															strcat_s(doyouneedaddcanshu5, KONGGE8);
															strcat_s(KONGGE7, doyouneedaddcanshu5);
															strcat_s(doyouneedaddcanshu4, KONGGE7);
															strcat_s(KONGGE6, doyouneedaddcanshu4);
															strcat_s(doyouneedaddcanshu3, KONGGE6);
															strcat_s(KONGGE5, doyouneedaddcanshu3);
															strcat_s(doyouneedaddcanshu4, KONGGE5);
															strcat_s(KONGGE4, doyouneedaddcanshu2);
															strcat_s(doyouneedaddcanshu1, KONGGE4);
															strcat_s(KONGGE3, doyouneedaddcanshu1);
															strcat_s(whattodo, KONGGE3);
															strcat_s(KONGGE, whattodo);
															strcat_s(thetime, KONGGE);
															strcat_s(KONGGE2, thetime);
															strcat_s(theat, KONGGE2);
															char areyouready[200];
															HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
															printf("%s任务将在%s实施。\n", whattodo, thetime);
															printf("你输入的是%s。\n", theat);
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
															printf("输入");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
															printf("YES");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
															printf("确认");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
															printf("。\n");
															scanf_s("%s", areyouready, 200);
															if (_stricmp(areyouready, "YES") == 0)
															{
																system(theat);
																thebackover();
																continue;
															}
															else
															{
																thebackover();
																continue;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (_stricmp(str, "MZCS") == 0)
				{
					char name[100];
					system("cls");
					printf("输入:");
					scanf_s("%s", name, 100);
					printf("你的名字是%s,占%zd个字节,%zd。\n", name, sizeof name, strlen(name));
					thebackover();
					continue;
				}
				else if (_stricmp(str, "DKWJ") == 0)
				{
					FILE *fp;
					if (!(fp = fopen("C:\\Windows\\explorer.exe", "r+")) == NULL)
					{
						printf("Error!");
						thebackover();
						continue;
					}
					else
					{
						thebackover();
						continue;
					}
				}
				else if (_stricmp(str, "GETCHAR") == 0)
				{
					char ch;
					ch = getchar();
					if (ch = SPACE)
					{
						printf("1");
					}
					else
					{
						printf("%c", ch);
					}
					thebackover();
					continue;
				}
				else if (_stricmp(str, "Test") == 0)
				{
					int NUM1;
					int NUM2;
					int *NUM3 = &NUM1;
					NUM1 = 10;
					NUM2 = NUM1;
					printf("Now num1=%d,num2=%d,num3=%p,num3位于%p.\n", NUM1, NUM2, NUM3, NUM3);
					NUM1++;
					printf("After Add,now num1=%d,num2=%d,num3=%p,num3位于%p.\n", NUM1, NUM2, NUM3, NUM3);
					thebackover();
					continue;
				}
				else if (_stricmp(str, "DAXIAOCESHI") == 0)
				{
					char test1[200];
					char test2[200];
					printf("test1\n");
					scanf_s("%s", test1, 200);
					printf("test2\n");
					scanf_s("%s", test2, 200);
					if (_stricmp(test1, test2) == 0)
					{
						printf("%s=%s\n", test1, test2);
						thebackover();
						continue;
					}
					else if (_stricmp(test1, test2) > 0)
					{
						printf("%s>%s\n", test1, test2);
						thebackover();
						continue;
					}
					else if (_stricmp(test1, test2) < 0)
					{
						printf("%s<%s\n", test1, test2);
						thebackover();
						continue;
					}
					else
					{
						printf("??????????????????????\n");
						thebackover();
						continue;
					}
				}
				else
				{
					system("echo @输入:>>.\\logs\\Multi-tool.log");
					system("echo @没有该指令。>>.\\logs\\Multi-tool.log");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("没有该指令");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("。\n");
					thebackover();
					continue;
				}
			}
		}
	}
	return 0;
}
void thetime(void)
{
	system("date /t");
	system("time /t");
}
void thebackover(void)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("按");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("任意键");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("返回菜单");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	system("echo @按任意键返回菜单。>>.\\logs\\Multi-tool.log");
	_getch();
}
void therestartover(void)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("按");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("任意键");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("重启程序");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	system("echo @按任意键重启程序。>>.\\logs\\Multi-tool.log");
	_getch();
	system("start start.exe");
	Sleep(5000);
}
void thecountdowndosth(char *who, char *whattodo, int numhour, int numminute, int numsecond, int least_countdown)
{
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND);
	DrawMenuBar(GetConsoleWindow());
	system("cls");
	int allsecond;
	int allminute;
	allsecond = numhour * 3600 + numminute * 60 + numsecond;
	allminute = numhour * 60 + numminute;
	printf("%s将在%d小时%d分钟%d秒后%s。\n", who, numhour, numminute, numsecond, whattodo);
	printf("合计为%d分%d秒。\n", allminute, numsecond);
	printf("合计为%d秒。\n", allsecond);
	while (allsecond > least_countdown)
	{
		printf("%d\n", allsecond);
		allsecond--;
		Sleep(1000);
	}
	exit(0);
}
void thesecondbackover(void)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("按");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("任意键");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("返回次菜单");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	system("echo @按任意键返回次菜单。>>.\\logs\\Multi-tool.log");
	_getch();
}
void theshow(void)
{
	void thetime(void);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	char str4[80];
	_getcwd(str4, sizeof(str4));
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("By Xu(QQ1036673441).\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("当前目录为%s", str4);
	printf("\n");
	thetime();
	printf("printf(\"Hello World\");\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("输入指定序号或字母完成指定任务。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("1.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("在30秒后关闭计算机");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("2.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("在30秒后重启计算机");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("3.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("终止关机或重启任务");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("4.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("打开任务管理器");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("5.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("打开控制面板");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("6.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("打开计算器");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("7.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("打开注册表编辑器");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("8.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("发出音乐");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("9.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("查看IP信息");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("10.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("自定义关机时间");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("11.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("自定义重启时间");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("12.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("打开命令提示符");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("13.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("执行DOS命令");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("14.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("修复系统文件");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("15.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("使用计算功能");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("16.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("删除程序");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("17.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("关闭程序");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("输入任意盘符");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("打开任意分区");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("。\n");
}