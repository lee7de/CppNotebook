#include<stdio.h>

int main()
{
	char ch;
    
    top: ch = getchar();
    
    if(ch == 'q')
        printf("kkk...");
        goto top;

	return 0;
}
