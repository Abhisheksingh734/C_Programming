//----------------------------------Structure-------------------------------------------------------------------------------------

#include<stdio.h>

struct KOCCK{
		int roll_no,redg_no;
		char name[50];
		float cgpa;
		
	};
	
int main()
{
	//--------------naming the structure KOCCK as s1 to access it-----------------------------
	struct KOCCK s1;
	s1.name = "Abhishek";
	s1.redg_no = 12219857;
	s1.roll_no = 63;
	s1.cgpa = 9.1;
	printf("name is %d and roll_number is %d",s1.name,s1.roll_no);
}

