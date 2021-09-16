#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	int nb_essai;
	int user_guess;
	
	
	srand(time(0)); // pour activer l’aléatoire dans le programme
	
	random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random

	cout << "Deviner un nombre entre 1 et 100" << endl;
	cin >> user_guess;

	while (user_guess < 0 || user_guess > 100)
	{
		cout << "Erreur, entrer un nombre entre 1 et 100" << endl;

		cout << "Deviner un nombre entre 1 et 100" << endl;
		cin >> user_guess;
	}

	if (user_guess != random)
	{
		for (nb_essai = 5; nb_essai >=0; nb_essai--)
		{
			cout << "retry";
			cin >> user_guess;
		}
	}
	else 
	{
		if (user_guess = random);
		{
			cout << "nice";
		}
	}

}
