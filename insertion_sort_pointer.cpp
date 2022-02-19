#include <vector>
#include <iostream>


using namespace std;

void insertionSort(vector<int>& vecRef) {

  for(int i = 2; i < vecRef.size(); i++) { 

    int key = vecRef[i];
    //Insert key into the sorted sequence
   
    int j = i - 1;
    
    while (j >= 0 && vecRef[j] > key) {
     vecRef[j + 1] = vecRef[j];
     j = j  - 1;    
     }

    vecRef[j + 1] = key;
  }
  
}


void print_output(vector<int> vec) {

	cout << "Input is: \n"; 
	for (int i: vec) cout << i << ' ';
	insertionSort(vec);
	cout << "\n and output is \n";
	for (int i: vec) cout << i << ' ';
        cout << "\n";	

}




int main() {

  vector<int> vec {4,3,2,1};

  print_output(vec);

}
