void main()
{
char a[20],b[20],c[20];
int i,t,p,n,d,f,j=0;
clrscr();
//******************************
printf("enter d value for no of ints\n");
scanf("%d",&d);
printf("enter %d array values\n",d);
for(i=0;i<=d;i++)
scanf("%c",&a[i]);
printf("given array is\n");
for(i=0;i<=d;i++)
printf("%c\t",a[i]);
//******
printf("\n enter no of leters to str2\n");
scanf("%d",&f);
printf("\n enter %d elements to the string2 to be incerted\n ",f);
for(i=0;i<=f;i++)
scanf("%c",&b[i]);
printf("given array2 is\n");
for(i=0;i<=f;i++)
printf("%c\t",b[i]);

//**********************************
//printf("\n enter no of leters to be insert\n");
//scanf("%d",&e);
//printf("\n enter %d elements to the string2 to be incerted\n ",e);
//for(i=0;i<e;i++)
//scanf("%c",&b[i]);
puts("enter the position to be incert\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
  printf("%c",a[i]);
  t=n+f+1;
n++;
for(i=n;i<=t;i++)
{
 for(j=0;j<=f;j++)
 printf("%c",b[j]);
 //j--;
}
//while(j)
//{
//n++;
//printf("%c",b[n]);
//j--;
//}
for(i=t;i<=d;i++)
printf("%c",a[i]);
//a[i]=a[i-1];
//a[e-1]=b[e];

//for(i=0;i<n;i++)
//c[i]=a[i];
//*****************************
//printf("new array is \n") ;
//for(i=0;i<10;i++)
//printf("%c\t",a[i]);
getch();
}