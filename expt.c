#include<stdio.h>
int main ()
{
int i,key,pos,n,flag;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements: ");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("enter key");
scanf("%d",&key);
	for (i=0;i<n;i++)
	{
	if(a[i]==key)
		{
		flag=1;
		pos=i;
		break;
		}
	}
if(flag==0)
	{
	printf("element not found");
	}
else
	{
	printf("element %d found at %d",key,pos);
	}
return 0;
}
