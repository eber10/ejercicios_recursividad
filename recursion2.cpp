#include<iostream>
using namespace std;
bool buscarValor(int arr[], int n, int x)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        if(arr[n-1]==x)
        {
            return 1;
        }
        else
        {
            return buscarValor(arr, n-1, x);
        }
    }
}

int main()
{
    int n, arreglo[n], x;
     cout<<"ingrese la cantidad de elementos:"; cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"ingrese elemento"<<i+1<<":"; cin>>arreglo[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    cout<<"ingrese el elemento a buscar: "; cin>>x;
    if(buscarValor(arreglo, n, x))
    {
        cout<<"se encontro el valor "<<endl;
    }
    else
    {
        cout<<"no se encontro el valor "<<endl;
    }
    return 0;

}