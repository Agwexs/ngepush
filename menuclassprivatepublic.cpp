#include <iostream>
using namespace std;

class Menu {
  private:
    int choice;
    
  public:
    void display() {
      cout << "Menu:\n";
      cout << "1. Option 1\n";
      cout << "2. Option 2\n";
      cout << "3. Option 3\n";
      cout << "4. Exit\n";
      cout << "Enter your choice (1-4): ";
      cin >> choice;
    }
    
    void process() {
      switch(getChoice()) {
        case 1:
          cout << "Option 1 selected\n";
          break;
        case 2:
          cout << "Option 2 selected\n";
          break;
        case 3:
          cout << "Option 3 selected\n";
          break;
        case 4:
          cout << "Exiting program...\n";
          break;
        default:
          cout << "Invalid choice\n";
          break;
      }
    }
    
    int getChoice() {
      return choice;
    }
};

int main() {
  Menu menu;
  do {
    menu.display();
    menu.process();
  } while(menu.getChoice() != 4);
  return 0;
}

