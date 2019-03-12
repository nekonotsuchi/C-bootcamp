#include "pch.h"
#include <iostream>

int main(int argc, char** argv)
{
	int c;
	while ((c = getchar()) != EOF)
		putchar(c);
}

/*
No, you cannot pipe input to the program. There is no print
statement that prompts input. There is also no error message
coded to say that certain characters are nonprinting. You can
not redirect output to file because there is no EOF specified.
*/