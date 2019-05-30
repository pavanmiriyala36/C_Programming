void main()
{
int a[10],b[10],i;
clrscr();
puts("enter the values to array1\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
puts("given array1 is \n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
for(i=0;i<10;i++)
b[i]=a[i];
puts("\n new array elements are\n");
for(i=0;i<10;i++)
printf("%d\t",b[i]);
getch();
}
