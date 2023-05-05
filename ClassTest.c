#include<stdio.h>
//This function finds the sum of the digits of given number[takes param n][returns sum]
int findSum(int n); //function prototype
int findSum(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n); //takes input from user 
	if(n>10000||n<0){  
		printf("Invalid input");
	}
	else{
		printf("%d",findSum(n));
	}
	return 0;
}
