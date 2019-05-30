void main()
{
int a[10],s=0,i;
clrscr();
puts("enter the array values\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
puts("given array is\n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
for(i=0;i<10;i++)
s=s+a[i];
printf("\nsum of all elements is %d\n",s);
getch();
}

