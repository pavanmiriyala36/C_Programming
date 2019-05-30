void main()
{
int i,j,n,a,k,l;
clrscr();
printf("enter the n value\n");
scanf("%d",&n);
printf("enter a num b/w 1-10\n");
scanf("%d",&a);
switch(a)
{
case 1:
{
  for(i=0;i<n;i++)
  {
   for(j=i+1;j>0;j--)
    printf("*\t");
     printf("\n");
  }
  break;
}
case 2:
{
 for(i=n;i>=1;i--)
 {
  printf("\n");
  for(j=i;j>=1;j--)
   printf("*\t");
 }
 break;
 }
 case 7:
 {
 for(i=0;i<n;i++)
 {
  for(j=i+1;j>=1;j--)
  printf("*\t");
  printf("\n");
 }
 for(i=n;i>=1;i--)
 {
 for(j=i;j>=1;j--)
 printf("*\t");
 printf("\n");
 }
  break;
 }
 case 4:
 {

  for(i=n;i>=1;i--)
  {
 // printf("\n");
   for(j=n-i;j>0;j--)
    printf(" ");
    for(k=1;k<=i;k++)
    printf("*");
     printf("\n");
     }
  break;
 }
 case 5:
 {
   for(i=n;i>=1;i--)
   {
   printf("\n");
   for(j=1;j<=i-1;j++)
   printf(" ");
   for(k=n;k>=i;k--)
   printf("*");
   for(l=i+1;l<=n;l++)
   printf("*");
   }/*
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n-i;j++)
   printf(" ");
   for(k=n;k>=n-i;k--)
   printf(" *");
  printf("\n");
   }
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   printf(" ");
   for(k=1;k<=i;k++)
   printf(" *");
   printf("\n");
   }*/
   break;
 }
 case 6:
 {
 for(i=0;i<n;i++)
 {
 printf("\n");
 for(j=1;j<=i;j++)
 printf(" ");
 for(k=0;k<2*(n-i);k++)
 printf("*");
 for(l=1;l>i;l++)
 printf(" ");
 }
 break;
 }
 case 3:
 {
 for(i=1;i<=n;i++)
 {
 printf("\n");
 for(j=1;j<=n-i;j++)
 printf(" ");
 for(k=n;k>=n-i+1;k--)
 printf("*");
 l=n-i+2;
 //while(l<=n)
  //l=l+2;
   for(l=n-i+2;l<n;l++)
    printf(" ");
  }
  break;

 }
 case 10:
 {
 for(i=1;i<=n*2-1;i++)
 {
 if(i==n)
 {
 for(j=1;j<n*2-1;j++)
 printf("*");
 }
 else
 {
 for(j=1;j<=n-1;j++)
 printf(" ");
 }
 printf("*");
 printf("\n");
 }
 break;
 }
 case 8:
 {
 for(i=1;i<=n;i++)
 {
 printf("\n");
 for(j=1;j<n-i;j++)
 printf(" ");
 for(k=n;k>=n-i;k--)
 printf("*");
// printf("\n");
 }
 for(i=n;i>=1;i--)
 {
 for(j=n-i;j>0;j--)
 printf(" ");
 for(k=1;k<=i;k++)
 printf("*");
 printf("\n");
 }
 //printf("\n");
  break;
 }
 case 9:
 {
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n-i;j++)
     printf(" ");
     for(k=n;k>=n-i;k--)
     printf("*");
     printf("\n");
   }
   for(i=n;i>0;i--)
    {
       for(j=i;j>0;j--)
       printf("* ");
       printf("\n");
     }
  for(i=n;i>0;i--)
  {
  for(j=n-i;j>0;j--)
  printf(" ");
  for(k=1;k<=i;k++)
  printf("*");
  printf("\n");
  }
  for(i=0;i>n;i++)
  {
  for(j=i+1;j>n;j++)
  printf("*");
  printf("\n");
  }
/*  for(i=n;i>0;i--)
  {
  for(j=i;j>0;j--)
  printf("*");
  printf("\n");
  }*/
 break;
 }
}
  getch();

}


