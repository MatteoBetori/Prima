#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
 int a=0,b=0,c=0;
do {
  printf("Dammi il valore del lato A\n" );
    scanf("%d", &a );

  printf("Dammi il valore del lato B\n" );
    scanf("%d", &b );

  printf("Dammi il valore del lato C\n" );
    scanf("%d", &c );

   if (a<0 || b<0 || c<0)
   {
     printf("Uno dei lati e' minore di 0\n");}
   }

   while(a>b+c || a<abs(b-c)); {
     printf("Ridammi il valore di a\n");
     scanf("%d", &a );
   }

   while(b>a+c || b<abs(a-c)); {
     printf("Ridammi il valore di b\n" );
     scanf("%d", &b);
   }

   while (c>b+a || c<abs(b-a)); {
     printf("Ridammi il valore di c\n");
     scanf("%d", &c );
   }
   if (a==b && b==c) {
     printf("Il triangolo e' equilatero\n");
   } else if (a==b || b==c || a==c) {
     printf("Il triangolo e' isoscele\n");
   } else  {
     printf("Il triangolo e' scaleno\n");
   }


  return 0;
   }
