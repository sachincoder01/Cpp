#include <iostream>
#include <string>

using namespace std;

int main(){

    cout << "Hello World " << "\n" << "How are you : " << "\n" << "Sachin and Arbaj ";
    cout << "Good Morning" << endl;
    cout << "Greeting : Namste Sir, " << endl;

    int num = 10 ;
    cout << "Number : " << num << endl;

    char ch = 'A';
    cout << "First letter of the character : " << ch << endl;

    string name = "Sachin and Arbaj";
    cout << "Name : " << name << endl;

    int num2;
    cout << "Enter your number : " << endl;
    cin >> num2;
    cout << "I have a number : " << num2 << endl;

    if(num2 > 18){
        cout << "number is bigger than 18." << endl;
    }
    else{
        cout << "number is not bigger than 18." << endl;
    }
    return 0;
}