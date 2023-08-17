#include <iostream>
using namespace std;

class Array {
    public:
        int arr[100]; 
        int length = 0; 
        
        void create() {
            cout << "Enter length of array: ";
            cin >> length;
            cout << "Now enter elements of array:" << endl;
            for (int i = 0; i < length; i++) {
                cin >> arr[i];
            }
            cout << "Array created successfully!" << endl;
        }

        void show() {
            cout << "Elements of array:" << endl;
            for (int i = 0; i < length; i++) {
                cout << arr[i] << endl;
            }
        }

        void insert() {
            int insertPos;
            cout << "Enter the position where you want to enter the element: ";
            cin >> insertPos;
            if (insertPos < 0 || insertPos > length) {
                cout << "Invalid position." << endl;
                return;
            }
            cout << "Enter the element you want to insert: ";
            int insertValue;
            cin >> insertValue;
            
            
            
            arr[insertPos] = insertValue;
            
            cout << "Element inserted successfully!" << endl;
        }

        void remove() {
            int deletePos;
            cout << "Enter the position of the element you want to delete: ";
            cin >> deletePos;
            if (deletePos < 0 || deletePos >= length) {
                cout << "Invalid position." << endl;
                return;
            }
            
            // Shift elements to the left to fill the gap left by the deleted element
            for (int i = deletePos; i < length - 1; i++) {
                arr[i] = arr[i + 1];
            }
            
            length--;
            cout << "Element deleted successfully!" << endl;
        }
};

int main() {
    Array obj1;
    int choice;
    
    while (true) {
        cout << "Enter 1 to create an array" << endl;
        cout << "Enter 2 to display array elements" << endl;
        cout << "Enter 3 to insert an element" << endl;
        cout << "Enter 4 to delete an element" << endl;
        cout << "Enter 5 to exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                obj1.create();
                break;
            case 2:
            	obj1.create();
                obj1.show();
                break;
            case 3:
            	obj1.create();
                obj1.show();
                obj1.insert();
                obj1.show();
                break;
            case 4:
            	obj1.create();
                obj1.show();
                obj1.remove();
                obj1.show();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }
    
    return 0;
}
