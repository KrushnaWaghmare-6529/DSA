#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> bubbleSort(vector<int> &arr){  //O(n^2)
    bool isSwap= false;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size()-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return arr;  //array is already sorted
        }
    }
    return arr;
}

int main() {
    vector<int> arr={6,8,4,9,1,5};
    bubbleSort(arr);

    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}