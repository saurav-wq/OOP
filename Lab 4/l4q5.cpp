#include <iostream>
using namespace std;

class Author {
public:
    string name, degree;
    void input() {
        cout << "Enter Author Name and Degree: ";
        cin >> name >> degree;
    }
    void display() {
        cout << "Author Name: " << name << "\nDegree: " << degree << endl;
    }
};

class Publication {
public:
    string location, pub_name;
    void input() {
        cout << "Enter Publication Name and Location: ";
        cin >> pub_name >> location;
    }
    void display() {
        cout << "Publication: " << pub_name << "\nLocation: " << location << endl;
    }
};

class Book {
    string title;
    int pages;
    float price;
    Author a;
    Publication p;
public:
    void input() {
        cout << "Enter Book Title, Pages, and Price: ";
        cin >> title >> pages >> price;
        a.input();
        p.input();
    }
    void display() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << "\nPages: " << pages << "\nPrice: " << price << endl;
        a.display();
        p.display();
    }
};

int main() {
    Book b;
    b.input();
    b.display();
    return 0;
}
