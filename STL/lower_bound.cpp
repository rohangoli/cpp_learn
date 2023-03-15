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
    int Q;
    cin >> Q;
    vector<int>::iterator lb,ub;
    for(int i=0;i<Q;i++){
        int val;
        cin >> val;
        lb = lower_bound(arr.begin(), arr.end(), val);
        ub = upper_bound(arr.begin(), arr.end(), val);
        
        int lower, upper;
        lower = lb-arr.begin()+1;
        upper = ub-arr.begin()+1;
        
        if(lower==upper){
            cout << "No " << upper << endl;
        }
        else{
            cout << "Yes " << lower << endl;
        }
    }
    return 0;
}
