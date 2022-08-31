#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(){

    int a,b,c;
    char ch;
    while(1){
        printf("\na. Addition");
        printf("\nb. Substraction");
        printf("\nc. Multiplication");
        printf("\nd. Division");
        printf("\ne. Exit");
        getch();
        fflush(stdin);
        printf("\nEnter your choice ");
        scanf("%c",&ch);
        
        switch(ch){
            case 'a':   printf("\nEnter two numbers");
                        scanf("%d%d",&a,&b);
                        c = a+b;
                        printf("Result is %d\n",c);
                        break;
            case 'b':   printf("\nEnter two numbers");
                        scanf("%d%d",&a,&b);
                        c = a-b;
                        printf("Result is %d\n",c);
                        break;
            case 'c':   printf("\nEnter two numbers");
                        scanf("%d%d",&a,&b);
                        c = a*b;
                        printf("Result is %d\n",c);
                        break;
            case 'd':   printf("\nEnter two numbers");
                        scanf("%d%d",&a,&b);
                        c = a/b;
                        printf("Result is %d\n",c);
                        break;
            case 'e':   exit(0);

            default : printf("\nInvalid character");
                        
        }
    }
    

}