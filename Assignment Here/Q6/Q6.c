/*Q6 Lab 07
- Name: Syed Anwer Kamal
- Section: BAI-1A
- Roll no: 24k-0033
- Question no: 6
- Assignment: Lab 07
- Question: 6.Given an array arr[] of size N which contains elements from 0 to N-1, you need to find all the
elements occurring more than once in the given array.
Input:
Array Size =5
Element 1=2
Element 2=3
Element 3=1
Element 4=2
Element 5=3
Output:
Number 2 and 3 in array occur more than once.
Note: You cannot utilize nested loops. 
*/

#include<stdio.h>

int main(){
    int n;  //length
    printf("Length of the array: ");
    scanf("%d",&n);

    int arr[n];     //array of length n
    int equal[n];   //To find the similar elements

    for (int i = 0; i <n; i++) {
        equal[i] = 0;
    }//end for #1

    for(int i=0;i<n;i++){
        printf("Element #%d: ",i+1);
        scanf("%d",&arr[i]);
        
    }//end for loop #2

   

    for(int i=0;i<n;i++){
        equal[arr[i]]++;

    }//end for loop #3
    int flag = 0;  //true or false
     
    for(int i=0;i<n;i++){
        if (equal[i] > 1) {
            printf("%d ", i);
            flag = 1;
        
        }//end if 
       
    } //end for loop #4   
    if(!flag){
        printf("None of the repeated values are found.");
    }//end if
    printf("\n");
    return 0;



}//end main no way 