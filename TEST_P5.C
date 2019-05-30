void main()
{
char a[10];
int i,n,j;
clrscr();
//*******************
printf("enter n value i.e<10\n");
scanf("%d",&n);
printf("enter %d values to string \n",n);
for(i=0;i<=n;i++)
scanf("%c",&a[i]);
puts("given string is\n");
for(i=0;i<=n;i++)
printf("%c \t",a[i]);
printf("\n");
//********************
for(i=0;i<=n;i++)
{
for(j=i+1;j>0;j--)
{
printf("%c \t",a[i]);
}
}
getch();
}
