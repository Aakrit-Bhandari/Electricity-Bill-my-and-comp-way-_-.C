#include <stdio.h>
#include <stdlib.h>
void Bill(int *sum, int a)
{
    int ini = 0;
    if (a <= 200)
    {
        ini = 0;
    }
    else
    {
        if (a > 200 && a <= 300)
        {
            ini += a * 3;
        }
        else
        {
            int r = a - 300;
            ini += 300 * 3;
            if (r - 200 >= 0)
            {
                int z = r - 200;
                ini += 200 * 5;
                if (z > 0)
                {
                    ini += z * 7;
                }
                else
                {
                    ini = *sum;
                }
            }
            else
            {
                ini = r * 5;
            }
        }
    }
    *sum += ini;
}
int main(void)
{
    int sum = 0;
    // for (int i = 0; i < 5; i++)
    // {
    int a, b;
    scanf("%d %d", &a, &b);
    int c = b - a;
    Bill(&sum, c);
    // }
    printf("%d", sum);
}
