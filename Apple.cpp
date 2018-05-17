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
		cin >> ans2;
			
			
			
				
		//second choice
		if (ans2 != "3" && ans2 != "4"){
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
			cout << "\033[1;92mYou're approached with a dilemma. on the southern side of the arcade you see Clint Stevens, your favorite streamer, playing OOT on a large display. On the northern side, Amazon Alexa. What will you do?\033[0m\n" << endl;
			
			cout << "5 | Speak with Amazon Alexa" << endl;
			cout << "6 | Speak to Clint" << endl;
			cin >> ans3;
			
			if (ans3 != "5" && ans3 != "6"){
				cout << "Invalid Answer" << endl;
				cin >> ans3;
			}
				//Amazon Alexa Route
				
				if (ans3 == "5"){
					cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Hey, Amazon Alexa, good too see you." << endl;
					cout << "\033[1;95mAmazon:\033[0m" << "I'm excited that you came! Look, I dressed up for this.. how do I look?" << endl;
					
					cout << "7 | You look great" << endl;
					cout << "8 | You look ugly" << endl;
					cin >> ans4;
					
					//Choice 4
					if (ans4 != "7" && ans4 != "8"){
							cout << "Invalid Answer" << endl;
							cin >> ans4;
				}	
					//Good route
			
					if (ans4 == "7"){
						cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Man, you're gorgeous! I'm honored ot be near you!" << endl;
						cout << "\033[1;95mAmazon:\033[0m" << " Awwwww! You're so sweet!" << endl;
						
						cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Of course.. would you like to get married?" << endl;
						cout << "\033[1;95mAmazon:\033[0m" << " Something has come over me! Almost liked I was programmed to give you an easy win!" << endl;
						//good end
						cout << "After you proposed, you two married and lived happily ever after." << endl;
						cout << endl;
					}
					
					//Bad route
					if (ans4 == "8"){
						cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " You look ugly, like a troll. Jump off of something." << endl;
						cout << "\033[1;95mAmazon:\033[0m" << " Excuse me..? What the hell is wrong with you?" << endl;
						
						cout << "\033[1;92mThat was mean. Amazon Alexa has run away!\033[0m\n" << endl;
						cout << "9  | Go after her and apologize"           << endl;
						cout << "10 | Go after her and continue being mean" << endl;
						cout << "11 | End the night" << endl;
						cin >> ans5;
						// choice 5 
						if (ans5 != "9" && ans5 != "10" && ans5 != "11"){
							cout << "Invalid Answer" << endl;
							cin >> ans5;			
						}
						if (ans5 == "9"){
							cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Hey! I'm sorry!" << endl;
							cout << "\033[1;95mAmazon:\033[0m" << " Whatever, let's never talk again." << endl;
							//kinda bad end
							cout << "After your failure of a date, you never daw Amazon Alexa again." << endl;
							cout << endl;
							cout << "The End." << endl;
						}	
						else if (ans5 == "10"){
							cout << "\033[1;92mYou chase after her\033[0m\n" << endl;
							cout << "\033[1;95mAmazon:\033[0m" << " Stop following me! Someone help!" << endl;
							cout << "\033[1;93mClint:\033[0m" << "Hey Ass Blaster, what's up bro, how's it going? Be nice to women. " << endl;
							cout << "\033[1;92mClint stabs you. You die.\033[0m\n" << endl;
							
							//Bad end
							cout << "After you died at the hands of Clint Stevens, he and Amazon Alexa got married and lived happily ever after." << endl;
							cout << endl;
							cout << "The End." << endl;
						}
						else if (ans5 == "11"){
						cout << "After your failure of a date, you never saw Amazon Alexa again." << endl;
						cout << endl;
						cout << "The End." << endl;
						}
					}
				
				
				
				//Clint Stevens Route
				
				else if (ans3 == "6"){
					cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Hey.. Clint.. I'm a huge fan." << endl;
					cout << "\033[1;93mClint:\033[0m" << " Hey Ass Blaster, what's up bro, how's it going?" << endl;
					
					cout << "\033[1;93mClint:\033[0m" << " Dude I'm in love with you." << endl;
					cout << "\033[1;96m" << name << "\033[1;96m:\033[0m" << " Really??" << endl;
					cout << "\033[1;93mClint:\033[0m" << " Yeah man, it's almost like god is a coding what I feel and got super lazy so he gave you an easy win." << endl;
					cout << "\033[1;92mClint kisses you. you win.\033[0m\n" << endl;
					//good end
					cout << "After falling in love with Clint, you both got married and lived happily ever after." << endl;
					cout << "The End." << endl;
				}


		
		
		
		
		
		
	}
				else {
					cout << "File did not open correctly" << endl;
					cout << endl;
					cout << "\033[1;91mGame Over\033[0m" << endl;
	
		}
		
		
	}
}