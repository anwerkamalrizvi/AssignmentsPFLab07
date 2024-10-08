/*
*NAME: SYED ANWER
*ROLL NO: 24K-0033
*SECTION: BAI-1A
*QUESTION #: 2
*QUESTION: Write a program in C to read n number of values in an array and display it in reverse order
Input: {1,2,3,4,5,6,7,8,9}
Output: 9 8 7 6 5 4 3 2 1
*/
#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter length of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements:\n", n);
    int i=0;
    for(i=0;i<n;i++){
        printf("Element no.%d: ",i+1);
        scanf("%d",&arr[i]);
    }//end for 1
    printf("You entered: {");
    for(i=n;i>=0;i--){
        printf("%d, ",arr[i-1]);
        if (i==1){
            break;
        }
       
    }//end for
    printf("}");
    return 0;

}//end main no way