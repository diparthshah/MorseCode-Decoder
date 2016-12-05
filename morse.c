/* 
    File : morse.c 
    Desc : Implementation of Morse Code Decoder in C
    Author : Diparth Shah <diparths@gmail.com> 
*/

#include<stdio.h>
#include<string.h>

// function to display decoded morse signature into simple english 
void display();

/* morse takes input from user , string to store decoded morse signature,
   result to hold one decoded value at a time push into top of string 
   stack , len to determine input length , y to check if user wants to 
   give another morse sign input. 
*/ 

char result,string[15];
char morse[26];
int len=0,i,top=1,y;

int main()
{
	do
	{
	printf("\n Enter Morse Code\n");
	scanf("%s",morse);
	len=strlen(morse);
    for(i=0; i<len; i++)
    {
    	// checks morse input and assigns corresponding english alphabet.

    	if(morse[i]=='.' && morse[i+1]=='.' && morse[i+2]=='.')
    	{
    		result='S';
    		display();
    		break;
    	}

    	if(morse[i]=='_' && morse[i+1]=='_' && morse[i+2]=='_')
    	{
    		result='O';
    		display();
    		break;
    	}

    	if(morse[i]=='_' && morse[i+1]=='_')
    	{
    		result='M';
    		display();
    		break;
    	}

    	if(morse[i]=='.' && morse[i+1]=='_' && morse[i+2]=='.')
    	{
    		result='R';
    		display();
    		break; 
    	}

    	if(morse[i]=='.')
    	{
    		result='E';
    		display();
    		break;
    	}

    	else
    	{
    		// if input is not valid morse signature 
    		printf("\n Not Valid Morse Signature \n");
    		break; 
    	}
    }	
    // checks if user wants to give another morse sign input 
    printf(" \n click 1 to continue\n");
    scanf("%d",&y);
  
        }while(y!=0);

   return 0;
}

void display()
{
	// pushing decoded value to top of the stack
	string[top]=result;
	int i;
	printf("----------------DECODED STACK----------------\n");
	for(i=1;i<=top; i++)
     {
   	printf("%c",string[i]);
     }
        printf("\n---------------------------------------------");
    // increamenting top of the stack address
    top++;
}
