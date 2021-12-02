#include "CLmapStock.h"

System::String^ NS_Comp_Mappage::CLmapStock::Load(void)
{
	return "SELECT [Reference_art], [Nom], [Prix_HT], [taux_de_TVA],[Seuil_de_reapprovisionnement], [Id_stock] FROM [DB_POO].[dbo].[Article]";
}
System::String^ NS_Comp_Mappage::CLmapStock::Insert(void)
{
	return "INSERT INTO [dbo].[Article]([Nom],[Prix_HT],[Seuil_de_reapprovisionnement], [taux_de_TVA], [Id_stock]) VALUES('" + this->nomArticle + "'," + this->prixHT + "," + this->seuilRea + ","+ this->tva +","+ this->idStock +")";
}
System::String^ NS_Comp_Mappage::CLmapStock::Delete(void)
{
	return "DELETE FROM [DB_POO].[dbo].[Article] WHERE [Reference_art] =" + this->idArticle + "";
}
System::String^ NS_Comp_Mappage::CLmapStock::Update(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmapStock::InsertStock(void)
{
	return "INSERT INTO [dbo].[Stock]([Quantite]) OUTPUT INSERTED.[Id_stock] VALUES("+ this->quantite +")";
}
System::String^ NS_Comp_Mappage::CLmapStock::selectIdStock(void)
{
	return "SELECT [Id_stock] FROM [DB_POO].[dbo].[Stock] WHERE [Id_stock]=" + this->idStock + "";
}
System::String^ NS_Comp_Mappage::CLmapStock::DeleteContenir(void)
{
	return "DELETE FROM [DB_POO].[dbo].[contenir] WHERE [Reference_art]=" + this->idArticle + "";
}
System::String^ NS_Comp_Mappage::CLmapStock::DeleteStock(void)
{
	return "DELETE FROM [DB_POO].[dbo].[Stock] WHERE [Id_stock]=" + this->idStock + "";
}

void NS_Comp_Mappage::CLmapStock::setIdArticle(System::String^ idArticle)
{
	this->idArticle = idArticle;
}
void NS_Comp_Mappage::CLmapStock::setNomArticle(System::String^ nomArticle)
{
	this->nomArticle = nomArticle;
}
void NS_Comp_Mappage::CLmapStock::setPrixHT(System::String^ prixHT)
{
	this->prixHT = prixHT;
}
void NS_Comp_Mappage::CLmapStock::setTVA(System::String^ tva)
{
	this->tva = tva;
}
void NS_Comp_Mappage::CLmapStock::setSeuilRea(System::String^ seuilRea)
{
	this->seuilRea = seuilRea;
}
void NS_Comp_Mappage::CLmapStock::setQuantite(System::String^ quantite)
{
	this->quantite = quantite;
}
void NS_Comp_Mappage::CLmapStock::setIdStock(System::String^ idStock)
{
	this->idStock = idStock;
}

System::String^ NS_Comp_Mappage::CLmapStock::getIdArticle(void) { return this->idArticle; }
System::String^ NS_Comp_Mappage::CLmapStock::getIdStock(void) { return this->idStock; }
System::String^ NS_Comp_Mappage::CLmapStock::getNomArticle(void) { return this->nomArticle; }
System::String^ NS_Comp_Mappage::CLmapStock::getPrixHT(void) { return this->prixHT; }
System::String^ NS_Comp_Mappage::CLmapStock::getTVA(void) { return this->tva; }
System::String^ NS_Comp_Mappage::CLmapStock::getSeuilRea(void) { return this->seuilRea; }
System::String^ NS_Comp_Mappage::CLmapStock::getQuantite(void) { return this->quantite; }