#include <stdio.h>
int main()
{
    int input, output, final, amount = 0;
    for (int i = 0; 5 > i; i++)
    {
        scanf("%d %d", &input, &output);
        final = output - input;
        if (final <= 200)
        {
            amount = amount + 0;
        }
        else if (final <= 300)
        {
            amount = amount + final * 3;
        }
        else if (final <= 500)
        {
            int t = final - 300;
            amount = amount + 300 * 3 + t * 5;
        }
        else
        {
            int t = final - 500;
            amount = amount + 300 * 3 + 200 * 5 + t * 7;
        }
    }
    printf("%d", amount);
}