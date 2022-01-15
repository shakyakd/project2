/* without argument and without return values

 WAP to create a fanction which prints sum of two numbers

*/

#include<stdio.h>
void sum();

void sum()
{

    int n1,n2,s;
    printf("\nEnter first number :");
    scanf("%d",&n1);
    printf("\nEnter second number :");
    scanf("%d",&n2);
 s=n1+n2;
printf("sum of %d and %d is %d\n",n1,n2,s);
}
int main(int argc, char const *argv[])
{
    // function call 

    sum();
    sum();
    return 0;
}
