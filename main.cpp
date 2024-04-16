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
  int searches = 0;
  std::string searchQuery;

  // Create two parallel arrays max of 20 elements
  std::string namesArray[MAXSIZE];
  std::string numsArray[MAXSIZE];


  // Display intro message notifying users of the name, location and format of file
  introMessage();

  // returns number of elements added to arrays.
  int totalLines = readFile(namesArray, numsArray, MAXSIZE);

  // Displays unsorted arrays
  std::cout << "\nUnsorted Arrays: \n" << std::endl;
  displayArrays(namesArray, numsArray, totalLines);
  // Sort Arrays by LNumber (Low -> High)
  sortArrays(numsArray, namesArray, totalLines);
  // Displays arrays sorted by LNumber
  std::cout << "\nArrays Sorted by L-Number: \n" << std::endl;
  displayArrays(numsArray, namesArray, totalLines);
  // Sort arrays by Name (A -> Z)
  sortArrays(namesArray, numsArray, totalLines);
  // Displays arrays sorted by Name
  std::cout << "\nArrays Sorted by First Name: \n" << std::endl;
  displayArrays(namesArray, numsArray, totalLines);

  // Five searches, returning true if name was found in namesArray
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