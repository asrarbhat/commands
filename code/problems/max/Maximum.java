import java.util.Collections;
import java.util.Arrays;
public class Maximum{
	public static void main(String[] args){
		System.out.println(maximum(1,2,3)+" "+maximum(3,2,1)+" "+maximum(1,3,2)+" "+maximum(2,1,2));
		Integer[] arr={1,5,4,3,2};
		//System.out.println(maxOfArray(arr));
		System.out.println(Math.max(1,2));//it takes only two arguments
		System.out.println(Collections.max(Arrays.asList(arr)));
	}
	public static int maximum(int first,int second,int third){
		if (first>=second && first>=third){
			return first;
		}
		if (second>=first && second>=third){
			return second;
		}
		return third;
	}
	public static int maxOfArray(int[] arr){
		int maximum=arr[0];
		for (int element:arr){
			if (element>maximum){
				maximum=element;
			}
		}
		return maximum;
	}
}
