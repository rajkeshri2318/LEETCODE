class Solution {
public:
    int search(vector<int>& arr, int key) {
    
    long long start = 0;
    long long end = arr.size() -1;

    long long mid =(start+end)/2;
    

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid +1;
        }
        else {
            end = mid -1;
        }
        mid = (start+end)/2;
    }
    return -1;

    }
};
