#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <conio.h>
#include <ShellAPI.h>  


int main()
{
	int thestart = 0;
	char str[100];
	system("del Del_Temp.bat");
	system("title 开始");
	system("mode con cols=66 lines=32");
	if (!system("taskkill /im main.exe") == NULL)
	{
		system("cls");
		printf("请输入访问口令。\n");
		printf("输入:");
		scanf_s("%s", str, 10);
		{
			if (_stricmp(str, "KAIXU") == 0)
			{
				system("cls");
				system("start main/Main");
				Sleep(5000);
			}
			else
			{
				printf("口令错误。\n");
				printf("按任意键重启程序。\n");
				_getch();
				system("start start.exe");
				exit(0);
			}
		}
	}
	else
	{
		system("start main/Main.exe");
		Sleep(5000);
	}
	return 0;
}