#include <iostream>
using namespace std;

int getLargest(int arr[], int n)
{
	int large = 0;
	for(int i=0; i<n; i++)
	{
		if(arr[i] > arr[large])
			large = i;
	}
	return large;
}
int smallest(int arr[], int n)
{
	int small = 0;
	for(int i=0; i<n; i++)
	{
		if(arr[i] < arr[small])
			small = i;
	}
	return small;
}

int Sum(int arr[], int n)
{
	long long int sum = 0;
	for(int i=0; i<n; i++)
	sum += arr[i];
	return sum;
}


int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];
	long long int sum1 = Sum(arr, n);
	long long int large1 = getLargest(arr, n);
	long long int small1 = smallest(arr, n);
	cout << sum1 - arr[large1] <<" " << sum1 - arr[small1];

}
