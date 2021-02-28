#include <iostream>
#include "functions.h"

int functions::Comp_mathematics(Student* first, Student* second) {
	float grade1 = first->Get_mathematics();
	float grade2 = second->Get_mathematics();
	if (grade1 == grade2)
		return 0;
    if (grade1 > grade2)
		return 1;
	if(grade1 < grade2)
		return -1;

}
int functions::Comp_name(Student* first, Student* second) {
	char *name1 = first->Get_name();
	char *name2 = second->Get_name();
	if (strcmp(name1,name2) == 0)
		return 0;
	if (strcmp(name1, name2) > 0)
		return 1;
	if (strcmp(name1,name2) < 0)
		return -1;


}
int functions::Comp_avg(Student* first, Student* second) {
	int avg1 = first->Avg();
	int avg2 = second->Avg();
	if (avg1 == avg2)
		return 0;
	if (avg1 > avg2)
		return 1;
	if (avg1 < avg2)
		return -1;

}
int functions::Comp_english(Student* first, Student* second) {
	float grade1 = first->Get_english();
	float grade2 = second->Get_english();
	if (grade1 == grade2)
		return 0;
	if (grade1 > grade2)
		return 1;
	if (grade1 < grade2)
		return -1;

}
int functions::Comp_history(Student* first, Student* second) {
	float grade1 = first->Get_history();
    float grade2 = second->Get_history();
	if (grade1 == grade2)
		return 0;
	if (grade1 > grade2)
		return 1;
	if (grade1 < grade2)
		return -1;

}