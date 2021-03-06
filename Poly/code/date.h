#include <string>
using namespace std;

struct Mois
{
	string nom;
	int nbJours;

	unsigned int getNbJours();
	string getNom();
		
};

struct Date
{
	static unsigned int baseNbJours;
	unsigned int NbJours;

	Mois listeMois[] = {
		{nom = "Janvier",nbJours = 31}, 
		{"Fevrier",28}, 
		{"Mars", 31}, 
		{"Avril",30},
		{"Mai", 31},
		{"Juin", 30},
		{"Juillet", 31},
		{"Aout", 30},
		{"Septembre",30} 
		{"Octobre", 31},
		{"Novembre", 30},
		{"Decembre",31}
		}

	string listeJours[]={
		"Lundi",
		"Mardi",
		"Mercredi",
		"Jeudi",
		"Vendredi",
		"Samedi",
		"Dimanche"

	Date(jour, mois, annee)
	~Date();
	
	Date ajoute(Date date);
	unsigned int getMois();
	unsigned int getJour();
	unsigned int getAnnee();
	bool estBissextile();
	void affiche();
};
