#pragma once
class Student 
{
private:
	char *name;
	float mathematics;
	float english;
	float history;
public:
	void Set_name(char *name);
	char * Get_name();
	void Set_mathematics(float grade);
    float Get_mathematics();
	void Set_english(float grade);
	float Get_english();
	void Set_history(float grade);
	float Get_history();
	int Avg();



};