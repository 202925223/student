#include "student.h"

void InputStu(stusystem *sys)
{
	char c;
	char yes[4] = "yes";
	do
	{
		if (!sys->head)
		{
			sys->head = (student *)malloc(sizeof(student));
			sys->tail = sys->head;
			sys->tail->next = NULL;
		}
		else
		{
			sys->tail->next = (student *)malloc(sizeof(student));
			sys->tail = sys->tail->next;
			sys->tail->next = NULL;
		}
		printf("请输入学生的id：");
		scanf("%s", sys->tail->id);
		printf("请输入学生的名字：");
		scanf("%s", sys->tail->name);
		printf("你输入的学生信息是：id: %s, name: %s\n", sys->tail->id, sys->tail->name);
		do
		{
			c = getchar();
			if (c == 'n' || c == 'N')
			{
				c = getchar();
				if (c == 'o' || c == 'O')
				{
					c = getchar();
					if (c == '\n')
					{
						strcpy(yes, "no");
					}
				}
			}
			else if (c == 'y' || c == 'Y')
			{
				c = getchar();
				if (c == 'e' || c == 'E')
				{
					c = getchar();
					if (c == 's' || c == 'S')
					{
						c = getchar();
						if (c == '\n')
						{
							strcpy(yes, "yes");
							break;
						}
					}
				}
			}
			else
			{
				if (c == '\n')
					printf("要继续输入学生信息吗？[yes]+回车继续，[no]+回车取消\n");
			}
		} while (strcmp(yes, "no"));
		if (!strcmp(yes, "no"))
		{
			break;
		}
	} while (!strcmp(yes, "yes"));
}
