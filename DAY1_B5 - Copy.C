void main()
/*{
char a='A',b='a',c='0',d='E',f='I',g='O',h='U';
clrscr();
printf("%d %d %d",a,b,c);
printf("\n %d,%d,%d,%d",d,f,g,h);
getch();
} */
{
char c;
clrscr();
printf("enter any char  \n");
scanf("%c",&c);
if(c>64&&c<123)
  {
   if(c==65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117)
     printf("given char is vowel\n");
   else
     printf("given char is consonent\n");
  }
 if(c>64&&c<91)
   printf("given char is upper case");
 else if(c>96&&c<123)
   printf("given char is lower case") ;
 else if(c>47&&c<58)
   printf("given char is A number");
 else
   printf("given char is special symbol");
getch();
}