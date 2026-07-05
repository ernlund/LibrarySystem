#include "Book.h"

Book::Book(std::string title, std::string author) {
    this->title = title;
    this->author = author;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}