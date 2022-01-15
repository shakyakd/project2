#include<stdio.h>

int func1(int array[])

{

for (int i = 0; i < 4; i++)     
{
   printf("The value at %d is %d\n",i,array[i]);

array[0]=694;


}
return 0;


}


int main(int argc, char const *argv[])
{
    int arr []={23,43,25,1};

printf("the value at 0 index is %d\n",arr[0]);

func1(arr);

printf("the value at 0 index is %d\n",arr[0]);

    
    return 0;
}
