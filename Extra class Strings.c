
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
//stricmp ---> Compares the strings (ignore case)

//------------------STRING CONVERSION FUNCTIONS-----------------------------------------------
//atof(Char *nptr) - convert string to double
//atoi(Char *nptr) - convert string into integer
//atol(Char *nptr) - convert string to ling integer
//itoa(int n) - convert integer value to string


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
//int main(){
//	char s1[20],s2[20];
//	printf("Enter first string: ");
//	scanf("%s",s1);
//	printf("Enter Second string: ");
//	scanf("%s",s2);
//	printf("%d",stricmp(s1,s2));
//	return 0;
//}


//WAP to copy a string withou using strcpy()

//int main(){
//	char s1[20]="Hello again",s2[20];
//	
//	int i=0;
//	while(s1[i]!='\0'){
//		s2[i]=s1[i];
//		i++;
//	}
//	printf("Copied string:%s",s2);
//	return 0;
//}


//WAP to find out length of string 

//int main(){
//	char s1[20]="Hello again";
//	int i=0,count=0;
//	while(s1[i]!='\0'){
//		count++;
//		i++;
//	}
//	printf("Length of string is: %d",count);
//	return 0;
//}

//WAP to convert string in reverse order
#include<string.h>
//void reverse(char *str){
//	if(str==NULL || *str=='\0'){
//		printf("Invalid string");
//		return ;
//	}
//	int len = strlen(str);
//	char *i1 =str,*i2=str+len-1;
//	while(i1<i2){
//	
//	char temp = *i1;
//	*i1=*i2;
//	*i2=temp;
//	i1++;
//	i2--;	
//}
//}
//int main(){
//	char str[10]="Abhishek";
//	reverse(str);
//	printf("%s",str);
//}


//int main(){
//	char s1[]="Abhishek",s2[]="Abhishek";
//	int l1=strlen(s1);
//	int l2=strlen(s2);
//	if(l1>l2){
//		for(int i=0;i<l1;i++){
//			if(s1[i]!=s2[i]){
//				printf("Not equal");
//				return ;
//			}
//		}
//		printf("Equal");
//		return ;
//	}else if(l2>l1){
//		for(int i=0;i<l2;i++){
//			if(s1[i]!=s2[i]){
//				printf("Not equal");
//				return ;
//			}
//			printf("Equal");
//			return;
//		}
//	}else{
//		for(int i=0;i<l1;i++){
//			if(s1[i]!=s2[i]){
//				printf("Not equal");
//				return ;
//			}
//			printf("Equal");
//			return;
//		}
//	}
//	
//	
//}


int main(){
	
}

#include <stdio.h>
#include <string.h>



