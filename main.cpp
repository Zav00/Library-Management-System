#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Library.h"




int main() {
    Library library;

    // Book Registration
    Book book1("Book 1", {"Author 1"}, "Genre 1");
    Book book2("Book 2", {"Author 2"}, "Genre 2");
    library.registerBook(book1);
    library.registerBook(book2);

    // Member Registration
    Member member1("Member 1", "Contact 1");
    Member member2("Member 2", "Contact 2");
    library.registerMember(member1);
    library.registerMember(member2);

    // Borrowing and Returning
    library.borrowBook("Book 1", "Member 1");
    library.returnBook("Book 1", "Member 1");

    // Search Functionality
    Book* foundBook = library.findBookByTitle("Book 2");
    if (foundBook) {
        cout << "Book found: " << foundBook->getTitle() << endl;
    } else {
        cout << "Book not found." << endl;
    }

    return 0;
}