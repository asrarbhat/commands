function merge_sort(arr)
{
    if (arr.length==1 || arr.length==0)
    {
        return arr;
    }
    let half_length=parseInt(arr.length/2);
    let first_half=merge_sort(arr.slice(0,half_length));
    let second_half=merge_sort(arr.slice(half_length,arr.length+1));

    return merge(first_half,second_half);

}

function merge(arr1,arr2)
{
    let result=[]
    let i=0,j=0;
    while(i<arr1.length && j<arr2.length)
    {
        if (arr1[i]<arr2[j])
        {
            result.push(arr1[i]);
            i+=1;
        }
        else
        {
            result.push(arr2[j]);
            j+=1;
        }
    }
    return [...result,...arr1.slice(i,arr1.length+1),...arr2.slice(j,arr2.length)];
}

console.log(merge_sort([1,0]));