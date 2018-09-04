#include<iostream>
using namespace std;

int main()
{
   int flag,n=10001,c=0;

  for(long int i=2;i<=10000000;i++)
  {
    flag=0;

    for(long int j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
          flag=1;
           break;
        }
    }

  if(flag==0)
    c++;

      if(c==n)
     {
      cout<<"10001st Prime Number is: " <<i;
      break;
     }
 }

return 0;

}



