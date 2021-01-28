#include<iostream>

using namespace std;

char c[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void exit()

{

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++";

	cout << endl << "                                            +      THANKS FOR PLAYING TIC TAC TOE      + " << endl;

	cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

}

int win()

{

	if ((c[0] == c[1] && c[1] == c[2]) || (c[0] == c[4] && c[4] == c[8]) || (c[0] == c[3] && c[3] == c[6]) || (c[6] == c[7] && c[7] == c[8])
		|| (c[1] == c[4] && c[4] == c[7]) || (c[2] == c[5] && c[5] == c[8]) || (c[2] == c[4] && c[4] == c[6]) || (c[3] == c[4] && c[4] == c[5]))

	{
		return 1;
	}

	else if ((c[0] != '1') && (c[1] != '2') && (c[2] != '3') && (c[3] != '4') && (c[4] != '5')
		&& (c[5] != '6') && (c[6] != '7') && (c[7] != '8') && (c[8] != '9'))

	{
		return 0;
	}

	else

	{
		return -1;
	}

}

void game()

{

	system("cls");

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "                                                    Tic Tac Toe " << endl << endl;

	cout << endl << "                                   player (1) :    <X>    -    player (2) :    <O> " << endl << endl << endl;

	cout << "                                               -------------------" << endl;

	cout << "                                               |  " << c[0] << "  |  " << c[1] << "  |  " << c[2] << "  |" << endl;

	cout << "                                               -------------------" << endl;

	cout << "                                               |  " << c[3] << "  |  " << c[4] << "  |  " << c[5] << "  |" << endl;

	cout << "                                               -------------------" << endl;

	cout << "                                               |  " << c[6] << "  |  " << c[7] << "  |  " << c[8] << "  |" << endl;

	cout << "                                               -------------------" << endl;

}

void welcome()

{

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "                                                         **~**~**~**~**~**" << endl;

	cout << "                                                         ~*   WELCOME   *~" << endl;

	cout << "                                                         **~**~**~**~**~**" << endl;

	cout << endl << endl << endl;

	cout << endl << "                                                             LET'S PLAY " << endl;

	cout << endl << "                                                               X & O " << endl;

	cout << endl << endl << endl << endl << endl << endl;

	cout << endl << "                                                    CLICK  :ENTER:  TO CONTINUE " << endl;

	cout << endl << endl << endl << "           *-*-*-*-*-*-*-*-*-* ";

	cout << endl << "MADE BY :  *   MARS TEAM   * " << endl;

	cout << "           *-*-*-*-*-*-*-*-*-* " << endl;

	if (cin.get() == '\n')

	{

		system("cls");

	}

}

int main()

{

	welcome();

	int player = 3;

	int ch;

	int z;

	char pos;

	do
	{

		game();

		if (player % 2 == 0)

		{
			player = 2;
		}

		else

		{
			player = 1;
		}

		cout << endl << endl << "                                       Player " "(" << player << ") Enter a Position : ";

		cin >> ch;

		if (player == 1)

		{
			pos = 'X';
		}

		else
		{
			pos = 'O';
		}

		if (ch == 1)

		{
			c[0] = pos;
		}

		else if (ch == 2)

		{
			c[1] = pos;
		}

		else if (ch == 3)

		{
			c[2] = pos;
		}

		else if (ch == 4)

		{
			c[3] = pos;
		}

		else if (ch == 5)

		{
			c[4] = pos;
		}

		else if (ch == 6)

		{
			c[5] = pos;
		}

		else if (ch == 7)

		{
			c[6] = pos;
		}


		else if (ch == 8)

		{
			c[7] = pos;
		}


		else if (ch == 9)

		{
			c[8] = pos;
		}

		else

		{

			cout << endl;

			cout << "                                                 Invalid Move" << endl;

			system("pause");

			player--;

			if (cin.get() == '\n')

			{

				system("cls");

			}

		}

		z = win();

		player++;


	} while (z == -1);

	game();

	if (z == 1)
	{
		cout << endl;

		cout << "                                                               =======" << endl;

		cout << "                                               Player (" << --player << ")  =>  : Win : " << endl;

		cout << "                                                               =======" << endl;

		cout << endl;
	}

	else

	{
		cout << endl;

		cout << "                                                 *: No Winner :* " << endl;
	}

	system("pause");

	if (cin.get() == '\n')

	{

		system("cls");

	}

	exit();

	system("pause");

	return 0;
}
