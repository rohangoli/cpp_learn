#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    vector<int> arr;
    for(int i=0;i<N;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    int x;
    cin >> x;
    arr.erase(arr.begin()+x-1);
    // for(auto i:arr){
    //     cout << i << ' ';
    // }
    // cout << endl;
    
    int a,b;
    cin >> a >> b;
    arr.erase(arr.begin()+a-1, arr.begin()+b-1);
    
    cout << arr.size() << endl;
    for(auto i:arr){
        cout << i << ' ';
    }
    
    return 0;
}
