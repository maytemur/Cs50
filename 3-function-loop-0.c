#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

int main(void)
{
    //int my_input= get_int("Please enter a digit  ");

    string user_input= get_string("","""Dikine her satır bir harf gelecek şekilde string giriniz ");
    //printf("Hello world!You've entered  %d\n",my_input);
    int i;
	for (i=0;i<strlen(user_input);i++){
    printf("%c\n",user_input[i]);
    }
}
