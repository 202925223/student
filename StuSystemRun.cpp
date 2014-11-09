#include "student.h"

void StuSystemRun(stusystem *sys)
{
	char c;
	while (c = menu())
	{
		switch (c)
		{
			case '0':
				printf("你选择了退出系统\n");
				return;
			case '1':
				printf("开始学生信息输入模块...\n");
				InputStu(sys);
				printf("结束学生信息输入模块...\n");
				break;
			case '2':
				printf("开始学生信息查询模块...\n");
				CheckStu(sys);
				printf("结束学生信息查询模块...\n");
				break;
			default:
				printf("没有此菜单，请重新选择一项：\n");
				break;
		}
	}
}
