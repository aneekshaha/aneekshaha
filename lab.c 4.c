#include<stdio.h>
int main()
{
float inches,feet,fathoms;
printf("Enter the depth in fathoms:");
scanf("%f",&fathoms);
feet=6*fathoms;
inches= 12*feet;

printf("%f fathoms \n",fathoms);
printf("%f feet\n",feet);
printf("%f inches\n",inches);
return 0;
}
