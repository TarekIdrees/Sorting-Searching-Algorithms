#include <iostream>
using namespace std;
template <class T>
int SequentialSearch(T arr[],int n,int key)
{
    for(int i=0 ; i <n; i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
template <class T>
void GeneratArray(T arr[],int Size)
{
    arr[Size];
   for(int i=0;i<Size;i++)
      arr[i]=rand()%100;
}

int main()
{
    cout<<"Enter the size of array :";
    int Size;
    cin>>Size;
    int arr[Size];
    GeneratArray(arr,Size);
    cout<<"Enter the number to Find if it was inside the array or not "<<endl;
    int num;
    cin>>num;
    int result=SequentialSearch(arr,Size,num);
    if(result==-1)
    {
        cout<< " The array = ";
        for(int i=0 ; i<Size;i++)
           cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"The number was Not found "<<endl;
    }
    else
    {
         cout<< " The array = ";
         for(int i=0 ; i<Size;i++)
           cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"The number found at index : "<<result<<endl;
    }
    return 0;
}
