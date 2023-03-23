#include<stdio.h>
//int main(){
//	int a[5]={10,20,30,40,50};
//	printf("%d",a[3]);
//	return 0;
//}

//int main(){
//	int a[5];
//	for(int i=0;i<5;i++){
//		scanf("%d",&a[i]);
//	}
//	
//	printf("Traversing array: \n");
//	for(int i=0;i<5;i++){
//		printf("Index is %d and value is %d\n",i,a[i]);
//	}
//	return 0;
//}


//int main(){
//	int size,count=0;
//	printf("Enter size of array: ");
//	scanf("%d",&size);
//	
//	int a[size];
//	for(int i=0;i<size;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("List of even numbers = ");
//	for(int i=0;i<size;i++){
//		if(a[i]%2==0){
//			printf(" %d,",a[i]);
//			count++;
//		}
//	}
//	printf("%d",count);
//}




//int main(){
//	char balls[10];
//	int ind[10],w=0,w_ball;
//	printf("Enter balls: ");
//	//user enters charachter like --> BBBWBBBW
//	scanf("%s",balls);
//	for(int i=0;i<=10;i++){
//		if(balls[i]=='W' || balls[i]=='w'){
//			ind[w]=i;
//			w++;
//			w_ball=1;
//			
//		}
//	}
//	//gives output ----> index of W's 
//	if(w_ball==0){
//		printf("No white balls found ");
//	}else{
//		printf("Indexes of W balls are: \n");
//	for(int i=0;i<w;i++) {
//        printf("%d ",ind[i]);
//    }	
//	}
//	
//}



#include<stdio.h>
//int main(){
//	int a[3][3],b[3][3],i,j;
//	printf("Enter elements of matrix 1 (3X3): \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			scanf("%d",&a[i][j]);
//		}
//		
//	}
//	
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Enter elements of matrix 2 (3X3): \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			scanf("%d",&b[i][j]);
//		}
//		
//	}
	
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",b[i][j]);
//		}
//		printf("\n");
//	}
	
//	printf("Sum of Both matrix is: \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[i][j]+b[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Transpose of matrix 1: \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[j][i]);
//		}
//		printf("\n");
//	}
//	
//}



//int main(){
//	int a[10],sum=0;
//	printf("Enter 10 numbers: \n");
//	for(int i=0;i<10;i++){
//		scanf("%d",&a[i]);
//	}
//	
//	for(int i=0;i<10;i++){
//		sum+=a[i];
//	}
//	printf("Sum of 10 numbers : %d",sum);
//	return 0;
//}




int main(){
	int r1,c1,r2,c2;
	printf("Enter number of rows of Matrix 1: ");
	scanf("%d",&r1);
	printf("Enter number of columns of Matrix 1: ");
	scanf("%d",&c1);
	printf("Enter number of rows of Matrix 2: ");
	scanf("%d",&r2);
	printf("Enter number of columns of Matrix 2: ");
	scanf("%d",&c2);
	
	if(c1==r2){
		int a[r1][c1],b[r2][c2],ab[r1][c2],i,j;
		printf("Enter elements of matrix 1 (3X3): \n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
			}		
		}
	
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		
		printf("Enter elements of matrix 2 (3X3): \n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
			
		}
		
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
	
		printf("Multiplication of Both matrix is: \n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(int l=0;l<c1;l++){
					ab[i][j]+=a[i][l]*b[l][j];
				}
			}		
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d ",ab[i][j]);
			}
			printf("\n");
		}
	}else{
		printf("Matrix multiplication can't be done ");
	}
	
}
