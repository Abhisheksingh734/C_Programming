#include<stdio.h>
#include <conio.h>


// // global declaration of function 
// // void display();

// // main function
// void main()
// {
//     int a = 10;
//     a=50;
//     printf("%d",a);
//     printf("Hii guys");
//     // calling of function
//     // display();

//     //to hold the output
//     // getch();
// }


// void display()
// {
//     printf("Abhishek here");
//     printf("%c",65);
// }

// void main(){
//     char int_type =98;
//     printf("%c",int_type);
// }

// void main(){
//     int a=100;
//     float b=5.5;
//     printf("a+b=%d",a+b);
//     printf("a-b=%d",a-b);
//     printf("a/b=%d",a/b);
// }




//
//void main(){
//	char a = 'a';
//	char b = 'b';
//	char c= 'c';
//	char d = 130;
//
//	
//	printf("%c\n",d);
//	printf("%d\n",d);
//	
//}

//---------------------------------------ternery operator---------
//void main()
//{
//	int a=19,b=23;
//	int x = a>b?a:b;
//	printf("%d",x);
//}



//------------------TRUE = 1----------False =0-------------------------------- 
//void main()
//{
//	printf("%d",3>5);
//}

#include<stdio.h>
#include<conio.h>
//void main(){
//	int a=18, b=9, c,d,e =10;
//	c= b++;
//	d=b;
//	printf("%d",a<b<c>d);	
//	printf("%d",b==e);
//	printf("%d",c+1>e);
//	printf("%d",a+c==b>e<c+d);
//	printf("%d",a+c==b>=e<c+d!=1);	
//	printf("\n%d",'<'<'>');
//	
//}


//-------------------------logical operator--------------
//void main(){
//	printf("%d",!0);
//	printf("%d",0&&1);
//	printf("%d",0||1);
//}


//-------------------------	example---------------------------------------------------

//void main(){
//	int a=4,b=6,result;
//	result = a>b && printf("abhishek") || printf("lectures") && printf("asr");
//	printf("%d",result);
//}
//-------OUTPUT--> lecturesasr1

//-------------------------example 2----------------------------------------------------------------

//void main(){
//	int a = 4, b= 6, result;
//	printf("%d",4 &&!0);
//	printf("\n%d",4 && 0);
//}

//---OUTPUT--> 1
//-----------> 0

//-------------------------example 3----------------------------------------------------------------

//void main(){
//	int a = 10, b=10, result;
//	result =  a++ || (a>b) ;
//	printf("%d",result);
//	printf("%d",a);
//}

//---OUTPUT--> 1
//----------> 11


//--------------------------------example 4-------------------------------------------------------------------

//void main(){
//	int a=1,b=5,result,result1;
//	result = a-- && ++b;
//	printf("%d\n%d",result);
//}

//---OUTPUT--> 1

//-------------------------------BITWISE OPERATOR--------------------------------------------------------------


void sayHi(char name[],int age);


int main(){
	
	sayHi("Abhishek",40);
	sayHi("Abhishek2",34);
	sayHi("Abhishek3",54);
	
	return 0;
}
void sayHi(char name[],int age){
	printf("Hello %s\n you are %d\n",name,age);
}







