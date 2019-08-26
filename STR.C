#include<stdio.h>
#include<string.h>
struct namelist
{
	char name[20];
}n[100];
int m,i,found=0,j=0,k,a[100]
;
char search[20];
void main()
{
	printf("enter the number of name\n");
	scanf("%d",&m);
	printf("enter the names\n");
	for(i=0;i<=m;i++)
	{
		gets(n[i].name);
	}
	printf("enter the name to be searched\n");
	gets(search);
	for(i=0;i<=m;i++)
	{
		if(strcmp(search,n[i].name)==0)
		{
			a[j]=i;
			found=1;
			j++;
		}
	}
	if(found==0)
	{
		printf("name not found\n");
	}
	else
	{
		printf("name found in the position\n");
		for(k=0;k<j;k++)
		{
			printf("%d\n",a[k]);
		}
	}
	getch();
}