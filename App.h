#pragma once
#include "CLservices.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	public:
		App(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~App()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Onglets;
	protected:
	private: System::Windows::Forms::TabPage^ Client;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ Personnel;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ Commande;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TabPage^ Stock;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TabPage^ Statistiques;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::TabControl^ Request;
	private: System::Windows::Forms::TabPage^ Insert;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::TabPage^ Update;
	private: System::Windows::Forms::TabPage^ Delete;
	private: System::Windows::Forms::TabPage^ Select;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Button_insert_client;












	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox12;



	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;



	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ Button_update_client;
	private: System::Windows::Forms::Button^ Button_delete_client;
	private: System::Windows::Forms::Button^ Button_select_client;







	private: System::Windows::Forms::TextBox^ textBox22;

	private: System::Windows::Forms::TextBox^ textBox20;

	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::Button^ button_add_fact;






	private: System::Windows::Forms::TextBox^ textBox25;

	private: System::Windows::Forms::TextBox^ textBox27;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox29;




	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label22;





	private: System::Windows::Forms::TextBox^ textBox35;

	private: System::Windows::Forms::TextBox^ textBox37;

	private: System::Windows::Forms::Label^ label24;

	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::Button^ Button_insert_personnel;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::TextBox^ textBox41;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label28;





	private: System::Windows::Forms::TextBox^ textBox46;

	private: System::Windows::Forms::TextBox^ textBox48;
	private: System::Windows::Forms::Button^ Button_update_personnel;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox49;

	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;

	private: System::Windows::Forms::TextBox^ textBox51;
	private: System::Windows::Forms::TextBox^ textBox52;
	private: System::Windows::Forms::TextBox^ textBox53;
	private: System::Windows::Forms::TextBox^ textBox54;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ Button_delete_personnel;



	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox56;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ Button_select_personnel;

	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox57;


	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;


	private: System::Windows::Forms::TextBox^ textBox61;
	private: System::Windows::Forms::TextBox^ textBox62;
	private: System::Windows::Forms::Label^ label23;











	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox63;

	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::TextBox^ textBox64;


	private: System::Windows::Forms::Label^ label13;






	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;





	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;













	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::Label^ label71;


	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label107;
	private: System::Windows::Forms::TextBox^ textBox95;
	private: System::Windows::Forms::Label^ label83;
	private: System::Windows::Forms::TextBox^ textBox94;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::TextBox^ textBox69;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::TextBox^ textBox68;
	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::TextBox^ textBox67;
	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::Label^ label81;
	private: System::Windows::Forms::TextBox^ textBox66;
	private: System::Windows::Forms::Label^ label82;
	private: System::Windows::Forms::TextBox^ textBox70;
	private: System::Windows::Forms::Button^ Button_insert_commande;
	private: System::Windows::Forms::Label^ label84;
	private: System::Windows::Forms::Label^ label85;
	private: System::Windows::Forms::Label^ label86;
	private: System::Windows::Forms::TextBox^ textBox71;
	private: System::Windows::Forms::TextBox^ textBox72;
	private: System::Windows::Forms::TextBox^ textBox73;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label96;
	private: System::Windows::Forms::TextBox^ textBox83;
	private: System::Windows::Forms::Label^ label88;
	private: System::Windows::Forms::TextBox^ textBox75;
	private: System::Windows::Forms::Label^ label89;
	private: System::Windows::Forms::TextBox^ textBox76;
	private: System::Windows::Forms::Label^ label90;
	private: System::Windows::Forms::TextBox^ textBox77;
	private: System::Windows::Forms::Label^ label91;
	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::TextBox^ textBox78;
	private: System::Windows::Forms::TextBox^ textBox79;
	private: System::Windows::Forms::Label^ label93;
	private: System::Windows::Forms::Label^ label94;
	private: System::Windows::Forms::Label^ label95;
	private: System::Windows::Forms::TextBox^ textBox80;
	private: System::Windows::Forms::TextBox^ textBox81;
	private: System::Windows::Forms::TextBox^ textBox82;
	private: System::Windows::Forms::Button^ Button_update_commande;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::Button^ Button_delete_commande;
	private: System::Windows::Forms::Label^ label99;
	private: System::Windows::Forms::TextBox^ textBox84;
	private: System::Windows::Forms::TabPage^ tabPage8;


















	private: System::Windows::Forms::Label^ label101;
	private: System::Windows::Forms::Button^ Button_select_commande;
	private: System::Windows::Forms::Label^ label87;
	private: System::Windows::Forms::TextBox^ textBox74;
	private: System::Windows::Forms::Label^ label98;
	private: System::Windows::Forms::TextBox^ textBox86;
	private: System::Windows::Forms::Label^ label97;
	private: System::Windows::Forms::TextBox^ textBox85;


	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TabControl^ tabControl3;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Button^ Button_insert_stock;

private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::TextBox^ textBox47;
private: System::Windows::Forms::TextBox^ textBox50;
private: System::Windows::Forms::TextBox^ textBox55;
private: System::Windows::Forms::TabPage^ tabPage10;






private: System::Windows::Forms::Label^ label115;


private: System::Windows::Forms::TextBox^ textBox99;
private: System::Windows::Forms::Button^ Button_update_stock;

private: System::Windows::Forms::TabPage^ tabPage11;
private: System::Windows::Forms::Button^ Button_delete_stock;

private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::TextBox^ textBox100;
private: System::Windows::Forms::TabPage^ tabPage12;
private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::TextBox^ textBox101;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::Button^ Button_select_stock;

private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button3;



























	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Onglets = (gcnew System::Windows::Forms::TabControl());
			this->Client = (gcnew System::Windows::Forms::TabPage());
			this->Request = (gcnew System::Windows::Forms::TabControl());
			this->Insert = (gcnew System::Windows::Forms::TabPage());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->button_add_fact = (gcnew System::Windows::Forms::Button());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->Button_insert_client = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Update = (gcnew System::Windows::Forms::TabPage());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->Button_update_client = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->Delete = (gcnew System::Windows::Forms::TabPage());
			this->Button_delete_client = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->Select = (gcnew System::Windows::Forms::TabPage());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Button_select_client = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Personnel = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->Button_insert_personnel = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->Button_update_personnel = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->Button_delete_personnel = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Button_select_personnel = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Commande = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->Button_insert_commande = (gcnew System::Windows::Forms::Button());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->Button_update_commande = (gcnew System::Windows::Forms::Button());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->Button_delete_commande = (gcnew System::Windows::Forms::Button());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->Button_select_commande = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Stock = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->Button_insert_stock = (gcnew System::Windows::Forms::Button());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->textBox99 = (gcnew System::Windows::Forms::TextBox());
			this->Button_update_stock = (gcnew System::Windows::Forms::Button());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->Button_delete_stock = (gcnew System::Windows::Forms::Button());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->textBox100 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->textBox101 = (gcnew System::Windows::Forms::TextBox());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->Button_select_stock = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Statistiques = (gcnew System::Windows::Forms::TabPage());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Onglets->SuspendLayout();
			this->Client->SuspendLayout();
			this->Request->SuspendLayout();
			this->Insert->SuspendLayout();
			this->Update->SuspendLayout();
			this->Delete->SuspendLayout();
			this->Select->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Personnel->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->Commande->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->Stock->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->Statistiques->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// Onglets
			// 
			this->Onglets->Controls->Add(this->Client);
			this->Onglets->Controls->Add(this->Personnel);
			this->Onglets->Controls->Add(this->Commande);
			this->Onglets->Controls->Add(this->Stock);
			this->Onglets->Controls->Add(this->Statistiques);
			this->Onglets->Location = System::Drawing::Point(1, -1);
			this->Onglets->Name = L"Onglets";
			this->Onglets->SelectedIndex = 0;
			this->Onglets->Size = System::Drawing::Size(1076, 592);
			this->Onglets->TabIndex = 0;
			// 
			// Client
			// 
			this->Client->Controls->Add(this->Request);
			this->Client->Controls->Add(this->button1);
			this->Client->Controls->Add(this->dataGridView1);
			this->Client->Location = System::Drawing::Point(4, 22);
			this->Client->Name = L"Client";
			this->Client->Padding = System::Windows::Forms::Padding(3);
			this->Client->Size = System::Drawing::Size(1068, 566);
			this->Client->TabIndex = 0;
			this->Client->Text = L"Client";
			this->Client->UseVisualStyleBackColor = true;
			// 
			// Request
			// 
			this->Request->Controls->Add(this->Insert);
			this->Request->Controls->Add(this->Update);
			this->Request->Controls->Add(this->Delete);
			this->Request->Controls->Add(this->Select);
			this->Request->Location = System::Drawing::Point(181, 279);
			this->Request->Name = L"Request";
			this->Request->SelectedIndex = 0;
			this->Request->Size = System::Drawing::Size(881, 284);
			this->Request->TabIndex = 6;
			// 
			// Insert
			// 
			this->Insert->Controls->Add(this->label49);
			this->Insert->Controls->Add(this->label50);
			this->Insert->Controls->Add(this->label51);
			this->Insert->Controls->Add(this->button_add_fact);
			this->Insert->Controls->Add(this->textBox25);
			this->Insert->Controls->Add(this->textBox27);
			this->Insert->Controls->Add(this->label5);
			this->Insert->Controls->Add(this->textBox29);
			this->Insert->Controls->Add(this->Button_insert_client);
			this->Insert->Controls->Add(this->label3);
			this->Insert->Controls->Add(this->label2);
			this->Insert->Controls->Add(this->label1);
			this->Insert->Controls->Add(this->textBox3);
			this->Insert->Controls->Add(this->textBox2);
			this->Insert->Controls->Add(this->textBox1);
			this->Insert->Location = System::Drawing::Point(4, 22);
			this->Insert->Name = L"Insert";
			this->Insert->Padding = System::Windows::Forms::Padding(3);
			this->Insert->Size = System::Drawing::Size(873, 258);
			this->Insert->TabIndex = 0;
			this->Insert->Text = L"Insert";
			this->Insert->UseVisualStyleBackColor = true;
			this->Insert->Click += gcnew System::EventHandler(this, &App::Insert_Click);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(551, 67);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(26, 13);
			this->label49->TabIndex = 63;
			this->label49->Text = L"Ville";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(326, 67);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(73, 13);
			this->label50->TabIndex = 62;
			this->label50->Text = L"Nom de la rue";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(286, 67);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(17, 13);
			this->label51->TabIndex = 61;
			this->label51->Text = L"n°";
			// 
			// button_add_fact
			// 
			this->button_add_fact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->button_add_fact->Location = System::Drawing::Point(630, 82);
			this->button_add_fact->Name = L"button_add_fact";
			this->button_add_fact->Size = System::Drawing::Size(38, 22);
			this->button_add_fact->TabIndex = 55;
			this->button_add_fact->Text = L"add";
			this->button_add_fact->UseVisualStyleBackColor = true;
			this->button_add_fact->Click += gcnew System::EventHandler(this, &App::button_add_fact_Click);
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(548, 83);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(76, 20);
			this->textBox25->TabIndex = 51;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(326, 83);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(216, 20);
			this->textBox27->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(286, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Adresse de facturation";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(284, 83);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(36, 20);
			this->textBox29->TabIndex = 45;
			// 
			// Button_insert_client
			// 
			this->Button_insert_client->BackColor = System::Drawing::Color::LightGreen;
			this->Button_insert_client->Location = System::Drawing::Point(644, 211);
			this->Button_insert_client->Name = L"Button_insert_client";
			this->Button_insert_client->Size = System::Drawing::Size(148, 23);
			this->Button_insert_client->TabIndex = 10;
			this->Button_insert_client->Text = L"Valider";
			this->Button_insert_client->UseVisualStyleBackColor = false;
			this->Button_insert_client->Click += gcnew System::EventHandler(this, &App::Button_insert_client_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Date de naissance";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Prénom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Nom";
			this->label1->Click += gcnew System::EventHandler(this, &App::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(40, 122);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(216, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &App::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(40, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &App::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &App::textBox1_TextChanged);
			// 
			// Update
			// 
			this->Update->Controls->Add(this->label30);
			this->Update->Controls->Add(this->textBox16);
			this->Update->Controls->Add(this->label57);
			this->Update->Controls->Add(this->label58);
			this->Update->Controls->Add(this->label59);
			this->Update->Controls->Add(this->label19);
			this->Update->Controls->Add(this->textBox22);
			this->Update->Controls->Add(this->textBox20);
			this->Update->Controls->Add(this->Button_update_client);
			this->Update->Controls->Add(this->label11);
			this->Update->Controls->Add(this->textBox11);
			this->Update->Controls->Add(this->label6);
			this->Update->Controls->Add(this->label8);
			this->Update->Controls->Add(this->label9);
			this->Update->Controls->Add(this->label10);
			this->Update->Controls->Add(this->textBox6);
			this->Update->Controls->Add(this->textBox8);
			this->Update->Controls->Add(this->textBox9);
			this->Update->Controls->Add(this->textBox10);
			this->Update->Location = System::Drawing::Point(4, 22);
			this->Update->Name = L"Update";
			this->Update->Padding = System::Windows::Forms::Padding(3);
			this->Update->Size = System::Drawing::Size(873, 258);
			this->Update->TabIndex = 1;
			this->Update->Text = L"Update";
			this->Update->UseVisualStyleBackColor = true;
			this->Update->Click += gcnew System::EventHandler(this, &App::Update_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(615, 48);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(18, 13);
			this->label30->TabIndex = 70;
			this->label30->Text = L"ID";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(613, 66);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(31, 20);
			this->textBox16->TabIndex = 69;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(534, 50);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(26, 13);
			this->label57->TabIndex = 67;
			this->label57->Text = L"Ville";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(309, 50);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(73, 13);
			this->label58->TabIndex = 66;
			this->label58->Text = L"Nom de la rue";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(269, 50);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(17, 13);
			this->label59->TabIndex = 65;
			this->label59->Text = L"n°";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(772, 48);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 43;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(531, 66);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(76, 20);
			this->textBox22->TabIndex = 38;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(309, 66);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(216, 20);
			this->textBox20->TabIndex = 36;
			// 
			// Button_update_client
			// 
			this->Button_update_client->BackColor = System::Drawing::Color::LightGreen;
			this->Button_update_client->Location = System::Drawing::Point(644, 211);
			this->Button_update_client->Name = L"Button_update_client";
			this->Button_update_client->Size = System::Drawing::Size(148, 23);
			this->Button_update_client->TabIndex = 34;
			this->Button_update_client->Text = L"Valider";
			this->Button_update_client->UseVisualStyleBackColor = false;
			this->Button_update_client->Click += gcnew System::EventHandler(this, &App::Button_update_client_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 7);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 13);
			this->label11->TabIndex = 33;
			this->label11->Text = L"ID";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(20, 25);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(216, 20);
			this->textBox11->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(269, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Adresse de facturation";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 130);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Date de naissance";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 89);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Prénom";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(22, 48);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 13);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Nom";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(267, 66);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(36, 20);
			this->textBox6->TabIndex = 26;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(20, 146);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(216, 20);
			this->textBox8->TabIndex = 24;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(20, 107);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(216, 20);
			this->textBox9->TabIndex = 23;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(20, 66);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(216, 20);
			this->textBox10->TabIndex = 22;
			// 
			// Delete
			// 
			this->Delete->Controls->Add(this->Button_delete_client);
			this->Delete->Controls->Add(this->label15);
			this->Delete->Controls->Add(this->textBox15);
			this->Delete->Location = System::Drawing::Point(4, 22);
			this->Delete->Name = L"Delete";
			this->Delete->Padding = System::Windows::Forms::Padding(3);
			this->Delete->Size = System::Drawing::Size(873, 258);
			this->Delete->TabIndex = 2;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = true;
			// 
			// Button_delete_client
			// 
			this->Button_delete_client->BackColor = System::Drawing::Color::LightGreen;
			this->Button_delete_client->Location = System::Drawing::Point(644, 211);
			this->Button_delete_client->Name = L"Button_delete_client";
			this->Button_delete_client->Size = System::Drawing::Size(148, 23);
			this->Button_delete_client->TabIndex = 16;
			this->Button_delete_client->Text = L"Valider";
			this->Button_delete_client->UseVisualStyleBackColor = false;
			this->Button_delete_client->Click += gcnew System::EventHandler(this, &App::Button_delete_client_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(25, 29);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(18, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"ID";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(23, 47);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(216, 20);
			this->textBox15->TabIndex = 10;
			// 
			// Select
			// 
			this->Select->Controls->Add(this->label23);
			this->Select->Controls->Add(this->Button_select_client);
			this->Select->Controls->Add(this->label12);
			this->Select->Controls->Add(this->textBox12);
			this->Select->Controls->Add(this->label17);
			this->Select->Controls->Add(this->label18);
			this->Select->Controls->Add(this->textBox17);
			this->Select->Controls->Add(this->textBox18);
			this->Select->Location = System::Drawing::Point(4, 22);
			this->Select->Name = L"Select";
			this->Select->Padding = System::Windows::Forms::Padding(3);
			this->Select->Size = System::Drawing::Size(873, 258);
			this->Select->TabIndex = 3;
			this->Select->Text = L"Select";
			this->Select->UseVisualStyleBackColor = true;
			this->Select->Click += gcnew System::EventHandler(this, &App::Select_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(770, 48);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 59;
			// 
			// Button_select_client
			// 
			this->Button_select_client->BackColor = System::Drawing::Color::LightGreen;
			this->Button_select_client->Location = System::Drawing::Point(644, 211);
			this->Button_select_client->Name = L"Button_select_client";
			this->Button_select_client->Size = System::Drawing::Size(148, 23);
			this->Button_select_client->TabIndex = 46;
			this->Button_select_client->Text = L"Valider";
			this->Button_select_client->UseVisualStyleBackColor = false;
			this->Button_select_client->Click += gcnew System::EventHandler(this, &App::button8_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(22, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(18, 13);
			this->label12->TabIndex = 45;
			this->label12->Text = L"ID";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(20, 25);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(216, 20);
			this->textBox12->TabIndex = 44;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(22, 93);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(43, 13);
			this->label17->TabIndex = 40;
			this->label17->Text = L"Prénom";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(22, 48);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 13);
			this->label18->TabIndex = 39;
			this->label18->Text = L"Nom";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(20, 109);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(216, 20);
			this->textBox17->TabIndex = 35;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &App::textBox17_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(20, 64);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(216, 20);
			this->textBox18->TabIndex = 34;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->Location = System::Drawing::Point(17, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 241);
			this->button1->TabIndex = 1;
			this->button1->Text = L"TABLE CLIENT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &App::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(7, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1055, 267);
			this->dataGridView1->TabIndex = 0;
			// 
			// Personnel
			// 
			this->Personnel->Controls->Add(this->button7);
			this->Personnel->Controls->Add(this->tabControl1);
			this->Personnel->Controls->Add(this->dataGridView2);
			this->Personnel->Location = System::Drawing::Point(4, 22);
			this->Personnel->Name = L"Personnel";
			this->Personnel->Padding = System::Windows::Forms::Padding(3);
			this->Personnel->Size = System::Drawing::Size(1068, 566);
			this->Personnel->TabIndex = 1;
			this->Personnel->Text = L"Personnel";
			this->Personnel->UseVisualStyleBackColor = true;
			this->Personnel->Click += gcnew System::EventHandler(this, &App::Personnel_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SkyBlue;
			this->button7->Location = System::Drawing::Point(20, 302);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(146, 240);
			this->button7->TabIndex = 8;
			this->button7->Text = L"TABLE PERSONNEL";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &App::button7_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(187, 286);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(881, 284);
			this->tabControl1->TabIndex = 7;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label69);
			this->tabPage1->Controls->Add(this->label70);
			this->tabPage1->Controls->Add(this->label71);
			this->tabPage1->Controls->Add(this->label39);
			this->tabPage1->Controls->Add(this->textBox63);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->textBox35);
			this->tabPage1->Controls->Add(this->textBox37);
			this->tabPage1->Controls->Add(this->label24);
			this->tabPage1->Controls->Add(this->textBox39);
			this->tabPage1->Controls->Add(this->Button_insert_personnel);
			this->tabPage1->Controls->Add(this->label25);
			this->tabPage1->Controls->Add(this->label26);
			this->tabPage1->Controls->Add(this->label27);
			this->tabPage1->Controls->Add(this->textBox40);
			this->tabPage1->Controls->Add(this->textBox41);
			this->tabPage1->Controls->Add(this->textBox42);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(873, 258);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Insert";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(547, 26);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(26, 13);
			this->label69->TabIndex = 63;
			this->label69->Text = L"Ville";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(322, 26);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(73, 13);
			this->label70->TabIndex = 62;
			this->label70->Text = L"Nom de la rue";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(282, 26);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(17, 13);
			this->label71->TabIndex = 61;
			this->label71->Text = L"n°";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(42, 151);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(113, 13);
			this->label39->TabIndex = 58;
			this->label39->Text = L"Supérieur hiérarchique";
			// 
			// textBox63
			// 
			this->textBox63->Location = System::Drawing::Point(40, 167);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(216, 20);
			this->textBox63->TabIndex = 57;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(780, 49);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 13);
			this->label22->TabIndex = 56;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(544, 42);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(76, 20);
			this->textBox35->TabIndex = 50;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(322, 42);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(216, 20);
			this->textBox37->TabIndex = 48;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(282, 10);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(45, 13);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Adresse";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(280, 42);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(36, 20);
			this->textBox39->TabIndex = 44;
			// 
			// Button_insert_personnel
			// 
			this->Button_insert_personnel->BackColor = System::Drawing::Color::LightGreen;
			this->Button_insert_personnel->Location = System::Drawing::Point(644, 211);
			this->Button_insert_personnel->Name = L"Button_insert_personnel";
			this->Button_insert_personnel->Size = System::Drawing::Size(148, 23);
			this->Button_insert_personnel->TabIndex = 10;
			this->Button_insert_personnel->Text = L"Valider";
			this->Button_insert_personnel->UseVisualStyleBackColor = false;
			this->Button_insert_personnel->Click += gcnew System::EventHandler(this, &App::Button_insert_personnel_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(42, 106);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(91, 13);
			this->label25->TabIndex = 7;
			this->label25->Text = L"Date d\'embauche";
			this->label25->Click += gcnew System::EventHandler(this, &App::label25_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(42, 65);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(43, 13);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Prénom";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(42, 24);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(29, 13);
			this->label27->TabIndex = 5;
			this->label27->Text = L"Nom";
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(40, 122);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(216, 20);
			this->textBox40->TabIndex = 2;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(40, 83);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(216, 20);
			this->textBox41->TabIndex = 1;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(40, 42);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(216, 20);
			this->textBox42->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label73);
			this->tabPage2->Controls->Add(this->label74);
			this->tabPage2->Controls->Add(this->label75);
			this->tabPage2->Controls->Add(this->label43);
			this->tabPage2->Controls->Add(this->textBox64);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->textBox46);
			this->tabPage2->Controls->Add(this->textBox48);
			this->tabPage2->Controls->Add(this->Button_update_personnel);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->textBox49);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->label32);
			this->tabPage2->Controls->Add(this->label33);
			this->tabPage2->Controls->Add(this->label34);
			this->tabPage2->Controls->Add(this->textBox51);
			this->tabPage2->Controls->Add(this->textBox52);
			this->tabPage2->Controls->Add(this->textBox53);
			this->tabPage2->Controls->Add(this->textBox54);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(873, 258);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Update";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(536, 25);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(26, 13);
			this->label73->TabIndex = 63;
			this->label73->Text = L"Ville";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(311, 25);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(73, 13);
			this->label74->TabIndex = 62;
			this->label74->Text = L"Nom de la rue";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(271, 25);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(17, 13);
			this->label75->TabIndex = 61;
			this->label75->Text = L"n°";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(22, 175);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(113, 13);
			this->label43->TabIndex = 57;
			this->label43->Text = L"Supérieur hiérarchique";
			// 
			// textBox64
			// 
			this->textBox64->Location = System::Drawing::Point(20, 191);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(216, 20);
			this->textBox64->TabIndex = 56;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(660, 48);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 13);
			this->label28->TabIndex = 43;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(536, 41);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(76, 20);
			this->textBox46->TabIndex = 37;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(314, 41);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(216, 20);
			this->textBox48->TabIndex = 35;
			// 
			// Button_update_personnel
			// 
			this->Button_update_personnel->BackColor = System::Drawing::Color::LightGreen;
			this->Button_update_personnel->Location = System::Drawing::Point(644, 211);
			this->Button_update_personnel->Name = L"Button_update_personnel";
			this->Button_update_personnel->Size = System::Drawing::Size(148, 23);
			this->Button_update_personnel->TabIndex = 34;
			this->Button_update_personnel->Text = L"Valider";
			this->Button_update_personnel->UseVisualStyleBackColor = false;
			this->Button_update_personnel->Click += gcnew System::EventHandler(this, &App::Button_update_personnel_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(22, 7);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(18, 13);
			this->label29->TabIndex = 33;
			this->label29->Text = L"ID";
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(20, 25);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(216, 20);
			this->textBox49->TabIndex = 32;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(274, 9);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(45, 13);
			this->label31->TabIndex = 30;
			this->label31->Text = L"Adresse";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(22, 130);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(91, 13);
			this->label32->TabIndex = 29;
			this->label32->Text = L"Date d\'embauche";
			this->label32->Click += gcnew System::EventHandler(this, &App::label32_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(22, 89);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(43, 13);
			this->label33->TabIndex = 28;
			this->label33->Text = L"Prénom";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(22, 48);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(29, 13);
			this->label34->TabIndex = 27;
			this->label34->Text = L"Nom";
			// 
			// textBox51
			// 
			this->textBox51->Location = System::Drawing::Point(272, 41);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(36, 20);
			this->textBox51->TabIndex = 25;
			// 
			// textBox52
			// 
			this->textBox52->Location = System::Drawing::Point(20, 146);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(216, 20);
			this->textBox52->TabIndex = 24;
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(20, 107);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(216, 20);
			this->textBox53->TabIndex = 23;
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(20, 66);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(216, 20);
			this->textBox54->TabIndex = 22;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->Button_delete_personnel);
			this->tabPage3->Controls->Add(this->label36);
			this->tabPage3->Controls->Add(this->textBox56);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(873, 258);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Delete";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// Button_delete_personnel
			// 
			this->Button_delete_personnel->BackColor = System::Drawing::Color::LightGreen;
			this->Button_delete_personnel->Location = System::Drawing::Point(644, 211);
			this->Button_delete_personnel->Name = L"Button_delete_personnel";
			this->Button_delete_personnel->Size = System::Drawing::Size(148, 23);
			this->Button_delete_personnel->TabIndex = 16;
			this->Button_delete_personnel->Text = L"Valider";
			this->Button_delete_personnel->UseVisualStyleBackColor = false;
			this->Button_delete_personnel->Click += gcnew System::EventHandler(this, &App::Button_delete_personnel_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(25, 29);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(18, 13);
			this->label36->TabIndex = 15;
			this->label36->Text = L"ID";
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(23, 47);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(216, 20);
			this->textBox56->TabIndex = 10;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->Button_select_personnel);
			this->tabPage4->Controls->Add(this->label37);
			this->tabPage4->Controls->Add(this->textBox57);
			this->tabPage4->Controls->Add(this->label41);
			this->tabPage4->Controls->Add(this->label42);
			this->tabPage4->Controls->Add(this->textBox61);
			this->tabPage4->Controls->Add(this->textBox62);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(873, 258);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Select";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(776, 48);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 53;
			// 
			// Button_select_personnel
			// 
			this->Button_select_personnel->BackColor = System::Drawing::Color::LightGreen;
			this->Button_select_personnel->Location = System::Drawing::Point(644, 211);
			this->Button_select_personnel->Name = L"Button_select_personnel";
			this->Button_select_personnel->Size = System::Drawing::Size(148, 23);
			this->Button_select_personnel->TabIndex = 46;
			this->Button_select_personnel->Text = L"Valider";
			this->Button_select_personnel->UseVisualStyleBackColor = false;
			this->Button_select_personnel->Click += gcnew System::EventHandler(this, &App::Button_select_personnel_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(22, 9);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(18, 13);
			this->label37->TabIndex = 45;
			this->label37->Text = L"ID";
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(20, 25);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(216, 20);
			this->textBox57->TabIndex = 44;
			this->textBox57->TextChanged += gcnew System::EventHandler(this, &App::textBox57_TextChanged);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(22, 93);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(43, 13);
			this->label41->TabIndex = 40;
			this->label41->Text = L"Prénom";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(22, 48);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(29, 13);
			this->label42->TabIndex = 39;
			this->label42->Text = L"Nom";
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(20, 109);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(216, 20);
			this->textBox61->TabIndex = 35;
			// 
			// textBox62
			// 
			this->textBox62->Location = System::Drawing::Point(20, 64);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(216, 20);
			this->textBox62->TabIndex = 34;
			this->textBox62->TextChanged += gcnew System::EventHandler(this, &App::textBox62_TextChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(7, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1055, 267);
			this->dataGridView2->TabIndex = 1;
			// 
			// Commande
			// 
			this->Commande->Controls->Add(this->button4);
			this->Commande->Controls->Add(this->button10);
			this->Commande->Controls->Add(this->tabControl2);
			this->Commande->Controls->Add(this->dataGridView3);
			this->Commande->Location = System::Drawing::Point(4, 22);
			this->Commande->Name = L"Commande";
			this->Commande->Padding = System::Windows::Forms::Padding(3);
			this->Commande->Size = System::Drawing::Size(1068, 566);
			this->Commande->TabIndex = 2;
			this->Commande->Text = L"Commande";
			this->Commande->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SkyBlue;
			this->button4->Location = System::Drawing::Point(24, 430);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 123);
			this->button4->TabIndex = 11;
			this->button4->Text = L"TABLE ARTICLE";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::SkyBlue;
			this->button10->Location = System::Drawing::Point(24, 301);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(146, 123);
			this->button10->TabIndex = 10;
			this->button10->Text = L"TABLE COMMANDE";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Location = System::Drawing::Point(187, 286);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(881, 284);
			this->tabControl2->TabIndex = 8;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label52);
			this->tabPage5->Controls->Add(this->label53);
			this->tabPage5->Controls->Add(this->label54);
			this->tabPage5->Controls->Add(this->label55);
			this->tabPage5->Controls->Add(this->textBox23);
			this->tabPage5->Controls->Add(this->textBox21);
			this->tabPage5->Controls->Add(this->textBox19);
			this->tabPage5->Controls->Add(this->label7);
			this->tabPage5->Controls->Add(this->textBox7);
			this->tabPage5->Controls->Add(this->label98);
			this->tabPage5->Controls->Add(this->textBox86);
			this->tabPage5->Controls->Add(this->button9);
			this->tabPage5->Controls->Add(this->label107);
			this->tabPage5->Controls->Add(this->textBox95);
			this->tabPage5->Controls->Add(this->label83);
			this->tabPage5->Controls->Add(this->textBox94);
			this->tabPage5->Controls->Add(this->label79);
			this->tabPage5->Controls->Add(this->textBox69);
			this->tabPage5->Controls->Add(this->label78);
			this->tabPage5->Controls->Add(this->textBox68);
			this->tabPage5->Controls->Add(this->label77);
			this->tabPage5->Controls->Add(this->textBox67);
			this->tabPage5->Controls->Add(this->label80);
			this->tabPage5->Controls->Add(this->label81);
			this->tabPage5->Controls->Add(this->textBox66);
			this->tabPage5->Controls->Add(this->label82);
			this->tabPage5->Controls->Add(this->textBox70);
			this->tabPage5->Controls->Add(this->Button_insert_commande);
			this->tabPage5->Controls->Add(this->label84);
			this->tabPage5->Controls->Add(this->label85);
			this->tabPage5->Controls->Add(this->label86);
			this->tabPage5->Controls->Add(this->textBox71);
			this->tabPage5->Controls->Add(this->textBox72);
			this->tabPage5->Controls->Add(this->textBox73);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(873, 258);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Insert";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(626, 151);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(63, 13);
			this->label52->TabIndex = 110;
			this->label52->Text = L"Code postal";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(547, 151);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(26, 13);
			this->label53->TabIndex = 109;
			this->label53->Text = L"Ville";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(322, 151);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(73, 13);
			this->label54->TabIndex = 108;
			this->label54->Text = L"Nom de la rue";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(282, 151);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(17, 13);
			this->label55->TabIndex = 107;
			this->label55->Text = L"n°";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(626, 167);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(92, 20);
			this->textBox23->TabIndex = 106;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(544, 167);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(76, 20);
			this->textBox21->TabIndex = 105;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(322, 167);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(216, 20);
			this->textBox19->TabIndex = 104;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(282, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 13);
			this->label7->TabIndex = 103;
			this->label7->Text = L"Adresse de livraison";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(280, 167);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(36, 20);
			this->textBox7->TabIndex = 102;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(282, 80);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(211, 13);
			this->label98->TabIndex = 101;
			this->label98->Text = L"Date d\'enregistrement du solde de payment";
			// 
			// textBox86
			// 
			this->textBox86->Location = System::Drawing::Point(280, 96);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(131, 20);
			this->textBox86->TabIndex = 100;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->button9->Location = System::Drawing::Point(680, 96);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(38, 22);
			this->button9->TabIndex = 76;
			this->button9->Text = L"add";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Location = System::Drawing::Point(627, 81);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(49, 13);
			this->label107->TabIndex = 75;
			this->label107->Text = L"ID article";
			// 
			// textBox95
			// 
			this->textBox95->Location = System::Drawing::Point(625, 97);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(36, 20);
			this->textBox95->TabIndex = 74;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(42, 197);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(86, 13);
			this->label83->TabIndex = 73;
			this->label83->Text = L"Date de livraison";
			// 
			// textBox94
			// 
			this->textBox94->Location = System::Drawing::Point(40, 213);
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(109, 20);
			this->textBox94->TabIndex = 71;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(627, 26);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(103, 13);
			this->label79->TabIndex = 70;
			this->label79->Text = L"Date de payement 4";
			// 
			// textBox69
			// 
			this->textBox69->Location = System::Drawing::Point(625, 42);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(109, 20);
			this->textBox69->TabIndex = 68;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(512, 26);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(103, 13);
			this->label78->TabIndex = 67;
			this->label78->Text = L"Date de payement 3";
			// 
			// textBox68
			// 
			this->textBox68->Location = System::Drawing::Point(510, 42);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(109, 20);
			this->textBox68->TabIndex = 65;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(397, 26);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(103, 13);
			this->label77->TabIndex = 64;
			this->label77->Text = L"Date de payement 2";
			// 
			// textBox67
			// 
			this->textBox67->Location = System::Drawing::Point(395, 42);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(109, 20);
			this->textBox67->TabIndex = 62;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(282, 26);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(103, 13);
			this->label80->TabIndex = 61;
			this->label80->Text = L"Date de payement 1";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(42, 151);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(82, 13);
			this->label81->TabIndex = 58;
			this->label81->Text = L"Ville de livraison";
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(40, 167);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(216, 20);
			this->textBox66->TabIndex = 57;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(780, 49);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(0, 13);
			this->label82->TabIndex = 56;
			// 
			// textBox70
			// 
			this->textBox70->Location = System::Drawing::Point(280, 42);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(109, 20);
			this->textBox70->TabIndex = 44;
			// 
			// Button_insert_commande
			// 
			this->Button_insert_commande->BackColor = System::Drawing::Color::LightGreen;
			this->Button_insert_commande->Location = System::Drawing::Point(644, 211);
			this->Button_insert_commande->Name = L"Button_insert_commande";
			this->Button_insert_commande->Size = System::Drawing::Size(148, 23);
			this->Button_insert_commande->TabIndex = 10;
			this->Button_insert_commande->Text = L"Valider";
			this->Button_insert_commande->UseVisualStyleBackColor = false;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(42, 106);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(100, 13);
			this->label84->TabIndex = 7;
			this->label84->Text = L"Date de commande";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(42, 65);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(86, 13);
			this->label85->TabIndex = 6;
			this->label85->Text = L"Prénom du client";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(42, 24);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(72, 13);
			this->label86->TabIndex = 5;
			this->label86->Text = L"Nom du client";
			// 
			// textBox71
			// 
			this->textBox71->Location = System::Drawing::Point(40, 122);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(216, 20);
			this->textBox71->TabIndex = 2;
			// 
			// textBox72
			// 
			this->textBox72->Location = System::Drawing::Point(40, 83);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(216, 20);
			this->textBox72->TabIndex = 1;
			// 
			// textBox73
			// 
			this->textBox73->Location = System::Drawing::Point(40, 42);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(216, 20);
			this->textBox73->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label4);
			this->tabPage6->Controls->Add(this->label14);
			this->tabPage6->Controls->Add(this->label16);
			this->tabPage6->Controls->Add(this->label20);
			this->tabPage6->Controls->Add(this->textBox4);
			this->tabPage6->Controls->Add(this->textBox5);
			this->tabPage6->Controls->Add(this->textBox13);
			this->tabPage6->Controls->Add(this->label21);
			this->tabPage6->Controls->Add(this->textBox14);
			this->tabPage6->Controls->Add(this->label97);
			this->tabPage6->Controls->Add(this->textBox85);
			this->tabPage6->Controls->Add(this->label96);
			this->tabPage6->Controls->Add(this->textBox83);
			this->tabPage6->Controls->Add(this->label88);
			this->tabPage6->Controls->Add(this->textBox75);
			this->tabPage6->Controls->Add(this->label89);
			this->tabPage6->Controls->Add(this->textBox76);
			this->tabPage6->Controls->Add(this->label90);
			this->tabPage6->Controls->Add(this->textBox77);
			this->tabPage6->Controls->Add(this->label91);
			this->tabPage6->Controls->Add(this->label92);
			this->tabPage6->Controls->Add(this->textBox78);
			this->tabPage6->Controls->Add(this->textBox79);
			this->tabPage6->Controls->Add(this->label93);
			this->tabPage6->Controls->Add(this->label94);
			this->tabPage6->Controls->Add(this->label95);
			this->tabPage6->Controls->Add(this->textBox80);
			this->tabPage6->Controls->Add(this->textBox81);
			this->tabPage6->Controls->Add(this->textBox82);
			this->tabPage6->Controls->Add(this->Button_update_commande);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(873, 258);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Update";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(627, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 108;
			this->label4->Text = L"Code postal";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(548, 131);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 13);
			this->label14->TabIndex = 107;
			this->label14->Text = L"Ville";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(323, 131);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(73, 13);
			this->label16->TabIndex = 106;
			this->label16->Text = L"Nom de la rue";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(283, 131);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(17, 13);
			this->label20->TabIndex = 105;
			this->label20->Text = L"n°";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(627, 147);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(92, 20);
			this->textBox4->TabIndex = 104;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(545, 147);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 20);
			this->textBox5->TabIndex = 103;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(323, 147);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(216, 20);
			this->textBox13->TabIndex = 102;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(283, 115);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(101, 13);
			this->label21->TabIndex = 101;
			this->label21->Text = L"Adresse de livraison";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(281, 147);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(36, 20);
			this->textBox14->TabIndex = 100;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(283, 70);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(211, 13);
			this->label97->TabIndex = 99;
			this->label97->Text = L"Date d\'enregistrement du solde de payment";
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(281, 86);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(131, 20);
			this->textBox85->TabIndex = 98;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(43, 197);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(86, 13);
			this->label96->TabIndex = 97;
			this->label96->Text = L"Date de livraison";
			// 
			// textBox83
			// 
			this->textBox83->Location = System::Drawing::Point(41, 213);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(109, 20);
			this->textBox83->TabIndex = 96;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(628, 29);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(103, 13);
			this->label88->TabIndex = 92;
			this->label88->Text = L"Date de payement 4";
			// 
			// textBox75
			// 
			this->textBox75->Location = System::Drawing::Point(626, 45);
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(109, 20);
			this->textBox75->TabIndex = 91;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(513, 29);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(103, 13);
			this->label89->TabIndex = 90;
			this->label89->Text = L"Date de payement 3";
			// 
			// textBox76
			// 
			this->textBox76->Location = System::Drawing::Point(511, 45);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(109, 20);
			this->textBox76->TabIndex = 89;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(398, 29);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(103, 13);
			this->label90->TabIndex = 88;
			this->label90->Text = L"Date de payement 2";
			// 
			// textBox77
			// 
			this->textBox77->Location = System::Drawing::Point(396, 45);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(109, 20);
			this->textBox77->TabIndex = 87;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(283, 29);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(103, 13);
			this->label91->TabIndex = 86;
			this->label91->Text = L"Date de payement 1";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(43, 154);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(82, 13);
			this->label92->TabIndex = 85;
			this->label92->Text = L"Ville de livraison";
			// 
			// textBox78
			// 
			this->textBox78->Location = System::Drawing::Point(41, 170);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(216, 20);
			this->textBox78->TabIndex = 84;
			// 
			// textBox79
			// 
			this->textBox79->Location = System::Drawing::Point(281, 45);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(109, 20);
			this->textBox79->TabIndex = 83;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(43, 109);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(100, 13);
			this->label93->TabIndex = 82;
			this->label93->Text = L"Date de commande";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Location = System::Drawing::Point(43, 68);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(86, 13);
			this->label94->TabIndex = 81;
			this->label94->Text = L"Prénom du client";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(43, 27);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(72, 13);
			this->label95->TabIndex = 80;
			this->label95->Text = L"Nom du client";
			// 
			// textBox80
			// 
			this->textBox80->Location = System::Drawing::Point(41, 125);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(216, 20);
			this->textBox80->TabIndex = 79;
			// 
			// textBox81
			// 
			this->textBox81->Location = System::Drawing::Point(41, 86);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(216, 20);
			this->textBox81->TabIndex = 78;
			// 
			// textBox82
			// 
			this->textBox82->Location = System::Drawing::Point(41, 45);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(216, 20);
			this->textBox82->TabIndex = 77;
			// 
			// Button_update_commande
			// 
			this->Button_update_commande->BackColor = System::Drawing::Color::LightGreen;
			this->Button_update_commande->Location = System::Drawing::Point(644, 211);
			this->Button_update_commande->Name = L"Button_update_commande";
			this->Button_update_commande->Size = System::Drawing::Size(148, 23);
			this->Button_update_commande->TabIndex = 34;
			this->Button_update_commande->Text = L"Valider";
			this->Button_update_commande->UseVisualStyleBackColor = false;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->Button_delete_commande);
			this->tabPage7->Controls->Add(this->label99);
			this->tabPage7->Controls->Add(this->textBox84);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(873, 258);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Delete";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// Button_delete_commande
			// 
			this->Button_delete_commande->BackColor = System::Drawing::Color::LightGreen;
			this->Button_delete_commande->Location = System::Drawing::Point(644, 211);
			this->Button_delete_commande->Name = L"Button_delete_commande";
			this->Button_delete_commande->Size = System::Drawing::Size(148, 23);
			this->Button_delete_commande->TabIndex = 16;
			this->Button_delete_commande->Text = L"Valider";
			this->Button_delete_commande->UseVisualStyleBackColor = false;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(25, 29);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(138, 13);
			this->label99->TabIndex = 15;
			this->label99->Text = L"Référence de la commande";
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(23, 47);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(216, 20);
			this->textBox84->TabIndex = 10;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->label87);
			this->tabPage8->Controls->Add(this->textBox74);
			this->tabPage8->Controls->Add(this->label101);
			this->tabPage8->Controls->Add(this->Button_select_commande);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(873, 258);
			this->tabPage8->TabIndex = 3;
			this->tabPage8->Text = L"Select";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(29, 29);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(138, 13);
			this->label87->TabIndex = 108;
			this->label87->Text = L"Référence de la commande";
			this->label87->Click += gcnew System::EventHandler(this, &App::label87_Click);
			// 
			// textBox74
			// 
			this->textBox74->Location = System::Drawing::Point(27, 45);
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(210, 20);
			this->textBox74->TabIndex = 107;
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(776, 48);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(0, 13);
			this->label101->TabIndex = 53;
			// 
			// Button_select_commande
			// 
			this->Button_select_commande->BackColor = System::Drawing::Color::LightGreen;
			this->Button_select_commande->Location = System::Drawing::Point(644, 211);
			this->Button_select_commande->Name = L"Button_select_commande";
			this->Button_select_commande->Size = System::Drawing::Size(148, 23);
			this->Button_select_commande->TabIndex = 46;
			this->Button_select_commande->Text = L"Valider";
			this->Button_select_commande->UseVisualStyleBackColor = false;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(7, 6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(1055, 267);
			this->dataGridView3->TabIndex = 1;
			// 
			// Stock
			// 
			this->Stock->Controls->Add(this->tabControl3);
			this->Stock->Controls->Add(this->button5);
			this->Stock->Controls->Add(this->dataGridView4);
			this->Stock->Location = System::Drawing::Point(4, 22);
			this->Stock->Name = L"Stock";
			this->Stock->Padding = System::Windows::Forms::Padding(3);
			this->Stock->Size = System::Drawing::Size(1068, 566);
			this->Stock->TabIndex = 3;
			this->Stock->Text = L"Stock";
			this->Stock->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Controls->Add(this->tabPage12);
			this->tabControl3->Location = System::Drawing::Point(187, 286);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(881, 284);
			this->tabControl3->TabIndex = 9;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->label48);
			this->tabPage9->Controls->Add(this->textBox34);
			this->tabPage9->Controls->Add(this->label64);
			this->tabPage9->Controls->Add(this->textBox44);
			this->tabPage9->Controls->Add(this->label65);
			this->tabPage9->Controls->Add(this->Button_insert_stock);
			this->tabPage9->Controls->Add(this->label66);
			this->tabPage9->Controls->Add(this->label67);
			this->tabPage9->Controls->Add(this->label68);
			this->tabPage9->Controls->Add(this->textBox47);
			this->tabPage9->Controls->Add(this->textBox50);
			this->tabPage9->Controls->Add(this->textBox55);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(873, 258);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"Insert";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(413, 72);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(47, 13);
			this->label48->TabIndex = 73;
			this->label48->Text = L"Quantité";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(411, 88);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(109, 20);
			this->textBox34->TabIndex = 71;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(413, 26);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(140, 13);
			this->label64->TabIndex = 58;
			this->label64->Text = L"Seuil de réaprovisionnement";
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(411, 42);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(216, 20);
			this->textBox44->TabIndex = 57;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(780, 49);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(0, 13);
			this->label65->TabIndex = 56;
			// 
			// Button_insert_stock
			// 
			this->Button_insert_stock->BackColor = System::Drawing::Color::LightGreen;
			this->Button_insert_stock->Location = System::Drawing::Point(644, 211);
			this->Button_insert_stock->Name = L"Button_insert_stock";
			this->Button_insert_stock->Size = System::Drawing::Size(148, 23);
			this->Button_insert_stock->TabIndex = 10;
			this->Button_insert_stock->Text = L"Valider";
			this->Button_insert_stock->UseVisualStyleBackColor = false;
			this->Button_insert_stock->Click += gcnew System::EventHandler(this, &App::Button_insert_stock_Click);
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(40, 106);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(70, 13);
			this->label66->TabIndex = 7;
			this->label66->Text = L"Taux de TVA";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(40, 65);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(79, 13);
			this->label67->TabIndex = 6;
			this->label67->Text = L"Prix HT unitaire";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(40, 24);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(79, 13);
			this->label68->TabIndex = 5;
			this->label68->Text = L"Nom de l\'article";
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(38, 122);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(216, 20);
			this->textBox47->TabIndex = 2;
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(38, 83);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(216, 20);
			this->textBox50->TabIndex = 1;
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(38, 42);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(216, 20);
			this->textBox55->TabIndex = 0;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->label35);
			this->tabPage10->Controls->Add(this->textBox26);
			this->tabPage10->Controls->Add(this->label38);
			this->tabPage10->Controls->Add(this->textBox28);
			this->tabPage10->Controls->Add(this->label40);
			this->tabPage10->Controls->Add(this->label44);
			this->tabPage10->Controls->Add(this->label45);
			this->tabPage10->Controls->Add(this->textBox30);
			this->tabPage10->Controls->Add(this->textBox31);
			this->tabPage10->Controls->Add(this->textBox32);
			this->tabPage10->Controls->Add(this->label115);
			this->tabPage10->Controls->Add(this->textBox99);
			this->tabPage10->Controls->Add(this->Button_update_stock);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(873, 258);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Update";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(416, 120);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(47, 13);
			this->label35->TabIndex = 90;
			this->label35->Text = L"Quantité";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(414, 136);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(109, 20);
			this->textBox26->TabIndex = 89;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(416, 74);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(140, 13);
			this->label38->TabIndex = 88;
			this->label38->Text = L"Seuil de réaprovisionnement";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(414, 90);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(216, 20);
			this->textBox28->TabIndex = 87;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(43, 154);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(70, 13);
			this->label40->TabIndex = 86;
			this->label40->Text = L"Taux de TVA";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(43, 113);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(79, 13);
			this->label44->TabIndex = 85;
			this->label44->Text = L"Prix HT unitaire";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(43, 72);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(79, 13);
			this->label45->TabIndex = 84;
			this->label45->Text = L"Nom de l\'article";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(41, 170);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(216, 20);
			this->textBox30->TabIndex = 83;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(41, 131);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(216, 20);
			this->textBox31->TabIndex = 82;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(41, 90);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(216, 20);
			this->textBox32->TabIndex = 81;
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Location = System::Drawing::Point(43, 27);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(107, 13);
			this->label115->TabIndex = 80;
			this->label115->Text = L"Référence de l\'article";
			// 
			// textBox99
			// 
			this->textBox99->Location = System::Drawing::Point(41, 45);
			this->textBox99->Name = L"textBox99";
			this->textBox99->Size = System::Drawing::Size(216, 20);
			this->textBox99->TabIndex = 77;
			// 
			// Button_update_stock
			// 
			this->Button_update_stock->BackColor = System::Drawing::Color::LightGreen;
			this->Button_update_stock->Location = System::Drawing::Point(644, 211);
			this->Button_update_stock->Name = L"Button_update_stock";
			this->Button_update_stock->Size = System::Drawing::Size(148, 23);
			this->Button_update_stock->TabIndex = 34;
			this->Button_update_stock->Text = L"Valider";
			this->Button_update_stock->UseVisualStyleBackColor = false;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->Button_delete_stock);
			this->tabPage11->Controls->Add(this->label116);
			this->tabPage11->Controls->Add(this->textBox100);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(873, 258);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Delete";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// Button_delete_stock
			// 
			this->Button_delete_stock->BackColor = System::Drawing::Color::LightGreen;
			this->Button_delete_stock->Location = System::Drawing::Point(644, 211);
			this->Button_delete_stock->Name = L"Button_delete_stock";
			this->Button_delete_stock->Size = System::Drawing::Size(148, 23);
			this->Button_delete_stock->TabIndex = 16;
			this->Button_delete_stock->Text = L"Valider";
			this->Button_delete_stock->UseVisualStyleBackColor = false;
			this->Button_delete_stock->Click += gcnew System::EventHandler(this, &App::Button_delete_stock_Click);
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->Location = System::Drawing::Point(25, 29);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(107, 13);
			this->label116->TabIndex = 15;
			this->label116->Text = L"Référence de l\'article";
			// 
			// textBox100
			// 
			this->textBox100->Location = System::Drawing::Point(23, 47);
			this->textBox100->Name = L"textBox100";
			this->textBox100->Size = System::Drawing::Size(216, 20);
			this->textBox100->TabIndex = 10;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->label117);
			this->tabPage12->Controls->Add(this->textBox101);
			this->tabPage12->Controls->Add(this->label118);
			this->tabPage12->Controls->Add(this->Button_select_stock);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(873, 258);
			this->tabPage12->TabIndex = 3;
			this->tabPage12->Text = L"Select";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->Location = System::Drawing::Point(29, 29);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(138, 13);
			this->label117->TabIndex = 108;
			this->label117->Text = L"Référence de la commande";
			// 
			// textBox101
			// 
			this->textBox101->Location = System::Drawing::Point(27, 45);
			this->textBox101->Name = L"textBox101";
			this->textBox101->Size = System::Drawing::Size(210, 20);
			this->textBox101->TabIndex = 107;
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Location = System::Drawing::Point(776, 48);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(0, 13);
			this->label118->TabIndex = 53;
			// 
			// Button_select_stock
			// 
			this->Button_select_stock->BackColor = System::Drawing::Color::LightGreen;
			this->Button_select_stock->Location = System::Drawing::Point(644, 211);
			this->Button_select_stock->Name = L"Button_select_stock";
			this->Button_select_stock->Size = System::Drawing::Size(148, 23);
			this->Button_select_stock->TabIndex = 46;
			this->Button_select_stock->Text = L"Valider";
			this->Button_select_stock->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button5->Location = System::Drawing::Point(17, 294);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 250);
			this->button5->TabIndex = 2;
			this->button5->Text = L"TABLE ARTICLE";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &App::button5_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(7, 6);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(1055, 267);
			this->dataGridView4->TabIndex = 1;
			// 
			// Statistiques
			// 
			this->Statistiques->Controls->Add(this->button11);
			this->Statistiques->Controls->Add(this->button12);
			this->Statistiques->Controls->Add(this->button13);
			this->Statistiques->Controls->Add(this->button14);
			this->Statistiques->Controls->Add(this->button6);
			this->Statistiques->Controls->Add(this->button8);
			this->Statistiques->Controls->Add(this->button3);
			this->Statistiques->Controls->Add(this->button2);
			this->Statistiques->Controls->Add(this->dataGridView5);
			this->Statistiques->Location = System::Drawing::Point(4, 22);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Padding = System::Windows::Forms::Padding(3);
			this->Statistiques->Size = System::Drawing::Size(1068, 566);
			this->Statistiques->TabIndex = 4;
			this->Statistiques->Text = L"Statistiques";
			this->Statistiques->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(405, 424);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(141, 31);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Valeur d\'achat du stock";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(405, 387);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(160, 31);
			this->button12->TabIndex = 8;
			this->button12->Text = L"Valeur commerciale du stock";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(405, 350);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(173, 31);
			this->button13->TabIndex = 7;
			this->button13->Text = L"TOP 10 articles les moins vendu";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(405, 313);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(160, 31);
			this->button14->TabIndex = 6;
			this->button14->Text = L"TOP 10 articles les plus vendu";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(53, 424);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(187, 31);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Montant total des achats d\'un client";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(53, 387);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(248, 31);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Produit sous le seuil de réaprovisionnement";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(53, 350);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 31);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Chiffre d\'affaire par mois";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(53, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Panier moyen";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(7, 6);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->Size = System::Drawing::Size(1055, 267);
			this->dataGridView5->TabIndex = 1;
			// 
			// App
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1079, 593);
			this->Controls->Add(this->Onglets);
			this->Name = L"App";
			this->Text = L"App";
			this->Load += gcnew System::EventHandler(this, &App::MyForm_Load);
			this->Onglets->ResumeLayout(false);
			this->Client->ResumeLayout(false);
			this->Request->ResumeLayout(false);
			this->Insert->ResumeLayout(false);
			this->Insert->PerformLayout();
			this->Update->ResumeLayout(false);
			this->Update->PerformLayout();
			this->Delete->ResumeLayout(false);
			this->Delete->PerformLayout();
			this->Select->ResumeLayout(false);
			this->Select->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Personnel->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->Commande->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->Stock->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->Statistiques->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {		//load Client
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->LoadClient("Client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Client";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Select_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Update_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectClient("Client", this->textBox12->Text, this->textBox18->Text, this->textBox17->Text);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Client";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox31_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {      //load Personnel
		this->dataGridView2->Refresh();
		this->oDs = this->oSvc->LoadPersonnel("Personnel");
		this->dataGridView2->DataSource = this->oDs;
		this->dataGridView2->DataMember = "Personnel";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Insert_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox57_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox62_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label87_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button_insert_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterPersonnel(this->textBox42->Text, this->textBox41->Text, this->textBox40->Text, this->textBox63->Text, this->textBox39->Text, this->textBox37->Text, this->textBox35->Text);
		//this->oSvc->ajouterUnePersonne("O", "o", "2021-12-25", "H h");
	}
	private: System::Void Button_update_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updatePersonnel(this->textBox49->Text, this->textBox54->Text, this->textBox53->Text, this->textBox52->Text, this->textBox64->Text, this->textBox51->Text, this->textBox48->Text, this->textBox46->Text);
	}
	private: System::Void Button_select_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView2->Refresh();
		this->oDs = this->oSvc->selectPersonnel("Personnel", this->textBox57->Text, this->textBox62->Text, this->textBox61->Text);
		this->dataGridView2->DataSource = this->oDs;
		this->dataGridView2->DataMember = "Personnel";
	}
	private: System::Void Button_delete_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->deletePersonnel(this->textBox56->Text);
	}
	private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button_insert_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterClient(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text);
	}
	private: System::Void Button_update_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updateClient(this->textBox11->Text, this->textBox10->Text, this->textBox9->Text, this->textBox8->Text, this->textBox6->Text, this->textBox20->Text, this->textBox22->Text, this->textBox16->Text);
	}
	private: System::Void Button_delete_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->deleteClient(this->textBox15->Text);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)      // auto load
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_add_fact_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ajouterAdd(this->textBox29->Text, this->textBox27->Text, this->textBox25->Text);
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {  //load Article
	this->dataGridView4->Refresh();
	this->oDs = this->oSvc->LoadArticle("Stock");
	this->dataGridView4->DataSource = this->oDs;
	this->dataGridView4->DataMember = "Stock";
}
private: System::Void Button_insert_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ajouterArticle(this->textBox55->Text, this->textBox50->Text, this->textBox44->Text, this->textBox47->Text, this->textBox34->Text);
}
private: System::Void Button_delete_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->deleteArticle(this->textBox100->Text);
}
};
}
