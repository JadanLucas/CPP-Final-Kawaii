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
	string color  = "";
	string ans1   = "";
		string ans2   = "";
			string ans3   = "";
				string ans4   = "";
					string ans5   = "";
						string ans6   = "";
							string ans7   = "";
								string ans8   = "";
									string ans9   = "";
	string buffer = "";

	
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
	
	//Response of Choice and answer from Amazon
	inFile.open("Amazon.txt");
	if (inFile.is_open()) {
		
		
		
	
			if (ans1 != "1" && ans1 != "2"){
				cout << "Invalid Answer" << endl;
				cin >> ans1;
	
			}	
				if (ans1 == "1"){
					cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Hey.. I'm " << name << ". Nice to meet you." << endl;
					getline(inFile, amazon, '#');
					getline(inFile, amazon);
					cout << "\033[1;95mAmazon:\033[0m" << amazon << endl;
				}	
				else if (ans1 == "2"){
					cout << endl;
					cout << "\033[1;92mHey! Why are you leaving? you'll never find love like this!\033[0m\n" << endl;
					cout << endl;
					cout << "\033[1;31mGame Over\033[0m" << endl;
			
				}
		
		//after first choice
		cout << "\033[1;92mAfter talking for a bit, you and Amazon Alexa decided to leave, but not without speaking a bit once more.\033[0m\n"        << endl;
		cout << "\033[1;95mAmazon:\033[0m" << "Hey, it was nice talking to you.. give me your phone, let's trade numbers." << endl;
		cout << "\033[1;92mAfter exchanging numbers, you two parted ways.\033[0m\n" << endl;
		cout << endl;
		
		//Chapter 2
		cout << "Chapter 2 (Enter any chracter to continue)";
		cin >> buffer;
		cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " ..." << endl;
		cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " What should I do today?" << endl;
		cout << "3 | (Play video games)" << endl;
		cout << "4 | (call Amazon)     " << endl;

			
			
			
				
		//second choice
		if (ans1 != "3" && ans1 != "4"){
			cout << "Invalid Answer" << endl;
			cin >> ans2;
	
		}	
			if (ans2 == "3"){
				cout << "\033[1;92mYour video games all suck, do something else\033[0m\n" << endl;
				cout << endl;
				cout << "\033[1;92mYou decided to call Amazon (;\033[0m\n" << endl;
			}	
			else if (ans2 == "4"){
				cout << endl;
				cout << "\033[1;92mGood choice!\033[0m\n" << endl;

		
			}
			cout << "ring ring... ring ring..." << endl;
			cout << "\033[1;95mAmazon:\033[0m" << "Hey protagonist!" << endl;
			cout << "\033[1;92mIt's Amazon Alexa!\033[0m\n" << endl;
			cout << "\033[1;95mAmazon:\033[0m" << "Let's get together tonight! We can meet at the arcade!" << endl;
			cout << "\033[1;96m" << name << "\033[1;96m (Enter your response):\033[0m";
			cin >> buffer;
			cout << endl;
			cout << "\033[1;95mAmazon:\033[0m" << "Great! I'll see you there!" << endl;
			
			//Chapter 3
			cout << "Chapter 3 (Enter any character to continue)";
			cin >> buffer;
			cout << endl;
			
			cout << "Later that day..." << endl;
			cout << "\033[1;92mYou're approached with a dilemma. on the southern side of the arcade you see Clin stevense, your favorite streamer, playing OOT on a large display. On the northern side, Amazon Alexa. What will you do?\033[0m\n" << endl;
			
			// if you talk to clint, he says ""Hey Ass Blaster, whats up bro, hows it going?" 
			// if you talk to clint, he says ""Hey Ass Blaster, whats up bro, hows it going?" 

		
		
		
		
		
		
	}
				else {
					cout << "File did not open correctly" << endl;
					cout << endl;
					cout << "\033[1;91mGame Over\033[0m" << endl;
	
		}
		
		
		
}