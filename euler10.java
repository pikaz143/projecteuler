
public class euler10 {

	public static void main(String[] args) {
	    int flag=0;
	    long s=0;
	     long l=2000000;
	    for(long i=3;i<l;i+=2)
	    {
	     flag=0;
	        for(long j=2;j<=i/2;j++)
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

	    System.out.println((s+2));

	}

}
