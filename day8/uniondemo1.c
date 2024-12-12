#include <stdio.h>

union student{
	char x;
	int n;
};

int main(){
	union student s;
	s.n = 120;
	printf("%c", s.x);
	return 0;
}
Attendance link : https://bit.ly/NM-121224
Trainer : Tambi
Session : FN



