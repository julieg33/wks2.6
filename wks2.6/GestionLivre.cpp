#include "GestionLivre.h"
namespace Services {
    GestionLivre::GestionLivre()
    {
        this->acces_bdd = gcnew AccesBdd();
        this->livre = gcnew MapLivre();
    }

    DataSet^ GestionLivre::listeLivre(String^ datatablename)
    {
        this->ds = gcnew DataSet();
        this->ds = this->acces_bdd->getRows(this->livre->SELECT(), datatablename);
        return this->ds;
    }
}