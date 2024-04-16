#include <fstream>
#include <iostream>
#include <string>


#include "arraySorting.h"

void introMessage() {
    // std::string desktopLocation;
    std::cout << "The output file is located in the project directory as: " << std::endl;
    std::cout << "student.txt."  << std::endl;
    system("pause");
}

int readFile(std::string namesArray[],std::string numsArray[], int MAXSIZE){
    // Open the file.
    std::ifstream file("student.txt");

    // If there is a problem, notify the user.
    if (!file.is_open()) {
        std::cerr << "Error opening file" << std::endl;
    }

    std::string line;
    std::string delimiter = " ";

    int index = 0;

    // Read in each line of the file.
    while (std::getline(file, line) && index < MAXSIZE) {
            size_t pos = line.find(delimiter);
            std::string name = line.substr(0, pos);
            std::string number = line.substr(pos + 1);

            namesArray[index] = name;
            numsArray[index] = number;

            index++;

        if (index == MAXSIZE) {
            std::cerr << "Maximum array length reached: " << MAXSIZE << std::endl;
        }
    }
    file.close();
    return index;
}

void displayArrays(std::string (& namesArray)[MAXSIZE], std::string (& numsArray)[MAXSIZE], int totalLines) {
    for(int i=0; i < totalLines; i++) {
        std::cout << i+1 << ": " << "Name: " << namesArray[i] << ", L-Number: " << numsArray[i] <<std::endl;
    }
    system("pause");

}

void sortArrays(std::string (& namesArray)[MAXSIZE], std::string(& numsArray)[MAXSIZE], int totalLines) {
// sorts from z to a
    std::cout << "Sorting Arrays..." << std::endl;

    int i, j, min_idx;
    for (i = 0; i < totalLines; i++) {
        min_idx = i;
        for (j= i+1; j < totalLines; j++) {
            if (namesArray[j] < namesArray[min_idx])
                min_idx = j;
        }
        if (min_idx != i) {
            swap(namesArray[min_idx], namesArray[i]);
            swap(numsArray[min_idx], numsArray[i]);
        }
    }
    system("pause");
    // keeps indicies relative across both arrays
// no return
}

bool binSearch(std::string (& namesArray)[MAXSIZE], int l, int totalLines, const std::string& query) {
    int index = -1;
    int min = 0; int max = totalLines - 1;
    int lookat;

    while (min <= max){
        lookat = (min + max) / 2;
        if (query.compare(namesArray[lookat]) < 0){
            max = lookat - 1;
        } else if (query.compare(namesArray[lookat]) > 0){
            min = lookat + 1;
        } else {
            index = lookat;
            min = max + 1;
            return true;
        }
    }
    return false;


    // Tried implementing recursive binary search
    // It wasn't working ToT

//    if (totalLines >= l) {
//        int mid = l + (totalLines - 1) / 2;
//        if(namesArray[mid] == query) {
//            return true;
//        }
//        if (namesArray[mid] > query) {
//            return binSearch(namesArray, l, mid - 1, query);
//        }
//
//        return binSearch(namesArray, mid + 1, totalLines, query);
//    }
//
//    return false;
}