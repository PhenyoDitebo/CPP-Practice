#include <iostream>
#include "Sales_item.hpp"

int main() {
    Sales_item book; // create an instance of the Sales_item class
    Sales_item book2;

    std::cout << "Add the Books ISN Number, please." << std::endl;
    std::cin >> book;
    std::cin >> book2;

    std::cout << "Total Revenue" << book+book2 << std::endl;
}