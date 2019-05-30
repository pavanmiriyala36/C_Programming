void main()
{
long id,t=0,m;
int d,h,a,i;
clrscr();
//printf("enter 1 to insert data & 2 for view data");
//scanf("%d",&a);
//switch(a)
//case(1):
// {
  printf("enter enter employee id \n");
  scanf("%lu",&id);
  printf("enter no of working days in a month \n");
  scanf("%d",&d);
/* for(i=1;i<=d;i++)
     {
    printf("no of working hrs in day %d is \n",i);
    scanf("%d",&h);
    t=t+h;
   }
 // }
// case(2):
 //{*/
 printf("enter no of working hr in a month \n");
 scanf("%d",&a);
 printf("employee id is %lu \n",id);
// printf("total working hrs=%lu \n",t);
 printf("amount per hr is RS24 \n");
 printf("total amount employee recieved is %lu \n",24*a);
 getch();
 }

