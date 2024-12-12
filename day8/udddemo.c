User Defined Datatype


struct <tag_name> {
	<datatype1> <member_name1>;
	<datatype2> <member_name2>;
	....
	....
	<datatypeN> <member_nameN>;
}<structure_variable1>, <structure_varible2>,....,<structure_variableN>;

example:
//Method 1
struct student {
	int rollno;
	char name[20];
	double cgpa;
}s1, s2, s3;

//Method - 2
struct {
	int rollno;
	char name[20];
	double cgpa;
}s1, s2, s3;

//Method 3
struct student {
	int rollno;
	char name[20];
	double cgpa;
};

struct student s1, s2,s3;



s1.rollno = 101;
strcpy(s1.name,"Loga Abirami");
s1.cgpa = 10.0;