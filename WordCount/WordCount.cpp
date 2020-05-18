// WordCount.cpp : 定义控制台应用程序的入口点。
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
	while (ch = fgetc(fp) != EOF)//当文件未读到末尾时
	{
		_c++;//计数器加一
	}
	printf("字符数:%d\n", _c);
	fclose(fp);//关闭文件
}
void getword_w()
{
	fp = fopen(c2, "r");//打开文件
	while (!feof(fp))//当文件中有内容时
	{
		char ch = fgetc(fp);//获取字符
		if (ch == ' ' || ch==','||ch=='\n')//比较字符
		{
			_w++;//计数器加一
		}
	}
	printf("单词数:%d\n", _w+1);
	fclose(fp);
}
int _tmain(int argc, _TCHAR* argv[])
{
	scanf("%s %s", c1, c2);
	if ((fp = fopen(c2, "r")) == NULL)
	{
		printf("未检测到文件");
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

