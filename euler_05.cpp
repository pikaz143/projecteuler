#include<iostream>
using namespace std;

int main()
{
    long int i,j;
for( i=2521;;i++)
{
    for( j=1;j<=20;j++)
    {
        if(i%j==0)
        continue;
    else
        break;
    }
    if(j==21)
        break;
}
cout<<i;
    return 0;
}
