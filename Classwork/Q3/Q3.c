/*
*NAME: SYED ANWER
*ROLL NO: 24K-0033
*SECTION: BAI-1A
*QUESTION #: 3
*QUESTION: You are developing a user input validation system for a registration form. The form requires the
user to input their name, email, and phone number. Validate the inputs with the following rules:
Name: Can only contain alphabetic characters (A-Z, a-z), spaces.
Email: Can contain alphanumeric characters (A-Z, a-z, 0-9), periods (.), underscores (_), hyphens (-
), and must include an @ symbol.
Phone Number: Can contain digits (0-9), spaces, hyphens (-), and an optional plus sign (+) at the
beginning.
*/

#include<stdio.h>

int main(){
    char str[100];   //for name
    char em[100];    //for email
    char pno[100];   //for phone number
    int flag = 1;    //Just used as a condition to set false or true 
    int ok = 1; //True or false data

    printf("Enter your name:[A-Z] or [a-z] ");    //Print to tell user to enter their name
    scanf(" %[^\n]",&str);                        //Read string, For reading including spaces we use %[^\n].
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z' ||str[i]>='a'&&str[i]<='z'||str[i]==' '){
            flag=1;
        }//end if no way

        else{
            flag=0;                                      //Invalid characters are there!
        }//end else

          
    }
        
    printf("\nEnter your email(no spaces as email is always without spaces):\n");
    scanf("%s", &em);
    printf("\nEnter phone number: \n");
    scanf("  %999[^\n]",&pno);

    int legal = 1;  //True for 1 \nFalse for 0
    int findat = 0;  //   {Both are true and false 
    int finddot = 0;  //    {          condtions
    for(int i = 0; em[i]!='\0';i+=1){               //As email is always in SMALL letters so excluding capital letters and including given characters like @(MUST), '.','_'and'-'
        if((em[i]>='a'&&em[i]<='z') && (em[i]=='@'&&em[i]=='.') || (em[i]!=' ') || (em[i]=='t'||em[i]=='_'||em[i]=='-')) {
                if(em[i]=='@'){
                    findat =1; //required so we take another flag
                }
                if(em[i]=='.'){
                    finddot=1; //required so we take another flag for this too
                }
                legal = 1;
                continue;
            
        }
        else{
            legal = 0;
        }

    

    for(int i=0;pno[i]!='\0';i++){
        if((pno[i]>=0&&pno[i]<=9)){
            ok=1; //Requirement met
            if(pno[0]=='+'||pno[i]==' '||pno[i]=='-'){           //add optional cases
                ok=1;   //Yes included as optional
            }//end if pno[i]
        }//end if big pno[i]
        else{
            ok=0;
        }
    }//end for loop no way


    }
    if(flag==1){
            printf("Your entered name is: %s",str);      //Print your name
        }   
        else{
            printf("Invalid characters are included. "); //Tell user to enter valid characters!
        }  

    if(legal==1&&finddot==1&&findat==1){                    //both 3 requirements including alphabets in small, @ and .
        printf("\nYour entered email is %s",em);
    }
    else{
        printf("\nInvalid characters included. Make sure an email only contains characters with @ and . COMPULSORY.\nNote: Email is always in small letters! ");
    }
    if(ok == 1){
        printf("\nYour entered phone number is: %s",pno);
    }
    else if(ok==0){
        printf("\nInvalid characters included in the phone number.\nAllowed characters: 0-9 digits, spaces, hypen(-) and plus(+)in the beginning.");
    }
    return 0;

}//end main no way

