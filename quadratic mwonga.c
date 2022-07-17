/*
quadratic equation
created by mwonga
July 2022
MIT license
C99 compiler
*/

#include <stdio.h>


int main()
{
  float a,b,c,x1,x2,d;

    printf("Enter a,b and c:");
    scanf("%d,%d",&b,&c);
    d=(b*b)-(4*a*c);
    if(d=0)


{x1=-b/2*a;
 x2=x1;
 printf("root:%4 and %4",x1,x2);

}


 }

 elseif(d>0);
 {
    x1=((-1*b)+squareroot(d))/2*a);
    x2=((-1*b)-squareroot(d))/2*a);

    printf("root of equation are %4 and %4d",x1,x2);
    else
    {
        printf("equation as no root");
    }

 }
    return 0;
}
