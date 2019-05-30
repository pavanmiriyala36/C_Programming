//sorting
void main()
{
int a[10],i,p,t,n,j;
clrscr();
puts("insert the 10 numbers \n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("given array is\n");
for(i=0;i<10;i++)
 printf("%d\t",a[i]);
 printf("value to be inserted \n");
 scanf("%d",&n);
 printf("position to be inserted\n");
 scanf("%d",&p);
 for(i=0;i<p;i++)
 a[i-1]=a[i];
  a[p-1]=n;
 // for(i=0;i<10;i++)
  //{
  //for(j=1;j<10;j++ )
  //{
  for(i=0;i<10;i++)
  {
  if(a[i]>a[j])
  {
  t=a[i];
  a[i]=a[j];
  a[j]=t ;
   }
   }
 printf("sorted array is \n");
 for(i=0;i<10;i++)
 printf("%d",a[i]);
 getch();
 }