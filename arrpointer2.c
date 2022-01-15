#include <stdio.h>
// codewithharry array pointer class vedio no 27
int main(int argc, char const *argv[])
{
    /*int a=34;
    int *ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    printf("%d\n",ptra+2);

*/

    /*char a='3';
    char*ptra=&a;
    printf("%d\n",ptra);


    printf("%d\n ",ptra-2);
    */
    /*char a='3';
    char*ptra=&a;
    printf("%d\n",ptra);
    ptra++;

    printf("%d\n ",ptra);
    printf("%d\n ",ptra-2);*/

    /*
    char a='3';
    char*ptra=&a;
    printf("%d\n",ptra);
    ptra--;

    printf("%d\n ",ptra);
    printf("%d\n ",ptra-2);*/

    /*int arr[]={1,2,3,4,5,6,7};
    printf("%d",arr[0]);*/

    /*int arr[]={1,2,3,4,5,6,7};
    printf("value at position 3 of the array is %d\n",arr[3]);
    printf("The address of first element of the array  is %d\n",&arr[0]);
    */
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printf("The address of first element of the array  is %d\n", &arr[0]);
    printf("The address of first element of the array  is %d\n", arr);
    printf("The address of second element of the array  is %d\n", &arr[1]);
    printf("The address of second element of the array  is %d\n", arr[1]);

    printf("The  value at address  of first element of the array  is %d\n", *(&arr[0]));
    printf("The  value at address  of first element of the array  is %d\n", *(arr));
    printf("The  value at address  of second element of the array  is %d\n", *(&arr[1]));
    printf("The  value at address  of second element of the array  is %d\n", *(arr+1));

    return 0;
}
