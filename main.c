#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"												//include the headers to each group member's respective modules
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

int main(void)
{
	char buff[10];														//variable to store the user's menu selection
	do
	{
		printf("1 - Fundamentals\n");									//prompt the user to select a module
		printf("2 - Manipulation\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Exit\n");
		printf("Which module to run? \n");
		fgets(buff, 10, stdin);											//capture user's menu selection
		switch (buff[0])
		{
		case '1': fundamentals();									//run the module based on the user's selection
			break;
		case '2': manipulating();
			break;
		case '3': converting();
			break;
		case '4': tokenizing();
			break;
		}
	} while (buff[0] != '0');											//terminate the program if the user inputs 0
	return 0;
}