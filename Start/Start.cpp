#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <conio.h>
#include <ShellAPI.h>  


int main(void)
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
		while (1)
		{
			scanf_s("%s", str, 10);
			{
				if (_stricmp(str, "KAIXU") == 0)
				{
					system("cls");
					system("start main/Main");
					Sleep(5000);
					break;
				}
				else
				{
					system("cls");
					printf("口令错误。\n");
					printf("请重新输入访问口令。\n");
					printf("输入：");
			     	continue;
				}
			}
		}
		exit(0);
	}
	else
	{
		system("start main/Main.exe");
		Sleep(5000);
		exit(0);
	}
}