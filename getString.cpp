//
// Created by scnid on 4/15/2024.
//

#include "getString.h"
#include <iostream>

std::string getString() {
    std::string searchQuery;

    std::cout << "\nWho are you looking for?: "<< std::endl;
    std::cin >> searchQuery;


    return searchQuery;
}
