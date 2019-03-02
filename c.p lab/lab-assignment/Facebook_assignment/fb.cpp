//to compile please run command
// g++ fb.cpp tic1.cpp -o hello -stdc=++11
//to run 
// ./hello

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include "header.h" 
using namespace std;


class facebook :public tic1 
{
	private:
		string email, password;
		int ask;
		tic1 a;
	public:

		void login();
		void show();
		void show1();
		void More();
		void about();
		void friends();
		void Blocked_people();
		void Unknown_people();
		void Family_members();
		void friend_requests();
		void notifications();
		void Followers();
		void Mutual_friends();
		void sending_requests();
		void play();
		void create_page();
		void create_group();
		void Invitations();
		void like_comment();
		void check();

		facebook() 
		{
			cout << "\n            !!....... Welcome to facebook ......!!:                   \n" << endl;
			login();
		}
};

void facebook::login() 
{
	cout << "enter your email :" << endl;
	cin >> email;
	cout << "enter your password :" << endl;
	cin >> password;
	//facebook::show();
	facebook::check();
}

void facebook::check()
{ 
	string user_pass = email + " " + password;
	string line;
	bool found = false;
	ifstream readfile;
	readfile.open("user_pass.txt");
	if(readfile.is_open()) {
		while(! readfile.eof()) 
		{
			getline(readfile, line);
	    	if (line.compare(user_pass) == 0)
	    	 	found = true;  //while(getline(readfile,line) && !found) 	   	
	    }
	}
	readfile.close(); //close the file before recursivly opening it again later
	if(found) 
	    facebook::show();
	else {
	    cout << "\nUsername and/or password incorrect!\n\n\n\n";
	    facebook::login();        
	}   
}
void facebook::about() 
{
	string user = email+".txt";
	string line;
	int line_no = 0;
	ifstream in;
	in.open(user.c_str());
	if(in.is_open()) 
	{
		while(! in.eof()) 
		{
			line_no++;
			if (line_no >= 13)
				break;
			getline(in, line);
			cout << line << endl;
		}
	}
	in.close();
	facebook::show1();
}

void facebook::friends() 
{	
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 14 && getline(in, line))
    		++line_no;
	if (line_no >= 14) {
		while(! in.eof()) 
		{
			line_no++;
			if (line_no >= 28)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    facebook::show1();
}

void facebook::Blocked_people()
{
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 30 && getline(in, line))
    		++line_no;
	if (line_no >= 30) {
		while(! in.eof()) 
		{
			line_no++;
			if (line_no >= 43)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    facebook::show1();
}

void facebook::Unknown_people() 
{
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 45 && getline(in, line))
    		++line_no;
	if (line_no >= 45) {
		while(! in.eof()) 
		{
			line_no++;
			if (line_no > 59)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    facebook::show1();	
}

void facebook::Mutual_friends() 
{
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 61 && getline(in, line))
    		++line_no;
	if (line_no >= 61) {
		while(! in.eof()) 
		{
			line_no++;
			if (line_no > 68)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    facebook::show1();
}

void facebook::Family_members() 
{
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 70 && getline(in, line))
    		++line_no;
	if (line_no >= 70) {
		while(! in.eof())
		{
			line_no++;
			if (line_no >= 84)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    facebook::show1();
}

void facebook::friend_requests()
{
	int line_no = 0;
	int ask;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 86 && getline(in, line))
    		++line_no;
	if (line_no >= 86) {
		while(! in.eof())
		{
			line_no++;
			if (line_no >= 95)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    facebook::show1();
}

void facebook::notifications() 
{
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 97 && getline(in, line))
    		++line_no;
	if (line_no >= 97) {
		while(! in.eof()) 
		{
			line_no++;
			if (line_no > 108)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    facebook::show1();
}


void facebook::Followers()
{
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 109 && getline(in, line))
    		++line_no;
	if (line_no >= 109) {
		while(! in.eof()) 
		{
			line_no++;
			if (line_no > 123)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    facebook::show1();
}

void facebook::create_page()
{
	string ask, ask1;
	cout << endl;
	cout << "in what category you want to create page \n";
	cin >> ask;
	cout << "enter the name of page \n";
	cin >> ask1;
	string line;
	ofstream in;
	in.open("pages.txt" , ios::app);
	while(! in.eof()) 
		{
			in <<"\n	" << ask << endl;
			in << ask1 << endl;
			break;
    	}
    cout << "Page has been created\n\n";
    in.close();
    facebook::More();
}

void facebook::sending_requests()
{
	string name;
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 45 && getline(in, line))
    		++line_no;
	if (line_no >= 45) {
		while(! in.eof()) 
		{
			line_no++;
			if (line_no > 59)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    cout << "\n Name person you want to send request\n";
    cin >> name;
    cout << "\nRequest has been sent\n\n";
    facebook::More();
}

void facebook::Invitations() 
{
	char a;
	int line_no = 0;
	string user = email +".txt";
	string line;
	ifstream in;
	in.open(user.c_str());
	while (line_no < 14 && getline(in, line))
    		++line_no;
	if (line_no >= 14) {
		while(! in.eof()) 
		{
			line_no++;
			if (line_no >= 28)
				break;
    		getline(in, line);
    		cout << line << endl;
    	}
    }
    in.close();
    cout << "\n   invite your friends (type y or n) \n";
    cin >> a;
    if (a == 'y')
    	cout << "\nInvitations has been sent to all\n\n";
    if (a == 'n')
    	cout << "Oh! ok\n";
    facebook::More();
} 

void facebook::create_group() 
{
	string ask, ask1, ask2;
	char a;
	cout << "\n Enter the name of group\n";
	cin >> ask;
	cout << "Do you want to add freinds (type y or n) \n";
	cin >> a;
	if(a == 'y' or a == 'Y')
	{
		int line_no = 0;
		string user = email +".txt";
		string line;
		ifstream in;
		in.open(user.c_str());
		ofstream on;
		on.open("groups.txt", ios::app);
		on << "\n       " << ask << endl;
		while (line_no < 14 && getline(in, line))
    		++line_no;
		if (line_no >= 14) {
			while(! in.eof()) 
			{
				line_no++;
				if (line_no >= 28) 
					break;
    			getline(in, line);
    			on << line << endl;
    		}
    	cout << "group has been created\n";
    	}
    in.close();
    on.close();
    }
	if(a == 'n' or a == 'N' or a != 'y' or a != 'Y')
	{
		ofstream on;
    	on.open("groups.txt", ios::app);
    	on << "\n       " << ask << endl;
    	on.close();
    	cout << "group has been created\n";
    }
    facebook::More();
}


void facebook::play()
{
	int ask;
	cout << "\nwe have following games \n";
	cout << "1. Tic tac Toe \n";
	cout << "2. Hungman \n";
	cin >> ask;
	switch(ask)
	{
		case 1:
			tic1::play1();
			break;
		case 2:
			cout << "Game is underconstruction\n";
			break;
	}
	facebook::More();
}
///
void facebook::like_comment()
{
	string ask;
	int ask1;
	for(int i = 0; i < 4; i++){
		string line;
		int count = 1;
		int random = 0;
		int numOfLines = 0;
		ifstream file("file.txt");
		while(count <= 4)
		{
    		random = rand() % 11;
    		while(getline(file, line))
    		{
        		++numOfLines;
        		if(numOfLines == random) {
            		cout << "\n" << line << endl;
            		cout <<"\n1: like\n";
            		cout << "2: Comment\n";
            		cin >> ask1;
            		switch(ask1) 
            		{
            			case 1:
            				cout << "liked\n\n";
            				break;
            			case 2:
            				cout << "enter your comment\n\n";
            				cin >> ask;
            				cout << "your comment is  " << ask << endl;
            				break;
            		}
            	}
            		
    		}
    		count++;
		}
	}
	facebook::More();	
}

void facebook::show() 
{	
	int pos = email.find('@');

	int ask1;
	cout << "\n                   Welcome "<< email.erase(pos, email.length() - 1) << '\n';
	cout << "\n                   What do you want to see " << email.erase(pos, email.length() - 1) << endl;
	cout << "1 : about \n";
	cout << "2 : my Friends\n";                    
	cout << "3 : Blocked People\n";
	cout << "4 : Unknown People\n";
	cout << "5 : Mutual Friends\n";
	cout << "6 : Family Members\n"; 
	cout << "7 : friend requests \n";
	cout << "8 : notifications\n";
	cout << "9 : Followers\n";
	cout << "0: More() \n";
	cout << "10: Log out \n";
	cin >> ask1; 
	switch(ask1) 
	{
		case 1:
			facebook::about();
			break; 
		case 2:
			facebook::friends();
			break;
		case 3:
			facebook::Blocked_people();
			break;
		case 4:
			facebook::Unknown_people();
			break;
		case 5:
			facebook::Mutual_friends();
			break;
		case 6:
			facebook::Family_members();
			break;
		case 7:
			facebook::friend_requests();
			break;
		case 8:
			facebook::notifications();
			break;
		case 9:
			facebook::Followers();
			break;
		case 0:
			facebook::More();
			break;
		case 10:
			cout << "Have a nice Day....";;
			return;
	}	
}



void facebook::show1()
{
	int ask1;
	cout << "\n!!......What do you wanna see again .......!!\n" << endl;
	cout << "1 : about \n";
	cout << "2 : my Friends\n";                 
	cout << "3 : Blocked People\n";
	cout << "4 : Unknown People\n";
	cout << "5 : Mutual Friends\n";
	cout << "6 : Family Members\n"; 
	cout << "7 : friend requests \n";
	cout << "8 : notifications\n";
	cout << "9 : Followers\n";
	cout << "0 : More() \n";
	cout << "10: Log out \n";
	cin >> ask1; 
	switch(ask1) 
	{
		case 1:
			facebook::about();
			break; 
		case 2:
			facebook::friends();
			break;
		case 3:
			facebook::Blocked_people();
			break;
		case 4:
			facebook::Unknown_people();
			break;
		case 5:
			facebook::Mutual_friends();
			break;
		case 6:
			facebook::Family_members();
			break;
		case 7:
			facebook::friend_requests();
			break;
		case 8:
			facebook::notifications();
			break;
		case 9:
			facebook::Followers();
			break;
		case 0:
			facebook::More();
			break;
		case 10:
			return;
	}
}
////////////


void facebook::More() 
{
	int ask;
	cout << "\n\n         What do you want to do more     \n\n";
	cout << "1 : Sending Friend Requests \n";
	cout << "2 : play games \n";
	cout << "3 : create Page \n";
	cout << "4 : create Groups \n";
	cout << "5 : Making Invitations to like Pages \n";
	cout << "6 : liking and comment\n";
	cout << "0 : Back to main menu\n";
	cin >> ask;
	switch(ask) 
	{
		case 1:
			facebook::sending_requests();
			break; 
		case 2:
			facebook::play();
			break;
		case 3:
			facebook::create_page();
			break;
		case 4:
			facebook::create_group();
			break;
		case 5:
			facebook::Invitations();
			break;
		case 6:
			facebook::like_comment();
			break;
		case 0: 
			facebook::show1();
			break;
	}
}




int main() {

	facebook a;
	

	return 0;
}
