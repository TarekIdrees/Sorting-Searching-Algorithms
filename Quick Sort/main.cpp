#include <iostream>
using namespace std;
int partition1(int arr[], int l, int h)
{
	int p = arr[l];
	int i = l;
	int j = h;
	while (i < j)
	{
		do
		{
			i++;
		} while (arr[i] <= p);
		do
		{
			j--;
		} while (arr[j] > p);

		if (i < j)
			swap(arr[i], arr[j]);
	}
	swap(arr[l], arr[j]);
	return j;
}

void quickSort1(int arr[], int l, int h,int k)
{

	if (l < h) {
		int piv = partition1(arr, l, h);
		if(k==piv) cout<<"The "<<k+1<<" th "<<"smallest"<<" = "<<arr[piv]<<"\n";
		quickSort1(arr, l, piv,k);
		quickSort1(arr, piv + 1, h,k);
	}

}

int main()
{
    int arr[]={1,7,5,6,9,2,3}; // 1 2 3 5 6  7 9
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2-1;
    quickSort1(arr,0,n,k);
    cout<<"Sorted array = ";
    for(int i=0; i<n ; i++)
    {
        cout<< arr[i]<< " ";
    }
    return 0;
}
