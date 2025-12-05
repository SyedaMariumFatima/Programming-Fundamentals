#include <stdio.h>

struct Course{
	char name[10];
	char code[7]; //usually 6 characters in FAST - 7 here cuz null character
	int creditHrs;
	char enrolledStudents [50][9]; // 50 students, 7 char roll numbers + 1 null character 
};

//saying that when I say "myCourse", I mean 'struct Course'
typedef struct Course myCourse;


void displayCourseInfo(myCourse course){
	printf("==================================================================\n");
	printf("Displaying details for %s:\n", course.name);
	printf("==================================================================\n");
	printf("Course Code: %s\n", course.code);
	printf("Credit Hours: %d\n", course.creditHrs);
	printf("Enrolled Students:\n");
	for (int i = 0; i < 50; i++) {
		printf("Student # %d: %s\n", i+1, course.enrolledStudents[i]);
	}
	printf("==================================================================\n");
}

void displayInfoForAllCourses(myCourse array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("\nCourse %d:\n", i+1);
		displayCourseInfo(array[i]);
	}
}


int main() {
	//if you comment out the typedef statement, you have to create variables like this
	struct Course ICT;
	struct Course PF = {"PF", //course name
						"SS1002", //course code
						4, //credit hours
						{"12k-2034", "12k-2013"} //students list
						};
	
	//if you have typedef uncommented, you can directly create variables for myCourse
	//you don't have to write 'struct Course' over and over					
	myCourse PST, FE, AP, Calc;
	
	printf("Code before editing: %s\n", PF.code);
	
	PF.code[0] = 'C';
	
	printf("Code after editing: %s\n", PF.code);
	
/*
	for (int i = 0; i < 50; i++) {
		printf("Student # %d: %s\n", i+1, PF.enrolledStudents[i]);
	}
*/	
	
	//sending PF as an argument to a function, so that I can display its information
	displayCourseInfo(PF);
	
	//an array of courses
	myCourse arr[6] = {ICT, PF, PST, FE, AP, Calc};
	
	//displaying names for all courses in the array:
	for (int i = 0; i < 6; i++) {
		printf("Course # %d: %s\n", i+1, arr[i].name);
	}
	
	//displaying all info for all courses in the array using a function:
	displayInfoForAllCourses(arr, 6);
	
	return 0;
}

