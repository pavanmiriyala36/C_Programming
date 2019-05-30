void main()
{
int n,t,sum=0,r;
clrscr();
printf("enter a num\n");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=t%10;
sum=sum+r;
t=t/10;
}
printf("sum of ints of %d is %d\n",n,sum);
getch();
}
