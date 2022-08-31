#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("Enter year");
    scanf("%d",&year);

    switch(year%4){
        case 0: switch(year%100){
                    case 0: switch(year%400){
                                case 0: printf("\nLeap year");
                                        break;
                                default : printf("\nNot a leap year");
                            }
                            break;
                    default : printf("\nLeap year");
                }
                break;
        case 1 ... 3 : printf("Not a leap year");
    }

    getch();
    return 0;

}