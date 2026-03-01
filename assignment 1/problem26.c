#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter you no:");
    scanf("%d",&x);
    y=(((x%1000)/100)*1000)+(((x/1000)*100)+((((x%1000)%100))));
    printf("Result: %d",y);

    return 0;
}