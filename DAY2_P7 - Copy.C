void main()
{
int a[10],i;
clrscr();
puts("enter values of str\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
printf("%d\n",a[i]);
printf("rev str is \n");
for(i=9;i>=0;i--)
printf("%d\t",a[i]);
getch();
}

