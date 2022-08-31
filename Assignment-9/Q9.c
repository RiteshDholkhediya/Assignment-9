#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter Month Number");
    scanf("%d",&num);

    switch(num%2){
        case 0: printf("Nearest odd number of %d is %d",num, num+1);
                break;
        case 1: printf("NUmber is already odd number %d",num);
                break;
    }
    getch();
    return 0;   
}