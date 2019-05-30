void main()
{
int a[10],i;
//char b[10],b;
clrscr();
//printf("%d",b);
puts("enter the values");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
printf("%d\t",a[i]);
//for(i=0;i<10;i++)
//b[i]=a[i];
printf("\n pos num \n");
for(i=0;i<10;i++)
{
if(a[i]>=0)
printf("%d\t",a[i]);
}
printf("\n neg num \n");
for(i=0;i<10;i++)
{
if(a[i]<0)
printf("%d\t",a[i]);
}
getch();
}

