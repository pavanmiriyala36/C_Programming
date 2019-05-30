void main()
{
int a[10],i,t,p,n;
clrscr();
puts("enter the array values\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("given array is\n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
puts("\n enter the value to be incerted\n ");
scanf("%d",&t);
puts("enter the position to be incert\n");
scanf("%d",&n);
for(i=10;i>=n;i--)
a[i]=a[i-1];
a[t-1]=t;
printf("sorted array is \n") ;
for(i=0;i<10;i++)
printf("%d\t",a[i]);
getch();
}