#include<stdio.h>
#include<string.h>

#define SIZE 100
int main()
{
    char exp[SIZE];
    char stack[SIZE];
    int top=-1;
    printf("Enter your expression : ");
    scanf("%s",&exp);

    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(')
        {
            top++;
            stack[top]='(';
        }
        else if(exp[i]==')')
        {
            if(top==-1)
            {
                printf("Closing parentheses not matched:) ");
                return 0;
            }

            else
             {
              top=top-1;
             }

        }
    }
     if(top!=-1)
     {
         printf("Opening parentheses not end:) " );
     }
     else
        printf("All parentheses are matched,YOOOOO!!!");
}
