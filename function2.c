/* without argument and without return values
WAP to create a  function which prints multiplication of tree numbers
*/
 #include<stdio.h>
 void multiply();

 void multiply()

 { int n1,n2,n3,m;

 printf("Enter first number \n");
 scanf("%d",&n1);
 printf("Enter second number \n");
 scanf("%d",&n2);
 printf("Enter thrad number \n");
 scanf("%d",&n3);
m= n1*n2*n3;

printf("multiply of %d %d and %d is %d \n",n1,n2,n3,m);

 }
 int main(int argc, char const *argv[])
 {
     // function call 
     multiply();
     return 0;
 }
 