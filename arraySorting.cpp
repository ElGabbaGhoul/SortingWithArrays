#include <fstream>
#include <iostream>
#include <string>

#include "arraySorting.h"

void introMessage() {
    // std::string desktopLocation;
    std::cout << "Your short file is located in the following directory: " << std::endl;
    std::cout << g_SHORTFILE << std::endl;
    std::cout << "Your more file is located in the following directory: " << std::endl;
    std::cout << g_MOREFILE << std::endl;
    system("pause");
}

int readFile(std::string namesArray[],std::string numsArray[], int MAXSIZE){
    // Open the file.
    std::cout << "Reading file..." << std::endl;
    std::ifstream infile;
    infile.open(R"(C:\Users\scnid\Desktop\School\Spring 24\CS\Lab2\sample_more.txt)");
    // If there is a problem, notify the user.
    if (!infile) {
        std::cerr << "Error opening file" << std::endl;
    }

    std::string line;
    std::string delimiter = " ";

    int index = 0;

    // Read in each line of the file.
    while (std::getline(infile, line) && index < MAXSIZE) {
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
    infile.close();
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
