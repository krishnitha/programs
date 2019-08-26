#include<stdio.h>
void main()
{
int a[100],b[100],m,n,i,j,found=0;
printf("enter the size of the array a\n");
scanf("%d",&m);
printf("enter the size of the array b\n");
scanf("%d",&n);
printf("enter the array 1\n");
for(i=0;i<m;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the array 2\n");
for(i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
if(m!=n)
{
	printf("arrays are not equal\n");
}
else
{
	for(i=0;i<m;i++)
	{
		if(a[i]!=b[i])
		{
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("arrays are equal\n");
	}
	else
	{
		printf("array are not equal\n");
	}
}
getch();
}
