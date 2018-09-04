#include<stdio.h>
#include<iostream>

using namespace std;

unsigned long int p=0;
void py(long int limit)
{
    long int a, b, c = 0;
    long int m = 2;
    while (c < limit)
        {
        for ( long int n = 1; n < m; ++n)
            {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (c > limit)
                break;
            if((a+b+c)==1000)
            p=a*b*c;
           }
        m++;
    }
}
int main()
{
     long int limit = 998;
    py(limit);
    printf("%lu",p);
    return 0;
}
