#include <vector>
#include <iostream>


using namespace std;

vector<int> insertionSort(vector<int> vec) {

  for(int i = 2; i < vec.size(); i++) {

    int key = vec[i];
    //Insert key into the sorted sequence
   
    int j = i - 1;
    
    while (j >= 0 && vec[j] > key) {
     vec[j + 1] = vec[j];
     j = j  - 1;    
     }

    vec[j + 1] = key;
  }

  return vec;
}


void print_output(vector<int> vec) {

	cout << "Input is: \n"; 
	for (int i: vec) cout << i << ' ';
	cout << "\n and output is \n";
	for (int i: insertionSort(vec)) cout << i << ' '; 

}




int main() {

  vector<int> vec {4,3,2,1};

  print_output(vec);

}
