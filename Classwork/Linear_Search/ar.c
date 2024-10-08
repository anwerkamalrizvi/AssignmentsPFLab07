#include<stdio.h>

int main(){
	int search;
	int Len = 18;
	printf("Search: ");
	scanf("%d",&search);
	
	int arr[18]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35};
	
	for(int w=0;w<Len;w++){
		printf("%d, ",arr[Len]);
		if (search==arr[Len]){ 
			printf("Found");
			break; 
		}
		else{ 
			printf("Not found");
			break;
		}
		
	}//end for
	return 0;
}