// Coding Ninja -  Duplicate In Array 
// link - https://www.codingninjas.com/studio/problems/duplicate-in-array_893397

int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    int size = arr.size();

    for(int i = 1; i < size; i++){
        ans = ans ^ i;
    }
	 
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    } 

    return ans;
}
