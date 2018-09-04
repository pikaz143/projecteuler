#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long sqr=0,sumsqr=0,sqrsum=0,sum=0,dif=0;
	for(int i=1;i<=100;i++)
	{
	 sqr=i*i;
	 sumsqr=sumsqr+sqr;
	 sum=sum + i;

	}
	sqrsum=sum*sum;
	dif=sqrsum-sumsqr;
	cout<<"difference="<<dif;

	return 0;
}
