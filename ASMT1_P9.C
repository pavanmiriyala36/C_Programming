void main()
{
 int n,n1,c=0;
clrscr();
printf("enter a number \n");
scanf("%d",&n);
n1=n;
while(n1>0)
{
c++;
n1=n1/10;
}
printf("total number of ints in %d is %d",n,c);
getch();
}