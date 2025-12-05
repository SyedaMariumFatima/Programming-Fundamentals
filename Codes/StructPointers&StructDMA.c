#include <stdio.h>
#include <stdlib.h>

struct Course{
	char name[10];
	char code[7]; //usually 6 characters in FAST - 7 here cuz null character
	int creditHrs;
	char enrolledStudents [50][9]; // 50 students, 8 char roll numbers + 1 null character 
};

//Telling the compiler that when I say "myCourse", I mean 'struct Course'
typedef struct Course myCourse;

myCourse* allocateMemoryForCourse(int elements){
	return (myCourse*) malloc (elements * sizeof(myCourse));

}

int main() {
	struct Course ITC = {"ITC", //course name
						"CS1002", //course code
						4, //credit hours
						{"12k-2034", "12k-2013"} //students list
						};
	myCourse PF = 		{"PF", //course name
						"CS1002", //course code
						4, //credit hours
						{"12k-2034", "12k-2013"} //students list
						};
	
	//pointer to a struct:
	struct Course *ptr_1 = &ITC; 
	//or
	struct Course *ptr_2;
	ptr_2 = &PF;
	//ORRRR
	myCourse *ptr_3 = &ITC;
	//OrrrrrrRRRRRRrrr!!
	myCourse *ptr_4;
	ptr_4 = &PF;
	
	//Getting values from a struct pointer:
	//Using -> operator
	printf("Pointers 1 and 3: %s and %s\n", ptr_1->name, ptr_3->name);
	//Using . operator
	printf("Pointers 2 and 4: %s and %s\n", (*ptr_2).name, (*ptr_4).name);

	//allocating memory for n structs:
	int n = 5;
	myCourse *allocated = allocateMemoryForCourse(n);
	allocated[0].creditHrs = 4;
	allocated[4] = PF; //copies contents of PF to allocated[4]
	printf("Cr.Hrs. on 0th index: %d.\n", allocated[0].creditHrs);
	printf("Course Name: %s, Course Code: %s\n", allocated[4].name, allocated[4].code);
	return 0;
}

