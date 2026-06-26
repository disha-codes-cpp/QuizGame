#include <iostream>
using namespace std;

void showMenu();
void startQuiz();
void showResult(int score);
int main()
{
    int choice;

   showMenu();

   cout << "Enter choices: ";
   cin >> choice;

   if(choice == 1)
   {
    cout << "Quiz started!\n\n";
      startQuiz();
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
void startQuiz()
{
    int answer;
    int score = 0;
     // Question 1
    cout << "\nQuestion 1\n";
    cout << "Capital of India?\n";
    cout << "1. Mumbai\n";
    cout << "2. Delhi\n";
    cout << "3. Chennai\n";
    cout << "4. Kolkata\n";

    cin >> answer;

    if( answer ==2)
    {
        score++;
    }
  // Question 2
       cout <<"\nQuestion 2\n";
       cout <<"c++ is a ?\n";
       cout << "1. Database\n";
       cout << "2. Programming language\n";
       cout << "3. Browser\n";
       cout << "4. OS\n";
        
       cin >> answer;

       if( answer == 2)
        {
        score++;
       }
        // Question 3
       cout << "\nQuestion 3\n";
       cout << "2 + 2 = ?\n";
       cout << "1. 5\n";
       cout << "2. 4\n";
       cout << "3. 3\n";
       cout << "4. 7\n";
        
       cin >> answer;

       if (answer ==2)
       {
        score++;
       }
       showResult(score);

    }
         
    void showResult(int score)
    {
        cout << "\n==== Result ====\n";
        cout << "Your Final Score: " << score << "/3\n";

        if(score ==3)
            cout << "Excellent!\n";
            else if(score == 2)
            cout <<"Good Job!\n";
            else
            cout << "Keep  Practicing!\n";

    }


          




