void main()
{
int n,i,t,s=0,a;
clrscr();
printf("enter no of subjects\n");
scanf("%d",&n);
printf("mAx marks: %d\n",n*100);
for(i=1;i<=n;i++)
 {
 printf("enter subject %d marks\n",i);
 scanf("%d",&a);
 s=s+a;
 }
printf("total marks is %d \n avg of sudent is %d \n",s,s/n);
    if(s>((n-1)*100))
    printf("student got O grade");
    else if(s>((n-2)*100))
    printf("student got E grade");
    else if (s>((n-3)*100))
    printf("student got A grade");
    else
    printf("student failed");
    getch();
    }