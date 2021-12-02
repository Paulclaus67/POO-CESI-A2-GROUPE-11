#include "CLcad.h"

NS_Comp_Data::CLcad::CLcad(void)
{
    this->sCnx = "Data Source=MSI\\MSSQL_SWEN;Initial Catalog=DB_POO;User ID=CNX_prjPOO;Password=gblxpmoiy67";


    this->sSql = "Rien";

    this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
    this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

    this->oCmd->CommandType = System::Data::CommandType::Text;
}

System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
    this->oDs->Clear();
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oDA->Fill(this->oDs, sDataTableName);

    return this->oDs;
}

void NS_Comp_Data::CLcad::addData(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oCnx->Open();
    this->oCmd->ExecuteNonQuery();
    this->oCnx->Close();
}

System::String^ NS_Comp_Data::CLcad::get(System::String^ sSql)
{
    System::Object^ a;

    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oCnx->Open();
    a = this->oCmd->ExecuteScalar();
    this->oCnx->Close();

    return a->ToString();
}

System::String^ NS_Comp_Data::CLcad::addAdresse(System::String^ sSql)
{
    int a;

    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oCnx->Open();
    a = (int)this->oCmd->ExecuteScalar();
    this->oCnx->Close();

    return a.ToString();
}