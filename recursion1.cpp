#include<iostream>
using namespace std;
int potencia(int n, int m)
{
    if(m==0)
    {
        return 1;
    }
    else
    {
        return n*potencia(n, m-1);
    }
}
int main()
{
    int n, m;
    cout<<"ingrese la base:"; cin>>n;
    cout<<"ingrese el exponente:"; cin>>m;
    cout<<"potencia:"<<potencia(n,m)<<endl;
    return 0;
}