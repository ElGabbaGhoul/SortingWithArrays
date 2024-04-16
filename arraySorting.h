#ifndef ARRAY_SORTING_H
#define ARRAY_SORTING_H
#include <iostream>

constexpr int MAXSIZE = 20;


const std::string g_SHORTFILE =
    "C:\\Users\\scnid\\Desktop\\School\\Spring24\\CS\\Lab2\\sample_short.txt";
const std::string g_MOREFILE =
    "C:\\Users\\scnid\\Desktop\\School\\Spring24\\CS\\Lab2\\sample_more.txt";


void introMessage();
int readFile(std::string namesArray[], std::string numsArray[], int MAXSIZE);
void sortArrays(std::string (& namesArray)[MAXSIZE], std::string (& numsArray)[MAXSIZE], int totalLines);
void displayArrays(std::string (& namesArray)[MAXSIZE], std::string (& numsArray)[MAXSIZE], int totalLines);
bool binSearch();

#endif // ARRAY_SORTING_H