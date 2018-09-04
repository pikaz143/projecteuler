#include<iostream>
using namespace std;

int main()
{
   const unsigned long long int num=600851475;
    unsigned long long int mx=0;
    for(unsigned long long int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            bool flag=true;
            for(unsigned long long int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                mx=i;
        }

    }
    cout<<"largest prime factor= "<<mx;

    return 0;
}
