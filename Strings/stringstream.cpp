#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> arr;
    stringstream ss(str);
    
    int temp1;
    char temp2;
    while(ss){
        ss >> temp1 >> temp2;
        if(temp2){
            arr.push_back(temp1); 
        }
        else{
            break;
        }   
    }
    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}