#include <stdio.h>
struct player
{
  int age;
  char name[30];
  int dob;
};
int main()
{
  struct player stud[7];
  int i;
  
  for(i=0; i<7; i++)
    {
      printf("player %d\n",i+1);
      printf("Enter name :\n");
      scanf("%s",stud[i].name);
      printf("Enter age :\n");
      scanf("%d", &stud[i].age);
      printf("Enter dob :\n");
      scanf("%d", &stud[i].dob);
    }
    printf("Sl No.\tName\tAge\tDOB\n");
    return 0;
}