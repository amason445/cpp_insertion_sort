#include <vector>
#include <iostream>

std::vector<int> insertionSort(std::vector<int> vec) {

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


void print_output(std::vector<int> vec) {

 std::cout << "Input is: \n"; 
 
 for (int i: vec) {
  std::cout << i << ' ';
 }
 
 std::cout << "\nand the output is: \n";
 
 for (int i: insertionSort(vec)) {
  std::cout << i << ' '; 
 }
 
 std::cout << std::endl;
}




int main() {

  std::vector<int> vec {4,3,2,1};

  print_output(vec);

}
