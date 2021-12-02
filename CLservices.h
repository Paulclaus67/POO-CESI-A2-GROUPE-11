#pragma once
#include "CLmapPersonnel.h"
#include "CLmapClient.h"
#include "CLmapStock.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
    ref class CLservices
    {
    private:
        NS_Comp_Data::CLcad^ oCad;
        NS_Comp_Mappage::CLmapPersonnel^ oMappPersonnel;
        NS_Comp_Mappage::CLmapClient^ oMappClient;
        NS_Comp_Mappage::CLmapStock^ oMappStock;
        array<System::String^, 1>^ ListeAdd = gcnew cli::array<System::String^>(10);
        int i;
    public:
        CLservices(void);
        //Personnel
        System::Data::DataSet^ LoadPersonnel(System::String^);
        void ajouterPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);    //insert personnel
        void deletePersonnel(System::String^);
        void updatePersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
        System::Data::DataSet^ selectPersonnel(System::String^, System::String^, System::String^, System::String^);
        //Client
        System::Data::DataSet^ LoadClient(System::String^);
        void ajouterClient(System::String^, System::String^, System::String^);
        void NS_Comp_Svc::CLservices::updateClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
        void deleteClient(System::String^);
        System::Data::DataSet^ selectClient(System::String^, System::String^, System::String^, System::String^);
        //Adresse
        void ajouterAdd(System::String^, System::String^, System::String^);
        //Commande
        //Stock
        System::Data::DataSet^ LoadArticle(System::String^);
        void ajouterArticle(System::String^, System::String^, System::String^, System::String^, System::String^);
        void deleteArticle(System::String^);
       // System::Data::DataSet^ selectArticle(System::String^, System::String^, System::String^, System::String^);

    };
}
