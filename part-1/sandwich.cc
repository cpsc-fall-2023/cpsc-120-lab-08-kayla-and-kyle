// Kyle Ly
// Kyle55380@csu.fullerton.edu
// @KyleLyCSUF
// Partners: @eposri

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "error: you must supply 3 arguments\n";
    return 1;
  }
  std::string bread{arguments.at(2)};
  std::string protein{arguments.at(1)};
  std::string condiment{arguments.at(3)};
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment;
  std::cout << ".\n";
  return 0;
}
