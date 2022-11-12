#include <stdio.h>

 
int res[5] = {};    //外部变量 , 把每一位作为数组元素进行存储
int *p = res;
 
int main(){
     
    int num;
    scanf("%d", &num);
       
    void ser(int);//分别输出每一位数字
    ser(num);
    printf("\n");
     
    p = res + 4;    //指针置于数组末尾
    for(int i=0; i<sizeof(res)/sizeof(res[0]); i++){    //逆序输出
        printf("%d", *p--);
    }
    return 0;
}
 
 
void ser(int number){
    if(number > 9){
        ser(number/10);     //递归
    }
    printf("%d", number % 10);     //顺序输出
    *p = (int)number % 10;
    p++;
}

// int main()
// {
//     int num;
//     int a,i;
//     scanf("%d", &num);
    
//     for(i = 0; num > 0; i++){
//     a = num % 10;
//     printf("%d",a);
//     num = num/10;
//     }

//     return 0;
// }



// int reverseInt(int n)
// {
//     int r = 0;
//     while(n)
//     {
//         r=r*10+n%10;
//         n/=10;
//     }
//     return r;
// }
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     if(N == reverseInt(N))
//         printf("yes");
//     else
//         printf("no");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int N,tmp;
//     int r=0;
//     scanf("%d",&N);
//     tmp=N;  //将N赋值给临时变量tmp
//     while(tmp)
//     {
//         r=r*10+tmp%10;
//         tmp/=10;
//     }
//     if(N == r)
//         printf("%d是一个幸运数\n",N);
//     else
//         printf("%d不是一个幸运数\n",N);
//     return 0;
// }


