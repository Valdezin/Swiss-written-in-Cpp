#include <iostream>
#include <string>
using namespace std;

int main(){
  cout << "SWISS Military VLDZ\n\n Please choose a function\n\nType 1 to print Author's Name\nType 2 for Simp(le) Calculator\n";
  int van;
  cout << "Enter Number: ";
  cin >> van;

  if (van == 1) {
				cout << "VLDZ";
			}

  else if (van == 2) {
    int op;
    int num1, num2;

    //answers

    
    cout << "Simp(le) Calculator" << endl;
   cout << "Please type 1 to use Addition" << endl;
    cout << "Please type 2 to use Subtraction" << endl;
    cout << "Please type 3 to use Multiplication" << endl;

     cout << "Enter Number: ";
     cin >> op;

    cout << "Please enter number 1: " << endl;
    cin >>  num1;

    cout << "Please enter number 2: " << endl;
    cin >>  num2;

    int suw = num1+num2;
    int sub = num1-num2;
    int mul = num1*num2;

    if(op==1){
      cout << "Combination is: " << suw<< endl;
    }

        else if(op==2){
      cout << "Difference is: " << sub << endl;
    }

        else if(op==3){
      cout << "Product is: " << mul << endl;
    }

    else if (op>=4){
      cout << "Selected number is not even a function!";
    }

    
}
  }
