#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Name: ";
                cin >> s[count].name;
                cout << "Enter Roll: ";
                cin >> s[count].roll;
                cout << "Enter Marks: ";
                cin >> s[count].marks;
                count++;
                cout << "Student Added Successfully!\n";
                break;

            case 2:
                for(int i = 0; i < count; i++) {
                    cout << "\nStudent " << i+1 << endl;
                    cout << "Name: " << s[i].name << endl;
                    cout << "Roll: " << s[i].roll << endl;
                    cout << "Marks: " << s[i].marks << endl;
                }
                break;

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}