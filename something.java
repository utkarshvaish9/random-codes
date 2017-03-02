import java.util.*;
import java.math.*;

class abcd
{
	public static void main(String args[])
	{
	Scanner s  = new Scanner(System.in);
	int a = s.nextInt();
	int b = s.nextInt();
	int c = s.nextInt();
	BigInteger[] arr  = new BigInteger[23];
	arr[0]=a;
	arr[1] = b;
	for(int i=2;i<=c;i++)
	
		arr[i]= arr[i-2].add(arr[i-2].multiply(arr[i-2]));
	
	System.out.println(arr[c]);
}
}