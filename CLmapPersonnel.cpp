#include "CLmapPersonnel.h"

System::String^ NS_Comp_Mappage::CLmapPersonnel::Load(void)
{
	return "SELECT ID_personnel, personnel.Nom, Prenom, Date_d_embauche, Superieur_hierarchique, n_, rue, Ville.Nom, CP FROM [DB_POO].[dbo].[personnel] INNER JOIN Adresse ON personnel.ID_adresse = Adresse.ID_adresse INNER JOIN Ville ON Adresse.Id_ville=Ville.Id_ville";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Insert(void)
{
	return "INSERT INTO [dbo].[personnel]([Nom],[Prenom],[Date_d_embauche],[Superieur_hierarchique],[ID_adresse]) VALUES('" + this->nom + "','" + this->prenom + "','" + this->dateEmbauche + "','" + this->superieurH + "'," + this->IdAdresse + ")";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Delete(void)
{
	return "DELETE FROM [DB_POO].[dbo].[personnel] WHERE ID_personnel=" + this->IdPersonnel + "";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Update(void)
{
	return "UPDATE [DB_POO].[dbo].[personnel] SET [Nom] = '" + this->nom + "',[Prenom] = '" + this->prenom + "',[Date_d_embauche] = '" + this->dateEmbauche + "',[Superieur_hierarchique] = '" + this->superieurH + "' WHERE [ID_personnel]=" + this->IdPersonnel + "";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Select(System::String^ a)
{
	return "SELECT [ID_personnel],[Nom],[Prenom],[Date_d_embauche],[Superieur_hierarchique],[ID_adresse] FROM [DB_POO].[dbo].[personnel]  WHERE " + a + ";";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::InsertAdd(void)
{
	return "INSERT INTO [dbo].[Adresse]([n_],[rue],[Id_ville]) OUTPUT INSERTED.[ID_adresse] VALUES(" + this->numRue + ", '" + this->nomRue + "'," + this->IdVille + ")";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::SelectIdVille(void)
{
	return "SELECT [Id_ville] FROM [DB_POO].[dbo].[Ville] WHERE [Nom] = '" + this->nomVille + "'";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::selectIdAdresse(void)
{
	return "SELECT [ID_adresse] FROM [DB_POO].[dbo].[personnel] WHERE [ID_personnel]=" + this->IdPersonnel + "";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::UpdateAdresse(void)
{
	return "UPDATE [DB_POO].[dbo].[Adresse] SET [n_] = " + this->numRue + ",[rue] = '" + this->nomRue + "',[Id_ville] = " + this->IdVille + " WHERE [ID_adresse]= " + this->IdAdresse + "";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::DeleteAdresse(void)
{
	return "DELETE FROM [DB_POO].[dbo].[Adresse] WHERE [ID_adresse]=" + this->IdAdresse + "";
}

void NS_Comp_Mappage::CLmapPersonnel::setNom(System::String^ nom) { this->nom = nom; }
void NS_Comp_Mappage::CLmapPersonnel::setPrenom(System::String^ prenom) { this->prenom = prenom; }
void NS_Comp_Mappage::CLmapPersonnel::setDateEmbauche(System::String^ dateEmbauche) { this->dateEmbauche = dateEmbauche; }
void NS_Comp_Mappage::CLmapPersonnel::setSuperieurH(System::String^ superieurH) { this->superieurH = superieurH; }
void NS_Comp_Mappage::CLmapPersonnel::setNumRue(System::String^ numRue) { this->numRue = numRue; }
void NS_Comp_Mappage::CLmapPersonnel::setNomRue(System::String^ nomRue) { this->nomRue = nomRue; }
void NS_Comp_Mappage::CLmapPersonnel::setNomVille(System::String^ nomVille) { this->nomVille = nomVille; }
void NS_Comp_Mappage::CLmapPersonnel::setIdVille(System::String^ idVille) { this->IdVille = idVille; }
void NS_Comp_Mappage::CLmapPersonnel::setIdAdresse(System::String^ idAdresse) { this->IdAdresse = idAdresse; }
void NS_Comp_Mappage::CLmapPersonnel::setIdPersonnel(System::String^ idPersonnel) { this->IdPersonnel = idPersonnel; }