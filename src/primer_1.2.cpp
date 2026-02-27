#include <iostream>
#include "Sales_item.hpp"

int main() {
    Sales_item book; // create an instance of the Sales_item class

    std::cout << "Add the Book's ISN Number, please." << std::endl;
    std::cin >> book;

    std::cout << book << std::endl;
}