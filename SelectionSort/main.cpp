#include <iostream>
using namespace std;
template<class T>
void Swap(T& x,T& y)
{
    T temp=x;
    x=y;
    y=temp;
}
template<class T>
void SelectionSort(T* arr,int n)
{
    int MinIndex;
    for(int i=0;i<n-1;i++) // n-1 becouse last element will be already sorted
    {
        MinIndex=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[MinIndex])
                MinIndex=j;
        if(MinIndex==i)
            continue;
        else
        Swap(arr[MinIndex],arr[i]);

    }
}
template<class T>
void print(T* arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={60,40,50,30,10,20};
    int n=sizeof(arr)/sizeof(arr[0]); // (6*4 byte =24 )/ 4 = 6 element
    SelectionSort(arr,n);
    print(arr,n);
    return 0;
}
