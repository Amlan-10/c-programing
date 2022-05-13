#include <stdio.h>
int main()
{
    char username;
    int password;
    printf("Enter the username:\n");
    scanf("%c", &username);
    printf("Enter the password:\n");
    scanf("%d", &password);
    if (username == 'a')
    {
        if (password == 12345)
        {
            printf("Login Succesful\n");
        }
        else
        {
            printf("Password Incorrect\n");
        }
    }
    else
    {
        printf("Username Incorect\n");
    }
    return 0;
}