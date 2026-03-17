#include <iostream>
using namespace std;

int main() {
    string name, branch, section, email, parentName, address, type;
    int rollNo;
    long long contact;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cin.ignore();

    cout << "Enter Branch: ";
    getline(cin, branch);

    cout << "Enter Section: ";
    getline(cin, section);

    cout << "Enter Email: ";
    getline(cin, email);

    cout << "Enter Parent Name: ";
    getline(cin, parentName);

    cout << "Enter Contact Number: ";
    cin >> contact;
    cin.ignore();

    cout << "Enter Address: ";
    getline(cin, address);

    cout << "Day Scholar or Hosteller: ";
    getline(cin, type);

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Branch: " << branch << endl;
    cout << "Section: " << section << endl;
    cout << "Email: " << email << endl;
    cout << "Parent Name: " << parentName << endl;
    cout << "Contact: " << contact << endl;
    cout << "Address: " << address << endl;
    cout << "Type: " << type << endl;

    return 0;
}