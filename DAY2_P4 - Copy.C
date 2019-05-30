void main()
{
int l,n,t,r,s=0,s1=0,e,o,b,l1;
clrscr();
do
{
clrscr();
printf("enter a number to check\n");
scanf("%d",&n);
printf("enter a num b//w 2 -11\n");
scanf("%d",&l);
//printf("enter 1 t0 contenue and 0 to exit\n");
//scanf("%d",&b);
  switch(l)
   {
    case 2:
    {
      t=n%10;
      if(t%2==0)
       printf("given num is divecible by 2 \n");
      else
       printf("num is not divecible by 2 \n");
      break;
     }
    case 3:
    {
     t=n;
     while(t!=0)
      {
       r=t%10;
       s=s+r;
       t=t/10;
      }
     if(s%3==0)
      printf("given num is divecible by 3 \n");
     else
      printf("given num is not divecible by 3 \n");
     break;
     }
    case 4:
     {
      t=n%100;
      if(t%4==0)
       printf("given num is divecible by 4 \n");
      else
       printf("given num is not divecible by 4 \n");
      break;
      }
    case 5:
      {
       t=n%10;
       if(t==0||t==5)
	printf("given num is divecible by 5 \n");
       else
	printf("given num is not divecible by 5 \n");
       break;
      }
   case 6:
    {
     if(n%2==0&&n%3==0)
      printf("given num is divecible by 6 \n");
     else
      printf("given num is not divecible by 6 \n");
     break;
    }
   case 7:
    {
     if(n%7==0)
      printf("given num is divecible by 7 \n");
     else
      printf("given num is not devicble by 7 \n");
     break;
    }
   case 8:
     {
      t=n%1000;
      if(t%8==0)
       printf("given num is divecible by 8 \n");
      else
       printf("given num is not divecible by 8 \n ");
      break;
     }
   case 9:
    {
     t=n;
     while(t!=0)
    {
     r=t%10;
     s=s+r;
     t=t/10;
     }
     if(s%9==0)
      printf("given num is divecible by 9 \n");
     else
      printf("given num is not divecible by 9 \n");
     break;
     }
    case 10:
   {
      t=n%10;
      if(t==0)
       printf("given num is divecible by 10 \n");
      else
       printf("given num is not divecible by 10 \n");
      break;
   }
    case 11:
    {
     t=n;
     while(t!=0)
    {
     o=t%10;
     s=s+o;
     t=t/10;
     e=t%10;
     s1=s1+e;
     t=t/10;
     }
     r=s-s1;
     if(r%11==0)
      printf("given num is divecible by 11 \n");
     else
      printf("given num is not divecible by 11 \n");
   break;
  }

 default:
  printf("somthing went wrong\n");
}
printf("enter 0 for exit \n");
scanf("%d",&b);
}
while(b>=1);
getch();
}


