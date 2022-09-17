#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:

Student(const char * name ,int age)
    {
       this->S_name = new char [strlen(name)+1];
        
        strcpy(S_name,name);      
        this->S_age = age;
    }
int S_age;
char *S_name;

    ~Student( )
    {
        delete []S_name;
    };
};

class Postgrad :public Student
{
    long int P_credit;
    public:
    Postgrad(const char * name ,int age ,long int credit):Student(name,age)//创建子类对象 要先调用基类构造函数；
    {
        this->P_credit=credit;
    }

    void show()
    {
        cout <<this->S_name<<endl;
        cout <<this->S_age<<endl;
        cout <<this->P_credit<<endl;
    }
};

int main()
{
    
        Postgrad student("tang",19, "3120210912130");

        student.show();
}