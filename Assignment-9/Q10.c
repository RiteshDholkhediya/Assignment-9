#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int d,a,b,c;
    double r1,r2,real1, img1, real2,img2,des1,des2;
    printf("Enter coefficients of quadratic equation");

    scanf("%d%d%d",&a,&b,&c);
    d = b*b - 4*a*c;

    switch(d<0){
        case 1: real1 = (-1*b)/(2*a);
                des1 = (4*a*c) - (b*b);
                img1 = sqrt(des1)/2*a;
                real2 = (-1*b)/(2*a);
                des2 = (4*a*c) - (b*b);
                img2 =  sqrt(des2)/2*a;
                printf("\nRoot1  : - %.2f + %.2f",real1,img1);
                printf("\nRoot2 : - %.2f - %.2f",real2,img2);
                break;
        case 0: switch(d>0){

                    case 1: r1 = (-1*b + sqrt(d))/2*a;
                            r2 = (-1*b - sqrt(d))/2*a;
                            printf("\nRoot1 :- %.2f",r1);
                            printf("\nRoot2 :- %.2f",r2);
                            break;

                    case 0: r1 = (-1*b)/(2*a);
                            printf("\nRoot :- %.2f ",r1);
                            break;

                }
                break;
        
    }

    getch();
    return 0;
}

//Not giving the correct output...  it is doubt. 
// I have chnged the code only output is left to check.