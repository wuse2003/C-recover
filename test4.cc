#include<iostream>
using namespace std;
// #define N 9
// #define C 3
// #define F 5

class LIST
{
            int size;
            int *arr;
    public:
            LIST(int len);

            void sortpart(int m,int n);
            void output();

            ~LIST();

};

LIST ::LIST(int len)
    {   
        this->size=len;    
    }

void LIST ::sortpart(int m,int n)
{
    
    this->arr = new int[size];
    cout << "输入数据：" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    
    for (int i = 0; i < size-1; i++)
    {
        for ( int j = m ; j < n - 1 - i; j++)
        {
            if (arr[j+1] > arr[j])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }    
    }
}

void LIST::output()
{
    for (int i = 0; i < this->size; i++)
    {
        cout << this->arr[i] <<" ";
    }
}

LIST::~LIST()
{
    delete [] arr;
}

int main()
{
     cout <<"输入数组大小: "<< endl;
     int num,m,n;
     cin >> num;
    LIST list(num); 
    cout <<"输入x和y:" <<endl;
    cin >> m >> n;

    while (m*n > num*num)
    {
      cout << "输入错误, 请重新输入："<<endl; 
      cin >> m >> n;
      exit(0);
    }
    
    list.sortpart(m,n);
    list.output();
}
