#include <stdio.h>
int main()
{
    int length;
    printf("Enter the length\n");
    scanf("%d", &length);
    int breadth;
     printf("Enter the breadth\n");
      scanf("%d", &breadth);
    float area = 0.0;
    area=(length*breadth);
    printf("The area of the rectangle is %0.1f", area);
    return 0;
}
