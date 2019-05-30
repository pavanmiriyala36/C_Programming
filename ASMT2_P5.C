void main()
{
int a[10],i,j,c=0;
clrscr();
puts("enter the values to array\n ");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
puts("given array is\n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++);
{
if(a[i]==a[j])
c++;
}}
printf("total no of duplicates are %d",c);
getch();
}