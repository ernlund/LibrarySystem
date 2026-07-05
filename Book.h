#pragma once
#include <string>

class Book {
private:
    std::string title;
    std::string author;

public:
    Book(std::string title, std::string author);

    std::string getTitle() const;
    std::string getAuthor() const;
};