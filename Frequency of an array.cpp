#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// CPP program to count frequencies of array items

// Input :  arr[] = {10, 20, 20, 10, 10, 20, 5, 20}
// Output : 10 3
//          20 4
//          5  1

// Input : arr[] = {10, 20, 20}
// Output : 10 1
//          20 2 

//Method 1: using unordered_map
void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
  
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
  
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}






//Method 2: using bool function and increasing the counter.
void countFreq(int arr[], int n)
{
	// Mark all array elements as not visited
	vector<bool> visited(n, false);

	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++) {

		// Skip this element if already processed
		if (visited[i] == true)
			continue;

		// Count frequency
		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
		cout << arr[i] << " " << count << endl;
	}
}

int main()
{
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	return 0;
}

int main() {
	// Your code goes here;
	int arr[] = {10,20,10,20,10,30,30,40};
	int n = sizeof(arr)/sizeof(arr[0]);
	countFreq(arr,n);
	return 0;
}