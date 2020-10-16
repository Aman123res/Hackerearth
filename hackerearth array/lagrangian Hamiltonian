#include <iostream>
#include <vector>
using namespace std;
// int arr[] = {16, 17, 4, 3, 5, 2}
//o/p = {17, 5, 2}

int main()
{
    long long int n;
    cin >> n;
	int arr[n];
    vector<int>leaders;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int currLeader =  arr[n-1]; // last element is always leader
        leaders.push_back(currLeader);
    for(int i = n-2; i >= 0; i--){
        if(currLeader <= arr[i]){
            currLeader = arr[i];
            leaders.push_back(currLeader);
        }
    }
    for(int i = leaders.size() - 1; i >= 0; i--)
        cout << leaders[i] <<" ";
    cout << endl;
}
