#include <iostream>
#include <stdio.h>
#include "Student.h"
#include "functions.h"


int main()
{
	Student student1, student2;
	functions func;
    student1.Set_name((char *) "Mihai");
    student2.Set_name((char *) "Marian");
	printf("Numele primului student este: %s\n", student1.Get_name());
	printf("Numele celui de-al doilea student: %s\n", student2.Get_name());
	student1.Set_mathematics(7.85);
	student1.Set_english(8.67);
	student1.Set_history(9.76);
	printf("Media primului student este: %d\n",student1.Avg());

	student2.Set_mathematics(7.85);
	student2.Set_english(8.67);
	student2.Set_history(5.76);
	printf("Media celui de-al doilea student este: %d\n", student2.Avg());


	printf("%i\n", func.Comp_mathematics(&student1,&student2));
	printf("%i\n", func.Comp_history(&student1, &student2));
	printf("%i\n", func.Comp_english(&student1, &student2));
	printf("%i\n", func.Comp_name(&student1, &student2));
	printf("%i\n", func.Comp_avg(&student1, &student2));
	


	






}