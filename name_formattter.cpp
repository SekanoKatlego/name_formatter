#include <iostream>
#include <string>
using namespace std;
void inputData(string & nameP, string & addr1P, string & addr2P, string & postalCodeP)
{
    cout << "Enter name: ";
    getline(cin , nameP, '\n');
    cout << "Enter address 1: ";
    getline(cin , addr1P, '\n');
    cout << "Enter address 2: ";
    getline(cin , addr2P, '\n');
    cout << "Enter postal code: ";
    getline(cin , postalCodeP, '\n');
}

void displayData(string nameP, string addr1P, string addr2P, string postalCodeP)
{
    cout << endl;
    cout << nameP << endl;
    cout << addr1P << endl;
    cout << addr2P <<  endl;
    cout << postalCodeP << endl;
    cout <<  endl;
}
int main()
{
    string name, addr1, addr2, postalCode;
    inputData(name, addr1, addr2, postalCode);
    displayData(name, addr1, addr2, postalCode);
return 0;
}
