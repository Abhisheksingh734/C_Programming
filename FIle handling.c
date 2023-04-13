
//--> 12 april

#include<stdio.h>
//
//
//int main(){
//	
//	FILE *fptr;
//	
//	fptr=fopen("a.txt","w");
//	if(fptr==NULL){
//		printf("\nFile can't be open");
//	}else{
//		printf("\nFIle created successfully");
//	}
//	fclose(fptr);
//	return 0;
//	
//}



//--> 13 april


#include<stdio.h>

//int main(){
//	FILE *fptr;
//	char c;
//	fptr = fopen("a.txt","w");
//	printf("Enter the line of text , press Ctrl+z to STOP");
//	while((c=getchar())!=EOF){
//		putc(c,fptr);
//	}	
//	fclose(fptr);
//	
//	return 0;
//}


//--------------------------------------reading a file
//int main(){
//	FILE *fptr;
//	char ch;
//	fptr = fopen("a.txt","r");
//	
//	while((ch=fgetc(fptr))!=EOF){
//		printf("%c",ch);
//	}
//	
//	fclose(fptr);
//	return 0;
//}

//---------------------------------------appending a file

//int main(){
//	FILE *fptr;
//	char c;
//	fptr = fopen("a.txt","a");
//	while((c=getchar())!=EOF){
//		putc(c,fptr);
//	}
//	close(fptr);
//	return 0;
//}




//-------------------------------------------------appending to existing file 

//int main(){
//	FILE *fptr;
//	char c;
//	fptr = fopen("a.txt","a");
//	while((c=getchar())!=EOF){
//		putc(c,fptr);
//	}
//	fclose(fptr);
//	return 0;
//}




//---------------------------------------------reading single character
//int main(){
//	FILE *fptr;
//	char c;
//	fptr = fopen("a.txt","r");
//	printf("The line of text is: ");
//	c=getc(fptr);
//	printf("%c",c);
//	
//	fclose(fptr);
//	return 0;
//}


//int main(){
//	FILE *fptr;
//	char name[20],arr[50],ch;
//	printf("Enter the file name");
//	scanf("%s",name);
//	fptr = fopen(name,"w");
//	if(fptr==NULL){
//		printf("File doesnt exist");
//	}else{
//		printf("THe string is: ");
//		getchar();
//		gets(arr);
////		scanf(" %[^\n]%*c", arr);
//		fputs(arr,fptr);
//	}
//	
//	fclose(fptr);
//	fptr =fopen(name,"r");
////		while((ch=fgetc(fptr))!=EOF){
////		printf("%c",ch);
////	}
//	fgets(arr,50,fptr);
//	puts(arr);
//	
//	return 0;
//}



//-------------------WAP 
#include<stdio.h>
int main(){
	FILE *fp;
	char name[10];
	int sal;
	fp=fopen("abc.txt","r");
	fscanf(fp,"%s %d ",&name,&sal);
	while(!feof(fp)){
		printf("%s %d",name,sal);
		fscanf(fp,"%s %d",&name,&sal);
	}
	fclose(fp);
	return 0;
	
	
}


