void main()
{
 int i,t,l;
clrscr();
printf("enter the table value \n");
scanf("%d",&t);
printf("enter the limit \n");
scanf("%d",&l);
printf("the table is\n ");
for(i=1;i<=l;i++)
printf("%d\t\t%d\t=%d\n",i,t,i+t);
getch();
}
