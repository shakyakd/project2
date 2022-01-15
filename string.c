#include<stdio.h>

void print_str(char str[])
{
int i;
while(str[i]!='\0')
{
  printf("%c",str[i]); 

i++;
}
}

int main(int argc, char const *argv[])
{
   /* //char strA[]={'k','u','l','d','e','e','p','\0'};
    char strA[]="kuldeep";

    // call function 

print_str(strA); */


char strA[65];

gets (strA);

//printf("Using printf %s \n",strA);

printf("using puts :\n");


puts(strA);

    return 0;
}


