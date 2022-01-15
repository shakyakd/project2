/* with arguments and without return values 

print star

*/

#include<stdio.h>
void printstar(int n);
void printstar( int n)
{
int n;
for (int i = 0; i < n; i++)
{
    printf("%c",'*');
}
}
int main(int argc, char const *argv[])
{
    
    printstar(8);
    return 0;
}




