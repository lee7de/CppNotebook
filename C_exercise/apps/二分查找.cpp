// ���ֲ����㷨 
#include<stdio.h>
#define N 100 //����˳����������� 

int main(){
	int array[] = {0, 5, 13, 19, 22, 41, 55, 68, 72, 81, 98};
	int arrLength = sizeof(array)/sizeof(array[0]);
	int index = -1;
	int target = 68; //Ҫ���ҵ���
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d", &target);
	
	
	int low = 0, high = arrLength - 1, mid;
	while(low <= high){
		mid = (high + low) / 2;
		
		if(array[mid] == target){ //���ҳɹ���ǰ�˳�ѭ�� 
			index = mid;
			break;
		}
		else if(array[mid] < target)
		    low = mid + 1;				//	������R[mid+1,high]�в��� 
		else
		    high = mid - 1;				// ������R[low, mid-1]�в���
	}
	if(index == -1)
		printf("Not Found.");
	else
		printf("Found! Target index: %d\n", index);
	
	return 0;
} 
