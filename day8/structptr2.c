#include <stdio.h>
#include <stdlib.h>
typedef struct Student{
	int rollno;
	char name[30];
	double cgpa;
}student;

int main(){
	student *s;
	s = (student *)malloc(sizeof(student));
	s->rollno = 101;
	printf("%d", s->rollno);
	return 0;
}