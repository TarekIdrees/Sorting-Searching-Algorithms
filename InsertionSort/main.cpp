#include <iostream>
using namespace std;
template <class T>
void InsertionSort(T* arr,int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;

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
    InsertionSort(arr,n);
    print(arr,n);
    return 0;
}
