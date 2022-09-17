#include<iostream>
#include<string.h>
using namespace std;
class Student{
 private:
	char *name;
	int age;
 public:
 	Student(char *n,int a);
 	~Student();
 	void print(){
 		cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	 }
};
Student::Student(char *n,int a){
	name = new char[strlen(n)+1];
	strcpy(name,n);
	age = a;
}
Student::~Student(){
	delete []name;
}
 
class Postgrad:public Student{
private:
	int credit;
public:
	Postgrad(char *n,int a,int c):Student(n,a)
	{
		credit = c;
	}
	void print(){
		Student::print();
		cout<<"credit:"<<credit<<endl;
	}
};
int main(){
	Postgrad pg("ZhangSan",24,9001);
	pg.print();
	return 0;
}
