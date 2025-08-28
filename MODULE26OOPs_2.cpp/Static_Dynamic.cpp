#include<iostream>
using namespace std;
class Name{
    public:
    int roll_no;
    int age ;

    void setRoll_no(int roll_no){
        this->roll_no = roll_no;
    }
    void setAge(int age){
        this->age = age;
    }
    int getRoll_no(){
        return roll_no;
    }
    int getAge(){
        return age;
    }
};

int main(){
    Name Saurav; // static memory means compile time allocate memory
    Name *x = new Name; // Dynamic memory means run time allocate memory
    Name Gaurav = *x;

    Saurav.setRoll_no(34);
    Saurav.setAge(23);
    Gaurav.setRoll_no(89);
    Gaurav.setAge(26);


    cout<<"Roll no is "<<Saurav.getRoll_no()<<endl;
    cout<<"Age is "<<Saurav.getAge()<<endl;
    cout<<"Roll no is "<<Gaurav.getRoll_no()<<endl;
    cout<<"Age is "<<Gaurav.getAge()<<endl;

    return 0;
}