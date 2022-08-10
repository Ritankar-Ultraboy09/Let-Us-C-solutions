#include <stdio.h>
#include<math.h>
int main()
{
    int num = 1, d1, d2, d3, sum, num2;

    printf("The Armstrong numbers between 1-500 are:-\n ");
    
    while (num <= 500)

    {
        d3 = num % 10;
        num2 = num / 10;
        d2 = num2 % 10;
        d1 = num2 / 10;
        sum = pow(d1, 3) + pow(d2, 3) + pow(d3, 3);

        if (sum == num)
        {
            printf("%d\n",sum);
        }
        num++;
    }


    return 0;
}