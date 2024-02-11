#include <algorithm> // Used this header file for sort(_,_);
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int> ans;
	sort(arr.begin(), arr.end());
	int start=0, end=n-1;
	for(int i=0; i<k-1; i++) {
		start++;
		end--;
	}
	ans.push_back(arr[start]);
	ans.push_back(arr[end]);

	return ans;
}