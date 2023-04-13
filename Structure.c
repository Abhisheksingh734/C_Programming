//----------------------------------Structure-------------------------------------------------------------------------------------

#include<stdio.h>
//
//struct KOCCK{
//		int roll_no,redg_no;
//		char name[50];
//		float cgpa;
//		
//	};
//	
//int main()
//{
//	//--------------naming the structure KOCCK as s1 to access it-----------------------------
//	struct KOCCK s1;
//	s1.name = "Abhishek";
//	s1.redg_no = 12219857;
//	s1.roll_no = 63;
//	s1.cgpa = 9.1;
//	printf("name is %d and roll_number is %d",s1.name,s1.roll_no);
//}


//-->4/5/2023--------------------------------Structure-------------------------------------------------------------------------------------


//struct teacher{
//	char name[45];
//	char courseName[50];
//	int uid;
//	float salary;
//};
//
//
//
//
//int main()
//{
//	
//	struct teacher t1={
//		"Amandeep Kaur",
//		"CSE101",
//		22176,
//		6000000.78
//	};
//	printf("Display details of teacher 1 :\n");
//	printf("%s,%s,%d,%f",t1.name,t1.courseName,t1.uid,t1.salary);
//	
//	
//	struct teacher t2={
//		"Anchal",
//		"DBMS",
//		2312,
//		6000000
//	};
//	
//	printf("\nDisplay details of teacher 2 :\n");
//	printf("%s,%s,%d,%f",t2.name,t2.courseName,t2.uid,t2.salary);
//	return 0;
//	
//	
//}





//----------WAP to create a structre named car data nunmber of cars are -> carname, Price,Seats

#include<stdio.h>


//struct car{
//	char car_name[40];
//	float Price;
//	int seats;
//};
//
//
//
//
//
//int main()
//{
//	struct car c1;
//	printf("Enter first car name: ");
//	scanf("%s",&c1.car_name);
//	printf("Enter price : ");
//	scanf("%f",&c1.Price);
//	printf("Enter number of seats :");
//	scanf("%d",&c1.seats);
//	
//	printf("Details of First Car:\n");
//	printf("Car name = %s\nPrice = %.2f\nSeats = %d",c1.car_name,c1.Price,c1.seats);
//	
//	struct car c2;
//	printf("\nEnter second car name: ");
//	scanf("%s",&c2.car_name);
//	printf("Enter price : ");
//	scanf("%f",&c2.Price);
//	printf("Enter number of seats :");
//	scanf("%d",&c2.seats);
//	
//	printf("Details of First Car:\n");
//	printf("Car name = %s\nPrice = %.2f\nSeats = %d",c2.car_name,c2.Price,c2.seats);
//	
//	struct car c3;
//	printf("\nEnter third car name: ");
//	scanf("%s",&c3.car_name);
//	printf("Enter price : ");
//	scanf("%f",&c3.Price);
//	printf("Enter number of seats :");
//	scanf("%d",&c3.seats);
//	
//	printf("Details of First Car:\n");
//	printf("Car name = %s\nPrice = %.2f\nSeats = %d",c3.car_name,c3.Price,c3.seats);
//	
//	
//	return 0;
//}





// WAP to implement structure as an array ----------------------------------------------------------------------------------------------------------

#include<stdio.h>

//struct teacher{
//	char name[30];
//	int UID;
//	float salary;
//	int rating;
//	
//};
//
//int main(){
//	struct teacher t[5];
//	for(int i =0;i<5;i++){
//		printf("Enter details of %d teacher\n",i+1);
//		printf("Enter name: ");
//		scanf("%s",&t[i].name);
//		printf("Enter UID: ");
//		scanf("%d",&t[i].UID);
//		printf("Enter salary: ");
//		scanf("%d",&t[i].salary);
//		printf("Enter rating: ");
//		scanf("%d",&t[i].rating);
//	}
//	
//	printf("Display details : ");
//	
//	for(int i=0;i<5;i++){
//		printf("detail of  teacher %d\n",i+1);
//		printf("%s ,%d, %f, %d\n",t[i].name,t[i].UID,t[i].salary,t[i].rating);
//	}
//	
//	return 0;
//}



// ---WAP to create a structure fo student details 


//struct student{
//	char name[30];
//	int rollno;
//	float cgpa;
//	char grade;
//	
//};
//
//int main(){
//	
//	int size;
//	struct student t[size];
//	printf("Enter number of students detials to collect\n");
//	scanf("%d",&size);
//	for(int i =0;i<size;i++){
//		printf("Enter details of student %d\n",i+1);
//		printf("Enter name: ");
//		scanf("%s",t[i].name);
//		printf("Enter rollno: ");
//		scanf("%d",&t[i].rollno);
//		printf("Enter cgpa: ");
//		scanf("%f",&t[i].cgpa);
//		printf("Enter grade: ");
//		scanf(" %c",&t[i].grade);
//	}
//	
//	printf("Display details : ");
//	
//	for(int i=0;i<size;i++){
//		printf("\n**********detail of  Student %d**********\n\n",i+1);
//		printf("//Name => %s\n//RollNo => %d\n//CGPA =>%f\n//Grade =>%c\n\n",t[i].name,t[i].rollno,t[i].cgpa,t[i].grade);
//	}
//	
//	return 0;
//}




///----------------------copy to structure

//#include<stdio.h>
//
//struct teacher
//{
//	int uid;
//	float salary;
//};
//
//int main()
//{
//	struct teacher t1= {
//		2217,800000
//	};
//	
//	
//	
//	printf("%d , %f \n",t1.uid,t1.salary);
//	
//	struct teacher t2 = t1;
//	printf("%d , %f \n",t2.uid,t2.salary);
//	
//	return 0;
//}


//----------------WAP pointer to a structure--------------------------------

#include<stdio.h>
//struct car{
//	char name[60];
//	int seats;
//	float price;
//};
//
//int main(){
//	
//	struct car mycar = { "BMW",2,999999},*ptr;
//	ptr = &mycar;
//	printf("Car name =%s\nSeats =%d\nPrice =%.1f",ptr->name, ptr->seats,ptr->price );
//	return 0;
//}







//-->4/6/2023--------------------------------Structure-------------------------------------------------------------------------------------

//   WAP to create a structure patient


#include<stdio.h>

//struct Patient{
//	char name[30];
//	char disease[20];
//	int wardNo;
//	float expenses;
//};
//
//int main()
//{
//	int size;
//	printf("Enter number of patient: ");
//	scanf("%d",&size);
//	struct Patient p[100];
//	for(int i=0;i<size;i++){
//		printf("Enter %d patient name ",i+1);
//		scanf("%s",p[i].name);
//		printf("Enter disease ");
//		scanf("%s",p[i].disease);
//		printf("Enter Ward No :");
//		scanf("%d",&p[i].wardNo);
//		printf("Enter Total expenses: ");
//		scanf(" %f",&p[i].expenses);
//	}
//
//	for(int i=0;i<size;i++){
//		printf("\nPatient(%d) Name: %s\nDisease: %s\nWard.NO: %d\nTotal Expenses: %f\n********************\n",i+1,p[i].name,p[i].disease,p[i].wardNo,p[i].expenses);
//
//	}
//	return 0;
//}


//#include<stdio.h>
//
//struct car {
//	char name[30];
//	int seats;
//	float price;
//	
//};
//
//int main(){
//	struct car c;
//	printf("Enter name: ");
//	scanf("%s",&c.name);
//	printf("Enter seats: ");
//	scanf("%d",&c.seats);
//	printf("Enter price: ");
//	scanf("%f",&c.price);
//	
//	
//	printf("\n******Display details******\n");
//	printf("\nCar name is = %s\nSeats are = %d\nPrice = %f\n",c.name,c.seats,c.price);
//	
//	return 0;
//}

//------------------------------------------UNION-------------------------------------------------------------------------




#include<stdio.h>
//
//union car {
//	char name[30];
//	int seats;
//	float price;
//	
//};
//
//int main(){
//	union car c;
//	printf("Enter name: ");
//	scanf("%s",&c.name);
//	printf("Car name is = %s\n",c.name);
//	printf("Enter seats: ");
//	scanf("%d",&c.seats);
//	printf("Seats are = %d\n",c.seats);
//	printf("Enter price: ");
//	scanf("%f",&c.price);
//	printf("Price = %f\n",c.price);
//	
//	
////	printf("\n******Display details******\n");
////	printf("\nCar name is = %s\nSeats are = %d\nPrice = %f\n",c.name,c.seats,c.price);
//	
//	return 0;
//}


//union saves the memory



#include <stdio.h>

//struct Address{
//    char city[50];
//    char state[50];
//    int pincode;
//};
//
//struct dob{
//	int dd;
//	int mm;
//	int yyyy;
//};
//
//struct Person{
//    char name[50];
//    int age;
//    struct Address add;
//    struct dob birthday;
//};
//
//int main(){
//    struct Person p1={"abhishek",19,{"jalandhar","punjab",1221},{20,3,2003}};
//	printf("%s %d %s %s %d %d %d %d ",p1.name,p1.age,p1.add.city,p1.add.state,p1.add.pincode,p1.birthday.dd,p1.birthday.mm,p1.birthday.yyyy);    
//    return 0;
//}

//struct Employee{
//	char name[20];
//	int ssn;
//	int salary;
//	struct dob{
//		int dd;
//		int mm;
//		int yyyy;
//	}db[10];
//}emp[10];
//
//int main(){
//	int size;
//	printf("Enter number of employees data to fetch: ");
//	scanf("%d",&size);
//	
//	for(int i=0;i<size;i++){
//		printf("Enter name of %d employee: ",i+1);
//		scanf("%s",&emp[i].name);
//		printf("Enter ssn: ");
//		scanf("%s",&emp[i].ssn);
//		printf("Enter salary: ");
//		scanf("%d",&emp[i].salary);
//		printf("Enter date of birth in format [dd mm yyyy]: ");
//		scanf("%s %d %d %d %d %d",&emp[i].db[i].dd,&emp[i].db[i].mm,&emp[i].db[i].yyyy);
//		
//		for(int i=0;i<size;i++){
//			printf("Details of Employee(%d)\n",i+1);
//			printf("name = %s ssn = %d salary = %d dateOfBirth = %d/%d/%d\n",emp[i].name,emp[i].ssn,emp[i].salary,emp[i].db[i].dd,emp[i].db[i].mm,emp[i].db[i].yyyy);
//		}
//	}
//}





