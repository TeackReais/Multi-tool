#include "stdafx.h"
#include "stdafx.cpp"
#include "psapi.h"  
#pragma warning(disable:4244)  //����ת�����󾯸�



void thezdyshutdownrestart(void);
void thezdyshutdownstart(void);
void thecountdowndosth(char *who, char *whattodo, int numhour, int numminute, int numsecond, int least_countdown);
void therestartover(void);
void thetime(void);
int main()
{
	//	FILE * fp1 = fopen("Settings.ini", "r");
	//	char setusepassword[100];
	//	char setpassword[100];
	//	char setdoubleclickstartmainexe[100];
	char str[100];
	char str4[80];
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
		system("md .\\logs>nul");
		system("fsutil file createnew .\\logs\\Multi-tool.log 1000>nul");
		system("echo @By Xu(QQ1036673441).>>.\\logs\\Multi-tool.log");
		system("echo @��������ִ�Сд��>>.\\logs\\Multi-tool.log");
		system("echo @�����ػ������������,���������QX��ֹ����>>.\\logs\\Multi-tool.log");
		system("echo @����GJ��30���رռ������>>.\\logs\\Multi-tool.log");
		system("echo @����CQ��30��������������>>.\\logs\\Multi-tool.log");
		system("echo @����QX��ֹ�ػ�����������>>.\\logs\\Multi-tool.log");
		system("echo @����RG�������������>>.\\logs\\Multi-tool.log");
		system("echo @����KM�򿪿�����塣>>.\\logs\\Multi-tool.log");
		system("echo @����JS�򿪼�������>>.\\logs\\Multi-tool.log");
		system("echo @����ZC��ע���༭����>>.\\logs\\Multi-tool.log");
		system("echo @����MS�������֡�>>.\\logs\\Multi-tool.log");
		system("echo @����IP�鿴IP��Ϣ��>>.\\logs\\Multi-tool.log");
		system("echo @����ZGJ�Զ���ػ�ʱ�䡣>>.\\logs\\Multi-tool.log");
		system("echo @����ZCQ�Զ���ػ�ʱ�䡣>>.\\logs\\Multi-tool.log");
		system("echo @����CMD��������ʾ����>>.\\logs\\Multi-tool.log");
		system("echo @����XF�޸�ϵͳ�ļ���>>.\\logs\\Multi-tool.log");
		system("echo @����ZJSʹ�ü��㹦�ܡ�>>.\\logs\\Multi-tool.log");
		system("echo @���������̷������������>>.\\logs\\Multi-tool.log");
		system("echo @����DELɾ������>>.\\logs\\Multi-tool.log");
		system("echo @����GB�رճ���>>.\\logs\\Multi-tool.log");
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("By Xu(QQ1036673441).\n");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		_getcwd(str4, sizeof(str4));
		printf("��ǰĿ¼Ϊ%s", str4);
		printf("\n");
		thetime();
		printf("printf(\"Hello World\");\n");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("������������ִ�Сд��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�ػ�������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("�����,���������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("QX");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��ֹ����\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("GJ");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("��30���رռ����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("CQ");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("��30������������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("QX");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("��ֹ�ػ�����������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("RG");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�����������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("KM");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�򿪿������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("JS");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�򿪼�����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("ZC");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("��ע���༭��");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("MS");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("��������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("IP");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�鿴IP��Ϣ");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("ZGJ");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�Զ���ػ�ʱ��");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("ZCQ");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�Զ�������ʱ��");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("CMD");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("��������ʾ��");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("XF");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�޸�ϵͳ�ļ�");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("ZJS");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("ʹ�ü��㹦��");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("�����̷�");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("���������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("DEL");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("ɾ������");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("����");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		printf("GB");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		printf("�رճ���");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		printf("��\n");
		printf("���룺");
		scanf_s("%s", str, 10);
		{
			if (_stricmp(str, "GJ") == 0)
			{
				char str3[100];
				system("echo @����:GJ>>.\\logs\\Multi-tool.log");
				system("echo @ϵͳ����30���ػ���>>.\\logs\\Multi-tool.log");
				system("echo @����QX��ֹ�ػ�����>>.\\logs\\Multi-tool.log");
				system("echo @����FS���̹ػ���>>.\\logs\\Multi-tool.log");
				system("cls");
				system("shutdown -f -s -t 30");
				system("start main/CountDownShutdown.exe");
				printf("ϵͳ����30���ػ���\n");
				printf("����");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				printf("QX");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				printf("��ֹ�ػ�����");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("��\n");
				printf("����");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				printf("FS");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				printf("���̹ػ�");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("��\n");
				printf("����:");
				scanf_s("%s", str3, 10);
				{
					if (_stricmp(str3, "QX") == 0)
					{
						system("shutdown -a");
						system("echo @����:QX>>.\\logs\\Multi-tool.log");
						system("echo @�ػ�������ȡ����>>.\\logs\\Multi-tool.log");
						system("cls");
						system("taskkill /im CountDownShutdown.exe");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("�ػ�������ȡ��");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("��\n");
						therestartover();
					}
					else if (_stricmp(str3, "FS") == 0)
					{
						system("echo @����:FS>>.\\logs\\Multi-tool.log");
						system("shutdown -a");
						system("taskkill /im CountDownShutdown.exe");
						system("shutdown -f -s -t 0");
						exit(0);
					}
					else
					{
						system("echo @����:>>.\\logs\\Multi-tool.log");
						system("echo @û�и�ָ�>>.\\logs\\Multi-tool.log");
						system("cls");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("û�и�ָ��");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("��\n");
						therestartover();
					}
				}
			}
			else if (_stricmp(str, "CQ") == 0)
			{
				char str3[100];
				system("echo @����:CQ>>.\\logs\\Multi-tool.log");
				system("echo @ϵͳ����30���������>>.\\logs\\Multi-tool.log");
				system("echo @����QX��ֹ��������>>.\\logs\\Multi-tool.log");
				system("echo @����FS����������>>.\\logs\\Multi-tool.log");
				system("cls");
				system("shutdown -f -r -t 30");
				system("start main/CountDownRestart.exe");
				printf("����");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				printf("QX");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				printf("��ֹ��������");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("��\n");
				printf("����");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				printf("FS");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				printf("����������\n");
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("��\n");
				printf("����:");
				scanf_s("%s", str3, 10);
				{
					if (_stricmp(str3, "QX") == 0)
					{
						system("shutdown -a");
						system("echo @����:QX>>.\\logs\\Multi-tool.log");
						system("echo @����������ȡ����>>.\\logs\\Multi-tool.log");
						system("cls");
						system("taskkill /im CountDownRestart.exe");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("����������ȡ��");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("��\n");
						therestartover();
					}
					else if (_stricmp(str3, "FS") == 0)
					{
						system("echo @����:FS>>.\\logs\\Multi-tool.log");
						system("shutdown -a");
						system("taskkill /im CountDownRestart.exe");
						system("shutdown -f -r -t 0");
						exit(0);
					}
					else
					{
						system("echo @����:>>.\\logs\\Multi-tool.log");
						system("echo @û�и�ָ�>>.\\logs\\Multi-tool.log");
						system("cls");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
						printf("û�и�ָ��");
						SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						printf("��\n");
						therestartover();
					}
				}
			}
			else if (_stricmp(str, "RG") == 0)
			{
				system("echo @����:RG>>.\\logs\\Multi-tool.log");
				system("cls");
				system("taskmgr");
				therestartover();
			}
			else if (_stricmp(str, "KM") == 0)
			{
				system("echo @����:KM>>.\\logs\\Multi-tool.log");
				system("cls");
				system("control");
				therestartover();
			}
			else if (_stricmp(str, "C") == 0)
			{
				system("echo @����:C>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start c:");
				therestartover();
			}
			else if (_stricmp(str, "A") == 0)
			{
				system("echo @����:A>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start a:");
				therestartover();
			}
			else if (_stricmp(str, "B") == 0)
			{
				system("echo @����:B>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start b:");
				therestartover();
			}
			else if (_stricmp(str, "D") == 0)
			{
				system("echo @����:D>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start d:");
				therestartover();
			}
			else if (_stricmp(str, "E") == 0)
			{
				system("echo @����:E>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start e:");
				therestartover();
			}
			else if (_stricmp(str, "F") == 0)
			{
				system("echo @����:F>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start f:");
				therestartover();
			}
			else if (_stricmp(str, "G") == 0)
			{
				system("echo @����:G>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start g:");
				therestartover();
			}
			else if (_stricmp(str, "H") == 0)
			{
				system("echo @����:H>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start h:");
				therestartover();
			}
			else if (_stricmp(str, "I") == 0)
			{
				system("echo @����:I>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start i:");
				therestartover();
			}
			else if (_stricmp(str, "J") == 0)
			{
				system("echo @����:J>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start j:");
				therestartover();
			}
			else if (_stricmp(str, "K") == 0)
			{
				system("echo @����:K>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start k:");
				therestartover();
			}
			else if (_stricmp(str, "L") == 0)
			{
				system("echo @����:L>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start l:");
				therestartover();
			}
			else if (_stricmp(str, "M") == 0)
			{
				system("echo @����:M>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start m:");
				therestartover();
			}
			else if (_stricmp(str, "N") == 0)
			{
				system("echo @����:N>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start n:");
				therestartover();
			}
			else if (_stricmp(str, "O") == 0)
			{
				system("echo @����:O>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start o:");
				therestartover();
			}
			else if (_stricmp(str, "P") == 0)
			{
				system("echo @����:P>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start p:");
				therestartover();
			}
			else if (_stricmp(str, "Q") == 0)
			{
				system("echo @����:Q>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start q:");
				therestartover();
			}
			else if (_stricmp(str, "R") == 0)
			{
				system("echo @����:R>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start r:");
				therestartover();
			}
			else if (_stricmp(str, "S") == 0)
			{
				system("echo @����:S>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start s:");
				therestartover();
			}
			else if (_stricmp(str, "T") == 0)
			{
				system("echo @����:T>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start t:");
				therestartover();
			}
			else if (_stricmp(str, "U") == 0)
			{
				system("echo @����:U>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start u:");
				therestartover();
			}
			else if (_stricmp(str, "V") == 0)
			{
				system("echo @����:V>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start v:");
				therestartover();
			}
			else if (_stricmp(str, "W") == 0)
			{
				system("echo @����:W>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start w:");
				therestartover();
			}
			else if (_stricmp(str, "X") == 0)
			{
				system("echo @����:X>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start x:");
				therestartover();
			}
			else if (_stricmp(str, "Y") == 0)
			{
				system("echo @����:Y>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start y:");
				therestartover();
			}
			else if (_stricmp(str, "Z") == 0)
			{
				system("echo @����:Z>>.\\logs\\Multi-tool.log");
				system("cls");
				system("start z:");
				therestartover();
			}
			else if (_stricmp(str, "JS") == 0)
			{
				system("echo @����:JS>>.\\logs\\Multi-tool.log");
				system("cls");
				system("calc");
				therestartover();
			}
			else if (_stricmp(str, "ZC") == 0)
			{
				system("echo @����:ZC>>.\\logs\\Multi-tool.log");
				system("cls");
				system("regedit");
				therestartover();
			}
			else if (_stricmp(str, "IP") == 0)
			{
				system("echo @����:IP>>.\\logs\\Multi-tool.log");
				system("cls");
				system("ipconfig");
				therestartover();
			}
			else if (_stricmp(str, "CMD") == 0)
			{
				system("echo @����:CMD>>.\\logs\\Multi-tool.log");
				system("cls");
				DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND); //����ر�CMD����
				DrawMenuBar(GetConsoleWindow());
				HANDLE con = GetStdHandle(STD_OUTPUT_HANDLE); //�ָ�ԭ����������
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
				system("echo @����:GB>>.\\logs\\Multi-tool.log");
				system("cls");
				exit(0);
			}
			else if (_stricmp(str, "QX") == 0)
			{
				system("echo @����:QX>>.\\logs\\Multi-tool.log");
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
							therestartover();
						}
						else
						{
							system("echo @�ػ�������������ȡ����>>.\\logs\\Multi-tool.log");
							system("cls");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
							printf("�ػ�������������ȡ��");
							SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							printf("��\n");
							therestartover();
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
						therestartover();
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
					therestartover();
				}
			}
			else if (_stricmp(str, "MS") == 0)
			{
				system("echo @����:MS>>.\\logs\\Multi-tool.log");
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
				system("echo @����:XF>>.\\logs\\Multi-tool.log");
				system("cls");
				system("sfc /SCANNOW");
				therestartover();
			}
			else if (_stricmp(str, "DEL") == 0)
			{
				char str2[100];
				system("echo @����:DEL>>.\\logs\\Multi-tool.log");
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
						system("echo @����:>>.\\logs\\Multi-tool.log");
						therestartover();
					}
				}
			}
			else if (_stricmp(str, "ZJS") == 0)
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
				system("echo @����:ZJS>>.\\logs\\Multi-tool.log");
				system("echo @������������ݡ�>>.\\logs\\Multi-tool.log");
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
					therestartover();

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
					therestartover();

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
					therestartover();

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
					system("echo @����:5>>.\\logs\\Multi-tool.log");
					system("cls");
					printf("A=");
					scanf_s("%f", &X);
					X_2 = X*X;
					printf("%.2f^2=%.2f\n", X, X_2);
					therestartover();

				}
				else if (_stricmp(str5, "6") == 0)
				{
					system("echo @����:6>>.\\logs\\Multi-tool.log");
					system("cls");
					printf("A=");
					scanf_s("%f", &X);
					X_3 = X*X*X;
					printf("%.2f^3=%.2f\n", X, X_3);
					therestartover();
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
					therestartover();
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
					therestartover();
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
					system("echo @����:>>.\\logs\\Multi-tool.log");
					system("echo @û�и�ָ�>>.\\logs\\Multi-tool.log");
					system("cls");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					printf("û�и�ָ��");
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					printf("��\n");
					therestartover();
				}
			}
			else if (_stricmp(str, "ZGJ") == 0)
			{
				system("echo @����:ZGJ>>.\\logs\\Multi-tool.log");
				thezdyshutdownstart();
			}
			else if (_stricmp(str, "ZCQ") == 0)
			{
				system("echo @����:ZCQ>>.\\logs\\Multi-tool.log");
				thezdyshutdownrestart();
			}
			else if (_stricmp(str, "TEST") == 0)
			{
				char wheretogo[100];
				printf("��ǰĿ¼Ϊ%s��\n", str4);
				printf("������Ŀ��Ŀ¼��\n");
				printf("���룺");
				scanf_s("%s", wheretogo, 10);
				if (!(_chdir(wheretogo)) == NULL)
				{
					printf("����Ŀ¼�޸�ʧ�ܡ�\n");
					perror("����ԭ��");
					therestartover();
				}
				else
				{
					printf("����Ŀ¼�޸ĳɹ���\n");
					printf("��ǰĿ¼Ϊ%s��\n", str4);
					therestartover();
				}
			}
			else if (_stricmp(str, "TEST2") == 0)
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
					therestartover();
				}
				else if (_stricmp(test1, test2) > 0)
				{
					printf("%s>%s\n", test1, test2);
					therestartover();
				}
				else if (_stricmp(test1, test2) < 0)
				{
					printf("%s<%s\n", test1, test2);
					therestartover();
				}
				else
				{
					printf("??????????????????????\n");
					therestartover();
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
void thezdyshutdownstart(void)
{
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), TRUE), SC_CLOSE, MF_BYCOMMAND);
	DrawMenuBar(GetConsoleWindow());
	void therestartover(void);
	void thecountdowndosth(char *who, char *whattodo, int numhour, int numminute, int numsecond, int least_countdown);
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
		therestartover();
	}
	else
	{
		AllocConsole();
		{
			thechartointall = atof(all);  //char to int
			thecountdowndosth("ϵͳ", "�ػ�", thechartoint1, thechartoint2, thechartoint3, 0);
		}
		therestartover();
	}
}
void thezdyshutdownrestart(void)
{
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
	printf("��ֹ�����κη���������\n");
	printf("����������Ҫ�ڶ���ʱ�������(��λ:hour)��\n");
	printf("����:");
	scanf_s("%s", shutdownstartorrestarttime1, 10);
    printf("����������Ҫ�ڶ���ʱ�������(��λ:minute)��\n");
	printf("����:");
	scanf_s("%s", shutdownstartorrestarttime2, 10);
	printf("����������Ҫ�ڶ���ʱ�������(��λ:second)��\n");
	printf("����:");
	scanf_s("%s", shutdownstartorrestarttime3, 10);
	thechartoint1 = atof(shutdownstartorrestarttime1);
	thechartoint2 = atof(shutdownstartorrestarttime2);
	thechartoint3 = atof(shutdownstartorrestarttime3);
	thechartointall = thechartoint1 * 3600 + thechartoint2 * 60 + thechartoint3;
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
		therestartover();
	}
    else
	{
		AllocConsole();
		{
			thechartointall = atof(all);  //char to int
			thecountdowndosth("ϵͳ", "����", thechartoint1, thechartoint2, thechartoint3, 0);
		}
		therestartover();
	}
}
/*void thestartanypartition(char* partition)
{
	char themaohao[100] = ":";
	strcat_s(partition, themaohao);
	system(partition);
}*/