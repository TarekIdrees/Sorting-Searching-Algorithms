#include <iostream>
using namespace std;
template <class T>
int BinarySearch(T arr[],int l , int h,int key)
{
    while(l <=h )
    {
        int m =(l+h)/2 ;
        if(arr[m]==key)
            return m;
        if(arr[m] > key)
            h= m-1;
        else
            l=m+1;

    }
    return -1;
}
template <class T>
int BinarySearchRec(T arr[],int l,int m, int h, int key)
{
    if(h >= l)
    {
        int m = (h+l)/2;
        if(arr[m]==key)
            return m;
        if(arr[m]> key)
            return BinarySearchRec(arr,l,m-1,key);
        else
            return BinarySearchRec(arr,m+1,h,key);
    }
    return -1;
}
template <class T>
void Sort(T* arr,int n)
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
int main()
{
    int arr[]={1,8,9,7,5,6,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Sort(arr,n);
    int num;
    cout<<"Enter the number to find it "<<endl;
    cin>>num;
    int result=BinarySearch(arr,0,n-1,num);
    if(result==-1)
        cout<<"The num was not found "<<endl;
    else
        cout<<"The num was found at index "<<result<<" of the array "<<endl;

    return 0;
}
