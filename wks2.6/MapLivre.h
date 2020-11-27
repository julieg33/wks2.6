#pragma once
using namespace System;

ref class MapLivre
{
public : 
	MapLivre();
	String^ SELECT();
private :
	int ID;
	String^ Titre;
	String^ Auteur;

};

