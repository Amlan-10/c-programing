#include<stdio.h>
#include<math.h>
int main()
{
 int rating;
 printf("Enter the rating(1-3)\n");
 scanf("%d", &rating);
 switch (rating)
 {
 case 1:
 printf("The rating  is 1\n");
     break;
 case 2:
 printf("The rating is 2\n");
    break;
    case 3:
 printf("The rating is 3\n");
    break;
 default:
 printf("Invalid rating!\n");
     break;
 }
  printf("The answer of 2 to the power 3 is %f\n", pow(2, 3));
    return 0;

}