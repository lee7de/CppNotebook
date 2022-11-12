// 二分查找算法 
#include<stdio.h>
#define N 100 //定义顺序表的最大容量 

int main(){
	int array[] = {0, 5, 13, 19, 22, 41, 55, 68, 72, 81, 98};
	int arrLength = sizeof(array)/sizeof(array[0]);
	int index = -1;
	int target = 68; //要查找的数
//	printf("请输入要查找的数字：");
//	scanf("%d", &target);
	
	
	int low = 0, high = arrLength - 1, mid;
	while(low <= high){
		mid = (high + low) / 2;
		
		if(array[mid] == target){ //查找成功提前退出循环 
			index = mid;
			break;
		}
		else if(array[mid] < target)
		    low = mid + 1;				//	继续在R[mid+1,high]中查找 
		else
		    high = mid - 1;				// 继续在R[low, mid-1]中查找
	}
	if(index == -1)
		printf("Not Found.");
	else
		printf("Found! Target index: %d\n", index);
	
	return 0;
} 
