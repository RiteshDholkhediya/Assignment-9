#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(){

    int a,l1,l2,l3;
    char ch;
    while(1){
        printf("\na. check whether a given set of three numbers are length of an isoceles triangle or not");
        printf("\nb. check whether a given set of three numbers are length of an right triangle or not");
        printf("\nc. check whether a given set of three numbers are length of an equilateral triangle or not");
        printf("\nd. Exit");
        fflush(stdin);
        printf("\nEnter your choice ");
        scanf("%c",&ch);
        


        switch(ch){
            case 'a':   printf("\nEnter all three sides of triangle");
                        scanf("%d%d%d",&l1,&l2,&l3);
                        if(l1==l2 || l2==l3 || l3==l1)
                            printf("Triangle is isoceles");
                        else
                            printf("Triangle is not isoceles");
                        break;

            case 'b':   printf("\nEnter all three sides of triangle");
                        scanf("%d%d%d",&l1,&l2,&l3);
                        if((l1*l1 == (l2*l2 + l3*l3)) || (l2*l2 == (l1*l1 + l3*l3)) || (l3*l3 == (l2*l2 + l1*l1)))
                            printf("Triangle is right angle triangle");
                        else
                            printf("Triangle is not right angle triangle");
                        break;

            case 'c':   printf("\nEnter all three sides of triangle");
                        scanf("%d%d%d",&l1,&l2,&l3);
                        if(l1==l2 && l2==l3)
                            printf("Triangle is Equilateral triangle");
                        else
                            printf("Triangle is not equilateral triangle");
                        break;

            case 'd':   exit(0);

            default : printf("\nInvalid choice");
                        
        }
    }
    
    getch();
    return 0;

}