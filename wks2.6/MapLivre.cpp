#include "MapLivre.h"

MapLivre::MapLivre()
{
	this->ID = -1;
	this->Titre = "";
	this->Auteur = "";
}

String^ MapLivre::SELECT()
{
	return "SELECT * FROM Livre";
}
