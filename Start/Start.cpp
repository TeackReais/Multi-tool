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
	system("title ��ʼ");
	system("mode con cols=66 lines=32");
	if (!system("taskkill /im main.exe") == NULL)
	{
		system("cls");
		printf("��������ʿ��\n");
		printf("����:");
		while (1)
		{
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
					system("cls");
					printf("�������\n");
					printf("������������ʿ��\n");
					printf("���룺");
			     	continue;
				}
			}
		}
		system("pause");
	}
	else
	{
		system("start main/Main.exe");
		Sleep(5000);
	}
	return 0;
}