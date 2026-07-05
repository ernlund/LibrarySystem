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

//save the library to a file 
void Library::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);

    for (const Book& b : books) {
        file << b.getTitle() << "," << b.getAuthor() << "\n";
    }

    file.close();
}

//load the library from a file
void Library::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);

    if (!file.is_open()) return;

    books.clear();

    std::string line;

    while (std::getline(file, line)) {
        size_t pos = line.find(",");

        std::string title = line.substr(0, pos);
        std::string author = line.substr(pos + 1);

        books.push_back(Book(title, author));
    }

    file.close();
}