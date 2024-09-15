#include<iostream>
using namespace std;
int imagenEspecular(int n, int resultado)
{
    if(n==0)
    {
        return resultado;
    }
    else
    {
        resultado=resultado*10+(n%10);
        return imagenEspecular(n/=10, resultado);
    }
}
int main()
{
    int n, result=0;
    cout<<"ingrese un numero:"; cin>>n;
    cout<<n<<" ----> "<<imagenEspecular(n,result);
    return 0;

}