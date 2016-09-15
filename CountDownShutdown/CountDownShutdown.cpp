#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <stdio.h>
#define LEAST_COUNTDOWN 0


int main()
{
	int num = 30;
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND); //禁止关闭程序
	DrawMenuBar(GetConsoleWindow());
	system("title 倒计时");
	printf("系统将在30秒后关机。\n");
	while (num > LEAST_COUNTDOWN)
	{
		printf("%d\n", num);
		num--;
		Sleep(1000);
	}
	exit(0);
	return 0;
}