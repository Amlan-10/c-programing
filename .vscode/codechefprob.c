#include <stdio.h>
int main()
{
    float bal;
    int amt;
    scanf("%d", &amt);
    scanf("%f", &bal);
    while ((bal >= 0 && bal <= 2000) && (amt > 0 && amt <= 2000))
    {
        if (amt <= bal && amt % 5 == 0)
        {
            bal = (bal - (amt + 0.50));
            printf("%0.2f\n", bal);
            break;
        }
        else
        {
            printf("%0.2f\n", bal);
            break;
        }
    }
    return 0;
}