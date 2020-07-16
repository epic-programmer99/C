#include "utils.h"

// Main function
int main(int argc, char const *argv[])
{
	//Ask and save a name
	char name[20];
	printf("%s\n", "What is your name?");
	scanf("%s", name);

	//Ask and save a surname
	char surname[20];
	printf("%s\n", "What is your surname?");
	scanf("%s", surname);

	//Ask and save the age
	int age;
	printf("%s\n", "How old are you?");
	scanf("%d", &age);

	//Check if is older then 18
	if (age <= 18)
		printf("%s\n","you are still young." );
	else
		printf("%s\n", "you started to be old");


	return 0;
}
