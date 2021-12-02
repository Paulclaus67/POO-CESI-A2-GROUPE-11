#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapStock
	{
	private:

		System::String^ nomArticle;
		System::String^ prixHT;
		System::String^ tva;
		System::String^ seuilRea;
		System::String^ quantite;
		System::String^ idArticle;
		System::String^ idStock;

	public:

		System::String^ Load(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ selectIdStock(void);
		System::String^ InsertStock(void);
		System::String^ DeleteContenir(void); 
		System::String^ DeleteStock(void);

		void setIdArticle(System::String^);
		void setNomArticle(System::String^);
		void setPrixHT(System::String^);
		void setTVA(System::String^);
		void setSeuilRea(System::String^);
		void setQuantite(System::String^);
		void setIdStock(System::String^);

		System::String^ getIdArticle(void);
		System::String^ getNomArticle(void);
		System::String^ getPrixHT(void);
		System::String^ getTVA(void);
		System::String^ getSeuilRea(void);
		System::String^ getQuantite(void);
		System::String^ getIdStock(void);

	};

}

