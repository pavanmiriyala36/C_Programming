void main()
{
 int a,b,c;
clrscr();
printf("enter 3 nums \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is big num\n",a);
else if(b>c&&b>a)
printf("%d is big num",b);
else
printf("%d is big num",c);
getch();
}