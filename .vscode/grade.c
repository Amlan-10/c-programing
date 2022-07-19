#include <stdio.h>
int main()
{
    int SDSA, STOC, SDM, DDSA, DTOC, DDM, T, total1, total2;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d %d", &DDSA, &DTOC, &DDM);
        scanf("%d %d %d", &SDSA, &STOC, &SDM);
        total1 = (DDSA + DTOC + DDM);
        total2 = (SDSA + STOC + SDM);
        if (total1 > total2)
        {
            printf("Dragon\n");
        }
        else if (total2 > total1)
        {
            printf("Sloth\n");
        }
        else if (total1 = total2)
        {
            if (DDSA > SDSA)
            {
                printf("Dragon\n");
            }
            else if (SDSA > DDSA)
            {
                printf("Sloth\n");
            }
            else if (DDSA == SDSA)
            {
                if (DTOC > STOC)
                {
                    printf("Dragon\n");
                }
                else if (STOC > DTOC)
                {
                    printf("Sloth\n");
                }
                else if (SDSA == DDSA && STOC == DTOC && SDM == DDM)
                {
                    printf("Tie\n");
                }
            }
        }
    }
    return 0;
}
