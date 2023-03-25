// #include<stdio.h>
//
//int main()
//{
//	printf("First class of C language");
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int age=24;
//	printf("Your age is %d",age);
//	return 0;
//}





#include <stdio.h>

//int main()
//{
//    int rollno=63;
//    int redgNo=12219857;
//    int cNumber=3456789;
//    printf("\t**** \nRoll no: %d\nReg.no :%d\nContact Number: %d",rollno,redgNo,cNumber);
//    return 0;
//
//}



//------------LECTURE 1---------------------LECTURE 1-----------------------LECTURE 1------------------------LECTURE 1--------------------LECTURE 1-------


//int main(){
//	int a = 20;
//	float pi=3;
//	char c='a';
//	double d=3.84456;
//	
//	
//	
//	printf("%i\n",a);
////	printf("%d",pi); //-----------------------------gives garbage value
//	printf("%f\n",pi);
//	printf("%c\n",c);
//	printf("%lf",d);
//	return 0;
//}

//int main()
//{
//	unsigned char chr;
//	chr = 128;
//	printf("%d\n",chr);
//	
//	return 0;
//}

//-------------------dynamic inpit-----------------------------------------------

//int main(){
//	int a;
//	float pi;
//	double d;
//	char c;
//	char s[25];
//	
//	
//	printf("Enter value of s: ");
//	scanf("%s",&s);	
//	printf("Value of a is :%s",s);
//	
//	return 0;
//}




//-----4/2/2023----------LECTURE- 2-----------LECTURE- 2-----------LECTURE- 2-----------LECTURE- 2-----------LECTURE- 2----------LECTURE- 2----------


// ----------------Conflicting ERROR--------------------------------------------
//int main(){
//	int x=10;
//	float x=10;     ----> reasignment of same variable
//	printf("%d",x);
//	return 0;
//}


//------------------------- Arimetic Operator---------------------------------
//int main(){
//	int a=2;
//	int b=10;
//	
//	printf("%d +%d = %d \n",a,b,(a+b));
//	printf("%d - %d = %d \n",a,b,(a-b));
//	printf("%d / %d = %d \n",a,b,(a/b));
//	printf("%d * %d = %d \n",a,b,(a*b));
//	printf("%d %% %d = %d \n",a,b,(a%b)); 
//	scanf("%d",&a);
//	
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int p;
//	int  r;
//	int t;
//	printf("principle: ");
//	scanf(" %d",&p);
//	printf("rate: ");
//	scanf("%d",&r);
//	printf("time: ");
//	scanf("%d",&t);
//	
//	float SI= (p*r*t)/100;
//	
//	printf("SimpleIntrest = %f whose principle \nvalue is %d and rate is %d\n and Time is %d",SI,p,r,t);
//	
//}



//----8/2/2023--------LECTURE 3---------LECTURE 3------LECTURE 3------LECTURE 3------LECTURE 3------LECTURE 3----


//-----------------------------------DISTANCE TRAVELLED----------------------------------------------
//#include<stdio.h>
//int main()
//{
//	int r,d;
//	float PI=3.14,dis_travel;
//	
//	printf("Enter the radius: ");
//	scanf("%d",&r);
//	
//	d=r*2;
//	dis_travel=PI*d;
//	
//	printf("distancle travelled is %f having radius %d with diameter %d",dis_travel,r,d);
//	return 0;
//}





#include<stdio.h>
//int main()
//{
//	int NC,NS,Choc_Left,Choc_get;
//	
//	printf("Number of chocolates: ");
//	scanf("%d",&NC);
//	printf("Number of students: ");
//	scanf("%d",&NS);
//	
//	Choc_Left= NC%NS;
//	Choc_get = NC/NS;
//	printf("So %d chocolates will be left and %d students will get %d chocolates each ",Choc_Left,NS,Choc_get);
//	
//	return 0;
//}

//int main()
//{
//	int i =3;
//	int k =i%-2;
//	printf("%d\n",k);
//	return 0;
//}
//--------------OUTPUT ---> 1

//int main()
//{
//	int a = 10;
//	double b =5.6;
//	int c;
//	c=a+b;
//	printf("%d",c);
//	return 0;
//}

//OUTPUT ----> 15


#include<stdio.h>
//int main(){
//	int a=10,b=0,c=2,d;
//	d=a&&b||c-2;
//	printf("%d",d);
//	return 0;
//}
//---OUTPUT--> 0

//int main(){
//	int x =1,y=0,z=5;
//	int a =x && y&& z++;
//	printf("%d",z);
//	return 0;
//}
//---OUTPUT--> 0


//----QUESTION---------------CHECK IF PERSON IS ELIGIBLE TO VOTE OR NOT---------------------------------------------------

//int main()
//{
//	int age;
//	printf("enter age: ");
//	scanf("%d",&age);

//------------------------------If-ELSE--------------------------------------
//	if (age>=18){
//		printf("He is eligible ");
//	}else{
//		printf("He is not eligible");
//	}

//----------------ternery operator--------------------------------------------
//	age>=18?printf("He is eligible"):printf("He is not eligible");
//	
//	
//	return 0;
//}



//----QUESTION-2 ------CHECK IF THE NUMBER IS DIVISIBLE BY 5 OR NOT-----------------------------------------------------

//int main(){
//	
//	int num;
//	printf("Enter the number:");
//	scanf("%d",&num);
//	
//	num%5==0?printf("%d is divisible by 5",num):printf("%d is NOT divisible by 5",num);
//	
//	return 0;
//}





//-----9/2/2023--------LECTURE 4---------LECTURE 4------LECTURE 4------LECTURE 4------LECTURE 4------LECTURE 4----

#include<stdio.h>

//-------------------------------Bitwise Ones compliment-------------------------------------
//int main(){
//	int a =2 ,b=8;
//	printf("%d\n",~a);
//	printf("%d\n",~b);
//	return 0;
//}


//---------------------------------------Bitwise left shift operator---------------------------
//int main(){
//	int a = 5;
//	printf("%d",a<<1);
//	return 0;
//}

//OUTPUT---> 10

//---------------------------------------Bitwise right shift operator---------------------------
//
//int main(){
//	int a = 5;
//	printf("%d",a>>1);
//	return 0;
//}

//OUTPUT---> 2

//-----------------------------------------sizeof() operator-------------------------------------

//int main(){
//	char a;
//	float f;
//	int i;
//	char s[100];
//	
//	printf("%d %d %d",sizeof(a),sizeof(f),sizeof(s));
//	return 0;
//}

//------------------------type operator----------------------------------------------------------

//-----EXPLICIT CONVERSION------------------------->
#include<stdio.h>
//int main(){
//	float x = 12.5;
//	int a;
//	a=(int)x;
//	printf("%d",a);
//	return 0;
//}


//#include<stdio.h>u5
//int main(){
//	//----------------------static input------------------------------
////	char string[100]="Abhishek singh";
////	printf("%s",string);
//
//	//------------------------dynamic input----------------------------
//	char string[100];
//	scanf("%[^\n]%*c",&string);
//	printf("%s",string);	
//	return 0;
//}






//----------------------------------UNIT -2 --------------------------------------------------------------

//-----15/2/2023--------LECTURE Day5---------Day 5------LECTURE Day 5---------LECTURE Day 5------LECTURE Day 5------LECTURE Day 5----


//#include <stdio.h>
//int main(){
//	printf("Value of a is ="%d,a);
//	int a=5;
//	return 0;
//}
//---> OUTPUT ERROR (programs are executed sequentially by default)


#include<stdio.h>
//int main(){
//	int a;
//	printf("Enter the number: ");
//	scanf("%d",&a);
//	if (a%5==0){
//		printf("%d divisible by 5",a);
//	}else{
//		printf("%d not divisible by 5",a);
//	}
//}
//
////	switch (6-a){
////		case 0:
////			printf("Zero");
////			break;
////		case 0:
////			printf("Zero");
////			break;
////		case 0:
////			printf("Zero");
////			break;
////	}	
//	return 0;
//}


//int main() {
//    int a, b, c;
//    printf("Enter three numbers: ");
//    scanf("%d", &a);
//    scanf("%d", &b);
//    scanf("%d", &c);
//
//    if (a > b && a > c) {
//        printf("%d is the greater than %d and %d.", a, b, c);
//    } else if (b > c && b > a) {
//        printf("%d is the greater than %d and %d.", b,a, c);
//    } else if (c > a && c > b) {
//        printf("%d is the greater than %d and %d.", c, a, b);
//    } else {
//        printf("All three numbers are equal.");
//    }
//    return 0;
//}


//int main(){
//	int mks,p,m,c;
//	printf("Enter Python marks:");
//	scanf("%d",&p);
//	printf("Enter Maths marks: ");
//	scanf("%d",&m);
//	printf("Enter Chem marks: ");
//	scanf("%d",&c);
//	mks = (p+m+c)/3;
//	printf("Average is %d ",mks);
//	
//	if (mks>90){
//		printf("Grade O");
//	}else if(mks>80&&mks<=90){
//		printf("Grade A");
//	}else if(mks>70&&mks<=80){
//		printf("Grade B");
//	}else if(mks>60&&mks<=70){
//		printf("Grade c");
//	}else if(mks>50&&mks<=60){
//		printf("Grade D");
//	}else{
//		printf("Reappear");
//	}
//}

//
//int main(){
//	
//	int day;
//	printf("Enter a number of day between 0-6: ");
//	scanf("%d",&day);
//	switch (day){
//		case 0:
//			printf("Sunday");
//			break;
//		case 1:
//			
//			printf("Monday");
//			break;
//		case 2:
//			printf("Tuesday");
//			break;
//		case 3:
//			printf("Wednesday");
//			break; 
//		case 4:
//			printf("Thursday");
//			break;
//		case 5:
//			printf("Friday");
//			break;
//		case 6:
//			printf("Saturday");
//			break;
//		default:
//			printf("Invalid");	
//	}	
//	return 0;
//}





//int main(){
//	int x=5;
//	if(x<1){
//		printf("hello");
//	}
//	if(x==5){
//		printf("hi");
//	}else{
//		printf("no");
//	}
//	return 0;
//}

//int main(){
//	int x=0;
//	if(x==1)
//		if(x>=0)
//			printf("true\n");
//		else
//			printf("false\n");
//	
//	return 0;
//}

//int main(){
//	int ch=97;
//	switch (ch){
//		case 'a':
//			printf("asdf");
//			printf("1");
//		case 97:
//			printf("asdfsdf");
//	}
//	return 0;
//}


//int main()
//{
//	int a,b;
//    float c,d;
//    
//    scanf("%d%d",&a,&b);
//    printf("%d %d",(a+b),(a-b));
//    scanf("%f %f",&c,&d);
//    printf("%.1f %.1f",(c+d),(c-d));
//    
//    return 0;
//}


//int main(){
//	
//	int num;
//	printf("Enter a number of month: ");
//	scanf("%d",&num);
//	switch (num){
//		case 1:
//			printf("Janunary");
//			break;
//		case 2:
//			printf("February");
//			break;
//		case 3:
//			printf("March");
//			break;
//		case 4:
//			printf("April");
//			break; 
//		case 5:
//			printf("May");
//			break;
//		case 6:
//			printf("June");
//			break;
//		case 7:
//			printf("July");
//			break;
//		case 8:
//			printf("August");
//			break;
//		case 9:
//			printf("September");
//			break;
//		case 10:
//			printf("October");
//			break;
//		case 11:
//			printf("November");
//			break;
//		case 12:
//			printf("December");
//			break;
//		default:
//			printf("Invalid Input");
//	return 0;	
//	}
//}




//---------------------------------------------------CALCULATOR-------------------------------------------------------------------------------
#include<stdio.h>
//int main(){
//	int a,b;
//	char choice;
//	float result;
//	
//	printf("Press '+' for Addition\nPress '-' for Subtraction\nPress '/' for Division\nPress '*' for Multiplication\n");
//	printf("Enter your choice: ");
//	scanf("%c",&choice);
//	printf("Enter a: ");
//	scanf("%d",&a);
//	printf("Enter b: ");
//	scanf("%d",&b);
//	
//	switch (choice){
//		case '+':
//			result = a+b;
//			printf("Addition of %d and %d is: %.1f",a,b,result);
//			break;
//		case '-':
//			result= a-b;
//			printf("Subtraction of %d and %d is: %.1f",a,b,result);
//			break;
//		case '/':
//			if(b==0){
//				printf("B must be a non Zero");
//				break;
//			}else{
//				result = a/b;
//				printf("Division of %d and %d is: %.1f",a,b,result);
//				break;
//			}		
//		case '*':
//			result = a*b;
//			printf("Multiplication of %d and %d is: %.1f",a,b,result);
//			break;
//		default:
//			printf("Invalid input");
//	}
//}


//
//int main(){
//	char c;
//	printf("Enter alphabet: ");
//	scanf("%c",&c);
//	
//	switch(c){
//		case 'a':
//			printf("%c is vowel",c);
//			break;
//		case 'e':
//			printf("%c is vowel",c);
//			break;
//		case 'i':
//			printf("%c is vowel",c);
//			break;
//		case 'o':
//			printf("%c is vowel",c);
//			break;
//		case 'u':
//			printf("%c is vowel",c);
//			break;
//		default:
//			printf("%c is consonant",c);
//	}
//	return 0;
//}



//int main()
//{
//	int a,b;
//    float c,d;
//    
//    if(scanf("%d%d",&a,&b)!=2){
//    	printf("Invalid input");
//	}
//    else if(scanf("%f %f",&c,&d)!=2){
//    	printf("Invalid input");
//	}else{
//		printf("%d %d\n",(a+b),(a*b));
//    	printf("%.1f %.1f",(c+d),(c*d));
//	}
//    
//    return 0;
//    
//}

#include <stdio.h>
#include <conio.h>
//
//int main() {
//    int length, width;
//    float price, tax_rate;
//    
//    // read in inputs
//    printf("Enter length and width of rectangle: ");
//    if (scanf("%d%d", &length, &width) != 2) {
//        printf("Error: invalid input\n");
//        return 1;
//    }
//    printf("Enter price and tax rate: ");
//    if (scanf("%f%f", &price, &tax_rate) != 2) {
//        printf("Error: invalid input\n");
//        return 1;
//    }
//    
//    // compute and print results
//    printf("Area: %d square units\nPerimeter: %d units\n", (length * width), (2 * (length + width)));
//    printf("Total price: $%.2f\nTotal tax: $%.2f\n", (price * (1 + tax_rate)), (price * tax_rate));
//    
//    return 0;
//}



//--------------------------GREATEST NUMBER --------------------------------------------------------------------------
//int main(){
//	int a,b,c,max;
//	printf("Enter three numbers seperated with space: ");
//	scanf("%d%d%d",&a,&b,&c);
//	
//	max = a;
//	if(b>max){
//		max=b;
//	}
//	if(c>max){
//		max=c;
//	}
//	printf("%d is greatest among them",max);
//	
//	
//}

//-------------------------------print this pattern
//*
//* *
//* * *
//* * * * 
//* * * * *

//----------------------------------------Code ------
//void pattern1(int n){
//	for(int row=1;row<=n;row++)
//	{
//		for(int col=1; col<=row;col++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//}
//void main(){
//	pattern1(5);
//}



//-------------------------------------print this pattern--------------------
//*
//* *
//* * *
//* * * * 
//* * * * *
//* * * * 
//* * * 
//* *
//* 

//---------------------------------------code----------------------------------

//void pattern2(int n){
//	for(int row=0;row<2*n;row++){
//		int c= row>n? 2*n-row : row ;
//				
//		for(int col=0;col<c;col++){
//			printf("* ");
//			
//		}
//		printf("\n");
//		
//	}
//	
//}
//
//void main(){
//	pattern2(5);
//}





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//int main() {
//
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//    int n,x;
//    scanf("%d",&n);
//    printf("%d",fact(n));
//    return 0;
//}
//
//int fact(x){
//    if(x==1){
//        return 1;
//    }else{
//        return x*fact(x-1);
//    }
//}











//int main(){
//	int a,y;
//	scanf("%d",&a);
//	y=scanf("%d",&y);
//	switch(a){
//		case 1:
//		 printf("Thiss is one");
//		 break;
//		case 2:
//		 printf("THis is two");
//		 break;
//		case 3:
//			switch(y){
//				case 3:
//					printf("Hurraeye");
//					break;
//			}
//		break;
//		 printf("THis is something else");
//	}
//	return 0;
//}



//-----22/2/2023--------LECTURE Day8--------LECTURE Day8--------LECTURE Day8--------LECTURE Day8--------LECTURE Day8--------LECTURE Day8--

//int main(){
//	int a;
//	printf("Enter number: ");
//	scanf("%d",&a);
//	for(int i=1;i<=10;i++){
//		printf("%d x %d = %d\n",a,i,(a*i));
//	}
//	return 0;
//}


//---------------------factorial of num using loop-----------------------------------------------------------------------------------
//int main(){
//	int n,i,fact=1;
//	printf("Enter number: ");
//	scanf("%d",&n); 
//	for(i=n;i>1;i--){
//		fact=fact*i;
////		printf("factorial of %d is %d\n",n,fact);
//	}
//	printf("factorial of %d is %d\n",n,fact);
//	return 0;
//}


//------------------------factorial with recursion-----------------------------------------------------------------
//
//int fact(int n){
//	if(n==1 || n==0){
//		return 1;
//	}
//	else{
//		return n*fact(n-1);
//	}
//	return n;
//}
//
//int main(){
//	int n;
//	printf("enter number: ");
//	scanf("%d",&n);
//	printf("factorial is : %d",fact(n));
//	return 0;	
//}



//---------------------------Semicolon before body of for-------------------------------------------------
//int main(){
//	int i;
//	for(i=1;i<=10;i++);
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}
//OUTPUT --> 11



//int main(){
//	int i,n,sum=0;
//	printf("Enter number: ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		sum+=i;
//	}
//	printf("Sum of %d numbers: %d",n,sum);
//	return 0;
//}

//--------------------------------------------While loop---------------------------------------------

//int main(){
//	int i=0;
//	while(i<5){
//		printf("LPU\n");
//		i++;
//	}
//	return 0;
//}


//int main(){
//	int number,n,sum=0;
//	printf("Enter number: ");
//	scanf("%d",&number);
//	while(number>0){
//		n=number%10;
//		sum+=n;
//		number =number/10;
//	}
//	printf("Sum of digits: %d",sum);
//	return 0;
//}


//int main(){
//	int i;
//	for(i=1;i<10;i+=2);
//	printf("Hello %d",i);
//	return 0;
//}

//-------------------------------------NESTED LOOP--------------------------------------------------------


///////////////////////////////print patter/////////////////////////////////////////////////////////////////

//* * * * *
//* * * * 
//* * *
//* *
//* 

//int main(){
//	int n=5,row,col;
//	for(row=0;row<n;row++){
//		for(col=n-row;col>0;col--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;	
//}
//----------------------------------------------------------------------------------------------------------------------

//* 
//* *
//* * * 
//* * * * 
//* * * * *
 
//int main(){
//	int row,col,n=5;
//	for(row=0;row<n;row++){
//		for(col=row;col>=0;col--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------------------


//1 2 3 4 5
//1 2 3 4 
//1 2 3 
//1 2 
//1 
//
//int main(){
//	int row,col,n=5;
//	for(row=0;row<=n;row++){
//		for(col=1;col<=n-row;col++){
//			printf("%d",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------------------------------------

//5 4 3 2 1
//5 4 3 2 
//5 4 3 
//5 4 
//5 
//
//int main(){
//	int row,col,n=5;
//	for(row=0;row<n;row++){
//		for(col=5;col>row;col--){
//			printf("%d",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//--------------------------------------------------------------------------------------------------------------------------


//5 5 5 5 5 
//4 4 4 4 
//3 3 3 
//2 2 
//1 
//
//int main(){
//	int row,col,n;
//	n=5;
//	for(row=n;row>=1;row--){
//		for(col=row;col>=1;col--){
//			printf("%d ",row);
//		}
//		printf("\n");
//	}
//}

//------------------------------------------------------------------------------------------------------------------------

//5 4 3 2 1
//4 3 2 1
//3 2 1
//2 1 
//1

//int main(){
//	int row,col,n=5;
//	for(row=0;row<n;row++){
//		for(col=n-row;col>0;col--){
//			printf("%d",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//------------------------------------------------------------------------------------------------------------------------

//* 
//* * 
//* * * 
//* * * * 
//* * * * * 
//* * * * 
//* * * 
//* * 
//* 

//int main(){
//	int row,col,n=5,c;
//	for(row=0;row<2*n;row++){
//		if(row>n){
//			c=2*n-row;
//		}else{
//			c=row;
//		}
//		
//		for(col=0;col<c;col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//----------------------------------------------------------------------------------------------------------------------------

//    *
//   * * 
//  * * *
// * * * * 
//* * * * * 
// * * * * 
//  * * * 
//   * * 
//    *  

//int main(){
//	int TotalCols,spaces,n=5;
//	for(int row=0;row<2*n;row++){
//		
//		TotalCols=row>n? 2*n-row:row;
//		
//		spaces=n-TotalCols;
//		  
//		for(int s=0;s<spaces;s++){
//			printf(" ");
//		}
//		
//		for(int col=0;col<TotalCols;col++){
//			printf("* ");
//		}
//		
//		printf("\n");
//		}
//		
//		return 0;
//	}

//------------------------------------------------------------------------------------------------------------------------------
 		   
//    1    
//   212   
//  32123  
// 4321234 
//543212345
 		   
//int main(){
//	int spaces,
//}





//-----23/2/2023--------LECTURE --------LECTURE --------LECTURE --------LECTURE --------LECTURE --------LECTURE --

#include<stdio.h>

//int main(){
//	int i=1;
//	do{
//		printf("Hello %d\n",i);
//		i++;
//	}
//	while(i>5);
//}




//
//int main(){
//	int i;
//	for(i=1;i<=10;i++){
//		if(i==5){
//			break;		
//		}
//		
//		i==5? break : printf("%d\n",i);
//	}
//	return 0;
//}

//int main(){
//    int i;
//    for(i=1;i<=10;i++){
//        i == 5 ? break : printf("%d\n",i);
//    }
//    return 0;
//}

//int main(){
//	int i;
//	for(i=1;i<=10;i++){
//		if(i==5){
//			continue;
//		}
//		printf("%d\n",i);
//	}
//	return 0;
//}

//write a program to print list of even numbers from n numbers

//int main(){
//	int n,i,count=0;
//	printf("Enter n: ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		if(i%2!=0){	
//			continue;
//		}
//		printf("%d ",i);
//		count++;
//	}
//	printf("\ntotal even numbers : %d",count);
//	return 0;
//}

//------------------------------------------------goto statement----------------------------------------------------------
#include<stdio.h>

//int main(){
//	int n=10;
//	Aman:
//		printf("%d ",n);
//	 	n=n-1;
//	if (n>0) goto Aman;
//	
//	return 0;
//}




//---------------------------------------------return---------------------------------------------------------------------
//int main(){
//	printf("%d",sizeof(void));
//	return 0;
//}
//int add(int a, int b){
//	return a+b;
//}
//
//int main(){
//	int a=5, b=4;
//	printf("%d",add(a,b));
//}



//int main(){
//	
//
//	int x= 10;
//	char y ='a';
//	x=x+y;
////	printf("%d",x);
//	float z=x+1.0;
//	printf("%.2f",z);
//	return 0;
//}

#include <stdio.h>

//int main(){
//    int x=10;
//    char sum =x+1;
//    printf("%d",sum);
//    return 0;
//}


//-----4/3/2023--------LECTURE --------LECTURE --------LECTURE --------LECTURE --------LECTURE --------LECTURE --------LECTURE --------LECTURE --------LECTURE --

#include <stdio.h>
//int main(){
//	int a=5643;
//	printf("%d \n",a);
//	printf("#%d\n",a);
//	printf("#%d#\n",a);
//	printf("*%-6d*\n",a);
//	printf("*%06d*\n",a);
//	return 0;
//}


//--------------------------------------getchar()-->takes 1 character---------------------------------------------------
//int main(){
//	char c;
//	c = getchar();
//	printf("You entered %c",c);
//	return 0;
//}

//--------------------------------------putchar()-->prints 1 character---------------------------------------------------

//int main(){
//	char c;
//	c= getchar();
//	putchar(c);
//	return 0;
//}

//int main(){
//	char ch ='A';
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}

//--------------------------------------getche()-->accepts and display character---------------------------------------------------

#include<stdio.h>
#include<conio.h>
//int main(){
//	printf("Enter any charachter: ");
//	getche();
//	return 0;
//}

//--------------------------------------getch()-->accepts but does not display character---------------------------------------------------

int main(){
	char c;
	printf("Press any key to continue\n");
	getch();
//	printf("You Pressed\n");
//	putch(c);
	return 0;
}


//---03/09/2023----LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE------




//int main(){
//	char name[30];
//	scanf("%s",&name);
//	printf("name is= %s",name);
//	return 0;
//}
//---> INPUT abhishek singh
//--->OUTPUT abhishek 


//---------------------------------------- USE gets to print whole string----------------------------------------------------------
//int main(){
//	char name[30];
//	gets(name);
//	printf("name is= %s",name);
//	return 0;
//}

//INPUT --->abhishek singh
//OUTPUT--->abhishek singh


//---------------------------------------------------------FUNCTIONS------------------------------------------------------------------------


//----function prototype---------------------------------

//int add(int a, int b);

//----function definition--------------------------------

//int main(){
//	printf("%d",add(3,4));
//	return 0;
//}
//
//int add(int a ,int b){
//	return a+b;
//}



//-------------------------MUltiplication of two numbers using function( 1 with RT and with parameters)
#include<stdio.h>
//int multiply(int a ,int b);
//int main(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf(" multiplication is %d",multiply(a,b));
//	return 0;
//}
//
//int multiply(int a ,int b){
//	return (a*b);
//}



//int main(){
//	int a=3;
//	for(;a>0;){
//		printf("%d",a);
//	}
//	a++;
//}


//--------------------------MUltiplication of two numbers using function( 2 with RT and without parameters)

//-------function prototype below
//int multiply();
//
////-------function description
//int main(){ 
//	printf("%d",multiply());
//	return 0;
//}
//
//int multiply(){
//	int a=30,b=40;
//	return a*b;
//}



//
//int square();
//
//int main(){
//	printf("%d",square());
//	return 0;
//}
//int square(){
//	int a=5;
//	return (a*a);
//}

//--------------------------MUltiplication of two numbers using function( 3 without RT and without parameters)

//void multiply();
//
//int main(){
//	multiply();
//	return 0;
//}
//void multiply(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("multplication is : %d ",(a*b));
//}

//--------------------------MUltiplication of two numbers using function( 3 without RT and with parameters)

////------function prototype
//void multiply(int a,int b);
//
//
//int main(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	multiply(a,b);
//	return 0;
//}
////------fucntion definition
//void multiply(int a,int b){
//	printf("multiplication is : %d",(a*b));
//	
//}



//exg--->

//void add(int a, int b);
//int main(){
//	add(5,7);
//	return 0;
//}
//void add(int a, int b){
//	printf("Addition : %d",(a+b));
//	
//}

//int main(){
//	int i=10;
//	printf("Value of i= %d\n",i);
//	printf("address of i= %d\n",&i);
//	return 0;
//}




//---03/10/2023----LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE------

//---------------------Recursion Finctions----------------------------------------------------------------


//int fact(int a);// function prototype
//
//int main(){
//	int n,result;
//	printf("Enter number: ");
//	scanf("%d",&n);
//	result = fact(n);
//	printf("Factorial of %d is: %d",n,result);
//	return 0;
//	
//}
//
//int fact(int n) // function definition
//{
//	if (n==1){
//		return 1;
//	}
//	else{
//		return n*fact(n-1);
//	}
//}




//----------------------------------swapping number--------------------------------------------

#include <stdio.h>
//int a=10;
//void display();
//int main()
//{
//	int b = 20;
//	printf("a = %d ",a);
//	printf("b = %d ",b);
//	display();
//}
//
//void display()
//{
//	int a=5;
//	printf("a = %d",a);
//}

#include<stdio.h>

//void swap(int a, int b);
//
//int main()
//{
//    int x, y;
//    
//    printf("Enter the value of x and y: ");
//    scanf("%d %d", &x, &y);
//    
//    printf("Before swapping: x = %d, y = %d\n", x, y);
//    
//    swap(x, y);
//    
//    printf("After swapping: x = %d, y = %d\n", x, y);
//    
//    return 0;
//}
//
//void swap(int a, int b)
//{
//    int temp;
//    
//    temp = a;
//    a = b;
//    b = temp;
//    
//    printf("Inside the function: a = %d, b = %d\n", a, b);
//}


//
//#include<stdio.h>
//
//void swap(int *a, int *b);
//
//int main()
//{
//    int x, y;
//    
//    printf("Enter the value of x and y: ");
//    scanf("%d %d", &x, &y);
//    
//    printf("Before swapping: x = %d, y = %d\n", x, y);
//    
//    swap(&x, &y);
//    
//    printf("After swapping: x = %d, y = %d\n", x, y);
//    
//    return 0;
//}
//
//void swap(int *a, int *b)
//{
//    int temp;
//    
//    temp = *a;
//    *a = *b;
//    *b = temp;
//    
//    printf("Inside the function: a = %d, b = %d\n", *a, *b);
//}



//---03/13/2023----LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE---------LECTURE------

//void display();
//int a=20;
//int main(){
//	printf("a = %d\n",a);
//	
//	display();
//	return 0;
//}
//
//void display(){
//	int a=60;
//	printf("a =%d\n",a);
//}

//#include<stdio.h>
//
//void first();
//int main(){
//	extern int x; // declaration in main()
//	printf("\nx=%d",x); // x os used before its defenition[Possible because of extern]
//	first();
//	printf("\nx=%d",x); //Changes done by first are visiblee here 
//	return 0;
//}
//void first()
//{
//	extern int x;
//	printf("\nx=%d",x); // x is used again before its definition [ossible because of extern ]
//	x =x+10;
//}
//int x =10; // definition of external variable, here x is gloabla variable
























//#include<stdio.h>
//
//int main()
//{
////	float a=5;
////	printf("Thi is an integer: %f",a);
////	return 0;
//
////	char s[10]="Abhishek singh";
////	printf("thi si %s",s);
////	return 0;
//	int result, a =5,b;
////	result = a%-b;
////	printf("Result is : %d",result);
////	return 0;
////	b=++a;
////	printf("%d %d",b,a);
//	printf("size %d",sizeof(a));
//}




















