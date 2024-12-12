#include <stdio.h>
#include <string.h>

union student{
	int rollno;
	char name[33];
	double cgpa;
};

int main(){
//	printf("%lu", sizeof(union student));
//	union student s1;
//	s1.rollno = 101;
//	s1.cgpa = 10.0;
//	strcpy(s1.name, "Testing");
	union student s1 = {.name="Testing"
	};
	printf("%.2lf %d %s", s1.cgpa, s1.rollno, s1.name);
	return 0;
}

