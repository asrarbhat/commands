public class Functions{
	public static void main(String[] args){
		for(int i=0;i<10;i++)
		{
			System.out.println(factorial(i));
		}
	}
	public static long factorial(int n){
		long result=1;
		for(int i=n;i>1;i--){
			result*=i;
		}
		return result;
	}
}
