#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);

  // Correct approach 1: Using at() for bounds checking
  try {
    vec.at(2) = 30; 
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }

  // Correct approach 2: Resizing the vector
  vec.resize(3);
  vec[2] = 30; 

  std::cout << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
  return 0;
}
