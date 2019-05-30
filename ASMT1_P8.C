void main()
{
 //long n,s;
 int i,n,s;
clrscr();
printf("enter the value of n \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
s=s+n;
printf("sum of %d num is %d \n",n,s);
printf("avg of %d num is %d \n ",n,s/n);
getch();
}