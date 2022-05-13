#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
  for (int i = 1; i <= T; i++)
    {
        char first, second, third;
        scanf("%c\t", &first);
        scanf("%c\t", &second);
        scanf("%c\t", &third);
          char x, y;
        scanf("%c", &x);
        scanf("%c", &y);
        while (T =!0)
        {
            if (x == first && y == second)
            {
                printf("%c", x);
            }
            else if (x == first && y == third)
            {
                printf("%c", x);
            }
            else if (x == second && y == third)
            {
                printf("%c", x);
            }
            else if (x == third && y == first)
            {
                printf("%c", y);
            }
            else if (x == second && y == first)
            {
                printf("%c", y);
            }
            else 
            {
                printf("%c", y);
            }
        }
    }

    return 0;
}
