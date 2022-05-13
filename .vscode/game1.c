#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, n, ngueses = 1;
    srand(time(0));
    number = rand() % 100 + 1; //generates random number between 1 to 100//
    printf("The random number id %d\n", number);
    do
    {
    printf("Guess the Number between 1 to 100\n");
    scanf("%d", &n);
    if (n > number)
    {
        printf("Try Lower Number\n");
        
    }
    else if (n < number)
    {
        printf("Try Greater Number\n");
    }
    else 
    {
        printf("You have guessed in %d attempts", ngueses);
    }
      ngueses++;
      }while(n!=number);
    return 0;
}