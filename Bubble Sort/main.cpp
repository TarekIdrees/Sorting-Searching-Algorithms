#include <iostream>
using namespace std;
template <class T>
void Swap(T& x,T& y)
{
    T temp=x;
    x=y;
    y=temp;
}
template<class T>
void BubbleSort(T* arr,int n)
{
    bool Sorted=true;
    for(int i=0;i<n-1;i++) // To calculate # of passes  and it was n-1 because we did not need to check about last element because it was sorted already by first pass
    {
        for(int j=0;j<n-i-1;j++) // To swap between the elements and add shift the number of last pass to right so we do not have to check it again because already sorted
        {
            if(arr[j]>arr[j+1])
            {
                Swap(arr[j],arr[j+1]);
                Sorted=false;
            }
        }
        if(Sorted) // TO check if the array is already sorted
            break;
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
    BubbleSort(arr,n);
    print(arr,n);
    return 0;
}
