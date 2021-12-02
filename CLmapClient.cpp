#include "CLmapClient.h"


System::String^ NS_Comp_Mappage::CLmapClient::Load(void)
{
	return "SELECT client.Id_client, client.Nom, Prenom, Date_de_naissance,Adresse.ID_adresse, n_, rue, Ville.Nom, CP FROM [DB_POO].[dbo].[client] INNER JOIN Avoir ON client.Id_client = Avoir.Id_client INNER JOIN Adresse ON Avoir.ID_adresse=Adresse.ID_adresse INNER JOIN Ville ON Adresse.Id_ville = Ville.Id_ville";
}
System::String^ NS_Comp_Mappage::CLmapClient::Insert(void)
{
	return "INSERT INTO [dbo].[client]([Nom],[Prenom],[Date_de_naissance]) OUTPUT INSERTED.[ID_client] VALUES('" + this->nom + "','" + this->prenom + "','" + this->dateNaissance + "')";
}
System::String^ NS_Comp_Mappage::CLmapClient::Delete(void)
{
	return "DELETE FROM [DB_POO].[dbo].[client] WHERE Id_client=" + this->IdClient + "";
}
System::String^ NS_Comp_Mappage::CLmapClient::Update(void)
{
	return "UPDATE [DB_POO].[dbo].[client] SET [Nom] = '" + this->nom + "',[Prenom] = '" + this->prenom + "',[Date_de_naissance] = '" + this->dateNaissance + "' WHERE [ID_client]=" + this->IdClient + "";
}
System::String^ NS_Comp_Mappage::CLmapClient::Select(System::String^ a)
{
	return "SELECT client.Id_client, client.Nom, Prenom, Date_de_naissance,Adresse.ID_adresse, n_, rue, Ville.Nom, CP FROM [DB_POO].[dbo].[client] INNER JOIN Avoir ON client.Id_client = Avoir.Id_client INNER JOIN Adresse ON Avoir.ID_adresse=Adresse.ID_adresse INNER JOIN Ville ON Adresse.Id_ville = Ville.Id_ville WHERE " + a +"";
}
System::String^ NS_Comp_Mappage::CLmapClient::SelectIdVille(void)
{
	return "SELECT [Id_ville] FROM [DB_POO].[dbo].[Ville] WHERE [Nom] = '" + this->nomVille + "'";
}
System::String^ NS_Comp_Mappage::CLmapClient::InsertAdd(void)
{
	return "INSERT INTO [dbo].[Adresse]([n_],[rue],[Id_ville]) OUTPUT INSERTED.[ID_adresse] VALUES(" + this->numRue + ", '" + this->nomRue + "'," + this->IdVille + ")";
}
System::String^ NS_Comp_Mappage::CLmapClient::UpdateAdresse(void)
{
	return "UPDATE [DB_POO].[dbo].[Adresse] SET [n_] = " + this->numRue + ",[rue] = '" + this->nomRue + "',[Id_ville] = " + this->IdVille + " WHERE [ID_adresse]= " + this->IdAdresse + "";
}
System::String^ NS_Comp_Mappage::CLmapClient::selectIdAdresseU(System::String^ a)
{
	return "SELECT [ID_adresse] FROM [DB_POO].[dbo].[Avoir] WHERE [Id_client]=" + this->IdClient + " AND [ID_adresse]= "+ a +";";
}
System::String^ NS_Comp_Mappage::CLmapClient::selectIdAdresseD(void)
{
	return "SELECT [ID_adresse] FROM [DB_POO].[dbo].[Avoir] WHERE [Id_client]=" + this->IdClient + "";
}
System::String^ NS_Comp_Mappage::CLmapClient::InsertAvoir(void)
{
	return "INSERT INTO [dbo].[Avoir]([ID_adresse],[Id_client]) VALUES(" + this->IdAdresse + ", " + this->IdClient + ")";
}
System::String^ NS_Comp_Mappage::CLmapClient::DeleteAdresse(void)
{
	return "DELETE FROM [DB_POO].[dbo].[Adresse] WHERE [ID_adresse]=" + this->IdAdresse + "";
}
System::String^ NS_Comp_Mappage::CLmapClient::DeleteAvoir(void)
{
	return "DELETE FROM [DB_POO].[dbo].[Avoir] WHERE [Id_client]=" + this->IdClient + "";
}
void NS_Comp_Mappage::CLmapClient::setIdClient(System::String^ IdClient) {
	this->IdClient = IdClient;
}
void NS_Comp_Mappage::CLmapClient::setNom(System::String^ nom) {
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapClient::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapClient::setDateNaissance(System::String^ dateNaissance) {
	this->dateNaissance = dateNaissance;
}
void NS_Comp_Mappage::CLmapClient::setNumRue(System::String^ numRue) {
	this->numRue = numRue;
}
void NS_Comp_Mappage::CLmapClient::setNomRue(System::String^ nomRue) {
	this->nomRue = nomRue;
}
void NS_Comp_Mappage::CLmapClient::setNomVille(System::String^ nomVille) {
	this->nomVille = nomVille;
}
void NS_Comp_Mappage::CLmapClient::setIdVille(System::String^ idVille) {
	this->IdVille = idVille;
}
void NS_Comp_Mappage::CLmapClient::setIdAdresse(System::String^ idAdresse) {
	this->IdAdresse = idAdresse;
}



System::String^ NS_Comp_Mappage::CLmapClient::getIdClient(void) { return this->IdClient; }
System::String^ NS_Comp_Mappage::CLmapClient::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapClient::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmapClient::getDateNaissance(void) { return this->dateNaissance; }
System::String^ NS_Comp_Mappage::CLmapClient::getNumRue(void) { return this->numRue; }
System::String^ NS_Comp_Mappage::CLmapClient::getNomRue(void) { return this->nomRue; }
System::String^ NS_Comp_Mappage::CLmapClient::getNomVille(void) { return this->nomVille; }
System::String^ NS_Comp_Mappage::CLmapClient::getIdAdresse(void) { return this->IdAdresse; }