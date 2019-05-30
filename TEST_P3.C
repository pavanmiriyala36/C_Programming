void main()
{
char a[10];
int i,n;
clrscr();
printf("enter value of n\n");
scanf("%d",&n);
printf("enter %d values of string \n",n);
for(i=n;i>=0;i--)
scanf("%c",&a[i]);
puts("given string\n");
for(i=0;i<=n;i++)
printf("%c\t",a[i]);
//printf("\n rev str is \n");
//for(i=9;i>=0;i--)
//printf("%c\t",a[i]);
getch();
}
