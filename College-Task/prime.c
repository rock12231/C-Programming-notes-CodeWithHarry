#include <stdio.h>
int main (){

    int count,num,flag=1;
    scanf("%d",&num);
    while(num <= count/2 ){
        if(num%2 == 0){
            flag=0;
            break;
        }
        count++;
    }
    if(flag)
    printf("%d is prime",num);
    else
    printf("%d is Not prime", num);
}