#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter number");
    scanf("%5d",&num);
    printf("%d\n",num);
    sum = num%10;
    // printf("%d\n",sum);
    sum += (num/10)%10;
    sum += (num/100)%10;
    sum += (num/1000)%10;
    sum += (num/10000)%10;
    printf("%d", sum);

    return 0;
}