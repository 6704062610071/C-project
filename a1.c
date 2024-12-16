#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a,n=0,s=0;
    float avg;
    bool f =true;
    while (f)
    {
        printf("Enter value:");
        scanf("%d",&a);
        if(a!=-1)
        {
            s+=a;
            n++;
        }
        else
        {
            f=false;
        }

    }
    avg=(float)s/n;
    printf("%.2lf",avg);
    return 0;
    
}