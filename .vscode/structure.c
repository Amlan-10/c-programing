#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };

    struct emp
    { 
        char name[25];
        struct address adr;
    };

    struct emp e ={"Amlan ", "0334565891", "Kolkata", 121};
    printf("\n Name = %s ; Phone = %s", e.name,e.adr.phone);
    printf("\n City = %s ; Pin = %d", e.adr.city,e.adr.pin);

    return 0;
}