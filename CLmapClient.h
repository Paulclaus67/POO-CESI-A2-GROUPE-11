#pragma once

namespace NS_Comp_Mappage
{
	ref class CLmapClient
	{
	private:

		System::String^ nom;
		System::String^ prenom;
		System::String^ dateNaissance;
		System::String^ numRue;
		System::String^ nomRue;
		System::String^ nomVille;
		System::String^ IdVille;
		System::String^ IdAdresse;
		System::String^ IdClient;

	public:

		System::String^ Load(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ Select(System::String^);
		System::String^ InsertAdd(void);
		System::String^ SelectIdVille(void);
		System::String^ InsertAvoir(void);
		System::String^ UpdateAdresse(void);
		System::String^ selectIdAdresseU(System::String^ a);
		System::String^ selectIdAdresseD(void);
		System::String^ DeleteAdresse(void);
		System::String^ DeleteAvoir(void);

		void setIdClient(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDateNaissance(System::String^);
		void setNumRue(System::String^);
		void setNomRue(System::String^);
		void setNomVille(System::String^);
		void setIdVille(System::String^);
        void setIdAdresse(System::String^);

		System::String^ getIdClient(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getDateNaissance(void);
		System::String^ getNumRue(void);
		System::String^ getNomRue(void);
		System::String^ getNomVille(void);
		System::String^ getIdAdresse(void);

	};

}


