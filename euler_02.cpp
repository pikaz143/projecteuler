#include<iostream>
using namespace std;

int main()
{
    long int a=1,b=2,c=0,s=0,n=4000000;
    c=a+b;
    while(c<=n)
    {
        if(c%2==0)
             s=s+c;
        a = b;
        b = c;
        c = a + b;
    }
    cout<<(s+2);
    return 0;
}
