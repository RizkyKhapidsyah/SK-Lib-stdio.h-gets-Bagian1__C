#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char string[256];

	printf("Insert your full address: ");
	gets(string);
	printf("Your address is: %s\n", string);

	_getch();
	return 0;
}