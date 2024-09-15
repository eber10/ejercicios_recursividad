#include<iostream>
using namespace std;
int encontrarMax(int arr[], int n)
{
    if(n==1)
    {
        return arr[0];
    }
    else
    {
        int max=encontrarMax(arr, n-1);
        if(arr[n-1]>max)
        {
            return arr[n-1];
        }
        else
        {
            return max;
        }
    }
}
int main()
{
    int n, arreglo[n];
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
    cout<<"maximo elemento:"<<encontrarMax(arreglo, n)<<endl;
    return 0;

}