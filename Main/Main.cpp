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
#pragma warning(disable:4244)  //����ת�����󾯸�4244



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
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND); //��ֹ�رճ���
	DrawMenuBar(GetConsoleWindow());
	system("title �๦�ܹ���");
	system("mode con cols=65 lines=32");
	if (!system("taskkill /f /im start.exe") == NULL)
	{
		system("cls");
		system("taskkill /f /im explorer.exe");
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
		printf("�޴�");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("֮�ˡ�\n");
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
			printf("���룺");
			scanf_s("%s", str, 10);
			{
				if (_stricmp(str, "C") == 0)
				{
					system("echo @����:C>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start c:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "A") == 0)
				{
					system("echo @����:A>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start a:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "B") == 0)
				{
					system("echo @����:B>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start b:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "D") == 0)
				{
					system("echo @����:D>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start d:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "E") == 0)
				{
					system("echo @����:E>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start e:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "F") == 0)
				{
					system("echo @����:F>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start f:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "G") == 0)
				{
					system("echo @����:G>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start g:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "H") == 0)
				{
					system("echo @����:H>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start h:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "I") == 0)
				{
					system("echo @����:I>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start i:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "J") == 0)
				{
					system("echo @����:J>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start j:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "K") == 0)
				{
					system("echo @����:K>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start k:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "L") == 0)
				{
					system("echo @����:L>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start l:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "M") == 0)
				{
					system("echo @����:M>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start m:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "N") == 0)
				{
					system("echo @����:N>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start n:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "O") == 0)
				{
					system("echo @����:O>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start o:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "P") == 0)
				{
					system("echo @����:P>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start p:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "Q") == 0)
				{
					system("echo @����:Q>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start q:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "R") == 0)
				{
					system("echo @����:R>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start r:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "S") == 0)
				{
					system("echo @����:S>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start s:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "T") == 0)
				{
					system("echo @����:T>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start t:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "U") == 0)
				{
					system("echo @����:U>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start u:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "V") == 0)
				{
					system("echo @����:V>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start v:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "W") == 0)
				{
					system("echo @����:W>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start w:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "X") == 0)
				{
					system("echo @����:X>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start x:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "Y") == 0)
				{
					system("echo @����:Y>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start y:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "Z") == 0)
				{
					system("echo @����:Z>>.\\logs\\Multi-tool.log");
					system("cls");
					system("start z:");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "1") == 0)
				{
					char str3[100];
					system("echo @����:1(30S�ػ�).>>.\\logs\\Multi-tool.log");
					system("cls");
					system("shutdown -f -s -t 30");
					system("start main/CountDownShutdown.exe");
					printf("ϵͳ����30���ػ���\n");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					printf("1.");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("��ֹ�ػ�����");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("��\n");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					printf("2.");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("���̹ػ�");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("��\n");
					printf("����:");
					scanf_s("%s", str3, 10);
					{
						if (_stricmp(str3, "1") == 0)
						{
							system("shutdown -a");
							system("echo @����:1(ȡ���ػ�)>>.\\logs\\Multi-tool.log");
							system("cls");
							system("taskkill /im CountDownShutdown.exe");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("�ػ�������ȡ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
							thebackover();
							continue;
						}
						else if (_stricmp(str3, "2") == 0)
						{
							system("echo @����:2(ǿ�йػ�)>>.\\logs\\Multi-tool.log");
							system("shutdown -a");
							system("taskkill /im CountDownShutdown.exe");
							system("shutdown -f -s -t 0");
							exit(0);
						}
						else
						{
							system("echo @����:(��ָ��)>>.\\logs\\Multi-tool.log");
							system("cls");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("û�и�ָ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
							thebackover();
							continue;
						}
					}
				}
				else if (_stricmp(str, "2") == 0)
				{
					char str3[100];
					system("echo @����:2(30S����)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("shutdown -f -r -t 30");
					system("start main/CountDownRestart.exe");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					printf("1.");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("��ֹ��������");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("��\n");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
					printf("2.");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("����������\n");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("��\n");
					printf("����:");
					scanf_s("%s", str3, 10);
					{
						if (_stricmp(str3, "1") == 0)
						{
							system("shutdown -a");
							system("echo @����:1(ȡ������)>>.\\logs\\Multi-tool.log");
							system("cls");
							system("taskkill /im CountDownRestart.exe");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("����������ȡ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
							thebackover();
							continue;
						}
						else if (_stricmp(str3, "2") == 0)
						{
							system("echo @����:2(ǿ������)>>.\\logs\\Multi-tool.log");
							system("shutdown -a");
							system("taskkill /im CountDownRestart.exe");
							system("shutdown -f -r -t 0");
							exit(0);
						}
						else
						{
							system("echo @����:(��ָ��)>>.\\logs\\Multi-tool.log");
							system("cls");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("û�и�ָ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
							thebackover();
							continue;
						}
					}
				}
				else if (_stricmp(str, "3") == 0)
				{
					system("echo @����:3(ȡ���ػ�������)>>.\\logs\\Multi-tool.log");
					system("cls");
					if (!system("taskkill /f /im CountDownShutdown.exe") == NULL)
					{
						system("cls");
						if (!system("taskkill /f /im CountDownRestart.exe") == NULL)
						{
							if (!system("shutdown -a") == NULL)
							{
								system("echo @���κ�������ر��������С�>>.\\logs\\Multi-tool.log");
								system("cls");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
								printf("���κ�������ر���������");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
								printf("��\n");
								thebackover();
								continue;
							}
							else
							{
								system("echo @�ػ�������������ȡ����>>.\\logs\\Multi-tool.log");
								system("cls");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
								printf("�ػ�������������ȡ��");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
								printf("��\n");
								thebackover();
								continue;
							}
						}
						else
						{
							system("echo @����������ȡ����>>.\\logs\\Multi-tool.log");
							system("cls");
							system("shutdown -a");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("����������ȡ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
							thebackover();
							continue;
						}
					}
					else
					{
						system("echo @�ػ�������ȡ����>>.\\logs\\Multi-tool.log");
						system("cls");
						system("shutdown -a");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("�ػ�������ȡ��");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("��\n");
						thebackover();
						continue;
					}
				}
				else if (_stricmp(str, "4") == 0)
				{
					system("echo @����:4(���������)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("taskmgr");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "5") == 0)
				{
					system("echo @����:5(�������)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("control");
					thebackover();
					continue;
				}

				else if (_stricmp(str, "6") == 0)
				{
					system("echo @����:6(������)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("calc");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "7") == 0)
				{
					system("echo @����:7(ע���)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("regedit");
					thebackover();
					continue;
				}
				else if (_stricmp(str, "8") == 0)
				{
					system("echo @����:8(����)>>.\\logs\\Multi-tool.log");
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
					system("echo @����:9(IP��Ϣ)>>.\\logs\\Multi-tool.log");
					system("cls");
					system("ipconfig");
					thebackover();
				}
				else if (_stricmp(str, "10") == 0)
				{
					system("echo @����:10(�Զ���ػ�)>>.\\logs\\Multi-tool.log");
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
					printf("��ֹ�����κη���������\n");
					printf("����������Ҫ�ڶ���ʱ���ػ�(��λ:hour)��\n");
					printf("����:");
					scanf_s("%s", shutdownstartorrestarttime1, 10);
					printf("����������Ҫ�ڶ���ʱ���ػ�(��λ:minute)��\n");
					printf("����:");
					scanf_s("%s", shutdownstartorrestarttime2, 10);
					printf("����������Ҫ�ڶ���ʱ���ػ�(��λ:second)��\n");
					printf("����:");
					scanf_s("%s", shutdownstartorrestarttime3, 10);
					thechartoint1 = atof(shutdownstartorrestarttime1);
					thechartoint2 = atof(shutdownstartorrestarttime2);
					thechartoint3 = atof(shutdownstartorrestarttime3);
					thechartointall = thechartoint1 * 3600 + thechartoint2 * 60 + thechartoint3;
					if (thechartoint3 < 0, thechartoint3 < 0, thechartoint3 < 0)
					{
						printf("����:���ݲ���Ϊ����\n");
						continue;
					}
					else
					{
						if (thechartointall >= 315360000)
						{
							printf("����:���ݹ���\n");
							printf("���������ܳ���315360000=10�ꡣ\n");
							continue;
						}
						_itoa_s(thechartointall, all, 200, 10);
						strcat_s(shutdownstart, all);
						if (!system(shutdownstart) == NULL)
						{
							system("cls");
							printf("����!\n");
							printf("ԭ�����£�\n");
							printf("1.��������̫��\n");
							printf("2.�����˷���������\n");
							printf("3.����������ַ�����\n");
							printf("4.�Ѿ��йػ��������ƻ����ڡ�\n");
							continue;
						}
						else
						{
							AllocConsole();
							{
								thechartointall = atof(all);  //char to int
								thecountdowndosth("ϵͳ", "�ػ�", thechartoint1, thechartoint2, thechartoint3, 0);
							}
							continue;
						}
					}
				}
				else if (_stricmp(str, "11") == 0)
				{
					system("echo @����:11(�Զ�������)>>.\\logs\\Multi-tool.log");
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
					printf("��ֹ�����κη�����Z��\n");
					printf("����������Ҫ�ڶ���ʱ�������(��λ:hour)��\n");
					printf("����:");
					scanf_s("%9s", shutdownstartorrestarttime1, 10);
					printf("����������Ҫ�ڶ���ʱ�������(��λ:minute)��\n");
					printf("����:");
					scanf_s("%9s", shutdownstartorrestarttime2, 10);
					printf("����������Ҫ�ڶ���ʱ�������(��λ:second)��\n");
					printf("����:");
					scanf_s("%9s", shutdownstartorrestarttime3, 10);
					thechartoint1 = atof(shutdownstartorrestarttime1);
					thechartoint2 = atof(shutdownstartorrestarttime2);
					thechartoint3 = atof(shutdownstartorrestarttime3);
					thechartointall = thechartoint1 * 3600 + thechartoint2 * 60 + thechartoint3;
					if (thechartoint3 < 0, thechartoint3 < 0, thechartoint3 < 0)
					{
						printf("����:���ݲ���Ϊ����\n");
						continue;
					}
					else
					{
						if (thechartointall >= 315360000)
						{
							printf("����:���ݹ���\n");
							printf("���������ܳ���315360000=10�ꡣ\n");
							continue;
						}
						_itoa_s(thechartointall, all, 200, 10);
						strcat_s(shutdownrestart, all);
						if (!system(shutdownrestart) == NULL)
						{
							system("cls");
							printf("����!\n");
							printf("ԭ�����£�\n");
							printf("1.��������̫��\n");
							printf("2.�����˷���������\n");
							printf("3.����������ַ�����\n");
							printf("4.�Ѿ��йػ��������ƻ����ڡ�\n");
							continue;
						}
						else
						{
							AllocConsole();
							{
								thechartointall = atof(all);  //char to int
								thecountdowndosth("ϵͳ", "����", thechartoint1, thechartoint2, thechartoint3, 0);
							}
							continue;
						}
					}
				}
				else if (_stricmp(str, "12") == 0)
				{
					system("echo @����:12(CMD)>>.\\logs\\Multi-tool.log");
					system("cls");
					DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND); //����ر�CMD����
					DrawMenuBar(GetConsoleWindow());
					HANDLE con = GetStdHandle(STD_OUTPUT_HANDLE); //�ָ�ԭ����������
					COORD buf = { 120,400 };
					SetConsoleScreenBufferSize(con, buf);
					system("title cmd");
					system("cls");
					system("cmd");
					continue;
				}
				else if (_stricmp(str, "13") == 0)
				{
					system("echo @����:13(ִ��DOS)>>.\\logs\\Multi-tool.log");
					system("cls");
					char scmd[200];
					while (1)
					{
						system("cls");
						printf("������DOS���\n");
						printf("����exit�������˵���\n");
						printf("����:");
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
					system("echo @����:14(�޸�ϵͳ�ļ�)>>.\\logs\\Multi-tool.log");
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
						system("echo @����:15(�Զ������)>>.\\logs\\Multi-tool.log");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("��");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
						printf("����");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("��������");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("��\n");
						printf("1.A+D\n");
						printf("2.A-D\n");
						printf("3.A*D\n");
						printf("4.A/D\n");
						printf("5.X^2\n");
						printf("6.X^3\n");
						printf("7.Y=AX+B\n");
						printf("8.Y=AX^3+BX^2+C\n");
						printf("9.X^B\n");
						printf("����exit�������˵���\n");
						printf("����:");
						scanf_s("%s", str5, 10);
						if (_stricmp(str5, "1") == 0)
						{
							system("echo @����:1>>.\\logs\\Multi-tool.log");
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
							system("echo @����:2>>.\\logs\\Multi-tool.log");
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
							system("echo @����:3>>.\\logs\\Multi-tool.log");
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
							system("echo @����:4>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A=");
							scanf_s("%f", &A);
							printf("D=");
							scanf_s("%f", &D);
							{
								if (D == 0)
								{
									system("cls");
									printf("��������Ϊ0��\n\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
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
							system("echo @����:5>>.\\logs\\Multi-tool.log");
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
							system("echo @����:6>>.\\logs\\Multi-tool.log");
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
							system("echo @����:7>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A,X,B����Ϊ0��\n");
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
							system("echo @����:8>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("A,X,B����Ϊ0��\n");
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
							system("echo @����:9>>.\\logs\\Multi-tool.log");
							system("cls");
							printf("X=");
							scanf_s("%f", &X);
							printf("B=");
							scanf_s("%f", &B);
							if (X == 0 && B == 0)
							{
								printf("X��B����ͬʱΪ0��\n");
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
							system("echo @����:16(ж���ļ�)>>.\\logs\\Multi-tool.log");
							printf("����");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
							printf("Y");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("ȷ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
							printf("����:");
							scanf_s("%s", str2, 10);
							{
								if (_stricmp(str2, "Y") == 0)
								{
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
									printf("�����Լ��Ҫ10�롣\n");
									system("fsutil file createnew .\\Del_Temp.bat");
									system("echo @echo ȷ��?>>.\\Del_Temp.bat");
									system("echo @pause>>.\\Del_Temp.bat");
									system("echo rmdir /s /q .\\main>>.\\Del_Temp.bat");
									Sleep(2000);
									printf("�����ʼ����....\n");
									system("echo rmdir /s /q .\\logs>>.\\Del_Temp.bat");
									system("echo del /f /q start.exe>>.\\Del_Temp.bat");
									system("echo del /f /q ReadMe.txt>>.\\Del_Temp.bat");
									system("echo del Del_Temp.bat>>.\\Del_Temp.bat");
									system("echo exit>>.\\Del_Temp.bat");
									Sleep(2000);
									printf("����ִ����....\n");
									Sleep(2000);
									system("start Del_Temp.bat");
								}
								else
								{
									system("echo @����:(��ָ��)>>.\\logs\\Multi-tool.log");
									thebackover();
									continue;
								}
							}
						}

						else if (_stricmp(str, "17") == 0)
						{
							system("echo @����:17(�ر�)>>.\\logs\\Multi-tool.log");
							system("cls");
							exit(0);
						}

						else
						{
							system("echo @����:(��ָ��)>>.\\logs\\Multi-tool.log");
							system("cls");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("û�и�ָ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
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
					printf("�����빤��ʱ�䡣(����:19:25)\n");
					printf("����:");
					scanf_s("%s", thetime, 200);
					printf("�����빤������(��֧��DOS(CMD)����)\n");
					printf("����:");
					scanf_s("%s", whattodo, 200);
					printf("�Ƿ���Ҫ���Ӳ���(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
					scanf_s("%s", doyouneedaddcanshu1, 200);
					if (_stricmp(doyouneedaddcanshu1, "@over") == 0)
					{
						strcat_s(KONGGE, whattodo);
						strcat_s(thetime, KONGGE);
						strcat_s(KONGGE2, thetime);
						strcat_s(theat, KONGGE2);
						char areyouready[200];
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						printf("%s������%sʵʩ��\n", whattodo, thetime);
						printf("���������%s��\n", theat);
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("����");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
						printf("YES");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("ȷ��");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("��\n");
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
						printf("�Ƿ���Ҫ���ӵ�2������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
							printf("%s������%sʵʩ��\n", whattodo, thetime);
							printf("���������%s��\n", theat);
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("����");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
							printf("YES");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("ȷ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
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
							printf("�Ƿ���Ҫ���ӵ�3������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
								printf("%s������%sʵʩ��\n", whattodo, thetime);
								printf("���������%s��\n", theat);
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
								printf("����");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
								printf("YES");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
								printf("ȷ��");
								SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
								printf("��\n");
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
								printf("�Ƿ���Ҫ���ӵ�4������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
									printf("%s������%sʵʩ��\n", whattodo, thetime);
									printf("���������%s��\n", theat);
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
									printf("����");
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
									printf("YES");
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
									printf("ȷ��");
									SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
									printf("��\n");
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
									printf("�Ƿ���Ҫ���ӵ�5������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
										printf("%s������%sʵʩ��\n", whattodo, thetime);
										printf("���������%s��\n", theat);
										SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
										printf("����");
										SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
										printf("YES");
										SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
										printf("ȷ��");
										SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
										printf("��\n");
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
										printf("�Ƿ���Ҫ���ӵ�6������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
											printf("%s������%sʵʩ��\n", whattodo, thetime);
											printf("���������%s��\n", theat);
											SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
											printf("����");
											SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
											printf("YES");
											SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
											printf("ȷ��");
											SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
											printf("��\n");
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
											printf("�Ƿ���Ҫ���ӵ�7������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
												printf("%s������%sʵʩ��\n", whattodo, thetime);
												printf("���������%s��\n", theat);
												SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
												printf("����");
												SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
												printf("YES");
												SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
												printf("ȷ��");
												SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
												printf("��\n");
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
												printf("�Ƿ���Ҫ���ӵ�8������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
													printf("%s������%sʵʩ��\n", whattodo, thetime);
													printf("���������%s��\n", theat);
													SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
													printf("����");
													SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
													printf("YES");
													SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
													printf("ȷ��");
													SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
													printf("��\n");
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
													printf("�Ƿ���Ҫ���ӵ�9������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
														printf("%s������%sʵʩ��\n", whattodo, thetime);
														printf("���������%s��\n", theat);
														SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
														printf("����");
														SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
														printf("YES");
														SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
														printf("ȷ��");
														SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
														printf("��\n");
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
														printf("�Ƿ���Ҫ���ӵ�10������(����shutdown (-f) (-s) (-t) (0)��\n���֧������10������),�������Ҫ��������( @over )��\n");
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
															printf("%s������%sʵʩ��\n", whattodo, thetime);
															printf("���������%s��\n", theat);
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
															printf("����");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
															printf("YES");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
															printf("ȷ��");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
															printf("��\n");
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
															printf("%s������%sʵʩ��\n", whattodo, thetime);
															printf("���������%s��\n", theat);
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
															printf("����");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
															printf("YES");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
															printf("ȷ��");
															SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
															printf("��\n");
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
					printf("����:");
					scanf_s("%s", name, 100);
					printf("���������%s,ռ%zd���ֽ�,%zd��\n", name, sizeof name, strlen(name));
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
					printf("Now num1=%d,num2=%d,num3=%p,num3λ��%p.\n", NUM1, NUM2, NUM3, NUM3);
					NUM1++;
					printf("After Add,now num1=%d,num2=%d,num3=%p,num3λ��%p.\n", NUM1, NUM2, NUM3, NUM3);
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
					system("echo @����:>>.\\logs\\Multi-tool.log");
					system("echo @û�и�ָ�>>.\\logs\\Multi-tool.log");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("û�и�ָ��");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("��\n");
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
	printf("��");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("�����");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("���ز˵�");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	system("echo @����������ز˵���>>.\\logs\\Multi-tool.log");
	_getch();
}
void therestartover(void)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("�����");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("��������");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	system("echo @���������������>>.\\logs\\Multi-tool.log");
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
	printf("%s����%dСʱ%d����%d���%s��\n", who, numhour, numminute, numsecond, whattodo);
	printf("�ϼ�Ϊ%d��%d�롣\n", allminute, numsecond);
	printf("�ϼ�Ϊ%d�롣\n", allsecond);
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
	printf("��");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("�����");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("���شβ˵�");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	system("echo @����������شβ˵���>>.\\logs\\Multi-tool.log");
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
	printf("��ǰĿ¼Ϊ%s", str4);
	printf("\n");
	thetime();
	printf("printf(\"Hello World\");\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("����ָ����Ż���ĸ���ָ������\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("1.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("��30���رռ����");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("2.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("��30������������");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("3.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("��ֹ�ػ�����������");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("4.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("�����������");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("5.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("�򿪿������");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("6.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("�򿪼�����");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("7.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("��ע���༭��");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("8.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("��������");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("9.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("�鿴IP��Ϣ");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("10.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("�Զ���ػ�ʱ��");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("11.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("�Զ�������ʱ��");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("12.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("��������ʾ��");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("13.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("ִ��DOS����");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("14.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("�޸�ϵͳ�ļ�");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("15.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("ʹ�ü��㹦��");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("16.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("ɾ������");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("17.");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("�رճ���");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("���������̷�");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("���������");
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("��\n");
}