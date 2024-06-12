#pragma once
//#include "vector"
using namespace RecetasClass;
using namespace std;
//using namespace ClasesRecetas;
//using namespace System;
using namespace System::Collections::Generic;

namespace VentanaRecetas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Lista_Recetas^ ListaRecetas;
	private: System::Windows::Forms::Button^ buttonrecetanueva;
	private: System::Windows::Forms::TextBox^ textBox1porcionesrequeridas;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button1porcionesbuscar;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox1ValnuT;
	private: System::Windows::Forms::Button^ button1buscar;
	private: System::Windows::Forms::Button^ button12;



	public:
		Receta^ recetaActual;
		//ingredientes= gcnew List<Ingredientes^>();
		//List<Receta^>^ recetas = gcnew List<Receta^>();
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			ListaRecetas = gcnew Lista_Recetas();
			recetaActual = gcnew Receta();
			//Receta^ nuevaReceta = gcnew Receta();
			//Ingredientes ^ ingredientes = gcnew Ingredientes();
			//nuevaReceta->ingredientes = gcnew List<Ingredientes^>();
			//// Agregar la receta a la lista de recetas
			//listaRecetas->listaRecetas->Add(nuevaReceta);
			//MostrarRecetas();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		
	//private:System::Windows::Forms::TextBox^ textBoxDetallesReceta;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBoxID;



	private: System::Windows::Forms::TextBox^ textBoxNombre;

	private: System::Windows::Forms::TextBox^ textBoxTiempoPreparacion;
	private: System::Windows::Forms::TextBox^ textBoxTiempoCoccion;


	private: System::Windows::Forms::TextBox^ textBoxPorciones;

	private: System::Windows::Forms::TextBox^ textBoxOrigen;
	private: System::Windows::Forms::TextBox^ textBoxcalorias;
	private: System::Windows::Forms::TextBox^ textBoxgrasas;
	private: System::Windows::Forms::TextBox^ textBoxcarbohidratos;
	private: System::Windows::Forms::TextBox^ textBoxproteinas;









	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ buttoneliminar;

	private: System::Windows::Forms::Button^ buttonguardar1;
	private: System::Windows::Forms::Button^ buttonAgregarIngrediente1;
	private: System::Windows::Forms::Button^ buttonEliminarIngrediente2;


	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ idingrediente;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxNombreIngrediente;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBoxcosto;
    private: System::Windows::Forms::TextBox^ textBoxcantidad;
    private: System::Windows::Forms::TextBox^ textBoxorigening;
    private: System::Windows::Forms::TextBox^ textBoxEstado;

	private: System::Windows::Forms::ListBox^ ListaRecetasBox;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Button^ buttonVerReceta;

private: System::Windows::Forms::Button^ buttoncancelar;
private: System::Windows::Forms::Button^ button1Editar;
private: System::Windows::Forms::Button^ buttonBuscar;




	   ///private: System::Windows::Forms::ListBox^ listBoxRecetas;



	//protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTiempoPreparacion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTiempoCoccion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPorciones = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOrigen = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcalorias = (gcnew System::Windows::Forms::TextBox());
			this->textBoxgrasas = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcarbohidratos = (gcnew System::Windows::Forms::TextBox());
			this->textBoxproteinas = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->buttonAgregarIngrediente1 = (gcnew System::Windows::Forms::Button());
			this->buttonEliminarIngrediente2 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxcosto = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcantidad = (gcnew System::Windows::Forms::TextBox());
			this->textBoxorigening = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEstado = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->idingrediente = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxNombreIngrediente = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->buttonguardar1 = (gcnew System::Windows::Forms::Button());
			this->buttoneliminar = (gcnew System::Windows::Forms::Button());
			this->ListaRecetasBox = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1buscar = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox1ValnuT = (gcnew System::Windows::Forms::TextBox());
			this->button1porcionesbuscar = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox1porcionesrequeridas = (gcnew System::Windows::Forms::TextBox());
			this->buttonrecetanueva = (gcnew System::Windows::Forms::Button());
			this->buttonBuscar = (gcnew System::Windows::Forms::Button());
			this->button1Editar = (gcnew System::Windows::Forms::Button());
			this->buttonVerReceta = (gcnew System::Windows::Forms::Button());
			this->buttoncancelar = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(288, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(458, -10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"RECETA";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(427, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tiempo de cocción";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tiempo de preparación";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(427, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Nombre";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(30, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Porciones";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(427, 135);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Nivel Dificultad";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(427, 178);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 19);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Origen";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(31, 35);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 19);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Calorías";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(31, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 19);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Grasas";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(232, 80);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 19);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Proteinas";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(232, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(93, 19);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Carbohidratos";
			// 
			// textBoxID
			// 
			this->textBoxID->BackColor = System::Drawing::Color::Linen;
			this->textBoxID->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxID->Location = System::Drawing::Point(117, 43);
			this->textBoxID->Multiline = true;
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(101, 25);
			this->textBoxID->TabIndex = 16;
			this->textBoxID->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->BackColor = System::Drawing::Color::Linen;
			this->textBoxNombre->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxNombre->Location = System::Drawing::Point(527, 30);
			this->textBoxNombre->Multiline = true;
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(145, 25);
			this->textBoxNombre->TabIndex = 18;
			// 
			// textBoxTiempoPreparacion
			// 
			this->textBoxTiempoPreparacion->BackColor = System::Drawing::Color::Linen;
			this->textBoxTiempoPreparacion->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxTiempoPreparacion->Location = System::Drawing::Point(188, 89);
			this->textBoxTiempoPreparacion->Multiline = true;
			this->textBoxTiempoPreparacion->Name = L"textBoxTiempoPreparacion";
			this->textBoxTiempoPreparacion->Size = System::Drawing::Size(101, 25);
			this->textBoxTiempoPreparacion->TabIndex = 19;
			// 
			// textBoxTiempoCoccion
			// 
			this->textBoxTiempoCoccion->BackColor = System::Drawing::Color::Linen;
			this->textBoxTiempoCoccion->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxTiempoCoccion->Location = System::Drawing::Point(571, 82);
			this->textBoxTiempoCoccion->Multiline = true;
			this->textBoxTiempoCoccion->Name = L"textBoxTiempoCoccion";
			this->textBoxTiempoCoccion->Size = System::Drawing::Size(101, 25);
			this->textBoxTiempoCoccion->TabIndex = 20;
			this->textBoxTiempoCoccion->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBoxPorciones
			// 
			this->textBoxPorciones->BackColor = System::Drawing::Color::Linen;
			this->textBoxPorciones->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxPorciones->Location = System::Drawing::Point(117, 129);
			this->textBoxPorciones->Multiline = true;
			this->textBoxPorciones->Name = L"textBoxPorciones";
			this->textBoxPorciones->Size = System::Drawing::Size(101, 25);
			this->textBoxPorciones->TabIndex = 21;
			this->textBoxPorciones->Text = L"v";
			// 
			// textBoxOrigen
			// 
			this->textBoxOrigen->BackColor = System::Drawing::Color::Linen;
			this->textBoxOrigen->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxOrigen->Location = System::Drawing::Point(571, 172);
			this->textBoxOrigen->Multiline = true;
			this->textBoxOrigen->Name = L"textBoxOrigen";
			this->textBoxOrigen->Size = System::Drawing::Size(101, 25);
			this->textBoxOrigen->TabIndex = 24;
			// 
			// textBoxcalorias
			// 
			this->textBoxcalorias->BackColor = System::Drawing::Color::Linen;
			this->textBoxcalorias->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxcalorias->Location = System::Drawing::Point(95, 35);
			this->textBoxcalorias->Multiline = true;
			this->textBoxcalorias->Name = L"textBoxcalorias";
			this->textBoxcalorias->Size = System::Drawing::Size(88, 25);
			this->textBoxcalorias->TabIndex = 25;
			// 
			// textBoxgrasas
			// 
			this->textBoxgrasas->BackColor = System::Drawing::Color::Linen;
			this->textBoxgrasas->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxgrasas->Location = System::Drawing::Point(95, 80);
			this->textBoxgrasas->Multiline = true;
			this->textBoxgrasas->Name = L"textBoxgrasas";
			this->textBoxgrasas->Size = System::Drawing::Size(88, 25);
			this->textBoxgrasas->TabIndex = 26;
			// 
			// textBoxcarbohidratos
			// 
			this->textBoxcarbohidratos->BackColor = System::Drawing::Color::Linen;
			this->textBoxcarbohidratos->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxcarbohidratos->Location = System::Drawing::Point(331, 35);
			this->textBoxcarbohidratos->Multiline = true;
			this->textBoxcarbohidratos->Name = L"textBoxcarbohidratos";
			this->textBoxcarbohidratos->Size = System::Drawing::Size(92, 25);
			this->textBoxcarbohidratos->TabIndex = 27;
			// 
			// textBoxproteinas
			// 
			this->textBoxproteinas->BackColor = System::Drawing::Color::Linen;
			this->textBoxproteinas->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxproteinas->Location = System::Drawing::Point(331, 80);
			this->textBoxproteinas->Multiline = true;
			this->textBoxproteinas->Name = L"textBoxproteinas";
			this->textBoxproteinas->Size = System::Drawing::Size(92, 25);
			this->textBoxproteinas->TabIndex = 28;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::PeachPuff;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(33, 41);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(84, 23);
			this->radioButton1->TabIndex = 30;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Desayuno";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::PeachPuff;
			this->radioButton2->Location = System::Drawing::Point(121, 41);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 23);
			this->radioButton2->TabIndex = 31;
			this->radioButton2->Text = L"Almuerzo";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::PeachPuff;
			this->radioButton3->Location = System::Drawing::Point(212, 41);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(64, 23);
			this->radioButton3->TabIndex = 32;
			this->radioButton3->Text = L"Postre";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxproteinas);
			this->groupBox1->Controls->Add(this->textBoxcarbohidratos);
			this->groupBox1->Controls->Add(this->textBoxgrasas);
			this->groupBox1->Controls->Add(this->textBoxcalorias);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(23, 271);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(469, 144);
			this->groupBox1->TabIndex = 35;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Valor Nutricional";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(23, 178);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(296, 78);
			this->groupBox2->TabIndex = 36;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Categoria";
			// 
			// groupBox4
			// 
			this->groupBox4->Location = System::Drawing::Point(13, 29);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(946, 431);
			this->groupBox4->TabIndex = 39;
			this->groupBox4->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Linen;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Dificil", L"Medio", L"Facil" });
			this->comboBox1->Location = System::Drawing::Point(571, 136);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(101, 21);
			this->comboBox1->TabIndex = 44;
			// 
			// buttonAgregarIngrediente1
			// 
			this->buttonAgregarIngrediente1->Location = System::Drawing::Point(710, 332);
			this->buttonAgregarIngrediente1->Name = L"buttonAgregarIngrediente1";
			this->buttonAgregarIngrediente1->Size = System::Drawing::Size(87, 38);
			this->buttonAgregarIngrediente1->TabIndex = 42;
			this->buttonAgregarIngrediente1->Text = L"Agregar Ingrediente";
			this->buttonAgregarIngrediente1->UseVisualStyleBackColor = true;
			this->buttonAgregarIngrediente1->Click += gcnew System::EventHandler(this, &MyForm::buttonAgregarIngrediente1_Click);
			// 
			// buttonEliminarIngrediente2
			// 
			this->buttonEliminarIngrediente2->Location = System::Drawing::Point(815, 331);
			this->buttonEliminarIngrediente2->Name = L"buttonEliminarIngrediente2";
			this->buttonEliminarIngrediente2->Size = System::Drawing::Size(92, 39);
			this->buttonEliminarIngrediente2->TabIndex = 43;
			this->buttonEliminarIngrediente2->Text = L"Eliminar Ingrediente";
			this->buttonEliminarIngrediente2->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxcosto);
			this->groupBox5->Controls->Add(this->textBoxcantidad);
			this->groupBox5->Controls->Add(this->textBoxorigening);
			this->groupBox5->Controls->Add(this->textBoxEstado);
			this->groupBox5->Controls->Add(this->label23);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Controls->Add(this->idingrediente);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->textBoxNombreIngrediente);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(710, 30);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(197, 291);
			this->groupBox5->TabIndex = 41;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ingredientes";
			// 
			// textBoxcosto
			// 
			this->textBoxcosto->BackColor = System::Drawing::Color::Linen;
			this->textBoxcosto->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxcosto->Location = System::Drawing::Point(71, 242);
			this->textBoxcosto->Multiline = true;
			this->textBoxcosto->Name = L"textBoxcosto";
			this->textBoxcosto->Size = System::Drawing::Size(101, 25);
			this->textBoxcosto->TabIndex = 45;
			this->textBoxcosto->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBoxcantidad
			// 
			this->textBoxcantidad->BackColor = System::Drawing::Color::Linen;
			this->textBoxcantidad->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxcantidad->Location = System::Drawing::Point(71, 201);
			this->textBoxcantidad->Multiline = true;
			this->textBoxcantidad->Name = L"textBoxcantidad";
			this->textBoxcantidad->Size = System::Drawing::Size(101, 25);
			this->textBoxcantidad->TabIndex = 44;
			// 
			// textBoxorigening
			// 
			this->textBoxorigening->BackColor = System::Drawing::Color::Linen;
			this->textBoxorigening->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxorigening->Location = System::Drawing::Point(71, 157);
			this->textBoxorigening->Multiline = true;
			this->textBoxorigening->Name = L"textBoxorigening";
			this->textBoxorigening->Size = System::Drawing::Size(101, 25);
			this->textBoxorigening->TabIndex = 43;
			// 
			// textBoxEstado
			// 
			this->textBoxEstado->BackColor = System::Drawing::Color::Linen;
			this->textBoxEstado->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxEstado->Location = System::Drawing::Point(71, 113);
			this->textBoxEstado->Multiline = true;
			this->textBoxEstado->Name = L"textBoxEstado";
			this->textBoxEstado->Size = System::Drawing::Size(101, 25);
			this->textBoxEstado->TabIndex = 42;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(11, 242);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(42, 19);
			this->label23->TabIndex = 41;
			this->label23->Text = L"Costo";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(10, 204);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 19);
			this->label22->TabIndex = 40;
			this->label22->Text = L"Cantidad";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(10, 157);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(49, 19);
			this->label21->TabIndex = 39;
			this->label21->Text = L"Origen";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(10, 116);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(49, 19);
			this->label20->TabIndex = 38;
			this->label20->Text = L"Estado";
			// 
			// idingrediente
			// 
			this->idingrediente->BackColor = System::Drawing::Color::Linen;
			this->idingrediente->ForeColor = System::Drawing::SystemColors::WindowText;
			this->idingrediente->Location = System::Drawing::Point(71, 66);
			this->idingrediente->Multiline = true;
			this->idingrediente->Name = L"idingrediente";
			this->idingrediente->Size = System::Drawing::Size(101, 25);
			this->idingrediente->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(10, 71);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 19);
			this->label8->TabIndex = 34;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(10, 25);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 19);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Nombre";
			// 
			// textBoxNombreIngrediente
			// 
			this->textBoxNombreIngrediente->BackColor = System::Drawing::Color::Linen;
			this->textBoxNombreIngrediente->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxNombreIngrediente->Location = System::Drawing::Point(71, 25);
			this->textBoxNombreIngrediente->Multiline = true;
			this->textBoxNombreIngrediente->Name = L"textBoxNombreIngrediente";
			this->textBoxNombreIngrediente->Size = System::Drawing::Size(101, 25);
			this->textBoxNombreIngrediente->TabIndex = 29;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(16, 72);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(49, 19);
			this->label16->TabIndex = 17;
			this->label16->Text = L"ID ING";
			// 
			// buttonguardar1
			// 
			this->buttonguardar1->Location = System::Drawing::Point(516, 332);
			this->buttonguardar1->Name = L"buttonguardar1";
			this->buttonguardar1->Size = System::Drawing::Size(86, 28);
			this->buttonguardar1->TabIndex = 39;
			this->buttonguardar1->Text = L"Agregar";
			this->buttonguardar1->UseVisualStyleBackColor = true;
			this->buttonguardar1->Click += gcnew System::EventHandler(this, &MyForm::buttonAgregar_Click);
			// 
			// buttoneliminar
			// 
			this->buttoneliminar->Location = System::Drawing::Point(619, 366);
			this->buttoneliminar->Name = L"buttoneliminar";
			this->buttoneliminar->Size = System::Drawing::Size(86, 28);
			this->buttoneliminar->TabIndex = 40;
			this->buttoneliminar->Text = L"Eliminar";
			this->buttoneliminar->UseVisualStyleBackColor = true;
			this->buttoneliminar->Click += gcnew System::EventHandler(this, &MyForm::buttonEliminar_Click);
			// 
			// ListaRecetasBox
			// 
			this->ListaRecetasBox->AccessibleDescription = L"Lista Recetas";
			this->ListaRecetasBox->AccessibleName = L"Lista Recetas";
			this->ListaRecetasBox->FormattingEnabled = true;
			this->ListaRecetasBox->Location = System::Drawing::Point(965, 29);
			this->ListaRecetasBox->Name = L"ListaRecetasBox";
			this->ListaRecetasBox->Size = System::Drawing::Size(154, 420);
			this->ListaRecetasBox->TabIndex = 40;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button1buscar);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->textBox1ValnuT);
			this->panel1->Controls->Add(this->button1porcionesbuscar);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->textBox1porcionesrequeridas);
			this->panel1->Controls->Add(this->buttonrecetanueva);
			this->panel1->Controls->Add(this->buttonBuscar);
			this->panel1->Controls->Add(this->button1Editar);
			this->panel1->Controls->Add(this->buttonVerReceta);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->buttonAgregarIngrediente1);
			this->panel1->Controls->Add(this->buttonEliminarIngrediente2);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->buttonguardar1);
			this->panel1->Controls->Add(this->buttoneliminar);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->textBoxOrigen);
			this->panel1->Controls->Add(this->textBoxPorciones);
			this->panel1->Controls->Add(this->textBoxTiempoCoccion);
			this->panel1->Controls->Add(this->textBoxTiempoPreparacion);
			this->panel1->Controls->Add(this->textBoxNombre);
			this->panel1->Controls->Add(this->textBoxID);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(13, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(946, 459);
			this->panel1->TabIndex = 40;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button1buscar
			// 
			this->button1buscar->Location = System::Drawing::Point(815, 391);
			this->button1buscar->Name = L"button1buscar";
			this->button1buscar->Size = System::Drawing::Size(86, 40);
			this->button1buscar->TabIndex = 55;
			this->button1buscar->Text = L"Buscar por V.Nutricional";
			this->button1buscar->UseVisualStyleBackColor = true;
			this->button1buscar->Click += gcnew System::EventHandler(this, &MyForm::button1buscar_Click_1);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(541, 271);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(131, 19);
			this->label18->TabIndex = 54;
			this->label18->Text = L"ValoresNutricionales";
			// 
			// textBox1ValnuT
			// 
			this->textBox1ValnuT->BackColor = System::Drawing::Color::Linen;
			this->textBox1ValnuT->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1ValnuT->Location = System::Drawing::Point(571, 296);
			this->textBox1ValnuT->Multiline = true;
			this->textBox1ValnuT->Name = L"textBox1ValnuT";
			this->textBox1ValnuT->Size = System::Drawing::Size(101, 25);
			this->textBox1ValnuT->TabIndex = 53;
			this->textBox1ValnuT->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1ValnuT_TextChanged);
			// 
			// button1porcionesbuscar
			// 
			this->button1porcionesbuscar->Location = System::Drawing::Point(710, 386);
			this->button1porcionesbuscar->Name = L"button1porcionesbuscar";
			this->button1porcionesbuscar->Size = System::Drawing::Size(86, 40);
			this->button1porcionesbuscar->TabIndex = 52;
			this->button1porcionesbuscar->Text = L"Buscar por porciones";
			this->button1porcionesbuscar->UseVisualStyleBackColor = true;
			this->button1porcionesbuscar->Click += gcnew System::EventHandler(this, &MyForm::button1porcionesbuscar_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(433, 231);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(131, 19);
			this->label17->TabIndex = 51;
			this->label17->Text = L"Porciones requeridas";
			// 
			// textBox1porcionesrequeridas
			// 
			this->textBox1porcionesrequeridas->BackColor = System::Drawing::Color::Linen;
			this->textBox1porcionesrequeridas->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1porcionesrequeridas->Location = System::Drawing::Point(571, 235);
			this->textBox1porcionesrequeridas->Multiline = true;
			this->textBox1porcionesrequeridas->Name = L"textBox1porcionesrequeridas";
			this->textBox1porcionesrequeridas->Size = System::Drawing::Size(101, 25);
			this->textBox1porcionesrequeridas->TabIndex = 50;
			// 
			// buttonrecetanueva
			// 
			this->buttonrecetanueva->Location = System::Drawing::Point(516, 403);
			this->buttonrecetanueva->Name = L"buttonrecetanueva";
			this->buttonrecetanueva->Size = System::Drawing::Size(86, 28);
			this->buttonrecetanueva->TabIndex = 49;
			this->buttonrecetanueva->Text = L"Nueva Receta";
			this->buttonrecetanueva->UseVisualStyleBackColor = true;
			this->buttonrecetanueva->Click += gcnew System::EventHandler(this, &MyForm::buttonrecetanueva_Click);
			// 
			// buttonBuscar
			// 
			this->buttonBuscar->Location = System::Drawing::Point(516, 366);
			this->buttonBuscar->Name = L"buttonBuscar";
			this->buttonBuscar->Size = System::Drawing::Size(86, 28);
			this->buttonBuscar->TabIndex = 48;
			this->buttonBuscar->Text = L"Buscar";
			this->buttonBuscar->UseVisualStyleBackColor = true;
			this->buttonBuscar->Click += gcnew System::EventHandler(this, &MyForm::buttonBuscar_Click);
			// 
			// button1Editar
			// 
			this->button1Editar->Location = System::Drawing::Point(619, 332);
			this->button1Editar->Name = L"button1Editar";
			this->button1Editar->Size = System::Drawing::Size(86, 28);
			this->button1Editar->TabIndex = 47;
			this->button1Editar->Text = L"Editar";
			this->button1Editar->UseVisualStyleBackColor = true;
			this->button1Editar->Click += gcnew System::EventHandler(this, &MyForm::button1Editar_Click);
			// 
			// buttonVerReceta
			// 
			this->buttonVerReceta->Location = System::Drawing::Point(618, 419);
			this->buttonVerReceta->Name = L"buttonVerReceta";
			this->buttonVerReceta->Size = System::Drawing::Size(86, 28);
			this->buttonVerReceta->TabIndex = 45;
			this->buttonVerReceta->Text = L"Ver Lista";
			this->buttonVerReceta->UseVisualStyleBackColor = true;
			this->buttonVerReceta->Click += gcnew System::EventHandler(this, &MyForm::buttonVer_Click);
			// 
			// buttoncancelar
			// 
			this->buttoncancelar->BackColor = System::Drawing::Color::IndianRed;
			this->buttoncancelar->Location = System::Drawing::Point(1004, 458);
			this->buttoncancelar->Name = L"buttoncancelar";
			this->buttoncancelar->Size = System::Drawing::Size(86, 30);
			this->buttoncancelar->TabIndex = 46;
			this->buttoncancelar->Text = L"Cancelar";
			this->buttoncancelar->UseVisualStyleBackColor = false;
			this->buttoncancelar->Click += gcnew System::EventHandler(this, &MyForm::buttoncancelar_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(406, 421);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(86, 35);
			this->button12->TabIndex = 56;
			this->button12->Text = L"Recalcular costo";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(1131, 500);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttoncancelar);
			this->Controls->Add(this->ListaRecetasBox);
			this->Name = L"MyForm";
			this->Text = L"Lista de Recetas";
			this->Load += gcnew System::EventHandler(this, &MyForm::Recetas);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}

		//private: 
	private: System::Void Recetas(System::Object^ sender, System::EventArgs^ e) {
			ListaRecetas = gcnew Lista_Recetas();
	}
     private: System::Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	
		 

		 // Crear una nueva instancia de Receta para la próxima receta
		// recetaActual = gcnew Receta();

		 // Recoger la información de la receta del formulario
		 int Id = Int32::Parse(textBoxID->Text);
		 String^ nombre = textBoxNombre->Text;
		 int tiempoPreparacion = Int32::Parse(textBoxTiempoPreparacion->Text);
		 int tiempoCoccion = Int32::Parse(textBoxTiempoCoccion->Text);
		 int porciones = Int32::Parse(textBoxPorciones->Text);
		 String^ dificultad = comboBox1->Text;
		 String^ categoria = "";
		 if (radioButton1->Checked) {
			 categoria = radioButton1->Text;
		 }
		 else if (radioButton2->Checked) {
			 categoria = radioButton2->Text;
		 }
		 else if (radioButton3->Checked) {
			 categoria = radioButton3->Text;
		 }
		 String^ origen = textBoxOrigen->Text;

		 // Configurar los atributos de recetaActual con los valores del formulario
		 recetaActual->setId(Id);
		 recetaActual->setNombre(nombre);
		 recetaActual->setTiempoPreparacion(tiempoPreparacion);
		 recetaActual->setTiempoCoccion(tiempoCoccion);
		 recetaActual->setPorciones(porciones);
		 recetaActual->setCategoria(categoria);
		 recetaActual->setDificultad(dificultad);
		 recetaActual->setOrigen(origen);

		 // Agregar recetaActual a ListaRecetas
		 ListaRecetas->AgregarReceta(recetaActual);
		 // Mostrar un mensaje para confirmar que la receta ha sido agregada
		 MessageBox::Show("Receta Agregada");
           


	 }
	private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (ListaRecetas != nullptr) {
			int id = Int32::Parse(textBoxID->Text);
			ListaRecetas->EliminarReceta(id);
			MessageBox::Show("Receta Eliminada");
		}
		else {
			MessageBox::Show("La lista de recetas no se ha inicializado");
		}
		ListaRecetasBox->Items->Clear();
		//textBoxDetallesReceta->Clear();
	}


private: System::Void button1Editar_Click(System::Object^ sender, System::EventArgs^ e) {

	int identificador = Int32::Parse(this->textBoxID->Text);
	Receta^ nuevaReceta = gcnew Receta();
	nuevaReceta->Nombre = this->textBoxNombre->Text;
	ListaRecetas->editarReceta(identificador, nuevaReceta);
	MessageBox::Show("Receta Editada");
}

	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
	private: System::Void buttonAgregarIngrediente1_Click(System::Object^ sender, System::EventArgs^ e) {

		// Recoger la información del ingrediente del formulario
		String^ nombre = textBoxNombreIngrediente->Text;
		String^ cantidad = textBoxcantidad->Text;
		String^ unidad = textBoxEstado->Text;
		String^ origen = textBoxorigening->Text;
		String^ estado = textBoxEstado->Text;
		//float ^costo = Convert::ToSingle(textBoxcosto->Text);
		ValorNutricional^ valorNutricional = gcnew ValorNutricional(0, 0, 0, 0);
		valorNutricional->calorias = Int32::Parse(textBoxcalorias->Text);
		valorNutricional->grasas = Int32::Parse(textBoxgrasas->Text);
		valorNutricional->carbohidratos = Int32::Parse(textBoxcarbohidratos->Text);
		valorNutricional->proteinas = Int32::Parse(textBoxproteinas->Text);



		int ID = Convert::ToInt32(idingrediente->Text);
		float Precio = Convert::ToSingle(textBoxcosto->Text);


		// Crear una nueva instancia de Ingrediente
		Ingredientes^ _nuevoIngrediente = gcnew Ingredientes();
		_nuevoIngrediente->Nombre = nombre;
		_nuevoIngrediente->Cantidad = cantidad;
		_nuevoIngrediente->Unidad = unidad;
		_nuevoIngrediente->Origen = origen;
		_nuevoIngrediente->Estado = estado;
		_nuevoIngrediente->ID = ID;
		_nuevoIngrediente->Precio = Precio;
		_nuevoIngrediente->ValorNutricionalIngrediente = valorNutricional;
		// Crear una lista de ingredientes y agregar el nuevo ingrediente
		List<Ingredientes^>^ nuevosIngredientes = gcnew List<Ingredientes^>();
		nuevosIngredientes->Add(_nuevoIngrediente);

		// Agregar los ingredientes a la receta actual
		recetaActual->agregarIngredientes(nuevosIngredientes);

		// Actualizar la caja de detalles de la receta
		// textBoxDetallesReceta->Text = recetaActual->ToString();
		MessageBox::Show("Ingrediente Agregado");
	}

private: System::Void buttonVer_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ListaRecetasBox->Items->Clear(); // Limpiar el ListBox antes de agregar nuevos elementos
	int identificador = Int32::Parse(this->textBoxID->Text); // Asume que textBox1 contiene el identificador de la receta cuyos ingredientes quieres ver
	//Receta^ _receta = gcnew Receta();
	Ingredientes^ _ingrediente = gcnew Ingredientes();
	ValorNutricional^ valorTotal = gcnew ValorNutricional(0, 0, 0, 0);
	//if (_receta != nullptr) {
		for each (Receta ^ receta in ListaRecetas->listaRecetas) {
			//if (receta->Id == identificador) {
				
			this->ListaRecetasBox->Items->Add(" Nombre: " + receta->getNombre());
			this->ListaRecetasBox->Items->Add(" Tiempo de Preparacion: " + receta->TiempoPreparacion);
			this->ListaRecetasBox->Items->Add(" Tiempo de Coccion: " + receta->TiempoCoccion);
			this->ListaRecetasBox->Items->Add(" Porciones: " + receta->Porciones);
			this->ListaRecetasBox->Items->Add(" Categoria: " + receta->Categoria);
			this->ListaRecetasBox->Items->Add(" Dificultad: " + receta->Dificultad);
			this->ListaRecetasBox->Items->Add(" Origen: " + receta->Origen);


			//valorTotal->calorias += _ingrediente->ValorNutricionalIngrediente->calorias;
			//valorTotal->grasas += _ingrediente->ValorNutricionalIngrediente->grasas;
			//valorTotal->proteinas += _ingrediente->ValorNutricionalIngrediente->proteinas;
			//valorTotal->carbohidratos += _ingrediente->ValorNutricionalIngrediente->carbohidratos;

			//this->ListaRecetasBox->Items->Add(" Valor Nutricional Total:");
			//this->ListaRecetasBox->Items->Add("    Calorías: " + valorTotal->calorias);
			//this->ListaRecetasBox->Items->Add("    Grasas: " + valorTotal->grasas);
			//this->ListaRecetasBox->Items->Add("    Proteínas: " + valorTotal->proteinas);
			//this->ListaRecetasBox->Items->Add("    Carbohidratos: " + valorTotal->carbohidratos);
			
			// Agregar los ingredientes de la receta
			for each (Ingredientes ^ ingrediente in receta->getIngredientes()) {
				this ->ListaRecetasBox->Items->Add("Ingredientes:");
				this->ListaRecetasBox->Items->Add("  Nombre: " + ingrediente->Nombre);
				this->ListaRecetasBox->Items->Add("  Cantidad: " + ingrediente->Cantidad);
				this->ListaRecetasBox->Items->Add("  Estado: " + ingrediente->Estado);
				this->ListaRecetasBox->Items->Add("  Origen: " + ingrediente->Origen);
				this->ListaRecetasBox->Items->Add("  Precio: " + ingrediente->Precio);
				this->ListaRecetasBox->Items->Add("  Valor Nutricional Total:");

				valorTotal->calorias += ingrediente->ValorNutricionalIngrediente->calorias;
				valorTotal->grasas += ingrediente->ValorNutricionalIngrediente->grasas;
				valorTotal->proteinas += ingrediente->ValorNutricionalIngrediente->proteinas;
				valorTotal->carbohidratos += ingrediente->ValorNutricionalIngrediente->carbohidratos;

				this->ListaRecetasBox->Items->Add("    Calorías: " + valorTotal->calorias);
				this->ListaRecetasBox->Items->Add("    Grasas: " + valorTotal->grasas);
				this->ListaRecetasBox->Items->Add("    Proteínas: " + valorTotal->proteinas);
				this->ListaRecetasBox->Items->Add("    Carbohidratos: " + valorTotal->carbohidratos);

				

				

				// ... agregar otros detalles del ingrediente ...
			}
			//}
			// Agrega aquí cualquier otro campo de Ingrediente que desees mostrar
		}
	//}
	//else {
		//MessageBox::Show("No se encontró la receta con el identificador proporcionado.");
	//}

   }

	private: System::Void buttoncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonVerIng_Click(System::Object^ sender, System::EventArgs^ e) {


	//this->ListaRecetasBox->Items->Clear(); // Limpiar el ListBox antes de agregar nuevos elementos
	//int identificador = Int32::Parse(this->textBoxID->Text); // Asume que textBox1 contiene el identificador de la receta cuyos ingredientes quieres ver
	//List<Ingredientes^>^ ingredientes = ListaRecetas->verIngredientes(identificador);
	//if (ingredientes != nullptr) {
	//	for each (Ingredientes ^ ingrediente in ingredientes) {
	//		String^ detallesDeIngrediente = "Nombre: " + ingrediente->Nombre + "\n" +
	//			"Cantidad: " + ingrediente->Cantidad + "\n" +
	//			"Estado: " + ingrediente->Estado + "\n" +
	//			"Origen: " + ingrediente->Origen + "\n" +
	//			"Valor Nutricional:\n" +
	//			"  Calorías: " + ingrediente->ValorNutricionalIngrediente->calorias + "\n" +
	//			"  Grasas: " + ingrediente->ValorNutricionalIngrediente->grasas + "\n" +
	//			"  Proteínas: " + ingrediente->ValorNutricionalIngrediente->proteinas + "\n" +
	//			"  Carbohidratos: " + ingrediente->ValorNutricionalIngrediente->carbohidratos + "\n";
	//		// Agrega aquí cualquier otro campo de Ingrediente que desees mostrar
	//		this->ListaRecetasBox->Items->Add(detallesDeIngrediente);
	//	}
	//}
	//else {
	//	MessageBox::Show("No se encontró la receta con el identificador proporcionado.");
	//}


  }
private: System::Void buttonBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int identificador = Int32::Parse(this->textBoxID->Text);
	Receta^ receta = ListaRecetas->BuscarReceta(identificador);
	if (receta != nullptr) {
		this->ListaRecetasBox->Items->Clear();
		String^ detallesDeReceta = "Nombre: " + receta->Nombre + "\n" +
			", Tiempo de preparación: " + receta->TiempoPreparacion + "\n" +
			", Tiempo de cocción: " + receta->TiempoCoccion + "\n" +
			", Porciones: " + receta->Porciones + "\n" +
			", Nivel de dificultad: " + receta->Dificultad + "\n" +
			", Categoría: " + receta->Categoria + "\n" +
			", Origen: " + receta->Origen + "\n";

		//this->ListaRecetasBox->Items->Add(detallesDeReceta);
	}
	else {
		MessageBox::Show("No se encontró ninguna receta con el identificador proporcionado.");
	}
}
private: System::Void textBoxPorciones_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonrecetanueva_Click(System::Object^ sender, System::EventArgs^ e) {

	Receta^ receta = gcnew Receta();
}

	   //private: System::Void MostrarRecetasPorPorciones(int numPorciones) {
		  // for each (Receta ^ receta in ListaRecetas->listaRecetas) {
			 //  if (receta->getPorciones() == numPorciones) {
				//   // Aquí puedes imprimir la receta o hacer lo que necesites con ella
				//   Console::WriteLine("ID: " + receta->getId());
				//   Console::WriteLine("Nombre: " + receta->getNombre());
				//   // Y así sucesivamente para los demás atributos de la receta
			 //  }
		  // }
	   //}
private: System::Void button1porcionesbuscar_Click(System::Object^ sender, System::EventArgs^ e) {

	int numPorciones = Int32::Parse(textBox1porcionesrequeridas->Text);
	List<Receta^>^ recetas = ListaRecetas->MostraRecetasPorPorciones(numPorciones);
	//MostrarRecetasPorPorciones(numPorciones);
	// Para mostrar las recetas en un MessageBox
	String^ recetasStr = "";
	for each (Receta ^ receta in recetas) {
		recetasStr += "ID: " + receta->getId() + ", Nombre: " + receta->getNombre() + "\n";
	}
	MessageBox::Show(recetasStr);

	//// Para mostrar las recetas en un ListBox
	//ListaRecetasBox->Items->Clear();
	//for each (Receta ^ receta in recetas) {
	//	ListaRecetasBox->Items->Add("ID: " + receta->getId() + ", Nombre: " + receta->getNombre());
	//}
}

	   //private: System::Void button1buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		  // array<String^>^ valores = textBox1ValnuT->Text->Split(',');
		  // int minCalorias = Int32::Parse(valores[0]);
		  // int maxCalorias = Int32::Parse(valores[1]);
		  // int minGrasa = Int32::Parse(valores[2]);
		  // int maxGrasa = Int32::Parse(valores[3]);
		  // int minCarbohidratos = Int32::Parse(valores[4]);
		  // int maxCarbohidratos = Int32::Parse(valores[5]);
		  // int minProteinas = Int32::Parse(valores[6]);
		  // int maxProteinas = Int32::Parse(valores[7]);
		  // List<Receta^>^ recetasFiltradas = ListaRecetas->MostrarRecetasPorValorNutricional(minCalorias, maxCalorias, minGrasa, maxGrasa, minCarbohidratos, maxCarbohidratos, minProteinas, maxProteinas);

		  // // Crear una cadena con las recetas filtradas
		  // String^ recetasStr = "";
		  // for each (Receta ^ receta in recetasFiltradas) {
			 //  recetasStr += "ID: " + receta->getId() + ", Nombre: " + receta->getNombre() + "\n";
		  // }

		  // // Mostrar las recetas filtradas en un MessageBox
		  // MessageBox::Show(recetasStr);
	   //}
private: System::Void textBox1ValnuT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1buscar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ valores = textBox1ValnuT->Text->Split(',');
	int minCalorias = Int32::Parse(valores[0]);
	int maxCalorias = Int32::Parse(valores[1]);
	int minGrasa = Int32::Parse(valores[2]);
	int maxGrasa = Int32::Parse(valores[3]);
	int minCarbohidratos = Int32::Parse(valores[4]);
	int maxCarbohidratos = Int32::Parse(valores[5]);
	int minProteinas = Int32::Parse(valores[6]);
	int maxProteinas = Int32::Parse(valores[7]);
	List<Receta^>^ recetasFiltradas = ListaRecetas->MostrarRecetasPorValorNutricional(minCalorias, maxCalorias, minGrasa, maxGrasa, minCarbohidratos, maxCarbohidratos, minProteinas, maxProteinas);

	// Crear una cadena con las recetas filtradas
	String^ recetasStr = "";
	for each (Receta ^ receta in recetasFiltradas) {
		recetasStr += "ID: " + receta->getId() + ", Nombre: " + receta->getNombre() + "\n";
	}

	// Mostrar las recetas filtradas en un MessageBox
	MessageBox::Show(recetasStr);
}

	   //private: System::Void button12_ClickRecalcularCosto(System::Object^ sender, System::EventArgs^ e) {
		  // int identificador = Int32::Parse(this->textBoxID->Text); // Asume que textBoxIdentificador contiene el identificador de la receta
		  // int nuevasPorciones = Int32::Parse(this->textBoxPorciones->Text); // Asume que textBoxNuevasPorciones contiene el número de nuevas porciones
		  // double nuevoCosto = ListaRecetas->recalcularCosto(identificador, nuevasPorciones);
		  // if (nuevoCosto != -1) {
			 //  MessageBox::Show("El nuevo costo de la receta es: " + nuevoCosto);
		  // }
		  // else {
			 //  MessageBox::Show("No se encontró la receta con el identificador proporcionado.");
		  // }
	   //}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	int identificador = Int32::Parse(this->textBoxID->Text); // Asume que textBoxIdentificador contiene el identificador de la receta
	int nuevasPorciones = Int32::Parse(this->textBoxPorciones->Text); // Asume que textBoxNuevasPorciones contiene el número de nuevas porciones
	double nuevoCosto = ListaRecetas->recalcularCosto(identificador, nuevasPorciones);
	if (nuevoCosto != -1) {
		MessageBox::Show("El nuevo costo de la receta es: " + nuevoCosto);
	}
	else {
		MessageBox::Show("No se encontró la receta con el identificador proporcionado.");
	}
}
};
}
