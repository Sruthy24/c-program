#include <stdio.h>
int main()
{
int a[20],i,max,min,p1=0,p2=0,n;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
p1=i;
}
if(a[i]<min)
{
min=a[i];
p2=i;
}
}
printf("\nmax is %din pos%d",max,p1);
printf("\nmin is %din pos %d\n",min,p2);
return 0;

}
