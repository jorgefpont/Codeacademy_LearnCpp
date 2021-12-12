#include <iostream>
#include <vector>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  sam.add_hobby("Sailing");
  sam.add_hobby("Cycling");

  std::cout << "Profile:\n";
  std::cout << sam.view_profile() << "\n";
  
}