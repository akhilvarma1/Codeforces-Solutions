import java.util.*;
//Akhil_Varma
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0)
		{
		    int n=sc.nextInt();
		    int h=sc.nextInt();
		    int m= 2*n;
		    int[] a =new int[m];
		   for(int i=0;i<m;i++)
		   {
		       a[i]=sc.nextInt();
		   }
		   Arrays.sort(a);
		   int res=1;
		   for(int i=0;i<n;i++)
		   {
		       if(a[i]+h>a[n+i])
		       {
		           res=0;
		           break;
		       }
		   }
		   if(res==1)
		   {
		       System.out.println("Yes");
		   }
		   else
		   {
		       System.out.println("No");
		   }
		    
		    t--;
		}
	}
}
