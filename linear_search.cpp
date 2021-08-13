#include<iostream>

using namespace std;

int main(){
	int arr_len;
	cout << "How many elements do you want? ";
	cin >> arr_len;

	int A[arr_len];
	cout << "Enter the elements of array: \n";

	for (int i=0;i<arr_len;i++){
		cin >> A[i];		
	}
	
	int key;
	cout << "Which element do you wish to search for? ";
	cin >> key;

	for (int i=0;i<arr_len;i++){
		if (key == A[i]){
			cout << key << " is present at index: " << i << endl;
			return 0;
		}
	}
	cout << "Element not found";
	return 0;
}
