#pragma once
namespace NS_Comp_Mappage
{
    ref class CLmapPersonnel
    {
    private:
        System::String^ sSql;

        System::String^ nom;
        System::String^ prenom;
        System::String^ dateEmbauche;
        System::String^ superieurH;
        System::String^ numRue;
        System::String^ nomRue;
        System::String^ nomVille;
        System::String^ IdVille;
        System::String^ IdAdresse;
        System::String^ IdPersonnel;
    public:
        System::String^ Load(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        System::String^ Select(System::String^);
        System::String^ InsertAdd(void);
        System::String^ SelectIdVille(void);
        System::String^ selectIdAdresse(void);
        System::String^ UpdateAdresse(void);
        System::String^ DeleteAdresse(void);

        void setNom(System::String^);
        void setPrenom(System::String^);
        void setDateEmbauche(System::String^);
        void setSuperieurH(System::String^);
        void setNumRue(System::String^);
        void setNomRue(System::String^);
        void setNomVille(System::String^);
        void setIdVille(System::String^);
        void setIdAdresse(System::String^);
        void setIdPersonnel(System::String^);
    };
}