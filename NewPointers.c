#include<stdio.h>

//int main(){
//	int *i;
//	double *p;
//	float *f;
//	printf("%d\n",sizeof(*i));
//	printf("%d\n",sizeof(*p));
//	printf("%d\n",sizeof(*f));
//	
//	return 0;
//}

//WAP finding area of circle by using pointers 
#define PI 3.14
//int main(){
//	double radius,area;
//	double *pradius,*parea;
//	pradius=&radius;
//	parea=&area;
//	printf("Enter radius of circle: ");
//	scanf("%lf",pradius);
//	*parea = PI*(*pradius)*(*pradius);
//	printf("Area of circle is: %lf",*parea);
//	return 0;
//	
//}



//int main(){
//	int a=5;
//	int *p =NULL;
//	printf("%u\n",p);
////	printf("%d\n",*p);
//	p=&a;
//	printf("%u\n",p);
//	printf("%u\n",*p);
//	return 0;
//}


//int main(){
//	int a=7;
//	char y='A';
//	void *p;
//	p=&a;
//	printf("value of x is %d\n",*(int *)p);
//	p=&y;
//	printf("value of y is %c",*(char *)p);
//	
//}


//int main(){
//	int a=5,b=7;
//	int *const ptr =&a;
//	printf("%d\n",ptr); //address
//	printf("%d\n",*ptr);   // value
//	ptr=&b;
//	printf("%d\n",*ptr);
//	return 0;
//}


#include<stdio.h>
//int main()
//{
//    int *ptr;
//    {
//        int val=23;
//        ptr=&val;
//        printf("\n%d",*ptr);// 23 is printed
//        printf("\n%u",ptr);// Address of val is printed
//    }
//    printf("\n%u",ptr);// Same address is printed, even val is destroyed, hence ptr is dangling pointer
//    ptr=NULL;//Solution
//    printf("\n%u",ptr);// Now ptr is not a dangling pointer[0 address value is printed]
//    return 0;
//}





//Dangling pointer-Example 2[Runtime/or Dynamic memory allocation  case]When free() function is called


// Deallocating a memory pointed by ptr causes
// dangling pointer
#include <stdlib.h>
#include <stdio.h>
//int main()
//{
//    
//	int n=1;
//	int *ptr = (int *)malloc(n*sizeof(int));
//	*ptr=6;    
//    printf("%d",*ptr);//6 is printed
//    printf("\n%d",ptr);//Printing address hold by pointer before deallocation
//    free(ptr); 
//    printf("\n%d",ptr);//Same address will be printed(Dangling pointer)
//   //SOLUTION
//   ptr = NULL;//Pointer is now changed to NULL pointer
//   printf("\n%d",ptr);//0 will be printed
//   return 0;
//}


//int main()
//    {
//        int *ptr, a = 10;
//        ptr = &a;
//        *ptr += 1;
//        printf("%d,%d", *ptr, a);
//    }
//OUTPUT--> 11,11

//int main(){
//	int a[]={10,20,30,40,50};
//	int *p=a;
//	for(int i=0;i<5;i++)
//{
//printf("%d\n",(p+i));
//}
//
//}


#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int *p1,*p2;
//	p1=arr;
//	p1++;// p1 will point towards next memory location
//	printf("\n%d",*p1);//2 will be displayed
//	p1--;//p1 will point towards previous memory location
//	printf("\n%d",*p1);// 1 will be displayed
//	p1=p1+2;// Adding a constant to pointer(p1 will point towards 3rd element)
//	printf("\n%d",*p1);// 3 will be displayed
//	p1=p1-2;//Subtracting a constant from a pointer(P1 will point towards first element)
//	printf("\n%d",*p1);// 1 will be displayed
//	p2=&arr[4];
//	printf("\n%d",p2-p1);//Subtracting two pointers(Returns 4(no. of elements b/w+1)(Pointers pointing to the same array)
//	
//	
//	//Comparing two pointers
//	while(p1<=p2)
//	{
//		printf("\n%d",*p1);//Comparison of two pointers (Pointers pointing to the same array)
//		p1++;
//	}
//	//Following are the invalid arithmetic operations(Not allowed on pointers)
//	//printf("\n%d",p1+p2);//Invalid arithmetic
//    //printf("\n%d",p1/p2);//Invalid arithmetic
//    //printf("\n%d",p1*p2);//Invalid arithmetic
//	//printf("\n%d",p1%p2);//Invalid arithmetic
//    //printf("\n%d",p1*2);//Invalid arithmetic
//    //printf("\n%d",p1/2);//Invalid arithmetic
//    //printf("\n%d",p1%2);//Invalid arithmetic
//	return 0;
//}


//Example-Different notations with pointer to an array

#include<stdio.h>
//int main()
//{
//	int a[]={1,2,3,4,5};
//	int *p=a;
//	// Different notations with pointer to an array for displaying second element
//    // Same terminology can be used to display any element
//    // All will display 2 on screen
//	printf("\n%d",*(p+1));
//	printf("\n%d",*(a+1));
//	printf("\n%d",p[1]);
//	printf("\n%d",1[p]);
//	printf("\n%d",1[a]);
//	return 0;
//}


int main(){
	int arr[]={10,20,30,40,50};
	int i;
	int *p;
	p=arr;
	printf("First value is %d\n",*p);
	p=p+1;
	printf("Second value is %d\n",*p);
	*p=45;
	p=p+2;
	*p=-2;
	printf("New array is :");
	for(int i=0;i<5;i++){
		printf("%d, ",arr[i]);
	}	
	p=arr;
	*(p+1)=0;
	*(p-1)=1;
	printf("\nModified array is :");
	for(int i=0;i<5;i++){
		printf("%d, ",arr[i]);
	}
}


