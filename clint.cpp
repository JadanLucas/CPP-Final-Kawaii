#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
	
	/*
	Name | Blue
	Narrator | Green
	Amazon Alexa | 95 Magenta
	Steve Clinton | Brown/Yellow
	*/
	ifstream inFile;
	
	string name  = "";
	string color = "";
	string ans1  = "";
	
	//Narrator Speach
	cout << "Please Enter your desired name: ";
	cin  >> name; 
	cout << endl;
	
	cout << "\033[1;92mHello, I am your Narrator! I will assist you in your love quest! Whenever the text is green, that is me speaking to you in your head. Nobody else can hear!\033[0m\n" << endl;
	
	//Characters first decision
	cout << "\033[1;96m" << name << "\033[1;96m:\033[0m..." << endl;
	cout << "1 | (talk to her)" << endl;
	cout << "2 | (finish your coffee and leave)" << endl;
	cin  >> ans1;
	
	
	inFile.open("Amazon.txt");
		if (ans1 == "1"){
		cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Hey.. I'm " << name << ". Nice to meet you." << endl;

	}
		else if (ans1 == "2"){
		cout << "\033[1;92mHey! Why are you leaving? you'll never find love like this!\033[0m\n" << endl;
		cout << endl;
		cout << "Game Over" << endl;
	}
		else if (ans1 >= "3") {
		cout << "Not an available choice." << endl;
		cout << endl;
		cout << "Game Over" << endl;
		}
	
		
}
