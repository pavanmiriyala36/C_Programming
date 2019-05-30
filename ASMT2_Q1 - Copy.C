void main()
{
char a[30000];
int i,c=1,d=0,e=1;
clrscr();
puts("enter the words to sentence\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
c++;
if(a[i]=='\t')
d++;
if(a[i]=='\n')
e++;
}
printf("total no of words is %d \n",c);
printf("total no of w-spaces are %d \n",d);
printf("total no of lines is %d \n",e);
getch();
}
