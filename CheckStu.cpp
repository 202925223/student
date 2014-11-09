#include "student.h"

void CheckStu(stusystem *sys)
{
	student *temp = NULL;
	
	if (!sys->head)
	{
		printf("\n\t到达学生信息表底部！\n\n");
		return ;
	}
	
	temp = sys->head;
	while (temp)
	{
		printf("\n\t学生[%s], 名字: %s\n", temp->id, temp->name);
		temp = temp->next;
	}
	printf("\n\t到达学生信息表底部！\n\n");
}
