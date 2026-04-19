#include <iostream>
#include <fstream>
using namespace std;

struct Expense {
    float amount;
    string category;
};

void addExpense() {
    Expense e;
    ofstream file("expenses.txt", ios::app);

    cout << "Enter amount: ";
    cin >> e.amount;
    cout << "Enter category: ";
    cin >> e.category;

    file << e.amount << " " << e.category << endl;
    file.close();

    cout << "Expense added!\n";
}

void viewExpenses() {
    Expense e;
    ifstream file("expenses.txt");

    cout << "\nExpenses:\n";
    while (file >> e.amount >> e.category) {
        cout << "Amount: " << e.amount << " | Category: " << e.category << endl;
    }

    file.close();
}

void totalExpense() {
    Expense e;
    ifstream file("expenses.txt");
    float total = 0;

    while (file >> e.amount >> e.category) {
        total += e.amount;
    }

    cout << "Total Expense: " << total << endl;
    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Expense\n2. View Expenses\n3. Total Expense\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addExpense(); break;
            case 2: viewExpenses(); break;
            case 3: totalExpense(); break;
        }

    } while(choice != 4);

    return 0;
}
