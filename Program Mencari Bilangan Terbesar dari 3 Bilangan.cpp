#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,n3,max=0;
	printf("masukan nilai :");
	scanf("%d",&n1);
	printf("masukan nilai :");
	scanf("%d",&n2);
	printf("masukan nilai :");
	scanf("%d",&n3);
	max=n1;
	if(max<n2)
	max=n2;
	if(max<n3)
	max=n3;
	printf("bilangan terbesar :%d",max);
	getch();
	return 0;
}
