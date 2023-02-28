#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

int main()
{
    //int my_input= get_int("Please enter a digit  ");

    string user_input= get_string("","Please enter a string message  ");
    //printf("Hello world!You've entered  %d\n",my_input);
    printf("The message you entered is %s\n",user_input);

    return 0;
}
