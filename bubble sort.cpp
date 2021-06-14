#include <bits/stdc++.h>
using namespace std;

int bubble_sort(){
	int x[20], temp, n;
	cout << "Enter your array's size: ";
	cin >> n;

	for(int i= 0; i < n; i++){
		cin >> x[i];
	}

	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(x[j] > x[j+1]){
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}
	
	for(int j = 0; j < n; j++){
		cout << x[j] << ", ";
	}

	return 0;
}

int main(){
	bubble_sort();
	return 0;

}