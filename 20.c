#include <stdio.h>
#include <stdlib.h>
#define f(a,b,c)(a+b+c)*(a-b-c)
int main(void)
{
	
	float num,num1,num2;
	printf("�γo�Ӥ�{��(a+b+c)*(a-b-c)��X�A������\n");	
    printf("�п�J�T�ӼƦr:");
    scanf("%f%f%f",&num,&num1,&num2);
    printf("�p�⵲�G��%f\n",f(num,num1,num2));
    return 0;	
}
