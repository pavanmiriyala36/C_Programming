      #include<stdio.h>
      #include<conio.h>

     /* void main()
      {
      int a=5,b=10,c;
      c=a;
      a=b;
      b=c;
      printf("a=%d\n b=%d\n",a,b);

      getch();


      }*/
      /*************************************************************/

      void main()
      {
      int a,b,c;
      clrscr();
      printf("enter the values of A and B \n ");
      scanf("%d %d",&a,&b);
      a=a+b;
      b=a-b;
      a=a-b;
      printf("a=%d \n b=%d \n",a,b);
      getch();
      }
      /*************************************************************/
    /*  c=a^b;
      printf("c=%d \n",c);
      a=a^b;
       printf("a=%d \n",a);
      b=a^b;
       printf("b=%d \n",b);
      a=b^a;
       printf("a=%d \n",a);
      printf("a=%d \t b=%d \n",a,b);
      getch();
      }*/