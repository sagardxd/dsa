// Coding ninja -> Intersection Of Two Sorted Arrays 
// Link - https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>ans;
	int i= 0;
	int j= 0;

	while(i<n && j<m) {
		
		// both the elements are equal
		if(arr1[i] == arr2[j]) {
			ans.push_back(arr1[i]);
			i++;
			j++;
		}

		//arr1 element is greater than arr2
		if(arr1[i] > arr2[j]) {
			j++;
		}

		//arr2 element is greater than arr1
		if(arr1[i] < arr2[j]) {
			i++;
		}

	}

	return ans;

}