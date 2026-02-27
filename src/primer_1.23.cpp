#include <iostream>
#include "Sales_item.hpp"

int main() {
    Sales_item book1, book2;
    if (std::cin >> book1) {
        int cnt1 = 1;
        int cnt2 = 0;

        std::cin >> book2;

        if (book1.isbn() == book2.isbn()) {
            cnt1++;
            std::cout << book1.isbn() << " was bought " << cnt1 << " times." << std::endl;
        }
        else {
            cnt2++;
            std::cout << book1.isbn() << " was bought " << cnt1 << " times." << std::endl;
            std::cout << book2.isbn() << " was bought " << cnt2 << " times." << std::endl;
        }
    }
    else {
        std::cout << "Book 1 was not added. Please add book 1 on next run." << std::endl;
    }
}