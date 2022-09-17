#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Worker
{

    public:

    int m_salary;
    string m_name;
    static int List ;
    
    
    Worker(string name ,int salary)
    {
        this->m_name = name;
        this->m_salary = salary;
    }

    void output()
    {
        cout << m_name<<" ";
        cout << m_salary  << endl;
    }

    ~Worker()
    {

    }
};
int Worker::List = 0;

int Max (int num,Worker * worker)
    {
        int max = 0;
        int index ;
        for (int i = 0; i < num ; i++)
        {    
            if(worker[i].m_salary > max)
            {
                max = worker[i].m_salary ;
                index = i;
            }        
        }
        return index;
    }
int main()
{
    int num;
    cout << "input the Numbers of workers: " << endl;
    cin >> num;

    Worker ** worker = new Worker*[num];

    string name;
    int salary;

    cout << "input the numbers of name and Salary :" << endl;
    for ( int i = 0; i < num; i++)
    {
        cin >> name;
        cin >> salary;
        worker[i]= new Worker(name,salary);
        Worker::List += salary;
    }

cout <<"数据表："<<endl;

    for ( int i = 0; i < num; i++)
    {
        worker[i]->output();
    }
    cout << "Toltal Money :" <<  Worker::List << endl;  

    cout<< "THE rich_person:"<<endl;
    
    int rich_person = Max(num,*worker);
    worker[rich_person]->output() ;
}
