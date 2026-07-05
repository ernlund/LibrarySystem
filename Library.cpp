#include <iostream>
#include "Library.h"

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::listBooks() const {
    for (const Book& b : books) {
        std::cout << b.getTitle()
                  << " by "
                  << b.getAuthor()
                  << std::endl;
    }
}