#include<stdio.h>
/*int main(int argc, char const *argv[])
{


  /*  for(int i = 0; i < 5; i++)
{
for (int j = 0 ;j < 5; j++)
{
    
printf("*");
}
printf("\n");
}
    return 0;
}







    for(int i = 0; i < 5; i++)
{
for (int j = 0 ;j < 5; j++)
{
    
printf("%d",j+1);
}
printf("\n");
}
    return 0;
}

/*

for(int i = 0; i < 5; i++)
{
for (int j = 5;j>0; j--)
{
    
printf("%d",j);
}
printf("\n");
}
    return 0;
}

*/

/*

for(int i = 0; i < 6; i++)
{
for (int j = 0 ;j < i; j++)
{
    
printf("*");
}
printf("\n");
}
    return 0;
}




for(int i = 0; i <= 6; i++)
{
for (int j = 0 ;j <=i; j++)
{
    
printf("*");
}
printf("\n");
}
    return 0;
} 

*/

void starpattern(int rows)
{
for (int i =0; i<rows; i++)
{
   for (int j =0; j<i; j++)
   {
       printf("*");
   }
printf("\n");
}



}


void starpatternrevres(int rows)
{

for (int i =0; i<rows; i++)
{
   for (int j =0; j<rows-i; j++)
   {
       printf("*");
   }
printf("\n");


}

}

int main(int argc, char const *argv[])
{
    int n,n2;
    printf("\n Type 0 for star pattern and 1 for reverse star pattern\n");
scanf("%d",&n2);

    printf("how many rows do you want \n");
    scanf("%d",&n);

switch (n2)
{
case 0:
    starpattern(n);
    break;
case 1:
    starpatternrevres(n);
    break;

default:

printf("enter a valid number");
    break;
}

    return 0;
}

