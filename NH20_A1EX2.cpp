// Grade Book #20
// Program displays the greeting "Hello my name is Rosie"
// User is asked for their name and user responds
// User is greeted by name

#include <iostream>
#include <string>
using namespace std;

int main()
{
string userName;

    cout << "Hello my name is Rosie." << endl;

    //Automated greeting to user

    cout << "What is your name?" << endl;

    // Asks for name

    getline(cin,userName);

    // User name is provided

    cout << "Hello " << userName << endl;

     //Output greeting with user name

    return 0;
}
