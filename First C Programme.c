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


#include<stdio.h>
int main(){
	//----------------------static input------------------------------
//	char string[100]="Abhishek singh";
//	printf("%s",string);
	//------------------------dynamic input----------------------------
	char string[100];
	scanf("%[^\n]%*c",&string);
	printf("%s",string);	
	return 0;
}

