public class BinarySearch{
	public static void main(String[] args){
		int[] arr={1,2,4,5,6,7,8};
		for(int i=0;i<10;i++)System.out.println(binarySearch(arr,i,-1,-1));
	}
	public static int binarySearch(int[] arr,int key,int left,int right){
		if (left>right) return -1;
		if (left==-1 && right==-1){
			left=0;
			right=arr.length-1;
		}
		int mid=(left+right)/2;
		if (arr[mid]==key) return mid;
		if (arr[mid]>key) return binarySearch(arr,key,left,mid-1);
		return binarySearch(arr,key,mid+1,right);
	}
}
