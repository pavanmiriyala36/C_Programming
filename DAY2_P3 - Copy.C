//febonacy
void main()
{
int a=0,b=1,n,c,i;
clrscr();
printf("enter a num \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
getch();
}