
#ifndef LIBRARY_MANAGEMENT_SYSTEM_BOOK_H
#define LIBRARY_MANAGEMENT_SYSTEM_BOOK_H
using namespace std;
#include <string>
class Book {
private:
    string title;
    vector<string> authors;
    string genre;
    bool available;

public:
    Book(const string& title, const vector<string>& authors, const string& genre)
            : title(title), authors(authors), genre(genre), available(true) {}

    const string& getTitle() const {
        return title;
    }

    const vector<string>& getAuthors() const {
        return authors;
    }

    const string& getGenre() const {
        return genre;
    }

    bool isAvailable() const {
        return available;
    }

    void setAvailable(bool availability) {
        available = availability;
    }
};

#endif //LIBRARY_MANAGEMENT_SYSTEM_BOOK_H
