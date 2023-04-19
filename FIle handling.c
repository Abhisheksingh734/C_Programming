
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
//int main(){
//	FILE *fp;
//	char name[10];
//	int sal;
//	fp=fopen("abc.txt","r");
//	fscanf(fp,"%s %d ",&name,&sal);
//	while(!feof(fp)){
//		printf("%s %d",name,sal);
//		fscanf(fp,"%s %d",&name,&sal);
//	}
//	fclose(fp);
//	return 0;
//	
//}








// to read from a file ---------------------------------------------------------------------------------

//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	FILE *fp;
//	char name[80];
//	int roll_no;
//	int x;
//	
//	
//	fp=fopen("pqr.txt","r");
//	if(fp==NULL){
//		printf("\n File couldnot be opened");
//		exit(1);
//	}
//	x=fscanf(fp,"%s%d",name,&roll_no);
//	printf("\n NAME:%s\t ROLL NUMBER=%d",name,roll_no);
//	fclose(fp);
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	FILE *fp;
//	int i;
//	char name[20];
//	float salary;
//	fp=fopen("Details.txt","a");
//	if(fp==NULL)
//	{
//		printf("\n The file could not be opened");
//		exit(1);
//	}
//	for(i=0;i<3;i++)
//	{
//		puts("\n Enter your name:");
//		gets(name);
//		fflush(stdin);
//		puts("\n Enter your salary:");
//		scanf("%f",&salary);
//		fprintf(fp,"%s \t %.2f\n",name,salary);
//		fflush(stdin);
//	}
//	fclose(fp);                                                
//}




//#include<stdio.h>
//struct student{
//	int roll_no;
//	char name[20];
//};
//
//int main(){
//	struct student st;
//	file *fptr;
//	printf("Enter roll number");
//	scanf("%d",&st.roll_no);
//	printf("enter name");
//	gets(st.name);
//	fwrite(&st,sizeof(st),1,fptr);
//	printf("")
//}




#include<stdio.h>
#include<conio.h>

//int main()
//{
//struct employee
//{
//int emp_code;
//char name[20];
//int hra;
//int da;
//int ta;
//};
//FILE *fp;
//struct employee e[5];
//int i,x;
//fp=fopen("Employee.txt","wb");
//if(fp==NULL)
//{
//printf("\n Error Opening file");
//exit(1);
//}
//printf("\n Enter the details:");
//for(i=0;i<2;i++)
//{
//	printf("\n\n Enter the employee code:");
//	scanf("%d",&e[i].emp_code);
//	fflush(stdin);
//	printf("\n\n Enter the name of the employee:");
//	gets(e[i].name);
//	fflush(stdin);
//	printf("\n\n Enter the HRA,DA and TA:");
//	scanf("%d%d%d",&e[i].hra,&e[i].da,&e[i].ta);
//	fflush(stdin);
//	x=fwrite(&e[i],sizeof(e[i]),1,fp);
//	printf("\n%d",x);
//	
//}
//fclose(fp);
//return 0;
//}



#include<stdio.h>
#include<conio.h>
//int main()
//{
//struct employee
//{
//int emp_code;
//char name[20];
//int hra;
//int da;
//int ta;
//};
//FILE *fp;
//struct employee e;
//int i,x;
//fp=fopen("Employee.txt","rb");
//if(fp==NULL)
//{
//printf("\n Error Opening file");
//exit(1);
//}
//printf("\n THE DETAILS OF THE EMPLOYEE ARE:");
//while(1)
//{
//fread(&e,sizeof(e),1,fp);
//if(feof(fp))
//break;
//printf("\n\n Employee Code:%d",e.emp_code);
//printf("\n\n Name:%s",e.name);
//printf("\n\n HRA,DA and TA:%d %d %d",e.hra,e.da,e.ta);
//}
//fclose(fp);
//return 0;
//}




//Replace a character x by char y

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	char temp,name[20];
	
	fp =fopen("xy.txt","r+");
	while((temp=getc(fp))!=EOF)
	{
		if(temp=='x')
		{
			fseek(fp,-1,1);
			putc('y',fp);
			fseek(fp,-1,1);			
		}
	}
	fclose(fp);
	return 0;
}



