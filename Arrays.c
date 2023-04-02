//--23/03-----------------------Arrays----------------------------------------------------------------

#include<stdio.h>
//int main(){
//	int a[5]={10,20,30,40,50};
//	printf("%d",a[3]);
//	return 0;
//}

//int main(){
//	int a[5];
//	for(int i=0;i<5;i++){
//		scanf("%d",&a[i]);
//	}
//	
//	printf("Traversing array: \n");
//	for(int i=0;i<5;i++){
//		printf("Index is %d and value is %d\n",i,a[i]);
//	}
//	return 0;
//}


//int main(){
//	int size,count=0;
//	printf("Enter size of array: ");
//	scanf("%d",&size);
//	
//	int a[size];
//	for(int i=0;i<size;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("List of even numbers = ");
//	for(int i=0;i<size;i++){
//		if(a[i]%2==0){
//			printf(" %d,",a[i]);
//			count++;
//		}
//	}
//	printf("%d",count);
//}




//int main(){
//	char balls[10];
//	int ind[10],w=0,w_ball;
//	printf("Enter balls: ");
//	//user enters charachter like --> BBBWBBBW
//	scanf("%s",balls);
//	for(int i=0;i<=10;i++){
//		if(balls[i]=='W' || balls[i]=='w'){
//			ind[w]=i;
//			w++;
//			w_ball=1;
//			
//		}
//	}
//	//gives output ----> index of W's 
//	if(w_ball==0){
//		printf("No white balls found ");
//	}else{
//		printf("Indexes of W balls are: \n");
//	for(int i=0;i<w;i++) {
//        printf("%d ",ind[i]);
//    }	
//	}
//	
//}



#include<stdio.h>
//int main(){
//	int a[3][3],b[3][3],i,j;
//	printf("Enter elements of matrix 1 (3X3): \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			scanf("%d",&a[i][j]);
//		}
//		
//	}
//	
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Enter elements of matrix 2 (3X3): \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			scanf("%d",&b[i][j]);
//		}
//		
//	}
	
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",b[i][j]);
//		}
//		printf("\n");
//	}
	
//	printf("Sum of Both matrix is: \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[i][j]+b[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Transpose of matrix 1: \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[j][i]);
//		}
//		printf("\n");
//	}
//	
//}



//int main(){
//	int a[10],sum=0;
//	printf("Enter 10 numbers: \n");
//	for(int i=0;i<10;i++){
//		scanf("%d",&a[i]);
//	}
//	
//	for(int i=0;i<10;i++){
//		sum+=a[i];
//	}
//	printf("Sum of 10 numbers : %d",sum);
//	return 0;
//}




//-------------------------------Matrix Multipplication---------------------------------------------------------
//int main(){
//	int r1,c1,r2,c2;
//	printf("Enter number of rows of Matrix 1: ");
//	scanf("%d",&r1);
//	printf("Enter number of columns of Matrix 1: ");
//	scanf("%d",&c1);
//	printf("Enter number of rows of Matrix 2: ");
//	scanf("%d",&r2);
//	printf("Enter number of columns of Matrix 2: ");
//	scanf("%d",&c2);
//	
//	if(c1==r2){
//		int a[r1][c1],b[r2][c2],ab[r1][c2],i,j;
//		printf("Enter elements of matrix 1 (3X3): \n");
//		for(i=0;i<r1;i++){
//			for(j=0;j<c1;j++){
//				scanf("%d",&a[i][j]);
//			}		
//		}
//	
//		for(i=0;i<r1;i++){
//			for(j=0;j<c1;j++){
//				printf("%d ",a[i][j]);
//			}
//			printf("\n");
//		}
//		
//		printf("Enter elements of matrix 2 (3X3): \n");
//		for(i=0;i<r2;i++){
//			for(j=0;j<c2;j++){
//				scanf("%d",&b[i][j]);
//			}
//			
//		}
//		
//		for(i=0;i<r2;i++){
//			for(j=0;j<c2;j++){
//				printf("%d ",b[i][j]);
//			}
//			printf("\n");
//		}
//	
//		printf("Multiplication of Both matrix is: \n");
//		for(i=0;i<r1;i++){
//			for(j=0;j<c2;j++){
//				for(int l=0;l<c1;l++){
//					ab[i][j]+=a[i][l]*b[l][j];
//				}
//			}		
//		}
//		for(i=0;i<r1;i++){
//			for(j=0;j<c2;j++){
//				printf("%d ",ab[i][j]);
//			}
//			printf("\n");
//		}
//	}else{
//		printf("Matrix multiplication can't be done ");
//	}
//	
//}


//--29/03-----------------------Passing Arrays-------------Passing Arrays-----------------Passing Arrays------------------------


//-------------------------Passing entire array --------------------------------------------------------
//#include<stdio.h>
//void refrence(int x[],int size);
//int main(){
//	int arr[100],i,n;
//	printf("Enter n ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("Element by refrence");
//	refrence(arr,n);
//	return 0;
//}
//
//void refrence(int x[], int size){
//	int i,sum=0;
//	for(i=0;i<size;i++){
//		printf("%d ",x[i]);
//		sum +=  x[i];
//	}
//	printf("sum = %d",sum);
//}

//---i/p-->5
//1
//2
//3
//4
//5

// o/p---> 1 2 3 4 5 sum = 15


//---------------------------------------Passing array element by element---------------------------------------------

//void value(int);
//int main()
//{
//	int arr[100],n,i;
//	printf("Enter n ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("Element by element by value");
//	for(i=0; i<n;i++)
//	{
//		value(arr[i]);
//	}
//	return 0;
//}
//void value(int e)
//{
//	printf("%d ",e);
//}



//int main()
//{
//	int array[100],position,c,n,value;
//	printf("Enter number of elements in array: ");
//	scanf("%d",&n);
//	for(c=0;c<n;c++){
//		scanf("%d",&array[c]);
//	}
//	
//	printf("Enter the location where you wish to insert element: ");
//	scanf("%d",&position);
//	printf("Enter the value to insert: ");
//	scanf("%d",&value);
//	
//	for(c=n-1;c>=position-1;c--)
//	{
//		array[c+1]=array[c];
//	}
//	
//	array[position-1]=value;
//	printf("Resultant array is : ");
//	for(c=0;c<=n;c++)
//	{
//		printf("%d \n",array[c]);
//	}
//	return 0;
//}


//WAP to delete a element from an array

//int main()
//{
//	int arr[100],size,position;
//	printf("Enter size of array: ");
//	scanf("%d",&size);
//	printf("Enter elements: \n");
//	for(int i=0;i<size;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	
//	printf("Enter the location where you waish to delete from the array: ");
//	scanf("%d",&position);
//	
//	for(int i=position-1;i<size-1;i++)
//	{
//		arr[i]=arr[i+1];
//	}
//	printf("new array is : ");
//	for(int i=0;i<size-1;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}



//int LinearSearch(int arr[], int n, int value){
//	for(int i=0;i<n;i++)
//	{
//		if(arr[i]==value)
//		return i+1;
//		
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[100],size,item;
//	printf("Enter size of array: ");
//	scanf("%d",&size);
//	
//	printf("Enter elements: \n");
//	for(int i=0;i<size;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	
//	
//	printf("Enter element to search: ");
//	scanf("%d",&item);
//	
//	printf("position is : %d",LinearSearch(arr,size,item));
//}




//--------------------------Binary Search--------------------------------------------------------------------------------------------

//int main()
//{
//	int arr[100],i,size,start,end,mid,target,loc =-1;
//	printf("Enter array size");
//	scanf("%d",&size);
//	printf("Enter element of array\n");
//	for(i=0;i<size;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	
//	start =0;
//	end= size-1;
//	
//	printf("enter element to search: ");
//	scanf("%d",&target);
//	
//	while (start<=end)
//	{
//		mid = (start +end)/2;
//		if(arr[mid]==target)
//		{
//			loc = mid;
//			break;
//		}
//		else if(target>arr[mid])
//		{
//			end =mid-1;
//		}
//		else if(target<arr[mid])
//		{
//			start = mid;
//		}
//	}
//	if(loc!=-1)
//	{
//		printf("element found at %d", loc);
//	}else{
//		printf("Element not found");
//	}
//}



//-->30/3-------------------Binary Search with recursion-----------------------

//int binarySearch(arr[],target,start,end);
int binarySearch(int arr[],int target,int start,int end)
{
	if(start>end){
		return -1;
	}
	int mid = start + (end-start)/2;
	
	if(target==arr[mid]){
		return mid;
	}
	
	if(target>arr[mid]){
		binarySearch(arr,target,mid+1,end);
	}
	if(target<arr[mid])
	{
		binarySearch(arr,target,start,mid-1);
	}
}


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
	
	printf("Index of %d is : %d ",target,binarySearch(arr,target,0,size-1));
}










