#include <iostream>
using namespace std;
#include<iomanip>
#include<typeinfo>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int Employee_Id;
int Total_days=30;
int salary_per_day=1000;
float salary_without_allowance ;
cout<<"ID = ";cin>>Employee_Id;
salary_without_allowance=Total_days*salary_per_day;
cout<<"Salary Without Allowance="<<salary_without_allowance<<endl;
float salary_with_allowance;
salary_with_allowance=(salary_without_allowance/100)*22+salary_without_allowance;
static_cast<int>(salary_with_allowance);
cout<<"Total Salary ="<<salary_with_allowance<<endl<<endl;

int employes=100;
++employes;
++employes;
cout<<"No of employes after addition ="<<employes<<endl;
bool result = (Employee_Id==100);
cout<<"Result is = "<<result;
cout<<"					Task 2 IS BEGINING					"<<endl;
bool bool_var=1;
cout<<endl<<"bool var value = "<<bool_var;
char char_var= 'A';
cout<<endl<<"value of char="<<char_var;
int int_var=bool_var+char_var;
cout<<endl<<"net result ="<<int_var<<endl;
cout<<"					Task 3 IS BEGINING					"<<endl;
float  A=32.9;
cout<<"Float A="<<A<<endl;
int new_A= static_cast<int>(A);
cout<<"Value of A in int ="<<new_A;
cout<<"Value of A = "<<typeid(A).name();














	return 0;
}
