#include<stdio.h>
#include<conio.h>
int main(){
    int day;
    printf("Enter Day Number Of The Week");
    scanf("%d",&day);

    switch(day){
        case 1: printf("Happy Sunday");
                break;
        case 2: printf("Happy Monday");
                break;
        case 3: printf("Happy Tuesday");
                break;
        case 4: printf("Happy Wednesday");
                break;
        case 5: printf("Happy Thursday");
                break;
        case 6: printf("Happy Friday");
                break;
        case 7: printf("Happy Saturday");
                break;
        
        default : printf("Invalid month number");
    }

    getch();
    return 0;
}