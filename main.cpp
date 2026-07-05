#include <iostream>
#include "Library.h"
#include "Book.h"

int main() {
    Library lib;
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

            std::cin.ignore(); // fjerner newline fra input buffer

            std::cout << "Enter title: ";
            std::getline(std::cin, title);

            std::cout << "Enter author: ";
            std::getline(std::cin, author);

            lib.addBook(Book(title, author));

            std::cout << "Book added!\n";
        }
        else if (choice == 2) {
            lib.listBooks();
        }
        else if (choice == 3) {
            std::cout << "Goodbye!\n";
            break;
        }
        else {
            std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}