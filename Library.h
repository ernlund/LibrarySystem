#pragma once
#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void listBooks() const;
};