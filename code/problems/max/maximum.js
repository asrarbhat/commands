function maximum(first,second,third)
{
	if (first>=second && first>=third)
	{
		return first;
	}
	if (second>=first && second>=third)
	{
		return second;
	}
	return third;
}

console.log(maximum(1,2,3),maximum(4,3,2),maximum(2,4,3),maximum(2,2,1));

let arr=[1,2,3,4,5];
let maxOfArray=(arr)=>{
	let maximum=arr[0];
	for(let element of arr)
	{
		if (element>maximum)
		{
			maximum=element;
		}
	}
	return maximum;
}

console.log(maxOfArray(arr));
