#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

void main()

{

	setlocale(LC_CTYPE, ".UTF8"); 

	puts("Нажмите Enter для продолжения...");

	getchar();

	puts("Продолжение программы");
	
	return 0;

}