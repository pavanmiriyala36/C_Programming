void main()
{
int c=0,n,i,j,n1;
clrscr();
printf("enter a num");
scanf("%d",&n);
//n=n1;
printf("prime nums\n %d\n%d\n",2,3);
for(j=3;j<=n;j++)
{
  for(i=2;i<=j;i++)
   {
    if(j%i==0)
    c++;
    }
    if(c==1)
   printf("%d\n",j);
 //
   c=0;
   }
  // if(c<2)



//if(c>2)
//printf("given num is not a prime num");
//else
//printf("given num is prime num");
getch();
}