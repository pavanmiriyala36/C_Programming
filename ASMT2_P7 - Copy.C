void main()
{
int a[10],i,j,t;
clrscr();
puts("enter the array\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
puts("given array is \n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\nsecond smalest value is %d",a[1]);
getch();
}
