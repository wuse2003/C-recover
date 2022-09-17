#include <iostream>
#include<time.h>
using namespace std;
#define M 3
#define N 4


void fun(int (*tt)[N],int *p )//解决这个行数不确定
{
    int MAX = 0;
    int num = 0;
     for (int n = 0; n < N; n++)
    {   MAX=0;
       for (int m = 0; m < M; m++)
       {
            if (MAX < tt[m][n])
            {   
                MAX = tt[m][n];
                p[num] = tt[m][n];
                
            }  
       }
       num++;
    }
}


int main()
{
    srand((int)time(0));
    int t[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            t[i][j] = rand()%9 + 1;
        }
        
    }
    int p[N];
    fun(t,p);

    cout << "The original data is : "<<endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "结果是:";
    for (int i = 0; i < N; i++)
    {
        
        cout << p[i] <<" ";
    }
    
}