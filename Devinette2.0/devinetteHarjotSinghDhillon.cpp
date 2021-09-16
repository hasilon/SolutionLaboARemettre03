#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	int nb_essai; // Cette variable represente le nombre d'essaies du user
	int user_guess; // Cette variable est le nombre deviner par le user
	int nb_essai_rest; // Cette variable represente le nombre de fois que le user peut essayer de deviner


	srand(time(0)); // pour activer l’aléatoire dans le programme

	random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random

	cout << "Deviner un nombre entre 1 et 100" << random << endl; // Instructions au user
	cin >> user_guess; // Nombre deviner par le user


	for (nb_essai = 1; nb_essai < 5; nb_essai++)
	{
		nb_essai_rest = 5 - nb_essai;


		if (random != user_guess && user_guess > 0 && user_guess < 100)
		{
			cout << "Le nombre deviner est incorrect, veuillez reessayer" << endl;
			cout << "Ils vous restent " << nb_essai_rest << " essaies" << endl;
			cin >> user_guess;
		}

		else

			if (random = user_guess && user_guess > 0 && user_guess < 100)
			{
				cout << "Vous avez devinez le bon nombre" << endl;
				break;
			}

		if (user_guess < 0 || user_guess > 100)
		{
			cout << "Entrez un autre nombre entre 1 et 100" << endl;
			cout << "Ils vous restent " << nb_essai_rest << " essaies" << endl;
			cin >> user_guess;
		}


	}
}



