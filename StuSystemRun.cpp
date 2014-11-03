#include "student.h"

void StuSystemRun(stusystem *sys)
{
	char c;
	while (c = menu())
	{
		if (c == '0')
		{
			printf("你选择了退出系统\n");
			break;
		}
		switch (c)
		{
		case '1':
			InputStu(sys);
			break;
		case '2':
			CheckStu(sys);
			break;
		default:
			printf("没有此菜单，请重新选择一项：\n");
			break;
		}
	}
}
