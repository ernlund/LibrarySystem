#include <iostream>
#include "Library.h"
#include "Book.h"

int main() {
    Library lib;
    lib.loadFromFile("books.txt"); // LOAD

    int choice;

    while (true) {
        std::cout << "\n===== LIBRARY MENU =====\n";
        std::cout << "1. Add book\n";
        std::cout << "2. List books\n";
        std::cout << "3. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string title, author;

            std::cin.ignore();

            std::cout << "Enter title: ";
            std::getline(std::cin, title);

            std::cout << "Enter author: ";
            std::getline(std::cin, author);

            lib.addBook(Book(title, author));
        }
        else if (choice == 2) {
            lib.listBooks();
        }
        else if (choice == 3) {
            lib.saveToFile("books.txt"); // SAVE
            std::cout << "Saved & goodbye!\n";
            break;
        }
    }

    return 0;
}
