#include<fstream>
#include <iostream>
#include<string>   
using namespace std;

void test_of()
{
	ofstream ofs;
	ofs.open("*test_1.txt",ios::out);
	ofs << "tangjinyu3120210912130"<<endl;
	ofs.close();
}

void test_if( )
{
    ifstream ifs;

    ifs.open("*test_1.txt",ios::in);

    if(!ifs.is_open())
    {
        cout <<" file can't find "<< endl;
    }

    char buf[1024]={0};
    char bu[1024]={0};
    int num,i,j=0;
    
    while(ifs >> buf)
    {
        cout << buf;
    }
    
    
    cout << endl;

    for ( i = 0; i < 1024;i++)
    {
        
        if(buf[i]>='A' && buf[i]<='z')
        {
            bu[j]=buf[j];
            j++;    
        }        
    }
    for (int i = 0; i < j; i++)
    {
        cout <<  bu[i];
    }
    
    cout  <<endl;
    cout <<i<<" "<< j; 
}

int main()
{
   test_of();
   test_if();
}
