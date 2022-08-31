#include<stdio.h>
#include<conio.h>
int main(){
    int ch;
    printf("Enter Month Number");
    scanf("%d",&ch);

    switch(ch){
        case 1: printf("Good");
                break;
        case 2: printf("Better");
                break;
        case 3: printf("Best");
                break;
        
        default : printf("Invalid");
    }
    getch();
    return 0;
}