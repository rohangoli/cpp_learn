// https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> dhq(k);
 
    for(int i=0;i<k;i++){
        while((!dhq.empty()) && arr[i] >= arr[dhq.back()]){
            dhq.pop_back();
        }
        dhq.push_back(i);
    }
    
    for(int i=k;i<n;i++){
        cout << arr[dhq.front()] << ' ';
        
        while((!dhq.empty()) && dhq.front() <= i-k){
            dhq.pop_front();
        }
        
        while((!dhq.empty()) && arr[i] >= arr[dhq.back()]){
            dhq.pop_back();
        }
        dhq.push_back(i);
    }

    cout << arr[dhq.front()] << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}