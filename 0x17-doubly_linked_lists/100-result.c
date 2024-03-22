#include <stdio.h>

int main()

{
    int i = 10;
    int j = 10;
    int a = 0;
    int b = 0;
    int array[100] = {0};
    int divider = 10;
    int num;
    int great;
    int product;
    int n;
    int flag;

    /*Loop through first 2 digit number and second 2 digit number*/

    while (i<100)
    {
        while (j < 100)
        {
            product = i*j;
            array [a] = product % 10;
            n = product / divider; 

            while (n != 0)
            {
                a++; 
                num = n%10;
                divider *=10;
                array[a]=num;
                n = product/divider;
            }

            flag = 0;

            while (b<a) 
            {
                if (array[b] != array[a])
                {
                    flag = 1;   
                }
                b++;
                a--;
            }

            if (flag == 0)
            {
                great = product;
            }

            j++;
            a = 0;
            b = 0;
        }     
        i++;
    }

    printf("The largest palindrome is %d \n", great);

    return 0;
}
