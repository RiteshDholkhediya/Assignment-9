#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter Month Number");
    scanf("%d",&num);

    switch(num<0){
        case 1: printf("Your changed value is %d",-1*num);
                break;
        case 0: printf("Your changed value is %d",-1*num);
                break;
    }
    getch();
    return 0;   
}