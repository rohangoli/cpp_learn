#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    vector<int> arr;
    cin >> N;
    for(int i=0;i<N;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<N; i++){
        cout << arr[i] << ' ';
    }
    
    return 0;
}
