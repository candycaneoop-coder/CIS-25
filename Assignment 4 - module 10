#include <iostream>
using namespace std;

class Product {
    private:
    int id; 
    string name;
    float price;

public: 
Product(int i, string n, float p){
    id = i;
    name = n;
    price = p;
    cout <<"Constructor called\n";
}

~Product(){
    cout <<"Destructor called\n";
}

void printDetails(){
    cout <<"ID: " << id <<", Name: " << name << ", Price: $" << price << endl;
}
};

int main(){
    Product p(101, "Notebook", 4.99);
    p.printDetails();
    return 0;
}

//Knowledge check questions:
//Constructors in this program take the code we inputted into line 11-14 to determine the order of what information is being given
//in our output. For example, the order of our product is 101, notebook, and then 4.99. The constructor looks like what we wrote
//for lines 11-14 and see that first will be id, second is name, and third is price. Then it prints "constructor called" to show 
//that our constructor saved the correct information to our product. Destructors in this code is used to delete the product when
//the program is finished running. It prints out "Destructed called" to show that the product will be deleted from the computer.

//A similarity that the class, constructor, and destructor share is that they share the same name. When we create a class with a 
//specific name, the construtor and destructor then has to have the same name. An article on IBM called 
//"Overview of constructors and destructors (C++ only)" mentions that constructors and destructors do not have return types or 
//return values. Additionally the class itself does have return types of return values either. Specifically, the class can contain
//return values, but the class itself doesnt have any. 

//Expected code output
//Constructor called
//ID: 101, Name: Notebook, Price: $4.99
//Destructor called
