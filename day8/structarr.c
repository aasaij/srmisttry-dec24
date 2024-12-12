//Program to demonstrate structure array
#include <stdio.h>
#include <string.h>
//structure declaration
struct student {
	int rollno; // 4
	char name[21]; // 21
	double cgpa; // 8
};
int main(){
	int n;
	scanf("%d", &n);
	struct student s[n];
	for (int i = 0; i<n; i++)
		scanf("%d %s %lf", &s[i].rollno, s[i].name, &s[i].cgpa);

	for (int i = 0; i<n; i++){
		printf("Record : %d\n", i+1);
		printf("Roll Number  : %d\n", s[i].rollno);
		printf("Student Name : %s\n", s[i].name);
		printf("CGPA         : %.2lf\n", s[i].cgpa);
	}


	return 0;	
}