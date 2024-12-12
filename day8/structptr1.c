//Structure Pointers
// ->  structure pointer member accessing operator
#include <stdio.h>
#include <string.h>
typedef struct Student {
	int rollno;
	char name[30];
	double cgpa;
}stud;

int main(){
	stud s, *ptr;
	ptr = &s;
	ptr->rollno = 101; //s.rollno  =101;
	strcpy(ptr->name, "Santhosh");
	ptr->cgpa = 19.0;
//	(*ptr).rollno = 101;
	printf("%d %s %.2lf", ptr->rollno, (*ptr).name, ptr->cgpa);
	
	return 0;
}
