#include <stdio.h>
#include <string.h>
void count(char string[]);
int main()
{
	char str1[100];
	gets(str1);
	count(str1);
	return 0;
}

void count(char str[])
{
	int a=0,e=0,i=0,o=0,u=0;
	int j;
	for (j=0;str[j];j++)
		switch(str[j])
		{
			case 'a':
			case 'A':a++;break;
			case 'e':
			case 'E':e++;break;
			case 'i':
			case 'I':i++;break;
			case 'o':
			case 'O':o++;break;
			case 'u':
			case 'U':u++;break;
		}
	printf("There are %d a, %d e, %d i, %d o, %d u in this string.",a,e,i,o,u);
}
