#include<stdio.h>

int main(){
	int n,m=-1;
	char word[n];
	printf("Enter the lenght of word: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		
		for(int i=0;i<n;i++){
			scanf(" %s",word[i]);
			if (word[i]=='W'||word[i]=='w'){
				m++;
			}
		}
	}
	
	if(m==-1){
		printf("-1 0");
	}else{
		for(int i=0;i<n;i++){
		if(word[i]=='w'||word[i]=='W'){
			printf("%d %d",word[i],m+1);
			break;
		}
	}
	
	}
	
	return 0;
}




