// But: Ecrire un programme qui lit 10 nombres et qui détermine et affiche la plus grande valeur.
// Auteur: Dhillon, Harjot Singh
// Date: 2021-09-13

#include <iostream>
using namespace std;

void main()
{
	int compteur; // On a 10 variables differentes
	int nombre; // Les nombres entrer par le user
	int max = 0; // Le chiffre avec la plus grande valeur

	for (int compteur= 1; compteur <= 10; compteur++) /* La valeur de "compteur" est de 1,
														 chaque fois qu'une boucle fini, 
														 on ajoute +1 a "compteur" jusqu'a que ce soit 
														 egale ou superieur a 10 */
	
	{
		cout << "Veuillez entrez un nombre: " << endl; // Demande au user d'entrer un chiffre
		cin >> nombre; // Le user entre un chiffre qui a maintenant defini "nombre"

		if (nombre > max) // si la valeur de "nombre" est plus grand que celle de "max"
		{
			max = nombre; // on remplace la valeur de "max" par la valeur de "nombre"
		}
		
		}

	cout << "Le chiffre avec la plus grande valeur est " << max << endl; // On output ce message +
																		 // la valeur de "max" 
}

// Plan de test	      /						 Ecran
// 1,2,3,4,5,6,7,8,9,10	/				10
// -1,-2,-3,-4,-5,-6,-7,-8,-9,-10	/	-1