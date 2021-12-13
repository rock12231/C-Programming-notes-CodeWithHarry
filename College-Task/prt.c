#include <stdio.h>
#include <conio.h>
int main(){

    int p , r, t;
    float temp;
    printf("Enter the Principel ambout : ");
    scanf("%d",&p);
    printf("Enter the Rate ambout : ");
    scanf("%d", &r);
    printf("Enter the Principel ambout : ");
    scanf("%d", &t);
    temp = (p*r*t)/100;
    printf("Your Simple intrest : %f", temp);
    return 0;
}