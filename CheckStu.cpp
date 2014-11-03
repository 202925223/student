#include "student.h"

void CheckStu(stusystem *sys)
{
	int i = 0;
	student *temp = sys->head;
	while (temp)
	{
		printf("\n\t学生[%d]: %s, 名字: %s\n", i++, temp->id, temp->name);
		temp = temp->next;
	}
	printf("\n\t到达学生信息表底部！\n\n");
}
