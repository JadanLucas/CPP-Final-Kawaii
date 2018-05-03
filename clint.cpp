#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) {
	
	/*
	Name | Blue
	Narrator | Green
	Amazon Alexa | 95 Magenta
	Steve Clinton | Brown/Yellow
	*/
	
	
	string name = "\033[1;96m-";
	string color = "";
	string narrator = "\033[1;92m-Narrator: ";
	//Narrator Speach
	cout << "Please Enter your desired name: ";
	cin >> name; 
	cout << endl;
	
	cout << narrator << "\033[1;92mHello, I am your Narrator! I will assist you towards your special moment with a beauty of a woman.\033[0m\n" << endl;
	
	//Characters first decision
	cout << name << ": ..." << endl;
	cout << "0 | (talk to her)" << endl;
	cout << "0 | (finish your coffe and leave)" << endl;
	
	 
}
