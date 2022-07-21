#include <stdio.h>
#include <String.h>
struct Product
{
    int p_no;
    char p_name[100];
    int price;
    int quantity;
};
void input(int, struct Product p[]);
void display(int, struct Product p[]);
int main()
{
    int n;
    printf("Enter the No of Product : ");
    scanf("%d", &n);
    struct Product p[n];


    input(n, p);
    display(n, p);

    return 0;
}

void input(int n, struct Product p[100])
{

    for (int i = 0; i < n; i++)
    {
       gets(p[i].p_name);
        printf("Enter the Product Name  :");
       gets(p[i].p_name);
        printf("Enter the Product No : ");
        scanf("%d", &p[i].p_no);
        printf("Enter the Price :");
        scanf("%d", &p[i].price);
        printf("Enter the Quantity :");
        scanf("%d", &p[i].quantity);
    }
}

void display(int n, struct Product p[n])
{

    for (int i = 0; i < n; i++)
    {
        printf("Product number : %d\n", p[i].p_no);
        printf("Product name : %s\n", p[i].p_name);
        printf("Product Price per quantity : %d\n", p[i].price);
        printf("Product Qty : %d\n", p[i].quantity);

        printf("Total Price : %d", p[i].price * p[i].quantity);
    }
}