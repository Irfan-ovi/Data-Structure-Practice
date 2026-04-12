#include<stdio.h>
#include<string.h>

#define SIZE 100
int main()
{
    char exp[SIZE];
    char stack[SIZE];
    int top=-1;
    printf("Enter your expression : ");
    scanf("%s",exp);

    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            top++;
            stack[top]=exp[i];
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(top==-1)
            {
                printf("Closing parentheses not matched:) ");
                return 0;
            }
           if( (exp[i]==')' && stack[top]=='(') ||
               (exp[i]=='}' && stack[top]=='{') ||
               (exp[i]==']' && stack[top]=='[') )
             {
               top--;
             }



        }
    }
    if(top ==-1)
    {
        printf("The parenthesis are valid,YOOO!!!");
    }
    else
        printf("The parenthesis are invalid:)");

}

