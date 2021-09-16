// But: ecrire un programme qui entre les ventes brutes hebdomadaires de chaque représentant 
// et qui calcule et affiche son salaire.

// Auteur: Dhillon, Harjot Singh

// Date: 2021-09-14

#include <iostream>
using namespace std;

void main()
{
	double v_hebdo; // Le montant de ventes fait.
	const int pay = 500; // La pay garantie, 250$, par semaine, alors 500$ chaque 2 semaines.
	double total; // La paie total du representant.
	
	
	cout << "Entrez vos ventes brutes hebdomadaire" << endl;
	cin >> v_hebdo;
	
	if (v_hebdo == -1) // Si la valeur entrer par le user est de -1, on quitte le programme.
	{
		
		cout << "Vous avez fermer le programme, pesez sur une touche pour quitter" << endl;
		
	}
	else // Si une valeur apart -1 est rentrer, suivre les instructions suivante.
	{
		total = pay + (v_hebdo * 0.075); // Le total est egale a la paie garantie plus 7.5% (0.075) 
										 //	de leur comission.

		cout << "Votre paie hebdomadaires est de: " << total << endl; // Montrer leur paie sur l'ecran.
	}
	system("exit"); // Demander au system de se fermer.
}


