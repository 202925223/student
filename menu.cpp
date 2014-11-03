#include "student.h"

#define	MENU()	printf("以1开头输入学生信息：\n");	\
		printf("以2开头查询学生信息：\n");	\
		printf("以0开头退出系统\n");			\
		printf("请选择一项菜单：");

char menu()
{ 
	MENU();
	char c = getchar();
	do
	{
		if (c == '\n')
		{
			printf("\\n");
			return '\n';
		}
		else if (c == '\t')
		{
			printf("\\t");
		}
		else if (c == ' ')
		{
			printf("[]");
		}
	} while (getchar() != '\n');

	return c;
}
