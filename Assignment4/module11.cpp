#include <iostream>
#include <string>
using namespace std;

struct Patient
{
    int id; 
    string name;
    int age;
};

int main(){
    Patient patient1;
    patient1.id = 328;
    patient1.name = "Candy Zeng";
    patient1.age = 19;
    Patient*p = &patient1;
    
    cout << "ID: " << p->id << endl;
    cout << "Name:" << p->name << endl;
    cout << "Age:" << p->age << endl;

return 0;
}

//Knowledge check: 
//the pointer takes the address of the variable that is attached to the & and points the computer
//towards the information stored inside that address. For example, in our code we have the address
// of patient1, so the computer takes the information associated with patient1 and outputs it. 

//The & operation means that it is taking the address/location of whatever is attached to it. 
//For example, in CodeBeauty's video she shows how the numbers she inputs have their own location
//numbers. However, our program lists and points to a struct with information such as id, name, 
//and age that computer needs to pay attention to. So instead of outputting a string of numbers, 
//our code results in the information we pointed the computer towards. 

//Output: 
//ID: 328
//Name:Candy Zeng
//Age:19
