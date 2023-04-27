#include<stdio.h>
int findSum(int n);
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
	scanf("%d",&n);
	if(n>10000||n<0){
		printf("Invalid input");
	}
	else{
		printf("%d",findSum(n));
	}
	return 0;
}
