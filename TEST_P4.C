void main()
{
char a[10];
int i,n,t;
clrscr();
//*********************
printf("enter n value i.e <10");
scanf("%d",&n);
printf("give %d values to string\n",n);
for(i=0;i<=n;i++)
scanf("%c",&a[i]);
puts("given string is");
for(i=0;i<=n;i++)
printf("%c \t",a[i]);
printf("\n");
//*********************)
printf("%c \t",a[n]);
for(i=0;i<=n;i++)
if(i<n-1)
printf("%c \t",a[i+1]);
//t=a[i];
//a[i]=a[n-i-1];
//a[n-i]=t;
//for(i=0;i<n;i++)
//printf("%c",a[i]);

//printf("\t");
getch();
}
