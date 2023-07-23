# Tic-Tac-Toe-CPP
A well-known game developed using procedural paradigm with C++

## Code:
```

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
```
  
## Screens:
  
![5--X-O-pro-1](https://github.com/Elzubair-Dev/Tic-Tac-Toe-CPP/assets/104657152/42f20982-1a48-4202-91e4-0f2213b0ea2a)
![5--X-O-pro-2](https://github.com/Elzubair-Dev/Tic-Tac-Toe-CPP/assets/104657152/1b172e9c-f8c2-4c6f-a465-71355ad8799e)
![5--X-O-pro-5](https://github.com/Elzubair-Dev/Tic-Tac-Toe-CPP/assets/104657152/1bb13078-5512-4343-8c07-371a0a700d99)
![5--X-O-pro-7](https://github.com/Elzubair-Dev/Tic-Tac-Toe-CPP/assets/104657152/a5b1d65d-5b85-4574-b3d2-515544b35299)
![5--X-O-pro-9](https://github.com/Elzubair-Dev/Tic-Tac-Toe-CPP/assets/104657152/fd85f1b6-d33a-4fd4-bb81-70448a0492c4)
![5--X-O-pro-14](https://github.com/Elzubair-Dev/Tic-Tac-Toe-CPP/assets/104657152/65b2cc9a-d1e3-48fb-a587-b8317a1b2795)
  
## Buy me a Coffee:
if you want to support me
(https://www.buymeacoffee.com/zu698air)

#### Don't forget to give me Star

## Done
