using namespace std;
#include <iostream>
char Matrix[3][3] = {'1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' };
char Player = 'X';
//---------------------Print_Matrix()----------------//
void Print_Matrix()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 ;j++)
		{
		 cout << Matrix[i][j] << "  ";	
		}
		cout << "\n";
	}
	
}
//----------------------Play()-----------------------//
void Play()
{
	char Pos;
	cout << "Enter Your Position _ Player (" << Player << "):\n";
	cin >> Pos;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Matrix[i][j] == Pos)
				Matrix[i][j] = Player;	
		}
		
	}
	if (Player == 'X') Player = 'O';
	else Player = 'X';
}
//----------------------WhoWin()---------------------//
char WhoWin()
{
	int Counter = 0;
	int Xc = 0, Oc = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Matrix[i][j] != 'X' && Matrix[i][j] != 'O') Counter++;
			if (Matrix[i][j] == 'X') Xc++;
			else if (Matrix[i][j] == 'O')Oc++;
			if (Xc == 3 || Oc == 3)
				return Xc > Oc ? 'X' : 'O';
			
		}
		Xc = 0;
		Oc = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Matrix[j][i] == 'X') Xc++;
			else if (Matrix[j][i] == 'O')Oc++;
			if (Xc == 3 || Oc == 3)
				return Xc > Oc ? 'X' : 'O';

		}
		Xc = 0;
		Oc = 0;
	}
	if (Matrix[0][0] == 'X' && Matrix[1][1] == 'X' && Matrix[2][2] == 'X') return 'X';
	else if (Matrix[0][0] == 'O' && Matrix[1][1] == 'O' && Matrix[2][2] == 'O') return 'O';
	else if (Matrix[2][0] == 'X' && Matrix[1][1] == 'X' && Matrix[0][2] == 'X') return 'X';
	else if (Matrix[2][0] == 'O' && Matrix[1][1] == 'O' && Matrix[0][2] == 'O') return 'O';

	if (Counter == 0) return 'd';
	return 'z';
}
int main()
{
	while(WhoWin() == 'z')
	{
		Print_Matrix();
		Play();
	}
	//system("cls");
	if (WhoWin() == 'd')
		cout << "Draw\n";

	else  
		cout << "Player " << WhoWin() <<" is Winner\n";
	system("Pause");
	return 0;
}