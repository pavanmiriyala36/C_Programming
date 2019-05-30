      #include<stdio.h>
      #include<conio.h>

      void main()
      {
      int a;
      float b;
      char c;
      double d;
      long double e;
      signed int f;
      unsigned char g;
      short h;
      long int i;
      unsigned short j ;
      unsigned long int k;
      unsigned int l;
      clrscr();
      printf("enter the values for int,short,unsignedint and unsignedshort\n");
      scanf("%d %i %u %u",&a,&h,&l,&j);
	printf("int=%d,\n,short=%i,\n,unsignedint=%u,\n,unsignedshort=%u,\n",a,h,l,j);
       printf("enter the values oflong and unsigned long\n");
      scanf("%ld %lu",&i,&k);
       printf("long=%ld,unsignedlong=%lu",i,k);
      printf("enter the values for char and unsignedchar\n");
      scanf("%c %c",&c,&g);
     printf("\nunsignedchar=%c char=%c\n",g,c);
     fflush(stdin);
      printf("enter float and double values\n");
      scanf("%f %g",&b,&d);
       printf("float=%f\t double=%lf\n",b,d);
	getch();
      }
