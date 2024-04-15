#include "arraySorting.h"
#include "getString.h"
#include <iostream>

int main() {
  int l = 0;
  std::string searchQuery;
  std::string namesArray[MAXSIZE];
  std::string numsArray[MAXSIZE];

  introMessage();
  int totalLines = readFile(namesArray, numsArray, MAXSIZE);
  displayArrays(namesArray, numsArray, totalLines);
  sortArrays(namesArray, numsArray, totalLines);
  displayArrays(namesArray, numsArray, totalLines);
  searchQuery = getString();
  bool studentFound = binSearch(namesArray, l, totalLines, searchQuery);
  if (studentFound) {
    std::cout << "The person you're searching for: " << searchQuery << ", was found!" << std::endl;
  }  else {
    std::cout << "Sorry, the person you're searching for: " << searchQuery<< ", was not found." << std::endl;
    std::cout << "Please try again." << std::endl;
  }

}