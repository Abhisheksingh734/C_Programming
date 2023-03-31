//-->30/3-------------------Binary Search with recursion-----------------------


int binarySearch(int arr[],int target,int start,int end);

int main()
{
	int arr[100],target,size;
	printf("Enter size of an array: ");
	scanf("%d",&size);
	printf("Enter elements: \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter value to be searched: ");
	scanf("%d",&target);
	
	printf("Index of %d in array is : %d ",target,binarySearch(arr,target,0,size-1));
}


int binarySearch(int arr[],int target,int start,int end)
{
	if(start>end){
		return -1;
	}
	int mid = (start + end)/2;
	
	if(target==arr[mid]){
		return mid;
	}
	
	if(target>arr[mid]){
		return binarySearch(arr,target,mid+1,end);
	}
	else if(target<arr[mid])
	{
		return binarySearch(arr,target,start,mid-1);
	}
}
