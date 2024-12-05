#include <stdio.h>

int main(){
//	printf("%lu", -1);
//	printf("%d", 10 & 20);
//	printf("%d", 10 | 20);
//	int x = 10, y;
//	y = ~x;
//	y = x << 2;
//	int x = -10, y;
//		y = x >> 2;
//	printf("%d", 10 << 30);
	printf("%lu", sizeof(long double));
	
	return 0;
}
//standard
//	int, char, float, double, void
//	32 bit compiler
//	char  			1		%c 	-128 to 127
//	unsigned char 	1		%c	0 to 255
//	signed short int or short int or short	2  %hi or %hd
//				-32768 to 32767
//	unsigned short int	2	%hu
//				0 to 65535
//	int or signed int    4   %d or %i
//			-2147463648 to 2147463647
//	unsigned int   4 		%u
//			0 to 4294967295
//	[signed]  long long int   8   %lld or %lli
//		-2^63 to 2^63 - 1
//		
//	unsigned long long int    8   %llu
//	
//		0 to 2^64 - 1
//	
//	float    4 bytes - 6 bits allotted to decimal --> single precision
//				%f
//	double   8 bytes - 12 bits allotted to decimal --> double precision
//				%lf
//	long double 12 bytes --> 18 bits allotted to decimal
				%Lf
//	
//	
//Derived
//	array, pointer
//UDD
//	structure, union
//	

Output 
	printf() ==> to print result on output devices
	
	syntax
	int printf(const char *format[,arg1, arg2,...] );
	
	it returns number of bytes printed by printf()
	
	syntax of format
	
	%[flag][width][.precision][h|L] <type_character>
	
		flag --> +, - , #
		width --> n, 0n, *
		precision --> n, *
		
		c --> character
		d or i --> signed decimal integer
		f,g,G, e, E --> float 
		o --> Octal integer
		x, X --> Hexadecimal integer
		p --> pointer
		s --> string
		% --> print %
				
