#include <iostream>
#include "Sales_item.hpp"

int main() {
    Sales_item book; // create an instance of the Sales_item class
    Sales_item book2;

    std::cout << "Add the Book's ISN Number, please (book 1)." << std::endl;
    std::cin >> book;

    std::cout << book << std::endl;

    std::cout << "Add the Book's ISN Number, please(book 2)." << std::endl;
    std::cin >> book2;

    std::cout << book2 << std::endl;
}