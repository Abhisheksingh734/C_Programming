
//-->4/24/2023----------------------------------------------

//----------------------------STRING FUNCTIONS---------------------------------------------------
//strlen() ---> returns length of string with spaces
//strrev()---> convert string in reverse order
//strlwr() ---> convert string in lowercase
//strupr() ---> convert string in UPPERCASE
//strcpy(s1,s2)  ---> copies the entire second(s2) argument into first argument(s1)
//strncpy(s1,s2,n) ---> copies first 'n' charachters of second(s2) string into first(s1) argument
//strcat(s1,s2)  ---> to concatenate the strings =>appends s2 in s1
//strncat(s1,s2,n) ---> appends a specified number of character from s2 to s1 
//strcmp(const char *s1,const char *s2) ---> Compares string s1 to s2 ->returns (-ve if s1<s2)(Zero if s1==s2)(+ve if s1>s2)
//strncmp ---> Compares upto n characters of string s1 to string s2




#include<stdio.h>
#include<string.h>

//int main()
//{
//	char str[] ="This is string class 9";
////	printf("%d",strlen(str));      ----length of string   
////	printf("%s",strrev(str));      ----reverse string
////	printf("%s",strlwr(str));       ---lowercase 
////	printf("%s",strupr(str));       ---Uppercase 
//	return 0;
//}

//int main(){
//	char a[] ="CSE";
//	char b[10];
//	
//	strncpy(b,a,2);
//	printf("Original = %s\nDuplicate = %s", a,b,x);
//	return 0;
//}


//strcmp()
int main(){
	char s1[20]="hello";
	char s2[20]="heLLO";	
	printf("%d",strncmp(s1,s2,3));
	return 0;
}





