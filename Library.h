#pragma once
#include <vector>
#include <string>
#include <fstream>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void listBooks() const;

    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};