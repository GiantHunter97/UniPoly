/*
* CECS 2223, Computer Programming II Lab
* Fall 2022, Sec. 05
* Date: October 19, 2022
* Topic: Team Project
* File name: teamProject.cpp
* This file implements the Dealer class
* Team Members: member #1 name, member #1 ID#, member #2 name, member #2 ID#
*/

int menu(); // options menu
bool execute(int,Dealer&); // implements the action from the menu

int main(){
	Dealer poli("Poli Auto Sales");
	// During program execution add at least six cars to inventory, making sure
	// to add at least two cars of the same brand and model, and two cars of the 
	// same brand but different models. You should also sell at least three cars.
	while (execute(menu(),poli));
	// write a statement which prints the phrase
	// "Program developed by [student 1], ID#[student 1 ID NUMBER], and 
	// [student 2], ID#[student 2 ID NUMBER]
	// where the square brackets and the text within is substituted with
	// each student's personal information.
	
	system("pause"); // the pause statement is optional
	return 0; // the return statement is required
}

// The menu method presents a list of options to the user.
// It has been defined for you
int menu(){
	int option = 0;
	cout << "Select one of the following options:\n";
	cout << "\t1. Add a car to inventory\n";
	cout << "\t2. Sell a car by brand and model from inventory\n";
	cout << "\t3. Sell a car by serial number from inventory\n";
	cout << "\t4. Print the brand inventory\n";
	cout << "\t5. Print the model inventory\n";
	cout << "\t6. Print the complete inventory\n";
	cout << "\t7. Exit the program\n";
	cout << "\n\tYour selection: ";
	cin >> option;
	cout << endl;
	return option;
}

// The execute method implements the menu action selected by the user and 
// receives the option number and the address of a Dealer object as parameters.
// Implement the logic using a switch-case structure where each case value
// is that of a valid option number. Make sure to include the default case!
// The method returns false only if the option selected is option 7,
// otherwise, it returns true.
bool execute(???){
	// declare any needed variables before the switch structure
	
	switch (???) {
	case 1:
		
	case 2:
		
	case 3:
		
	case 4:
		
	case 5:
		
	case 6:	
	
	case 7:
	
	default:
		cout << "\n\tERROR! Option #" << option << " is not valid.\n\tTry again!\n\n";
		return true;
	}
}