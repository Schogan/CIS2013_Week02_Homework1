#include <iostream>

using namespace std;

int main(){
	int first_number = 1;
	int second_number = 1;
	char action;
	char question;
	bool keep_running = true;
	
	while (keep_running){
	// request for input and inputs from user
		cout << "Please enter your first number: " << endl;
		cin >> first_number;
		cout << "Please enter your second number: " << endl;
		cin >> second_number;
		// user selects the action to do
		cout << "What would you like to do? Please enter one of the following: " << endl <<
			"+" << endl << "-" << endl << "*" << endl << "/" << endl;
		cin >> action;
	
	//where the action actually takes place on the users information
		if (action == '+'){
			cout << "Your answer is: ";
			cout << first_number + second_number << endl;
		}
		
		if (action == '-'){
			cout << "Your answer is: ";
			cout << first_number - second_number << endl;
		}
		
		if (action == '*'){
			cout << "Your answer is: ";
			cout << first_number * second_number << endl;
		}
		
		if (action == '/'){
			cout << "Your answer is: ";
			cout << first_number / second_number << endl;
		}
		// user decides to continue or not
		cout << "Do you want to keep running? Enter y or n" << endl;
		cin >> question;
		if (question != 'y'){keep_running = false;}
	}
}