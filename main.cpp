#include "arraySorting.h"
#include <iostream>

int main() {

  std::string namesArray[MAXSIZE];
  std::string numsArray[MAXSIZE];

  introMessage();
  int totalLines = readFile(namesArray, numsArray, MAXSIZE);
  displayArrays(namesArray, numsArray, totalLines);
  sortArrays(namesArray, numsArray, totalLines);
  displayArrays(namesArray, numsArray, totalLines);

  std::cout << "Total lines here: " << totalLines << std::endl;
}