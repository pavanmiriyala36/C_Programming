void main()
{
char a[10],b[10]={0,0,0,0,0,0,0,0,0,0};
int i,n;
clrscr();
//***************************************
puts("enter n value i.e<10");
scanf("%d",&n);
printf("enter %d elements to string\n",n);
for(i=0;i<=n;i++)
scanf("%c",&a[i]);
puts("given string is \n");
for(i=0;i<=n;i++)
printf("%c \t",a[i]);
//******************************************
printf("\n");
for(i=0;i<=n;i++)
{
//b[i]=a[i];
a[i]=a[i]+2;
//scanf("%d",&b[i]);
printf("%c\t",a[i]);
}
getch();
}
