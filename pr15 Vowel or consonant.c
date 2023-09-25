#include<stdio.h>
void main()
{
	char Ab;
	printf("Enter alphabet: ");
	scanf("%c", &Ab);
	
	if(Ab == 'A' || Ab == 'E' || Ab == 'I' || Ab == 'O' || Ab == 'U' ||
		Ab == 'a' || Ab == 'e' || Ab == 'i' || Ab == 'o' || Ab == 'u'){
			printf("Vowel");
		}
	else{
			printf("Consonant");
	}
	
}
