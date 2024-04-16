#ifndef ARRAY_SORTING_H
#define ARRAY_SORTING_H
#include <iostream>

constexpr int MAXSIZE = 20;



void introMessage();
int readFile(std::string namesArray[], std::string numsArray[], int MAXSIZE);
void sortArrays(std::string (& namesArray)[MAXSIZE], std::string (& numsArray)[MAXSIZE], int totalLines);
void displayArrays(std::string (& namesArray)[MAXSIZE], std::string (& numsArray)[MAXSIZE], int totalLines);
// Binsearch needs to accept: array, left, right, query that are not defined within
bool binSearch(std::string (& namesArray)[MAXSIZE], int l, int totalLines, const std::string& query);

#endif // ARRAY_SORTING_H