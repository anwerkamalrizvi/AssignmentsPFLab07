/*Q5 Lab 07
- Name: Syed Anwer Kamal
- Section: BAI-1A
- Roll no: 24k-0033
- Question no: 5
- Assignment: Lab 07
- Question: A weather station records temperature in an array over the course of a week (7 days). Write a program that calculates the average temperature of the week and identifies if any days had extreme temperatures (above 40°C or below 0°C).
Example Input: [25, 30, -2, 35, 42, 28, 10]
Example Output: Average temperature: 24.0°C, Extreme temperatures on day 3 and day 5. 
*/

#include<stdio.h>

int main(){
    int length = 7;   //for seven days per week
    int temp[length];
    int i=0;

    for(int i=0;i<length;i++){        //here the user will input the temperature 
        printf("\nEnter temperature of day %d: ",i+1);
        scanf("%d",&temp[i]);
    }//end for #1
    printf("Series of temperature per week mentioned is: \n");  

    for(int i=0;i<length;i++){      //here is the series of temperature mentioned
        printf("%d, ",temp[i]);
    }//end for #2
    printf("\n");
    int ext[length];
    //int ext2[length]=temp[0];
    printf("Extreme temperatures is/are:\n"); 

    for(int i=0;i<length;i++){          //here extreme temperatures are listed
        if(temp[i]<0||temp[i]>40){
            ext[i]=temp[i];
            printf("Day %d\n",i+1);
        }//end if     
    }//end for #3

    int sum=0;     //sum to sum the temperatures
    float avg=0;   //average calculation after loop.. float since the average should be in decimal places
    for(int i=0;i<length;i++){             //here average comes
        sum = sum + temp[i];        
    }//end for #4
    //printf("\nThis is sum: %d",sum);
    //printf("\nLength check %d",length);
    avg = sum/length;
    char degree = 248;    //to print the degree° symbol in C 
    printf("\nThe average temperature recorded is: %.2f%cC", avg, degree);
    return 0;


}//end main yes
