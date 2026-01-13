#include <bits/stdc++.h>
using namespace std;

class book {
    public:
    string title;
    string author;
    int year;
    book (string title , string author, int year) : title(title) , author(author) , year(year){}
    
    void display () {
        cout << "the title of the book is : " << title << "\n" <<
        "the author of the book is : " << author << "\n" <<
        "the year of publishing : " << year;
    }
    
} ;

int main() {
	string tt,auth;
	int yr ;
	cin >> tt >> auth >> yr;
	book bk1(tt,auth,yr);
	bk1.display();
	return 0;

}
