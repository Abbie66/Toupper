//Program that automatically changes the case of the names entered into the grammartically correct case.
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
	char name[50];
	int i, name_length;
	
	printf("Enter your full name here:> ");
	gets(name);
	
	name_length = strlen(name);
	
	for( i = 0; i < name_length; i ++)
	{
//		To change the very first character entered to uppercase
		if(i == 0)
		printf("%c",toupper(name[0]));	
//		To change the character after the blank space into uppercase and anything else to lowercase
		else if(name[i] == ' ')
		{
			printf(" %c", toupper(name[i + 1]));
			i ++;
		}
		else if(name[i])
		printf("%c", tolower(name[i]));
	}
	
	printf("\n");
}