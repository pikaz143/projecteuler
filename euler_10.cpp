#include<iostream>
using namespace std;

int main()
{
    int flag=0;
    unsigned long long int s=0;
    unsigned long long int l=2000000;
    for(unsigned long long int i=3;i<l;i+=2)
    {
     flag=0;
        for(unsigned long long int j=2;j<=i/2;j++)
       {
        if(i%j==0)
        {
          flag=1;
           break;
        }
       }
    if(flag==0)
    s=s+i;
    }

    cout<<s;
    return 0;
}
