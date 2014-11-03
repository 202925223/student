#include "student.h"

int main()
{
	stusystem sys;
	InitStuSystem(&sys);
	StuSystemRun(&sys);
	ExitStuSystem(&sys);
	
	return 0;
}
