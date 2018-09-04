/*#include <iostream>
using namespace std;
bool isPrime(int num);

int main()
{
   int c=0;
   bool flag;
   while(c<6)
   {
    int num=2;
   flag = isPrime(num);
   if (flag==true)
     {
    c++;
    cout<<num<<" ";
   // num=i;
     }
     num++;
     if(c=6)
     {
         cout<<num;
         break;
     }
   }


   return 0;
}
bool isPrime(int nu){
    bool flag=true;
    for(int i = 2; i <= nu / 2; i++) {
       if(nu % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}*/

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


