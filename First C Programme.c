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

void pattern2(int n){
	for(int row=0;row<2*n;row++){
		int c= row>n? 2*n-row : row ;
				
		for(int col=0;col<c;col++){
			printf("* ");
			
		}
		printf("\n");
		
	}
	
}

void main(){
	pattern2(5);
}
















