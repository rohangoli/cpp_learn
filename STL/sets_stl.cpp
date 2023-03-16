#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    
    set<int> hs;
    for(int i=0; i<N; i++){
        int opt, val;
        cin >> opt >> val ;
        switch (opt) {
            case 1:
                hs.insert(val);
                break;
            case 2:
                hs.erase(val);
                break;
            case 3:
                set<int>::iterator search = hs.find(val);
                if(search==hs.end()){
                    cout << "No" << endl;
                }
                else{
                    cout << "Yes" << endl;
                }
                break;
        }
    }
    
    return 0;
}



