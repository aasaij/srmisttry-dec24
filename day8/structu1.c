//Program to demonstrate structure
#include <stdio.h>
#include <string.h>
//structure declaration
struct student {
	int rollno; // 4
	char name[21]; // 21
	double cgpa; // 8
};
int main(){
	//structure variable declaration
//	struct student s1, s2;
	struct student s1 = {101, "Asmaa", 10.0	};
	struct student s2 = {0,102};
	struct student s3 = {.name = "Shivani",.rollno = 107};

	//accessing structure members
//	s1.rollno = 101;
//	strcpy(s1.name, "Loga Abirami");
//	s1.cgpa = 10.0;
//	s2.rollno = 102;
//	strcpy(s2.name, "Sivasri");
//	s2.cgpa = 10.0;
//	
	printf("Roll Number  : %d\n", s3.rollno);
	printf("Student Name : %s\n", s3.name);
	printf("CGPA         : %.2lf\n", s3.cgpa);
//	printf("%lu", sizeof(s1));

	return 0;	
}