#include<iostream>
using namespace std;
const int N = 1000;

float Lagrange(float arrX [],float arrY[],int n,float x)
{
    float yResult =0.0;
    
    float LValue[N];

    int k,m;

    float temp1,temp2;

    for ( k = 0; k < n; k++)
    {
        temp1 = 0;
        temp2 = 0;
        for (m = 0;m<n ;m++)
        {
            if (m == k)
            {
                continue;
            }
            temp1 *= x - arrX[m];
            temp2 *= arrX[k] - arrX[m];
        }

        LValue[k] = temp1/temp2;
    }

    for (int i = 0; i < n; i++)
    {
        yResult += arrY[i]*LValue[i];
    }
        return yResult;
}

int main()
{
    float arrX[N],arrY[N];
	int num;
         cout<<"输入插值节点的个数(小于"<<N<<"个): ";
	cin>>num;
 
	cout<<"\n--接下来输入这些插值节点(先输入X 再输入对应的Y)--\n";
	for(int i=0;i<num;i++)
	{
		cout<<"第"<<i+1<<"个节点的X值: ";
		cin>>arrX[i];
		cout<<"第"<<i+1<<"个节点的Y值: ";
		cin>>arrY[i];
	}
    float X;
	cout<<"\n--请输入待求解的插值节点的X值--\n";
	cin>>X;
 
         float Res = Lagrange(arrX,arrY,num,X);
	cout<<"\n--插值结果为: "<<Res<<endl;
 
	return 0;
}