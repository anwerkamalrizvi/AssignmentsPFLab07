/*Q4 Lab 07
- Name: Syed Anwer Kamal
- Section: BAI-1A
- Roll no: 24k-0033
- Question no: 4
- Assignment: Lab 07
- Question: Write a C Program to find the minimum and maximum number in an array.
        Input:{4,1,6,8,10,21,8,9,2,6}
        Output:
        Minimum Number = 1
        Maximum Number = 21
*/


#include<stdio.h>

int main(){
    int n;
    printf("Enter length of the array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
    printf("\nEnter elements of the array:\nElement %d: ", i+1);
    scanf("%d",&arr[i]);
    }//end for for real

    printf("\nYou entered the values: \n");
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
        
    }//end for #2

    int minimum = arr[0];
    int maximum = arr[0];

    for(int i=0;i<n;i++){
        //for(int k=0;k<=n;k--){
    if(arr[i]<minimum){
         minimum = arr[i];
    }
    if(arr[i]>maximum){
       maximum = arr[i];
    }
    }
    printf("\n\nMaximum is: %d",maximum);
    printf("\nMinimum is: %d",minimum);
    return 0;
    
}//end main nah way