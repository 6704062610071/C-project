#include <stdio.h>

int main()
{
    int price1,price2,price3,sum1,sum2;
    float total1,total2,total3;

    printf("Enter price:");
    scanf("%d",&price1);
    total1=(price1-(price1*0.05))+((price1-(price1*0.05))*0.07);
    printf("Total:%.2f\n",total1);

    printf("Enter price:");
    scanf("%d",&price2);
    sum1=price1+price2;
    total2=(sum1-(sum1*0.15))+((sum1-(sum1*0.15))*0.07);
    printf("Total:%.2f\n",total2);

    printf("Enter price:");
    scanf("%d",&price3);
    sum2=price1+price2+price3;
    total3=(sum2-(sum2*0.3))+((sum2-(sum2*0.3))*0.07);
    printf("Total:%.2f\n",total3);


    return 0;


}
