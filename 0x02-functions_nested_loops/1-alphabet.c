#include "main.h"

/**
 * print alphabet, in lowercase.
 * you can use _putchar() only 2 times
 * i am natna
 */

void print_alphabet(void){
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++){
		_putchar(ch);
	}
	_putchar('\n');
}

int main(void){
	print_alphabet();
	return (0);
}
