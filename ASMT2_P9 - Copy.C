void main()
{
char a[30];
int i,c=1;
clrscr();
puts("enter the words to sentence\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
c++;
}
printf("total no of words is %d \n",c);
getch();
}
