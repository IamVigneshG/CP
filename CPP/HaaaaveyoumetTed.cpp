#include <stdio.h>

// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/haaaave-you-met-ted/description/
int main()
{
    int t,n,i,a,min,c;
    scanf("%d",&t);
    while(t--)
    {
          min=100;
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
              scanf("%d",&a);
              c=0;
              while(a)

              {
                     if(a&1)
                         c++;
                     a>>=1;
               }
               if(c<min)
                    min=c;
           }
          printf("%d\n",min);
      }
return 0;
}