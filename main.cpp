#include <iostream>
using namespace std;

void showMenu();

int main()
{
    int choice;

   showMenu();

   cout << "Enter choices: ";
   cin >> choice;

   if(choice == 1)
   {
    cout << "Quiz started";
   } 
    else if(choice ==2) 
    {
       cout << "Exiting...";
   }
    else
    {
       cout << "Invalid choice";
   }
   return 0;

}

void showMenu()
{
    cout << "====QUIZ GAME ====" << endl;
    cout << "1. Start  QUIZ" << endl;
    cout << "2. Exit" << endl;
}


