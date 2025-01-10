#include <iostream>
using namespace std;

class Book {
public:
    // Data members
    string name;
    int price;
    int noOfPages;

    // Check if the book's price is below a certain value
    bool isAffordable(int p) {
        return price < p;
    }

    // Check if the book is present based on its name
    bool isBookPresent(string book) {
        return name == book;
    }
};

int main() {
    cout << "SAURAV RAJPUT" << endl;
    int n ;
    cout<<endl<<"enter";
    cin>>n;
    cout<<"ans is"<<n<<endl;

    // Create a Book object
    Book harryPotter;
    harryPotter.name = "harry";
    harryPotter.price = 1000;
    harryPotter.noOfPages = 484;

    // Test the methods and display meaningful output
    int budget = 1500;
    string searchBook = "harry";

    // Check affordability
    if (harryPotter.isAffordable(budget)) {
        cout << "The book \"" << harryPotter.name << "\" is affordable within the budget of " << budget << "." << endl;
    } else {
        cout << "The book \"" << harryPotter.name << "\" is not affordable within the budget of " << budget << "." << endl;
    }

    // Check if the book is present
    if (harryPotter.isBookPresent(searchBook)) {
        cout << "The book \"" << searchBook << "\" is available." << endl;
    } else {
        cout << "The book \"" << searchBook << "\" is not available." << endl;
    }

    return 0;
}










// #include<iostream>
// using namespace std;

// class Book{
//     public:
//     string name; // data members 
//     int price;
//     int noOfPages;
    
//     int countBook(int p){
//         if(price < p) return 1;
//         else return 0;
//     }

//     bool isBookPresent(string book){
//             if(name == book) return true; 
//             else return false;
//     }
// };


// int main(){
    
//    cout<<"SAURAV RAJPUT"<<endl;
//     //int a = 10 ; // variable 
//     //Player saurav ; // abb yeh variable nhi actually yeh object hai

//     Book harryPotter;
//     harryPotter.name = "harry";
//     harryPotter.price = 1000;
//     harryPotter.noOfPages = 484;

//     cout<<harryPotter.countBook(1000)<<endl;
//     cout<<harryPotter.isBookPresent("harry")<<endl;
    
// }