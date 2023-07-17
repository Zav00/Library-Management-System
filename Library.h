
#ifndef LIBRARY_MANAGEMENT_SYSTEM_LIBRARY_H
#define LIBRARY_MANAGEMENT_SYSTEM_LIBRARY_H
#include <vector>
#include "Member.h"
class Library {
private:
    vector<Book> books;
    vector<Member> members;

public:
    void registerBook(const Book& book) {
        books.push_back(book);
    }

    void registerMember(const Member& member) {
        members.push_back(member);
    }

    void borrowBook(const string& bookTitle, const string& memberName) {
        Book* book = findBookByTitle(bookTitle);
        Member* member = findMemberByName(memberName);

        if (book && member) {
            member->borrowBook(book);
            cout << "Book \"" << book->getTitle() << "\" successfully borrowed by " << member->getName() << endl;
        } else {
            cout << "Book or member not found." << endl;
        }
    }

    void returnBook(const string& bookTitle, const string& memberName) {
        Book* book = findBookByTitle(bookTitle);
        Member* member = findMemberByName(memberName);

        if (book && member) {
            member->returnBook(book);
            cout << "Book \"" << book->getTitle() << "\" successfully returned by " << member->getName() << endl;
        } else {
            cout << "Book or member not found." << endl;
        }
    }

    Book* findBookByTitle(const string& title) {
        for (Book& book : books) {
            if (book.getTitle() == title) {
                return &book;
            }
        }
        return nullptr;
    }

    Member* findMemberByName(const string& name) {
        for (Member& member : members) {
            if (member.getName() == name) {
                return &member;
            }
        }
        return nullptr;
    }
};

#endif //LIBRARY_MANAGEMENT_SYSTEM_LIBRARY_H
