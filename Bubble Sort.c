
int binarySearch(int arr[],int target,int start,int end);
int bubbleSort(int arr[],int size);

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
	
 	bubbleSort(arr,size);
 	printf("\nEnter value to be searched: ");
 	scanf("%d",&target);
 	
 	
 	int result = binarySearch(arr,target,0,size-1);
 	printf("Index of %d in array is :%d ",target,result);


}

int bubbleSort(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=1;j<=size-i-1;j++)
		{ 
			if(arr[j]<arr[j-1]){
				int temp = arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
	printf("Sorterd array is : ");
	for(int i=0;i<size;i++)
	{                       
		printf("%d ",arr[i]);
	}                          
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
	if(target<arr[mid])
	{
		return binarySearch(arr,target,start,mid-1);
	}
}
