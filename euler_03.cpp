#include <stdio.h>
#include <math.h>

#define NUMBER 600851475143

int isPrime(int test)
{
    int k=0;
    int s=( (int) sqrt(test) );

    for(k = 3; k <= s; k+=2)
    {
        if(test % k == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int j=0;
    int k=0;


    while(1)
    {
        for(k=3; ; k+=2)
        {
            if(isPrime(k))
            {
                if(NUMBER%k==0)
                    j=k;
                if(k>=(sqrt(NUMBER)))
                    goto END;
            }
        }
    }

    END:
    printf("%d", j);
    return 0;
}
