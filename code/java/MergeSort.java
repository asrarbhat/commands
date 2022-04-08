import java.util.List;
import java.util.ArrayList;
public class MergeSort{
    public static void main(String[] args)
    {
        List<Integer> list=new ArrayList<>();
        list.add(3);
        list.add(1);
        list.add(4);
        list.add(2);
        list.add(7);

        System.out.println(mergeSort(list));
    }
    public static List<Integer> mergeSort(List<Integer> arr){
        int length=arr.size();
        int half_length=length/2;
        if (length<2)
        {
            return arr;
        }
        var arr1=mergeSort(arr.subList(0,half_length));
        var arr2=mergeSort(arr.subList(half_length,length));
        return merge(arr1,arr2);

    }
    public static List<Integer> merge(List<Integer> arr1,List<Integer> arr2){
        int i=0,j=0;
        List<Integer> result=new ArrayList<>();
        while(i<arr1.size() && j<arr2.size()){
            if (arr1.get(i)<arr2.get(j)){
                result.add(arr1.get(i));
                i++;
            }
            else{
                result.add(arr2.get(j));
                j++;
            }
            }
        result.addAll(arr1.subList(i,arr1.size()));
        result.addAll(arr2.subList(j,arr2.size()));

        return result;
        }
}