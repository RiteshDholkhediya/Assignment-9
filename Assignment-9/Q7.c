#include<stdio.h>
#include<conio.h>
int main(){
    int unit;
    float m1=0.50,m2=0.75,m3=1.20,m4=1.50,bill,total_bill,surcharge;
    printf("\nEnter units");
    scanf("%d",&unit);

    switch(unit){
        case 1 ... 50 : 
                        bill = (unit*m1) + surcharge;
                        break;

        case 51 ... 150:
                         
                        bill = (50*m1 + (unit-50)*m2) + surcharge;
                        break;

        case 151 ... 250:
                         bill = (50*m1 + 100*m2 + (unit-150)*m3) + surcharge;
                        break;

        default :       
                        bill = (50*m1 + 100*m2 + 100*m3 + (unit-250)*m4) + surcharge;
                        
    }
    
    surcharge = bill*0.20;
    total_bill = bill + surcharge;
    printf("Your consumed units are %d and your bill is %.2f",unit,bill);
    printf("\nNet payable amount is (bill + surcharge) = %.2f + %.2f => %.2f",bill,surcharge,total_bill);
    getch();
    return 0;

}