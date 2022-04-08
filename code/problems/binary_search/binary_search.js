let arr=[1,2,3,5,6,7,8,9,22]

function binarySearch(arr,key)
{
	let left=0;
	let right=arr.length-1;
	while(left<=right)
	{
		let mid=parseInt((left+right)/2);
		if (arr[mid]==key)
		{
			return mid;
		}
		if (arr[mid]>key)
		{
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	return -1;
}

for(let i=0;i<10;i++) console.log(binarySearch(arr,i));
