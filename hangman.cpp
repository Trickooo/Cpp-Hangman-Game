#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

class myClass{
	public:
	string playerName;
	int ramdom;
	char tryAgain;
	string guess;
	string head = " ##############################";
	string body = " [                            ]";
	string gameOverG = " [          GAME OVER         ]";
};

void game();
void aubrey();
void banner();


int main(){
	myClass obj;
	
	banner();
	
	cout << endl << "What is your name Player? " << endl;
	cin >> obj.playerName;
	
	cout << endl << "Welcome " << obj.playerName << "! Welcome to Hangman." << endl << endl << "The Mechanics of the game: " << endl;
	cout << "1. You can only enter a letter." << endl;
	cout << "2. Repeated letter will not do anything." << endl;
	cout << "3. Once the phrase is completed, you can have a next game or exit." << endl;
	cout << "And lastly, DON'T LET HANGMAN PATRICK DIE!!!!!!!!!!!!" << endl << endl;
	cout << endl << "To start," << endl;
	
	system("pause");
	system("CLS");
	
	if(obj.playerName == "Aubrey" || obj.playerName == "aubrey")
		aubrey();
	else
		game();
	
return 0;
}

void tryAgain(){
	myClass obj;
	cout << "Did you enjoy the game? Would you like to try again?" << endl;
	cout << "To continue press Y, to quit press Q: ";
	cin >> obj.tryAgain;
		if(obj.tryAgain == 'Y' || obj.tryAgain == 'y'){
			system("CLS");
			game();
		}else if(obj.tryAgain == 'Q' || obj.tryAgain == 'q'){
			exit(0);
		}else{
			exit(0);
		}
}
void gameOver(){
	myClass obj;
	cout << endl << endl << obj.head << endl;
	cout << obj.body << endl;
	cout << obj.gameOverG << endl;
	cout << obj.body << endl;
	cout << obj.head << endl << endl;	
}

void nouse(){
	cout << "		____________________" << endl;
	cout << "		                   |" << endl;
	cout << "		                   |" << endl; 
}

void head(){
	cout << "		               _________" << endl;
	cout << "		              |         |"<< endl;
	cout << "		              |         |"<< endl;
	cout << "		              |         |"<< endl;
	cout << "		               ---------" << endl;
}

void lasthead(){
	cout << "		               _________" << endl;
	cout << "		              |         |     |-----------------------|  "<< endl;
	cout << "		              |         |     | Last chance, save me! |"<< endl;
	cout << "		              |         |     |  _____________________|"<< endl;
	cout << "		               ---------      /_/" << endl;
}

void body(){
	for(int i = 1; i <= 5; i++){
		cout << "		                   |" << endl;
	}
}

void larm(){
	cout << "		                  /|" << endl;
	cout << "		                 / |" << endl;
	cout << "		                /  |" << endl;
	cout << "		               /   |" << endl;
	cout << "		                   |" << endl;
}

void Farm(){
	cout << "		                  /|\\     " << endl;
	cout << "		                 / | \\    " << endl;
	cout << "		                /  |  \\   " << endl;
	cout << "		               /   |   \\  " << endl;
	cout << "		                   |      " << endl;
}

void lfoot(){
	cout << "		                  / " << endl;
	cout << "		                 /  " << endl;
	cout << "		                / " << endl;
	cout << "		               /  " << endl;
	cout << "		              /   " << endl;
}

void feet(){
	cout << "		                   /\\ " << endl;
	cout << "		                  /  \\ " << endl;
	cout << "		                 /    \\ " << endl;
	cout << "		                /      \\ " << endl;
	cout << "		               /        \\ " << endl;
}

void congrats(){
	cout << endl << endl << "		##########################################################\n";
	cout << "		============/                                 \\===========\n";
	cout << "		===========/          CONGRATULATIONS          \\==========\n";
	cout << "		==========/   You have SAVED Hangman Patrick    \\=========\n";
	cout << "		=========/                                       \\========\n";
	cout << "		##########################################################\n\n\n";
}

void banner(){
	cout << "		########################################\n";
	cout << "		============/               \\==========\n";
	cout << "		===========/    Patrick's    \\==========\n";
	cout << "		==========/   Hangman Game    \\=========\n";
	cout << "		=========/                     \\========\n";
	cout << "		########################################\n";
}


void game(){
myClass obj;
string word;
string key;
int guessNum = 0;
int prevNum ;

srand((unsigned) time(0));
obj.ramdom = 1 + (rand() % 10);


	if(obj.ramdom == 1 && prevNum !=1){
		word =" [     _ _ _ _ _  _ _ _ _     ]";
		key = " [     C A R P E  D I E M     ]";
	}else if(obj.ramdom == 2 && prevNum !=2){
		word = " [   _ _ _ _ _ _ _  _ _ _ _   ]";
		key = " [   M E M E N T O  M O R I   ]";
	}else if(obj.ramdom == 3 && prevNum !=3){
		word = " [    _ _ _ _ _  _ _ _ _ _    ]";
		key = " [    H E L L O  W O R L D    ]";
	}else if(obj.ramdom == 4 && prevNum !=4){
		word = " [    _ _ _ _ _ _ _ _ _ _ _   ]";
		key = " [    P E R E G R I N A T E   ]";
	}else if(obj.ramdom == 5 && prevNum !=5){
		word = " [     _ _ _ _ _ _ _ _ _ _    ]";
		key = " [     I N S O U C I A N T    ]";
	}else if(obj.ramdom == 6 && prevNum !=6){
		word = " [    _ _ _ _ _ _ _ _ _ _ _   ]";
		key = " [    S E R E N D I P I T Y   ]";
	}else if(obj.ramdom == 7 && prevNum !=7){
		word = " [      _ _ _ _ _ _ _ _ _     ]";
		key = " [      L I M E R E N C E     ]";
	}else if(obj.ramdom == 8 && prevNum !=8){
		word = " [ _ _ _ _ _ _,_ _ _ _  _ _ _ ]";
		key = " [ C O G I T O,E R G O  S U M ]";
	}else if(obj.ramdom == 9 && prevNum !=9){
		word = " [  _ _ _ _ _ _ _  _ _ _ _ _  ]";
		key = " [  F E S T I N A  L E N T E  ]";
	}else if(obj.ramdom == 10 && prevNum !=10){
		word = " [  _ _ _  _ _ _ _ _, _ _ _ _ ]";
		key =  " [  N O N  D U C O R, D U C O ]";
	}else{
		word = " [ _ _ _ _  _ _ _  _ _ _ _ _ _]";
		key =  " [ B I T E  T H E  B U L L E T]";
	}

prevNum = obj.ramdom;

while(guessNum < 7){
cout << obj.head << endl;
cout << obj.body << endl;
cout << word << endl;
cout << obj.body << endl;
cout << obj.head << endl;

	if(guessNum == 0){
		nouse();		
	}else if(guessNum == 1){
		nouse();
		head();
	}else if(guessNum == 2){
		nouse();
		head();
		body();
	}else if(guessNum == 3){
		nouse();
		head();
		larm();
	}else if(guessNum == 4){
		nouse();
		head();
		Farm();
	}else if(guessNum == 5){
		nouse();
		head();
		Farm();
		lfoot();
	}else if(guessNum == 6){
		nouse();
		lasthead();
		Farm();
		feet();
	}
	
	cout << "Please guess a letter: ";
	cin >> obj.guess;
	
	switch(obj.ramdom){
		case 1: //CARPE DIEM
		if(obj.guess == "C" || obj.guess == "c")
			word[7] = 'C';
		else if(obj.guess == "A" || obj.guess == "a")
			word[9] = 'A';
		else if(obj.guess == "R" || obj.guess == "r")
			word[11] = 'R';
		else if(obj.guess == "P" || obj.guess == "p")
			word[13] = 'P';
		else if(obj.guess == "E" || obj.guess == "e")
			word[15] = 'E', word[22] = 'E';
		else if(obj.guess == "D" || obj.guess == "d")
			word[18] = 'D';
		else if(obj.guess == "I" || obj.guess == "i")
			word[20] = 'I';
		else if(obj.guess == "M" || obj.guess == "m")
			word[24] = 'M';
		else
			guessNum++;
		break;
		
		case 2: //MEMENTO MORI
		if(obj.guess == "M" || obj.guess == "m")
			word[5] = 'M', word[9] = 'M', word[20]='M';
		else if(obj.guess == "E" || obj.guess == "e")
			word[7] = 'E', word[11] = 'E';
		else if(obj.guess == "N" || obj.guess == "n")
			word[13] = 'N';
		else if(obj.guess == "T" || obj.guess == "t")
			word[15] = 'T';
		else if(obj.guess == "O" || obj.guess == "o")
			word[17] = 'O', word[23] = 'O';
		else if(obj.guess == "R" || obj.guess == "r")
			word[24] = 'R';
		else if(obj.guess == "I" || obj.guess == "i")
			word[26] = 'I';
		else
			guessNum++;
		break;
			
		case 3: //HELLO WORLD
		if(obj.guess == "H" || obj.guess == "h")
			word[6] = 'H';
		else if(obj.guess == "E" || obj.guess == "e")
			word[8] = 'E';
		else if(obj.guess == "L" || obj.guess == "l")
			word[10] = 'L', word[12] = 'L', word[23] = 'L';
		else if(obj.guess == "O" || obj.guess == "o")
			word[14] = 'O', word[19] = 'O';
		else if(obj.guess == "W" || obj.guess == "w")
			word[17] = 'W';
		else if(obj.guess == "R" || obj.guess == "r")
			word[21] = 'R';
		else if(obj.guess == "L" || obj.guess == "l")
			word[23] = 'L';
		else if(obj.guess == "D" || obj.guess == "d")
			word[25] = 'D';
		else
			guessNum++;
		break;
		
		case 4: //P E R E G R I N A T E
		if(obj.guess == "P" || obj.guess == "p")
			word[6] = 'P';
		else if(obj.guess == "E" || obj.guess == "e")
			word[8] = 'E', word[12] = 'E', word[26] = 'E';
		else if(obj.guess == "R" || obj.guess == "r")
			word[10] = 'R', word[16] = 'R';
		else if(obj.guess == "G" || obj.guess == "g")
			word[14] = 'G';
		else if(obj.guess == "I" || obj.guess == "i")
			word[18] = 'I';
		else if(obj.guess == "N" || obj.guess == "n")
			word[20] = 'N';
		else if(obj.guess == "A" || obj.guess == "a")
			word[22] = 'A';
		else if(obj.guess == "T" || obj.guess == "t")
			word[24] = 'T';
		else
			guessNum++;
		break;	
			
		case 5: //I N S O U C I A N T
		if(obj.guess == "I" || obj.guess == "i")
			word[7] = 'I', word[19] = 'I';
		else if(obj.guess == "N" || obj.guess == "n")
			word[9] = 'N', word[23] = 'N';
		else if(obj.guess == "S" || obj.guess == "s")
			word[11] = 'S';
		else if(obj.guess == "O" || obj.guess == "o")
			word[13] = 'O';
		else if(obj.guess == "U" || obj.guess == "u")
			word[15] = 'U';
		else if(obj.guess == "C" || obj.guess == "c")
			word[17] = 'C';
		else if(obj.guess == "A" || obj.guess == "a")
			word[21] = 'A';
		else if(obj.guess == "T" || obj.guess == "t")
			word[25] = 'T';
		else
			guessNum++;
		break;	
			
		case 6://S E R E N D I P I T Y
		if(obj.guess == "E" || obj.guess == "e")
			word[8] = 'E', word[12] = 'E';
		else if(obj.guess == "S" || obj.guess == "s")
			word[6] = 'S';
		else if(obj.guess == "R" || obj.guess == "r")
			word[10] = 'R';
		else if(obj.guess == "N" || obj.guess == "n")
			word[14] = 'N';
		else if(obj.guess == "I" || obj.guess == "i")
			word[18] = 'I', word[23] = 'I';
		else if(obj.guess == "D" || obj.guess == "d")
			word[16] = 'D';
		else if(obj.guess == "P" || obj.guess == "p")
			word[20] = 'P';
		else if(obj.guess == "T" || obj.guess == "t")
			word[24] = 'T';
		else if(obj.guess == "Y" || obj.guess == "y")
			word[26] = 'Y';
		else
			guessNum++;
		break;	
			
		case 7://L I M E R E N C E
		if(obj.guess == "L" || obj.guess == "l")
			word[8] = 'L';
		else if(obj.guess == "I" || obj.guess == "i")
			word[10] = 'I';
		else if(obj.guess == "M" || obj.guess == "m")
			word[12] = 'M';
		else if(obj.guess == "R" || obj.guess == "r")
			word[16] = 'R';
		else if(obj.guess == "E" || obj.guess == "e")
			word[14] = 'E', word[18] = 'E', word[24] = 'E';
		else if(obj.guess == "N" || obj.guess == "n")
			word[20] = 'N';
		else if(obj.guess == "C" || obj.guess == "c")
			word[22] = 'C';
		else
			guessNum++;
		break;
			
		case 8: //C O G I T O,E R G O  S U M
		if(obj.guess == "C" || obj.guess == "c")
			word[3] = 'C';
		else if(obj.guess == "O" || obj.guess == "o")
			word[5] = 'O', word[13] = 'O', word[21] = 'O';
		else if(obj.guess == "G" || obj.guess == "g")
			word[7] = 'G', word[19] = 'G';
		else if(obj.guess == "T" || obj.guess == "t")
			word[11] = 'T';
		else if(obj.guess == "I" || obj.guess == "i")
			word[9] = 'I';
		else if(obj.guess == "E" || obj.guess == "e")
			word[15] = 'E';
		else if(obj.guess == "S" || obj.guess == "s")
			word[24] = 'S';
		else if(obj.guess == "R" || obj.guess == "r")
			word[17] = 'R';
		else if(obj.guess == "U" || obj.guess == "u")
			word[26] = 'U';
		else if(obj.guess == "M" || obj.guess == "m")
			word[28] = 'M';
		else
			guessNum++;		
		break;

		case 9: //F E S T I N A  L E N T E
		if(obj.guess == "F" || obj.guess == "f")
			word[4] = 'F';
		else if(obj.guess == "E" || obj.guess == "e")
			word[6] = 'E', word[21] = 'E', word[27] = 'E';
		else if(obj.guess == "S" || obj.guess == "s")
			word[8] = 'S';
		else if(obj.guess == "T" || obj.guess == "t")
			word[10] = 'T', word[25] = 'T';
		else if(obj.guess == "I" || obj.guess == "i")
			word[12] = 'I';
		else if(obj.guess == "A" || obj.guess == "a")
			word[16] = 'A';
		else if(obj.guess == "L" || obj.guess == "l")
			word[19] = 'L';
		else if(obj.guess == "N" || obj.guess == "n")
			word[23] = 'N', word[14] = 'N';
		else
			guessNum++;
		break;
		
		case 10: //N O N  D U C O R, D U C O
		if(obj.guess == "N" || obj.guess == "n")
			word[4] = 'N', word[8] = 'N';
		else if(obj.guess == "O" || obj.guess == "o")
			word[6] = 'O', word[17] = 'O', word[28] = 'O';
		else if(obj.guess == "D" || obj.guess == "d")
			word[11] = 'D', word[22] = 'D';
		else if(obj.guess == "U" || obj.guess == "u")
			word[13] = 'U', word[24] = 'U';
		else if(obj.guess == "R" || obj.guess == "r")
			word[19] = 'R';
		else if(obj.guess == "C" || obj.guess == "c")
			word[15] = 'C', word[26] = 'C';
		else
			guessNum++;		
		break;
	}
	if(word == key)
		break;
		
	system("CLS");
	}
	
		if(guessNum<=6 && word == key){
			system("CLS");
			cout << obj.head << endl;
			cout << obj.body << endl;
			cout << word << endl;
			cout << obj.body << endl;
			cout << obj.head << endl;
			congrats();
		}else if(guessNum >=6 && word != key){
			system("CLS");
			cout << obj.head << endl;
			cout << obj.body << endl;
			cout << word << endl;
			cout << obj.body << endl;
			cout << obj.head << endl;
			gameOver();
		}
		
		tryAgain();
}

void aubrey(){
	myClass obj;
	int guessNum = 0;
	string love = " [      I  L O V E  Y O U     ]";
	string word1 = " [      _  _ _ _ _  _ _ _     ]";
	string aub =  " [         A U B R E Y        ]";
	string word2 =  " [         _ _ _ _ _ _        ]";
	string fo =   " [N O W  A N D  F O R E V E R.]";
	string word3 =   " [_ _ _  _ _ _  _ _ _ _ _ _ _.]";
	string top = "-----------------------------";
	string mid = "|                           |";
	
	while(guessNum < 7){
		cout << obj.head << endl;
		cout << obj.body << endl;
		cout << word1 << endl << word2 << endl << word3 << endl;
		cout << obj.body << endl;
		cout << obj.head << endl;

	if(guessNum == 0){
		cout << top << endl << mid << endl;
		cout << "|  Yeey. Wala ka pa po mali |" << endl;
		cout << mid << endl << top;
	}else if(guessNum == 1){
        cout << top << endl << mid << endl;
		cout << "|Hala dalawa na po yung mali|" << endl;
		cout << mid << endl << top;
	}else if(guessNum == 2){
		cout << top << endl << mid << endl;
		cout << "| HUhuuh, kaya mo yan baboo |" << endl;
		cout << mid << endl << top;
	}else if(guessNum == 3){
        cout << top << endl << mid << endl;
		cout << "| nako, mali pero okay lang |" << endl;
		cout << mid << endl << top;	
	}else if(guessNum == 4){
		cout << top << endl << mid << endl;
		cout << "|Nabawasan man buhay lab kta|" << endl;
		cout << mid << endl << top;
	}else if(guessNum == 5){
		cout << top << endl << mid << endl;
		cout << "|  malapit ka na malose :(  |" << endl;
		cout << mid << endl << top;
	}else if(guessNum == 6){
        cout << top << endl << mid << endl;
		cout << "|Panalo ka parin sa puso ko |" << endl;
		cout << mid << endl << top;
	}
	
	cout << endl << endl << "Please guess a letter: ";
	cin >> obj.guess;
			if(obj.guess == "I" || obj.guess == "i")
			word1[8] = 'I';
		else if(obj.guess == "E" || obj.guess == "e")
			word1[17] = 'E', word2[19] = 'E', word3[22] = 'E', word3[26] = 'E';
		else if(obj.guess == "O" || obj.guess == "o")
			word1[13] = 'O', word1[22] = 'O', word3[4] = 'O', word3[18] = 'O';
		else if(obj.guess == "L" || obj.guess == "l")
			word1[11] = 'L';
		else if(obj.guess == "B" || obj.guess == "b")
			word2[15] = 'B';
		else if(obj.guess == "W" || obj.guess == "w")
			word3[6] = 'W';
		else if(obj.guess == "D" || obj.guess == "d")
			word3[13] = 'D';
		else if(obj.guess == "F" || obj.guess == "f")
			word3[16] = 'F';											
		else if(obj.guess == "R" || obj.guess == "r")
			word2[17] = 'R', word3[20] = 'R', word3[28] = 'R';
		else if(obj.guess == "V" || obj.guess == "v")
			word1[15] = 'V', word3[24] = 'V';
		else if(obj.guess == "A" || obj.guess == "a")
			word2[11] = 'A', word3[9] = 'A';
		else if(obj.guess == "U" || obj.guess == "u")
			word1[24] = 'U', word2[13] = 'U';
		else if(obj.guess == "Y" || obj.guess == "y")
			word1[20] = 'Y', word2[21] = 'Y';
		else if(obj.guess == "N" || obj.guess == "n")
			word3[2] = 'N', word3[11] = 'N';
		else
			guessNum++;
		
	if(word1 == love && aub == word2 && word3 == fo)
		break;
		
	system("CLS");
	}

	
		if(guessNum<=6 && word1 == love && aub == word2 && word3 == fo){
			system("CLS");
			cout << obj.head << endl << obj.head << endl << obj.body << endl;
			cout << love << endl << aub << endl << fo << endl << obj.body << endl << obj.head << endl << obj.head;
			congrats();
		}else if(guessNum >=6 && word1 != love && aub != word2 && word3 != fo){
			system("CLS");
			cout << obj.head << endl << obj.head << endl << obj.body << endl;
			cout << love << endl << aub << endl << fo << endl << obj.body << endl << obj.head << endl << obj.head;
			gameOver();
		}
		
		tryAgain();
}
