//Program to demonstrate structure array
#include <stdio.h>
#include <string.h>
//structure declaration
struct student {
	int rollno; // 4
	char name[21]; // 21
	double cgpa; // 8
	struct date{
		int dd;
		int mm;
		int yy;
	}doj;
};
int main(){
	struct student s1;
	s1.rollno = 101;
	strcpy(s1.name, "Samiksha");
	s1.cgpa = 10.0;
	//Accessing members of nested structure
	s1.doj.dd = 10;
	s1.doj.mm = 10;
	s1.doj.yy = 2022;
	
	printf("Roll Number     : %d\n", s1.rollno);
	printf("Student Name    : %s\n", s1.name);
	printf("CGPA            : %.2lf\n", s1.cgpa);
	printf("Date of Joining :%d/%d/%d\n",s1.doj.dd, s1.doj.mm,s1.doj.yy);
	

	return 0;	
}