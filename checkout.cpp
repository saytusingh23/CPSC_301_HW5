// Saytu Singh
// Section 03
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "person.cpp"
#include "book.cpp"

using namespace std;

void printMenu()
{
    cout << "----------Library Book Rental System----------" << endl;
    cout << "1.  Book checkout" << endl;
    cout << "2.  Book return" << endl;
    cout << "3.  View all available books" << endl;
    cout << "4.  View all outstanding rentals" << endl;
    cout << "5.  View outstanding rentals for a cardholder" << endl;
    cout << "6.  Open new library card" << endl;
    cout << "7.  Close library card" << endl;
    cout << "8.  Exit system" << endl;
    cout << "Please enter a choice: ";
}

// You are not obligated to use these function declarations - they're just given as examples
void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders)
{
    ifstream myFile;
    int book, ID;
    myFile.open("rentals.txt");
    
    while(myFile >> Book >> ID)
    {
        for (int i = 0; i < myBooks.size(); i++)
            

myFile.close();
}
void readBooks(vector< Book *> & myBooks)
{
    ifstream myFile;
    int ID_Num;
    string TITLE, AUTHOR, CATEGORY;
    myFile.open("books.txt");
    
    while(myFile >> ID_Num)
    {
        getline(myFile, CATEGORY);
        getline(myFile, AUTHOR);
        getline(myFile, TITLE);
        myBooks.emplace_back(new Book(ID_Num, TITLE, AUTHOR, CATEGORY));
    }
    
    myFile.close();
}

int readPersons(vector<Person *> & myCardholders)
{
    ifstream myFile;
    int ID, acti;
    int newID = 0;
    string FName, LName;
    myFile.open("persons.txt");
    
    while(myFile >> ID >> acti >> FName >> LName)
    {
        myCardholders.emplace_back(new Person (ID,acti, FName, LName));
    }
    
    myFile.close();
    for (int i = 0; i < myCardholders.size(); i++)
    {
        
}
 void openCard(vector<Person *> & myCardholders, int nextID)
{
    string firstName = "";
    string lastName = "";
    string fullName = "";
    
    cout << "Please enter your first name : " << endl;
    cin >> firstName;
    cout << "Please enter your last name: " << endl;
    cin >> lastName;
    fullName = firstName + "" + lastName ;
    
    for(int i = 0; i < myCardholders.size(); i++)
    {
        if (fullName == myCardholders.at(i)->fullName())
        {
            myCardholders.at(i)->setActive(true);
            cout << "Card ID" << myCardholders.at(i)->getId() << "active" << endl << "Cardholder: " << fullName;
        }
        {
            myCardholders.push_back(new Person(nextID, true, firstName, lastName));
            cout << "Card ID: " << nextID << "active " << "Cardholder: " << fullName << endl;
        }
    }
    
 
 Book * searchBook(vector<Book *> myBooks, int id)
{
 return nullptr;
 }


int main()
{
    vector<Book *> books;
    vector<Person *> cardholders;
    
    readRentals(myBooks, myCardholders);
    readBooks(myBooks, myCardholders);
    
    int choice;
    do
    {
        // If you use cin anywhere, don't forget that you have to handle the <ENTER> key that
        // the user pressed when entering a menu option. This is still in the input stream.
        printMenu();
        cin >> choice;
        switch(choice)
        {
            case 1:
                Book_checkout(myBooks, myCardholders);
            break;
                
            case 2:
                Book_return(myBooks);
            break;
                
            case 3:
                Available_Books(myBooks);
            break;
                
            case 4:
                Rental_out(myBooks, myCardholders);
            break;
                
            case 5:
                Card_Rental(mBooks, myCardholders);
            break;
                
            case 6:
                nextID = openCard(myCardholders, nextID);
            break;
                
            case 7:
                Close_card(myCardholders);
            break;
                
            case 8:
                updateFile(myBooks, myCardholders);
                delete vectors(myBooks, myCardholders);
            break;
                
            default:
                cout << "Invalid entry" << endl;
            break;
        }
        cout << endl;
    } while(choice != 8);
    return 0;
}
