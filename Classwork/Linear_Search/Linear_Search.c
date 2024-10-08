/*
*NAME: SYED ANWER
*ROLL NO: 24K-0033
*SECTION: BAI-1A
*QUESTION #: Linear Search
*/

#include<stdio.h>

int main(){
	int search;
	
	int n;
	printf("Enter length of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d elements:\n", n);
	int i;
	for(i=0;i<n;i++){
        	printf("Element no.%d: ",i+1);
        	scanf("%d",&arr[i]);
	}//end for 1
	printf("Search: ");
	scanf("%d",&search);
	
	printf("Your entered series is ");
	for(i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}//end for
	
	for(i=0;i<n;i++){

		if (search==arr[i]){ 
			
			printf("\n%d Found at [%d]",search,  i);
			break;
		}
			else {	
			continue;
		}
	}//end for
	
	(search!=arr[i]) ?  printf("\n%d is not found",search) : printf(""); 
	return 0;
}
