// Program to implement Binary search
#include <iostream>
using namespace std;
// Function for searching an element
int bSearch(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == x)
			return mid;

		else if(arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}
// Driver Code
int main() {
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element which you want to search "<<endl;
    cin>>x;
	cout<<bSearch(arr, n, x);
	return 0;
}