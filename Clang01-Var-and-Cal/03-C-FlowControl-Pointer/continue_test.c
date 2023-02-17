#include<stdio.h>

int main()
{
	char ch;
	while((ch = getchar()) != '\n'){
		if (ch == '\t') continue;
		putchar(ch);
	}

	return 0;
}
