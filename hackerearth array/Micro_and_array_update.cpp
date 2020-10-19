#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int small = arr[0];
        for(int i=0; i<n; i++)
        {
            if(arr[i] < small)
                small = arr[i];
        }
        if((k - small) < 0)
            cout << "0\n";
        else
            cout << k - small << endl;
    }
}
