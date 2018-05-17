#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[]) {
	
	/*
	Name          | Blue
	Narrator      | Green
	Amazon Alexa  | 95 Magenta
	Steve Clinton | Brown/Yellow
	*/
	
	ifstream inFile;
	string amazon = "";
	string name   = "";
	string buffer = "";
	string ans1   = "";
	string ans2   = "";

	
	//Name Choice
	cout << "Please Enter your desired name: ";
	cin  >> name; 
	cout << endl;
	
	//Narrator
	cout << "\033[1;92mHello, I am your Narrator! I will assist you in your love quest! Whenever the text is green, that is me speaking to you in your head. Nobody else can hear!\033[0m\n" << endl;
	
	//Characters first decision
	cout << "\033[1;96m" << name << "\033[1;96m:\033[0m ..." << endl;
	cout << "1 | (talk to her)" << endl;
	cout << "2 | (finish your coffee and leave)" << endl;
	cin  >> ans1;
	cout << endl;
	
	//Response of Choice and answer from Amazon
	inFile.open("Amazon.txt");
	if (inFile.is_open()) {
		
		
		
	
			if (ans1 != "1" && ans1 != "2"){
				cout << "Invalid Answer" << endl;
			
	
			}	
				if (ans1 == "1"){
					cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Hey.. I'm " << name << ". Nice to meet you." << endl;
					getline(inFile, amazon, '#');
					getline(inFile, amazon);
					cout << "\033[1;95mAmazoné:\033[0m" << amazon << endl;
					cout << endl;
				}	
				else if (ans1 == "2"){
					cout << endl;
					cout << "\033[1;92mHey! Why are you leaving? You'll never find love like this!\033[0m\n" << endl;
					cout << endl;
					cout << "\033[1;31mGame Over\033[0m" << endl;
					return 0;
			
				}
		
		//dialogue of both Amazon & Character 
		cout << "\033[1;92mAfter talking for a bit, you and Amazoné Alexia decide to leave, but not without speaking a bit once more.\033[0m\n"        << endl;
		cout << "\033[1;95mAmazoné:\033[0m" << " Hey, it was nice talking to you.. Give me your phone, let's trade numbers." << endl;
		cout << endl;
		cout << "\033[1;92mAfter exchanging numbers, you two parted ways.\033[0m\n" << endl;
		cout << endl;
		
		//Chapter 2
		cout << "Chapter 2 (Enter any character to continue)";
		cin >> buffer;
		cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " ..." << endl;
		cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " What should I do today?" << endl;
		cout << "3 | (call Amazoné Alexia)" << endl;
		cout << "4 | (Play Video Games)     " << endl;
		cin >> ans2;
			
			//Response of Choice of Chapter 2
			if (ans2 != "3" && ans2 != "4"){
				cout << "\033[1;31mInvalid Answer Try Again\033[0m" << endl;
	
			}	
				if (ans2 == "3"){
					cout << "\033[1;92mGood choice! You Decide to call Amazoné.\033[0m\n" << endl;
					cout << "ring ring... ring ring..." << endl;
					
					getline(inFile, amazon, '#');
					getline(inFile, amazon);
					cout << "\033[1;95mAmazoné:\033[0m " << amazon << endl;
					cout << endl;
				}	
				else if (ans2 == "4"){
					cout << endl;
					cout << "\033[1;92mHorrible Choice. You will call Amazoné Alexia anyways.\033[0m\n" << endl;
					getline(inFile, amazon, '#');
					getline(inFile, amazon);
					cout << "ring ring... ring ring..." << endl;
					cout << "\033[1;95mAmazoné:\033[0m " << amazon << endl;
					cout << endl;
			
				}
			
				
				
		
			//dialogue of both Amazon & Character 
			cout << "\033[1;92mIt's Amazoné Alexia! After talking on the phone for a bit, Amazoné Alexia decides to ask something out of the blue.\033[0m\n" << endl;
			cout << "\033[1;95mAmazoné:\033[0m" << " Hey, Let's get together tonight! We can meet at the arcade!" << endl;
			cout << "\033[1;96m" << name << "\033[1;96m (Enter your response):\033[0m";
			cin >> buffer;
			cout << endl;
			cout << "\033[1;95mAmazoné:\033[0m" << " Great! I'll see you there!" << endl;
			cout << endl;
			
			//Chapter 3
			cout << "Chapter 3 (Enter any character to continue)";
			cin >> buffer;
			cout << endl;
			
			cout << "Later that day..." << endl;
			cout << endl;
			cout << "\033[1;92mYou're approached with a dilemma. on the southern side of the arcade you see Clin stevense, your favorite streamer, playing OOT on a large display. On the northern side, Amazoné Alexia. What will you do?\033[0m\n" << endl;
			
			// if you talk to clint, he says ""Hey Ass Blaster, whats up bro, hows it going?" 
			// if you talk to clint, he says ""Hey Ass Blaster, whats up bro, hows it going?" 
		
		
		
		
		
		
	}
	//If you do not have the "Amazon.txt" file itll show this error.
				else {
					cout << "File did not open correctly" << endl;
					cout << endl;
					cout << "\033[1;91mGame Over\033[0m" << endl;
	
		}
		
		
		
}