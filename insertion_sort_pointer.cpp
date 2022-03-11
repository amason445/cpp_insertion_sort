#include <vector>
#include <iostream>

void insertionSort(std::vector<int>& vecRef) {

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


void print_output(std::vector<int> vec) {

 std::cout << "Input is: \n"; 
 
 for (int i: vec) {
  std::cout << i << ' ';
 }
 
 insertionSort(vec);
	
 std::cout << "\nand output is \n";
	
 for (int i: vec) { 
  std::cout << i << ' ';
 }
        
 std::cout << "\n";	

}




int main() {

 std::vector<int> vec {4,3,2,1};

 print_output(vec);

}
