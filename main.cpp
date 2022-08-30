#include <iostream>
#include <string>
using namespace std;

int main(){
  cout << "SWISS Military VLDZ\n\n Please choose a function\n\nType 1 to print Author's Name\nType 2 for Addition\n";
  int van;
  cout << "Enter Number: ";
  cin >> van;

  if (van == 1) {
				cout << "Example of Sample C++, VLDZ";
			}

  else if (van == 2) {
    int q1;
    int q2;
    int sum;
    cout << "Enter First Number: ";
    cin >> q1;
    cout << "Enter Second Number: ";
    cin >> q2;

    sum = q1 + q2;

    cout << "Combination is: " << sum << endl;
    
}
  }
