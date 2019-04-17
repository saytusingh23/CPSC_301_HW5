#include "book.h"

Book::Book(int id, string bookName, string auth, string cat)
{
    BOOK_ID = id;
    TITLE = bookName;
    AUTHOR = auth;
    CATEGORY = cat;
}


string Book::getTitle()
{
    return TITLE;
}

string Book::getAuthor()
{
    return AUTHOR;
}

string Book::getCategory()
{
    return CATEGORY;
}

int Book::getId()
{
    return BOOK_ID;
}
void Book::setPersonPtr(Person * ptr)
{
    personPtr = ptr;
}

Person * Book::getPersonPtr()
{
    return personPtr;
}
