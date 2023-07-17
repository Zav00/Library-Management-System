#ifndef LIBRARY_MANAGEMENT_SYSTEM_MEMBER_H
#define LIBRARY_MANAGEMENT_SYSTEM_MEMBER_H
#include <string>
#include "Book.h"
class Member {
        private:
        string name;
        string contactInfo;
        vector<Book*> borrowedBooks;

        public:
        Member(const string& name, const string& contactInfo)
        : name(name), contactInfo(contactInfo) {}

        const string& getName() const {
            return name;
        }

        const string& getContactInfo() const {
            return contactInfo;
        }

        const vector<Book*>& getBorrowedBooks() const {
            return borrowedBooks;
        }

        void borrowBook(Book* book) {
            borrowedBooks.push_back(book);
            book->setAvailable(false);
        }

        void returnBook(Book* book) {
            for (size_t i = 0; i < borrowedBooks.size(); i++) {
                if (borrowedBooks[i] == book) {
                    borrowedBooks.erase(borrowedBooks.begin() + i);
                    book->setAvailable(true);
                    break;
                }
            }
        }
};
#endif //LIBRARY_MANAGEMENT_SYSTEM_MEMBER_H
