#include<stdio.h>

void increment(int* p){
	*p = *p + 1;
	printf("%d", *p);
}

int main()
{
    int x = 2;

   // printf("x's address: %p", &x);

    increment(&x);
    printf("%d\n", x);
    
	return 0;
}
