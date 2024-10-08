/*
*NAME: SYED ANWER
*ROLL NO: 24K-0033
*SECTION: BAI-1A
*QUESTION #: 1
*QUESTION: Write a C Program that takes an user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45
*/
#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter length of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements:\n", n);
    for(int i=0;i<n;i++){
        printf("Element no.%d: ",i+1);
        scanf("%d",&arr[i]);
    }//end for 1
    printf("You entered: ");
    int sum=0;
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
        sum = sum + arr[i]; 
    }//end for

    printf("\nTotal sum is %d",sum);
    return 0;

}//end main no way