// WordCount.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include "conio.h"
char ch; char c1[10]; char c2[10];
 FILE *fp;
int _c = 0; int _w = 0;
void getch_c()
{
	while (ch = fgetc(fp) != EOF)//���ļ�δ����ĩβʱ
	{
		_c++;//��������һ
	}
	printf("�ַ���:%d\n", _c);
	fclose(fp);//�ر��ļ�
}
void getword_w()
{
	fp = fopen(c2, "r");//���ļ�
	while (!feof(fp))//���ļ���������ʱ
	{
		char ch = fgetc(fp);//��ȡ�ַ�
		if (ch == ' ' || ch==','||ch=='\n')//�Ƚ��ַ�
		{
			_w++;//��������һ
		}
	}
	printf("������:%d\n", _w+1);
	fclose(fp);
}
int _tmain(int argc, _TCHAR* argv[])
{
	scanf("%s %s", c1, c2);
	if ((fp = fopen(c2, "r")) == NULL)
	{
		printf("δ��⵽�ļ�");
	}
	

	/*char str[3];
	scanf("%s", &str);	*/
	if (strcmp(c1,"_c")==0)
	{
		getch_c();
	}
	else if (strcmp(c1, "_w") == 0)
	{
		getword_w();
	}
	fclose(fp);
}

