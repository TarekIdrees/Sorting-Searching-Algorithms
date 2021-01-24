#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{

    int l=2*i+1;
    int r=2*i+2;
    int max=i;
    if(l<n&&arr[l]<arr[max])
        max=l;
    if(r<n&&arr[r]<arr[max])
        max=r;

    if(max != i)
    {
        swap(arr[i],arr[max]);
        heapify(arr,n,max);
    }
}

void buildHeap(int arr[],int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) // To not include the leaves in the heapify
        heapify(arr, n, i);
}

void heapSort(int arr[], int n)
{

    buildHeap(arr, n);
    for (int i = n-1; i >=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }

}
int heapMax(int arr[])
{
    return arr[0];
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
int HeapExtracMax(int arr[],int n)
{
    if(n < 1 )
    {
        cout<<"Heap underflow";
        return -1;
    }
    else
    {
        int max=arr[0];
        arr[0]=arr[n-1];
        heapify(arr,n-1,0);
        int *arr2=new int[n-1];
        for(int i=0;i<n;i++)
        {
            arr2[i]=arr[i];
        }
        print(arr2,n);
        return max;
    }

}
int Parent(int &i)
{
    return i-1/2;
}
void Heap_Increase_Key(int arr[],int i,int key)
{
    if(key  < arr[i])
        cout<<"New key is smaller  than current key \n";
    else
    {
        arr[i]=key;
        cout<<arr[(i-1)/2]<<endl;
        while( i > 1 && arr[(i-1)/2]<arr[i])
        {
            swap(arr[i],arr[(i-1)/2]);
            i=(i-1)/2;
        }
    }
}
int main()
{
    int arr[] = { 16,10,14,3,9,7,1,8,4,2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    //cout<<HeapExtracMax(arr,n)<<"\n";
    //print(arr,n);

    Heap_Increase_Key(arr,9,15);

    print(arr,n);

    return 0;
}
