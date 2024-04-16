/*
Lab 2
Name: Scott "Marble" Nideffer
Date: 04/15/2024
IDE: Clion/Replit
Version: 1.0
Description: A program that creates two parallel arrays from data in student.txt,
 sorts them
*/


#include "arraySorting.h"
#include "getString.h"
#include <iostream>

int main() {
  int l = 0;
  std::string searchQuery;
  // Create two parallel arrays max of 20 elements
  std::string namesArray[MAXSIZE];
  std::string numsArray[MAXSIZE];
  int searches = 0;

  introMessage();
  int totalLines = readFile(namesArray, numsArray, MAXSIZE);
  std::cout << "Total Lines: " << totalLines << std::endl;
  displayArrays(namesArray, numsArray, totalLines);
  // Sort Arrays by LNumber (Low -> High)
  sortArrays(numsArray, namesArray, totalLines);
  // Displays arrays sorted by LNumber
  displayArrays(numsArray, namesArray, totalLines);
  // Sort arrays by Name (A -> Z)
  sortArrays(namesArray, numsArray, totalLines);
  // Displays arrays sorted by Name
  displayArrays(namesArray, numsArray, totalLines);
do {
    searchQuery = getString();
    bool studentFound = binSearch(namesArray, l, totalLines, searchQuery);
      if (studentFound) {
          std::cout << "The person you're searching for: " << searchQuery << ", was found!" << std::endl;
          std::cout << searches + 1 << " out of 5 searches used." << std::endl;
          searches++;
      } else {
          std::cout << "Sorry, the person you're searching for: " << searchQuery << ", was not found." << std::endl;
          std::cout << searches + 1 << " out of 5 searches used." << std::endl;
          std::cout << "Please try again." << std::endl;
          searches++;
      }
  } while (searches < 5);
  return 0;
}