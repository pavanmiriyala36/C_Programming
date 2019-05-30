void main()
{
char str1[24],str2[45];
int i,c=0,t=0,len=0;
clrscr();
puts("enter a string\n");
gets(str1);
//puts("enter another string\n");
//gets(str2);
//for(i=0;str1[i]!='\0';i++)
//{
//c++;
//}
//printf("size of array is %d",c);
//**********************************************************************

//if(str1[i]==str2[i])
//t=1;
//else
//t=0;
//}
//if(t=1)
//printf("given str is same\n");
//else
//printf("given str is not same\n");
//*******************************************************************************
//len=strlen(str2);
//for(i=0;str1[i]!='\0';i++)
//{
//str2[len]=str1[i];
//len++;
//}
//str2[len]='\0';
//printf("con str is\n");
//puts(str2);
//********************************************************************************
  for(i=0;str1[i]!='\0';i++)
  {
  str2[i]=str1[i];
  }
  str2[i]='\0';
  printf("str2 is\n");
  puts(str2);
  //****************************************************************************
getch();
}

