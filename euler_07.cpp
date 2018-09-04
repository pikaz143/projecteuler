#include<iostream>
using namespace std;

int main()
{
   int check,n=0,c=0;

   cout<<"Enter Prime Number you want to Find: ";
   cin>>n;

  for(int i=2;i<=1000;i++)
  {
    check=0;

    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
          check=1;
           break;
        }
    }

  if(check==0)
    c++;

      if(c==n)
     {
      cout<<n  <<"th Prime Number is: " <<i;
      break;
     }
 }

return 0;

}


