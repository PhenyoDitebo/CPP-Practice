#include <iostream>
#include "Sales_item.hpp"

// using the "coveyer belt method."

int main() {
    Sales_item currItem, valItem;

    // Read the first record to set the current ISBN we are tracking.
    if (std::cin >> currItem) {
        int cnt = 1;
        std::cout << currItem.isbn() << " has been accounted for." << std::endl;

        // While we have more data to read...
        while (std::cin >> valItem) {
            if (valItem.isbn() == currItem.isbn()) {
                cnt++; // its the same book, so just add it on.
            }
            else {
                // New book, report old count and reset count for new book.
                std::cout << currItem.isbn() << " was bought " << cnt << " times" << std::endl;
                currItem = valItem; // new book
                cnt = 1; // reset count
            }
    }
    std::cout << currItem.isbn() << " was bought " << cnt << " times." << std::endl;
 }
 else {
    std::cerr << "No data provided." << std::endl;
    return -1;
 }

 return 0;
}