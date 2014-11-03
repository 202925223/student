#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student_ {
	char id[100];
	char name[100];
	student_ *next;
} student;
typedef struct {
	student *head;
	student *tail;
} stusystem;
char menu();
void InitStuSystem(stusystem *);
void StuSystemRun(stusystem *);
void ExitStuSystem(stusystem *);
void InputStu(stusystem *);
void CheckStu(stusystem *);
#endif//STUDENT_H
