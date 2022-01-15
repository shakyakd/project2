/*
without arguments and without return values

WAP to create a function which prints that a number is even and odd 

*/

#include<stdio.h>
void evenorodd();
void evenorodd()

{


    int n;
    printf("\n Enter any number :");
scanf("%d",&n);

if (n%2==0)

    printf("Even number \n");

else
printf("odd number\n");
}

int main(int argc, char const *argv[])
{
    // function call 
    evenorodd();
    return 0;
}
