#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
    this->oCad = gcnew NS_Comp_Data::CLcad();
    this->oMappPersonnel = gcnew NS_Comp_Mappage::CLmapPersonnel();

    this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();

    this->oMappStock = gcnew NS_Comp_Mappage::CLmapStock();

    this->i = 0;
}

//
//Personnel
//

System::Data::DataSet^ NS_Comp_Svc::CLservices::LoadPersonnel(System::String^ dataTableName)
{
    System::String^ sql;

    sql = this->oMappPersonnel->Load();
    return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterPersonnel(System::String^ nom, System::String^ prenom, System::String^ dateEmbauche, System::String^ superieurH, System::String^ numRue, System::String^ nomRue, System::String^ nomVille)
{
    System::String^ sql;

    this->oMappPersonnel->setNom(nom);
    this->oMappPersonnel->setPrenom(prenom);
    this->oMappPersonnel->setDateEmbauche(dateEmbauche);
    this->oMappPersonnel->setSuperieurH(superieurH);
    this->oMappPersonnel->setNumRue(numRue);
    this->oMappPersonnel->setNomRue(nomRue);
    this->oMappPersonnel->setNomVille(nomVille);

    sql = this->oMappPersonnel->SelectIdVille();

    this->oMappPersonnel->setIdVille(this->oCad->get(sql));


    sql = this->oMappPersonnel->InsertAdd();

    this->oMappPersonnel->setIdAdresse(this->oCad->addAdresse(sql));


    sql = this->oMappPersonnel->Insert();

    this->oCad->addData(sql);
}



void NS_Comp_Svc::CLservices::deletePersonnel(System::String^ IdPersonnel) {

    System::String^ sql;

    this->oMappPersonnel->setIdPersonnel(IdPersonnel);

    sql = this->oMappPersonnel->selectIdAdresse();                        //ça c'est juste pour avoir l'IdAdresse du personnel actuel
    this->oMappPersonnel->setIdAdresse(this->oCad->get(sql));

    sql = this->oMappPersonnel->Delete();
    this->oCad->addData(sql);

    sql = this->oMappPersonnel->DeleteAdresse();
    this->oCad->addData(sql);

}

void NS_Comp_Svc::CLservices::updatePersonnel(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ dateEmbauche, System::String^ superieurH, System::String^ numRue, System::String^ nomRue, System::String^ nomVille)
{
    this->oMappPersonnel->setIdPersonnel(id);
    this->oMappPersonnel->setNom(nom);
    this->oMappPersonnel->setPrenom(prenom);
    this->oMappPersonnel->setDateEmbauche(dateEmbauche);
    this->oMappPersonnel->setSuperieurH(superieurH);
    this->oMappPersonnel->setNumRue(numRue);
    this->oMappPersonnel->setNomRue(nomRue);
    this->oMappPersonnel->setNomVille(nomVille);

    System::String^ sql;

    sql = this->oMappPersonnel->SelectIdVille();                          //ça c'est juste pour avoir l'IdVille du personnel actuel
    this->oMappPersonnel->setIdVille(this->oCad->get(sql));

    sql = this->oMappPersonnel->selectIdAdresse();                        //ça c'est juste pour avoir l'IdAdresse du personnel actuel
    this->oMappPersonnel->setIdAdresse(this->oCad->get(sql));

    sql = this->oMappPersonnel->UpdateAdresse();                          //ça c'est juste pour update l'adresse du personnel actuel
    this->oCad->addData(sql);

    sql = this->oMappPersonnel->Update();                                 //ça c'est juste pour update le personnel enfet
    this->oCad->addData(sql);

}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectPersonnel(System::String^ dataTableName, System::String^ IdPersonnel, System::String^ nom, System::String^ prenom) {

    System::String^ sql;

    if (IdPersonnel != "") {
        sql = this->oMappPersonnel->Select("[ID_personnel]=" + IdPersonnel);
        return this->oCad->getRows(sql, dataTableName);
    }
    else if (nom != "") {
        sql = this->oMappPersonnel->Select("[nom]='" + nom + "'");
        return this->oCad->getRows(sql, dataTableName);
    }
    else if (prenom != "") {
        sql = this->oMappPersonnel->Select("[prenom]='" + prenom + "'");
        return this->oCad->getRows(sql, dataTableName);
    }
}

//
//Client
//

System::Data::DataSet^ NS_Comp_Svc::CLservices::LoadClient(System::String^ dataTableName)
{
    System::String^ sql;

    sql = this->oMappClient->Load();
    return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterClient(System::String^ nom, System::String^ prenom, System::String^ dateNaissance)
{
    System::String^ sql;
    System::String^ a;

    this->oMappClient->setNom(nom);
    this->oMappClient->setPrenom(prenom);
    this->oMappClient->setDateNaissance(dateNaissance);
    


    sql = this->oMappClient->Insert();

    a = this->oCad->get(sql);

    this->oMappClient->setIdClient(a);

    for (int j = 0; j < i; j++)
    {
        this->oMappClient->setIdAdresse(ListeAdd[j]);
        sql = this->oMappClient->InsertAvoir();
        this->oCad->addData(sql);
        ListeAdd[j] = "";

    }

    
    this->i = 0;


}

void NS_Comp_Svc::CLservices::ajouterAdd(System::String^ numRue, System::String^ nomRue, System::String^ nomVille)
{
    System::String^ sql;

    this->oMappClient->setNumRue(numRue);
    this->oMappClient->setNomRue(nomRue);
    this->oMappClient->setNomVille(nomVille);

    sql = this->oMappClient->SelectIdVille();

    this->oMappClient->setIdVille(this->oCad->get(sql));


    sql = this->oMappClient->InsertAdd();

    ListeAdd[i]=this->oCad->get(sql);
    this->i++;
}
void NS_Comp_Svc::CLservices::updateClient(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ dateNaissance, System::String^ numRue, System::String^ nomRue, System::String^ nomVille, System::String^ idAdresse)
{
    this->oMappClient->setIdClient(id);
    this->oMappClient->setNom(nom);
    this->oMappClient->setPrenom(prenom);
    this->oMappClient->setDateNaissance(dateNaissance);
    this->oMappClient->setNumRue(numRue);
    this->oMappClient->setNomRue(nomRue);
    this->oMappClient->setNomVille(nomVille);
    this->oMappClient->setIdAdresse(idAdresse);

    System::String^ sql;

    if (nomVille != "")
    {
        sql = this->oMappClient->SelectIdVille();
        this->oMappClient->setIdVille(this->oCad->get(sql));
    }

    if (idAdresse != "")
    {
        sql = this->oMappClient->selectIdAdresseU(idAdresse);
        this->oMappClient->setIdAdresse(this->oCad->get(sql));

        sql = this->oMappClient->UpdateAdresse();
        this->oCad->addData(sql);
    }
    sql = this->oMappClient->Update();
    this->oCad->addData(sql);
    

}

void NS_Comp_Svc::CLservices::deleteClient(System::String^ IdClient) {

    System::String^ sql;

    this->oMappClient->setIdClient(IdClient);

    sql = this->oMappClient->selectIdAdresseD();                        //ça c'est juste pour avoir l'IdAdresse du personnel actuel
    this->oMappClient->setIdAdresse(this->oCad->get(sql));

    sql = this->oMappClient->DeleteAvoir();
    this->oCad->addData(sql);

    sql = this->oMappClient->Delete();
    this->oCad->addData(sql);

    sql = this->oMappClient->DeleteAdresse();
    this->oCad->addData(sql);

}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectClient(System::String^ dataTableName, System::String^ IdClient, System::String^ nom, System::String^ prenom) {

    System::String^ sql;

    if (IdClient != "") {
        sql = this->oMappClient->Select("[client].[Id_client]=" + IdClient);
        return this->oCad->getRows(sql, dataTableName);
    }
    else if (nom != "") {
        sql = this->oMappClient->Select("[client].[nom]='" + nom + "'");
        return this->oCad->getRows(sql, dataTableName);
    }
    else if (prenom != "") {
        sql = this->oMappClient->Select("[client].[prenom]='" + prenom + "'");
        return this->oCad->getRows(sql, dataTableName);
    }
}


//
//Commande
//




//
//Stock
//

System::Data::DataSet^ NS_Comp_Svc::CLservices::LoadArticle(System::String^ dataTableName)
{
    System::String^ sql;

    sql = this->oMappStock->Load();
    return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterArticle(System::String^ nomArticle, System::String^ prixHT, System::String^ seuilRea, System::String^ tva, System::String^ quantite)
{
    System::String^ sql;

    this->oMappStock->setNomArticle(nomArticle);
    this->oMappStock->setPrixHT(prixHT);
    this->oMappStock->setTVA(tva);
    this->oMappStock->setSeuilRea(seuilRea);
    this->oMappStock->setQuantite(quantite);

    sql = this->oMappStock->InsertStock();

    this->oMappStock->setIdStock(this->oCad->get(sql));

    sql = this->oMappStock->Insert();

    this->oCad->addData(sql);

}

void NS_Comp_Svc::CLservices::deleteArticle(System::String^ IdClient) {

    System::String^ sql;

    this->oMappStock->setIdArticle(IdClient);

    sql = this->oMappStock->selectIdStock();                        //ça c'est juste pour avoir l'IdAdresse du personnel actuel
    this->oMappStock->setIdStock(this->oCad->get(sql));

    /*sql = this->oMappStock->DeleteContenir();
    this->oCad->addData(sql);*/

    sql = this->oMappStock->Delete();
    this->oCad->addData(sql);

    sql = this->oMappStock->DeleteStock();
    this->oCad->addData(sql);

}
