#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        Book(string name){
            cout << "Book " << name << " created" << endl;
        }
};

int main(){
    Book book1("Harry Potter");
    book1.title = "Harry Potter";
    book1.author = "J.K Rowling";
    book1.pages = 534;

    cout << book1.title;
    return 0;
}