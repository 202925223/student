#include "student.h"

void ExitStuSystem(stusystem *sys)
{
	while (sys->head)
	{
		student *temp = sys->head;
		sys->head = sys->head->next;
		temp->next = NULL;
		free(temp);	
	}
}
