#pragma once
#include <cmath>
namespace Individualki {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage4;
	protected:

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  TextBox;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;


























	private: System::Windows::Forms::Button^  COUNT;











	private: System::Windows::Forms::Button^  btnBuild;

	private: System::Windows::Forms::TextBox^  txtMatrix;
	private: System::Windows::Forms::TextBox^  txtMax;
	private: System::Windows::Forms::TextBox^  txtMin;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RichTextBox^  txtMassiv;
	private: System::Windows::Forms::TextBox^  txtNum;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnGenerate;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RichTextBox^  txtOut;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  txtK;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::RichTextBox^  txtmassivb;
	private: System::Windows::Forms::RichTextBox^  txtmassiva;
	private: System::Windows::Forms::TextBox^  bmax;
	private: System::Windows::Forms::TextBox^  bmin;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::TextBox^  amax;
	private: System::Windows::Forms::TextBox^  amin;
	private: System::Windows::Forms::TextBox^  alen;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bGen;
private: System::Windows::Forms::Button^  btnwork;
private: System::Windows::Forms::Button^  bGen1;
private: System::Windows::Forms::Label^  label16;

private: System::Windows::Forms::RichTextBox^  bchange;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::RichTextBox^  txtmassivn;
private: System::Windows::Forms::Button^  nGen;
private: System::Windows::Forms::TextBox^  nmax;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  nmin;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  nlen;
private: System::Windows::Forms::Label^  label13;







	protected:

	protected:









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->bchange = (gcnew System::Windows::Forms::RichTextBox());
			this->bGen1 = (gcnew System::Windows::Forms::Button());
			this->btnwork = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtmassivb = (gcnew System::Windows::Forms::RichTextBox());
			this->txtmassiva = (gcnew System::Windows::Forms::RichTextBox());
			this->bmax = (gcnew System::Windows::Forms::TextBox());
			this->bmin = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->amax = (gcnew System::Windows::Forms::TextBox());
			this->amin = (gcnew System::Windows::Forms::TextBox());
			this->alen = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bGen = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtmassivn = (gcnew System::Windows::Forms::RichTextBox());
			this->nGen = (gcnew System::Windows::Forms::Button());
			this->nmax = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->nmin = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->nlen = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtMatrix = (gcnew System::Windows::Forms::TextBox());
			this->btnBuild = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtOut = (gcnew System::Windows::Forms::RichTextBox());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->txtMax = (gcnew System::Windows::Forms::TextBox());
			this->txtMin = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtMassiv = (gcnew System::Windows::Forms::RichTextBox());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->COUNT = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->txtK = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(866, 511);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->bchange);
			this->tabPage1->Controls->Add(this->bGen1);
			this->tabPage1->Controls->Add(this->btnwork);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->txtmassivb);
			this->tabPage1->Controls->Add(this->txtmassiva);
			this->tabPage1->Controls->Add(this->bmax);
			this->tabPage1->Controls->Add(this->bmin);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->amax);
			this->tabPage1->Controls->Add(this->amin);
			this->tabPage1->Controls->Add(this->alen);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->bGen);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(858, 478);
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Послед.";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(13, 359);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(118, 20);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Обр. массив b:";
			// 
			// bchange
			// 
			this->bchange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bchange->Location = System::Drawing::Point(178, 343);
			this->bchange->Name = L"bchange";
			this->bchange->ReadOnly = true;
			this->bchange->Size = System::Drawing::Size(672, 50);
			this->bchange->TabIndex = 29;
			this->bchange->Text = L"";
			// 
			// bGen1
			// 
			this->bGen1->Location = System::Drawing::Point(691, 75);
			this->bGen1->Name = L"bGen1";
			this->bGen1->Size = System::Drawing::Size(141, 47);
			this->bGen1->TabIndex = 27;
			this->bGen1->Text = L"Генерация b";
			this->bGen1->UseVisualStyleBackColor = true;
			this->bGen1->Click += gcnew System::EventHandler(this, &MyForm::bGen1_Click);
			// 
			// btnwork
			// 
			this->btnwork->Location = System::Drawing::Point(710, 286);
			this->btnwork->Name = L"btnwork";
			this->btnwork->Size = System::Drawing::Size(140, 51);
			this->btnwork->TabIndex = 26;
			this->btnwork->Text = L"Расчёт";
			this->btnwork->UseVisualStyleBackColor = true;
			this->btnwork->Click += gcnew System::EventHandler(this, &MyForm::btnwork_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 246);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 20);
			this->label15->TabIndex = 25;
			this->label15->Text = L"Массив b:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 174);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 20);
			this->label14->TabIndex = 24;
			this->label14->Text = L"Массив a:";
			// 
			// txtmassivb
			// 
			this->txtmassivb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtmassivb->Location = System::Drawing::Point(180, 230);
			this->txtmassivb->Name = L"txtmassivb";
			this->txtmassivb->Size = System::Drawing::Size(672, 50);
			this->txtmassivb->TabIndex = 23;
			this->txtmassivb->Text = L"";
			this->txtmassivb->TextChanged += gcnew System::EventHandler(this, &MyForm::txtmassivb_TextChanged);
			// 
			// txtmassiva
			// 
			this->txtmassiva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtmassiva->Location = System::Drawing::Point(180, 163);
			this->txtmassiva->Name = L"txtmassiva";
			this->txtmassiva->Size = System::Drawing::Size(672, 50);
			this->txtmassiva->TabIndex = 22;
			this->txtmassiva->Text = L"";
			this->txtmassiva->TextChanged += gcnew System::EventHandler(this, &MyForm::txtmassiva_TextChanged);
			this->txtmassiva->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtmassiva_KeyPress);
			// 
			// bmax
			// 
			this->bmax->Location = System::Drawing::Point(423, 87);
			this->bmax->Name = L"bmax";
			this->bmax->Size = System::Drawing::Size(100, 26);
			this->bmax->TabIndex = 12;
			this->bmax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::bmax_KeyPress);
			// 
			// bmin
			// 
			this->bmin->Location = System::Drawing::Point(423, 53);
			this->bmin->Name = L"bmin";
			this->bmin->Size = System::Drawing::Size(100, 26);
			this->bmin->TabIndex = 11;
			this->bmin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::bmin_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(339, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Макс b:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(339, 56);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 20);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Мин b:";
			// 
			// amax
			// 
			this->amax->Location = System::Drawing::Point(93, 87);
			this->amax->Name = L"amax";
			this->amax->Size = System::Drawing::Size(100, 26);
			this->amax->TabIndex = 6;
			this->amax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::amax_KeyPress);
			// 
			// amin
			// 
			this->amin->Location = System::Drawing::Point(93, 53);
			this->amin->Name = L"amin";
			this->amin->Size = System::Drawing::Size(100, 26);
			this->amin->TabIndex = 5;
			this->amin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::amin_KeyPress);
			// 
			// alen
			// 
			this->alen->Location = System::Drawing::Point(160, 21);
			this->alen->Name = L"alen";
			this->alen->Size = System::Drawing::Size(100, 26);
			this->alen->TabIndex = 4;
			this->alen->TextChanged += gcnew System::EventHandler(this, &MyForm::alen_TextChanged);
			this->alen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::alen_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Макс a:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Мин a:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Размер массивов:";
			// 
			// bGen
			// 
			this->bGen->Location = System::Drawing::Point(691, 15);
			this->bGen->Name = L"bGen";
			this->bGen->Size = System::Drawing::Size(141, 43);
			this->bGen->TabIndex = 0;
			this->bGen->Text = L"Генерация a";
			this->bGen->UseVisualStyleBackColor = true;
			this->bGen->Click += gcnew System::EventHandler(this, &MyForm::bGen_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->txtmassivn);
			this->tabPage2->Controls->Add(this->nGen);
			this->tabPage2->Controls->Add(this->nmax);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->nmin);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->nlen);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->txtMatrix);
			this->tabPage2->Controls->Add(this->btnBuild);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(858, 478);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"Матрица";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(-1, 65);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(161, 20);
			this->label19->TabIndex = 24;
			this->label19->Text = L"Линейный массив n:";
			// 
			// txtmassivn
			// 
			this->txtmassivn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtmassivn->Location = System::Drawing::Point(178, 49);
			this->txtmassivn->Name = L"txtmassivn";
			this->txtmassivn->Size = System::Drawing::Size(672, 50);
			this->txtmassivn->TabIndex = 23;
			this->txtmassivn->Text = L"";
			// 
			// nGen
			// 
			this->nGen->Location = System::Drawing::Point(698, 6);
			this->nGen->Name = L"nGen";
			this->nGen->Size = System::Drawing::Size(141, 40);
			this->nGen->TabIndex = 15;
			this->nGen->Text = L"Генерация n";
			this->nGen->UseVisualStyleBackColor = true;
			this->nGen->Click += gcnew System::EventHandler(this, &MyForm::nGen_Click);
			// 
			// nmax
			// 
			this->nmax->Location = System::Drawing::Point(468, 3);
			this->nmax->Name = L"nmax";
			this->nmax->Size = System::Drawing::Size(100, 26);
			this->nmax->TabIndex = 14;
			this->nmax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::nmax_KeyPress);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(407, 6);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(55, 20);
			this->label18->TabIndex = 13;
			this->label18->Text = L"Макс.:";
			// 
			// nmin
			// 
			this->nmin->Location = System::Drawing::Point(301, 2);
			this->nmin->Name = L"nmin";
			this->nmin->Size = System::Drawing::Size(100, 26);
			this->nmin->TabIndex = 12;
			this->nmin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::nmin_KeyPress);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(247, 5);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(48, 20);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Мин.:";
			// 
			// nlen
			// 
			this->nlen->Location = System::Drawing::Point(139, 3);
			this->nlen->Name = L"nlen";
			this->nlen->Size = System::Drawing::Size(100, 26);
			this->nlen->TabIndex = 10;
			this->nlen->TextChanged += gcnew System::EventHandler(this, &MyForm::nlen_TextChanged);
			this->nlen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::nlen_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 4);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 20);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Длина массива:";
			// 
			// txtMatrix
			// 
			this->txtMatrix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMatrix->Location = System::Drawing::Point(3, 178);
			this->txtMatrix->Multiline = true;
			this->txtMatrix->Name = L"txtMatrix";
			this->txtMatrix->ReadOnly = true;
			this->txtMatrix->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtMatrix->Size = System::Drawing::Size(852, 291);
			this->txtMatrix->TabIndex = 8;
			this->txtMatrix->WordWrap = false;
			// 
			// btnBuild
			// 
			this->btnBuild->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBuild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBuild->Location = System::Drawing::Point(591, 121);
			this->btnBuild->Name = L"btnBuild";
			this->btnBuild->Size = System::Drawing::Size(259, 38);
			this->btnBuild->TabIndex = 6;
			this->btnBuild->Text = L"Построить";
			this->btnBuild->UseVisualStyleBackColor = false;
			this->btnBuild->Click += gcnew System::EventHandler(this, &MyForm::btnBuild_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->txtOut);
			this->tabPage3->Controls->Add(this->btnGenerate);
			this->tabPage3->Controls->Add(this->txtMax);
			this->tabPage3->Controls->Add(this->txtMin);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->txtMassiv);
			this->tabPage3->Controls->Add(this->txtNum);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->COUNT);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(858, 478);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Модули";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(478, 29);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Количество отрицательных элементов:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(487, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 29);
			this->label8->TabIndex = 28;
			this->label8->Text = L"0";
			// 
			// txtOut
			// 
			this->txtOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOut->Location = System::Drawing::Point(3, 242);
			this->txtOut->Name = L"txtOut";
			this->txtOut->ReadOnly = true;
			this->txtOut->Size = System::Drawing::Size(847, 50);
			this->txtOut->TabIndex = 27;
			this->txtOut->Text = L"";
			// 
			// btnGenerate
			// 
			this->btnGenerate->BackColor = System::Drawing::SystemColors::Window;
			this->btnGenerate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGenerate->Location = System::Drawing::Point(635, 9);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(215, 45);
			this->btnGenerate->TabIndex = 26;
			this->btnGenerate->Text = L"Генерация массива";
			this->btnGenerate->UseVisualStyleBackColor = false;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &MyForm::btnGenerate_Click);
			// 
			// txtMax
			// 
			this->txtMax->Location = System::Drawing::Point(376, 112);
			this->txtMax->Name = L"txtMax";
			this->txtMax->Size = System::Drawing::Size(211, 26);
			this->txtMax->TabIndex = 25;
			// 
			// txtMin
			// 
			this->txtMin->Location = System::Drawing::Point(376, 60);
			this->txtMin->Name = L"txtMin";
			this->txtMin->Size = System::Drawing::Size(211, 26);
			this->txtMin->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(3, 118);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(351, 25);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Максимальное значение диапазона:\r\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(3, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(343, 25);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Минимальное значение диапазона:";
			// 
			// txtMassiv
			// 
			this->txtMassiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMassiv->Location = System::Drawing::Point(3, 157);
			this->txtMassiv->Name = L"txtMassiv";
			this->txtMassiv->Size = System::Drawing::Size(847, 50);
			this->txtMassiv->TabIndex = 21;
			this->txtMassiv->Text = L"";
			// 
			// txtNum
			// 
			this->txtNum->Location = System::Drawing::Point(376, 9);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(211, 26);
			this->txtNum->TabIndex = 20;
			this->txtNum->TextChanged += gcnew System::EventHandler(this, &MyForm::txtNum_TextChanged);
			this->txtNum->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtNum_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(3, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(323, 25);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Количество элементов массива:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// COUNT
			// 
			this->COUNT->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->COUNT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->COUNT->Location = System::Drawing::Point(393, 412);
			this->COUNT->Name = L"COUNT";
			this->COUNT->Size = System::Drawing::Size(457, 57);
			this->COUNT->TabIndex = 18;
			this->COUNT->Text = L"Расчёт";
			this->COUNT->UseVisualStyleBackColor = false;
			this->COUNT->Click += gcnew System::EventHandler(this, &MyForm::COUNT_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->txtK);
			this->tabPage4->Controls->Add(this->button3);
			this->tabPage4->Controls->Add(this->TextBox);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(858, 478);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Слово";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(8, 286);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 20);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Буква:";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(183, 398);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(141, 20);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Количество букв:";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox2->Location = System::Drawing::Point(330, 395);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 11;
			// 
			// txtK
			// 
			this->txtK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtK->Location = System::Drawing::Point(71, 283);
			this->txtK->Name = L"txtK";
			this->txtK->Size = System::Drawing::Size(262, 26);
			this->txtK->TabIndex = 10;
			this->txtK->TextChanged += gcnew System::EventHandler(this, &MyForm::txtK_TextChanged);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(6, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 40);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Сброс";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// TextBox
			// 
			this->TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox->Location = System::Drawing::Point(8, 6);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextBox->Size = System::Drawing::Size(847, 259);
			this->TextBox->TabIndex = 5;
			this->TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox_TextChanged);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(330, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 40);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(152, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(866, 510);
			this->Controls->Add(this->tabControl1);
			this->MinimumSize = System::Drawing::Size(888, 566);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Индивидуальные задания";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
				 //ПЕРВАЯ ЛАБА

/** private: System::Void GenerateA_Click(System::Object^  sender, System::EventArgs^  e) {
	txt2->Text = "";
	Result->Text = "";
	int a, b, n; = Convert::ToInt32(txt1->Text);//берем количество покупателей из txt1
	int a, b, n;= Convert::ToInt32(txt1->Text);//берем количество покупателей из txt1
	a = Convert::ToInt32(txt3->Text);//мин
	b = Convert::ToInt32(txt4->Text);//макс
	String^ temp;
	Random^ rand = gcnew Random();
	for (int i = 0; i < n; i++) {
		temp += Convert::ToString(rand->Next(a, b + 1)) + " ";//выводим рандомное число
	}										//в txt1 (кол-во покупателей)
	txt5->Text = temp->Remove(temp->Length - 1);
}
private: System::Void btnCount_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (txt5->Text->Length==0) {
		MessageBox::Show("Необходимо заполнить все поля","Ошибка",MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Int64 C = 0, k, n;//объявляем: С-сумма(время в очереди), k-номер покупателя
	array<String^>^ strings = txt5->Text->Split(' ');
	Converter<String^, Int64>^ converter =
		gcnew Converter<String^, Int64>(Convert::ToInt64);

	array<String^>^ cleaned = gcnew array<String^>(strings->Length);

	int index = 0;
	for each(String^ s in strings) {
		if (!String::IsNullOrEmpty(s)) {
			cleaned[index++] = s;
		}
	}
	Array::Resize(cleaned, index);

	array<Int64>^ massiv;
	massiv = Array::ConvertAll(cleaned, converter);
	n = Convert::ToInt32(txt1->Text);//берем количество покупателей из txt1
	k = Convert::ToInt32(txt2->Text);//берем номер покупателя из txt2
	if (k > n) {
		MessageBox::Show("Номер покупателя должен не превышать их количество", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		txt2->Focus();
		return;
	}
		for (int m = 0; m < k - 1; m++) {
			C += massiv[m];//считаем сумму - время нахождения 
		}				//в очереди для k-того покупателя
		if (C == 0)
			Result->Text = "Покупатель не стоял в очереди";
		else
			Result->Text = "Время в очереди " + k + "-го покупателя = " + C + " мин";
		btnCount->Enabled = false;
		txt2->Focus();
}
private: System::Void txt1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Result->Text = "";//очистка поля
}
private: System::Void txt2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Result->Text = "";//очистка поля
	if ((txt2->Text != "") && (txt1->Text != ""))
		btnCount->Enabled = true;
	else btnCount->Enabled = false;
}
private: System::Void txt5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (txt5->Text->Length == 0) {
		txt4->Text ="";
		txt3->Text ="";
		txt1->Text ="";
		return;
	}
	array<String^>^ strings = txt5->Text->Split(' ');
	Converter<String^, Int64>^ converter =
		gcnew Converter<String^, Int64>(Convert::ToInt64);

	array<String^>^ cleaned = gcnew array<String^>(strings->Length);

	int index = 0;
	for each(String^ s in strings) {
		if (!String::IsNullOrEmpty(s)) {
			cleaned[index++] = s;
		}
	}
	Array::Resize(cleaned, index);

	array<Int64>^ massiv;
	massiv = Array::ConvertAll(cleaned, converter);
	Int64 Min, Max;               //min, max элементы
	Min = Max = massiv[0];
	for (int i = 1; i < massiv->Length; ++i) {
		if (massiv[i] > Max) {
			Max = massiv[i];
		}
		if (massiv[i] < Min) {
			Min = massiv[i];
		}
	}
	txt4->Text = Convert::ToString(Max);
	txt3->Text = Convert::ToString(Min);
	txt1->Text = Convert::ToString(massiv->Length);
}
private: System::Void txt1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (e->KeyChar == 0x08)
		return;
	e->Handled = true;
}
private: System::Void txt2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (e->KeyChar == 0x08)
		return;
	e->Handled = true;
}
private: System::Void txt3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (e->KeyChar == 0x08)
		return;
	e->Handled = true;
}
private: System::Void txt4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (e->KeyChar == 0x08)
		return;
	e->Handled = true;
}
private: System::Void txt5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (e->KeyChar == ' ')
		return;
	if (e->KeyChar == 0x08)
		return;
	e->Handled = true;
} **/


		 //ВТОРАЯ ЛАБА
private: System::Void btnBuild_Click(System::Object^  sender, System::EventArgs^  e) {
	int n, n1;
	String^ tor = Convert::ToString(txtmassivn->Text);
	txtMatrix->Text = "";
	/**if (txtPor->Text->Length == 0) {
		MessageBox::Show("Введите порядок матрицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		txtPor->Focus();
		return;
	}**/

	if (txtmassivn->Text->Length == 0) {
		MessageBox::Show("Введите размер массива", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		txtmassivn->Focus();
		return;
	}

	array<String^>^ stringsn = txtmassivn->Text->Split(' ');
	Converter<String^, Int64>^ convertern =
		gcnew Converter<String^, Int64>(Convert::ToInt64);

	array<String^>^ cleanedn = gcnew array<String^>(stringsn->Length);

	int indexn = 0;
	for each(String^ sn in stringsn) {
		if (!String::IsNullOrEmpty(sn)) {
			cleanedn[indexn++] = sn;
		}
	}
	Array::Resize(cleanedn, indexn);

	array<Int64>^ massivn;
	massivn = Array::ConvertAll(cleanedn, convertern);
	txtmassivn->Text = "";
	for (int i = 0; i < cleanedn->Length; ++i) {
		txtmassivn->Text += Convert::ToString(cleanedn[i]) + " ";
	}
	int count = 0;
	nlen->Text = Convert::ToString(massivn->Length);
	Int64 max = 0, min = 100000;

	for (int i = 0; i < massivn->Length; ++i) {
		if (massivn[i] < min)
			min = massivn[i];
		if (massivn[i] > max)
			max = massivn[i];
	}
	nmin->Text = Convert::ToString(min);
	nmax->Text = Convert::ToString(max);


	//n = Convert::ToInt32(txtPor->Text);
	n = Convert::ToInt32(nlen->Text);
	//n1 = n;
	long long int **matrix = new long long int*[n];//объявление двумерного массива
	for (int i = 0; i < n; ++i)
		matrix[i] = new long long int[n];//память для массива
	//заполнение двумерного массива
	for (int k = 0; k < n; ++k) {
		for (int t = 0; t < n; ++t) {
			matrix[k][t] = pow(massivn[t], k+1);
//			textBox1->Text += Convert::ToString(matrix[k][t])+" ";
		}
	}
	/**for (int k = 0; k < n; ++k) {
		for (int t = 0; t < n; ++t) {
			matrix[t][k] = matrix[k][t];
		}
	}**/
	long long int a;
	//вывод матрицы в текстовое поле
	long long int maxnn = abs(matrix[0][0]);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (abs(matrix[i][j]) > maxnn) maxnn = abs(matrix[i][j]);


		}



	}




	String^ temp1;
	long long int Length;
	bool zap;
	String^ temp2 = "";
	String^ formatString;
	long long int Length1 = (Convert::ToString(maxnn)) -> Length;
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			zap = false;
			temp1 = Convert::ToString(matrix[i][j]);
			Length = temp1->Length;
			for (int i = 0; i < Length; ++i)
			{
				if (temp1[i] == '-') Length--;

			}
			temp2 = Convert::ToString(((2 * (Convert::ToString(maxnn)->Length) + 1) - Length));
			/**if (j == 0 || j == n || i == 0 || i == n)
			{**/
				txtMatrix->Text += String::Format("{0," + temp2 + ":0}", matrix[i][j]);
			//}
			//else txtMatrix->Text += String::Format("{0,14:0}", 0);
		}
		txtMatrix->Text += Environment::NewLine;








	}
//	txtPor->Text = (Convert::ToString(maxnn)) + " " + temp2;
	txtmassivn->Text = tor;














	/**for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
		{
			a = matrix[i][j];
			if (txtMatrix->Text->Length == 0)
				txtMatrix->Text += a.ToString("     #");
			else if (j == 0) {//если первый элемент в строке
				if (a > 0 && a < 10)
					txtMatrix->Text += Environment::NewLine + a.ToString("     #");
				if (a > 9 && a < 100)
					txtMatrix->Text += Environment::NewLine + a.ToString("   #");
				if (a > 99 && a < 1000)
					txtMatrix->Text += Environment::NewLine + a.ToString(" #");
			}
			else {
				if (a > 0 && a < 10)
					txtMatrix->Text += a.ToString("     #");
				if (a > 9 && a < 100)
					txtMatrix->Text += a.ToString("   #");
				if (a > 99 && a < 1000)
					txtMatrix->Text += a.ToString(" #");
			}
		}
	}**/
	//btnBuild->Enabled = false;
	//txtPor->Focus();
}
private: System::Void txtPor_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txtMatrix->Text = "";//очистка поля при изменения текста
	btnBuild->Enabled = true;
}
private: System::Void txtPor_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (e->KeyChar == 0x08)
		return;
	e->Handled = true;
}
				//ТРЕТЬЯ ЛАБА

		 double treug(double a) {
			 double b;
			 b = (a*a*Math::Sqrt(3)) / 4;
			 return b;
		 }



		
		 //ЧЕТВЕРТАЯ ЛАБА

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (txtK->Text == "") txtK->Text = " ";
	String^ k;
	String^ temp;
	String^ ttemp;
	String^ x = "";
	int count=0;
	wchar_t K = Convert::ToChar(txtK->Text);
	temp = TextBox->Text->ToLower();
	for each (wchar_t var in temp)
	{
		x += Char::ToLower(var);
	}
	temp = x;
	ttemp = TextBox->Text;
	for (int i = 0; i < temp->Length; ++i) {
		if (temp[temp->Length - 1] == ' ') {
			temp=temp->Remove(temp->Length - 1);
			i--;
		}
			
	}
	TextBox->Text = ttemp;
	array<String^>^ words = temp->Split(' ');
	k = (words[words->Length - 1]);
	for (int i = 0; i < k->Length; ++i) {
		if (k[i] == K)
			count++;
	}
	textBox2->Text = count.ToString();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	TextBox->Text = "";
	txtK->Text = "";
	textBox2->Text = "";
}
private: System::Void TextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}



private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
}




		 //ЛАБА 3
		 int n;
private: System::Void btnGenerate_Click(System::Object^  sender, System::EventArgs^  e) {
	//txt2->Text = "";
	txtOut->Text = "";
	label8->Text = "0";
	txtMassiv->Text = "";
	int a, b;
	if (txtNum->Text == ""||Convert::ToInt32( txtNum->Text)==0) {
		MessageBox::Show("Введите размер массива", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (txtNum->Text != "") {
			n = Convert::ToInt32(txtNum->Text);//берем количество из txtNum
		}
		if (txtMin->Text != "") {
			a = Convert::ToInt32(txtMin->Text);//мин
		}
		if (txtMax->Text != "") {
			b = Convert::ToInt32(txtMax->Text);//макс
		}
		if (txtMin->Text == "") a = 0;
		if (txtMax->Text == "") b = 0;
		if (txtNum->Text == "") n = 0;
		String^ temp;
		Random^ rand = gcnew Random();
		for (int i = 0; i < n; i++) {
			temp += Convert::ToString(rand->Next(a, b + 1)) + " ";//выводим рандомное число
		}										//в txtNum
		txtMassiv->Text = temp->Remove(temp->Length - 1);
	}
}
private: System::Void COUNT_Click(System::Object^  sender, System::EventArgs^  e) {
	array<String^>^ strings = txtMassiv->Text->Split(' ');
	Converter<String^, Int64>^ converter =
		gcnew Converter<String^, Int64>(Convert::ToInt64);

	array<String^>^ cleaned = gcnew array<String^>(strings->Length);

	int index = 0;
	for each(String^ s in strings) {
		if (!String::IsNullOrEmpty(s)) {
			cleaned[index++] = s;
		}
	}
	Array::Resize(cleaned, index);

	array<Int64>^ massiv;
	massiv = Array::ConvertAll(cleaned, converter);
	txtMassiv->Text = "";
	for (int i = 0; i < cleaned->Length; ++i) {
		txtMassiv->Text += Convert::ToString(cleaned[i]) + " ";
	}
	int count = 0;
	txtNum->Text = Convert::ToString(massiv->Length);
	Int64 max=0, min=100000;
	
	for (int i = 0; i < massiv->Length; ++i) {
		if (massiv[i] < min)
			min = massiv[i];
		if (massiv[i] >max)
			max = massiv[i];
	}
	txtMin->Text = Convert::ToString(min);
	txtMax->Text = Convert::ToString(max);
	label8->Text = "";
	txtOut->Text = "";
	int r;
	for (int i = 0; i < massiv->Length; i++)
	{
		if (massiv[i] < 0)
		{

			r = massiv[i];
			massiv[i] = Mark(r);
			count++;
		}
		txtOut->Text += Convert::ToString(massiv[i]);
		txtOut->Text += " ";
	}
	label8->Text = Convert::ToString(count);
	
}
		 int Mark(int r) {

			 r = -r;
			 return r;

		 }
private: System::Void txtNum_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtK_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (txtK->Text->Length > 1) {
		MessageBox::Show("Можно ввести только одну букву", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		txtK->Text = txtK->Text->Remove(1, 1);
			return;
	}
}


		 private: System::Void txtNum_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
			 {
				 return;
			 }
			 if (e->KeyChar == '-')
				 if ((txtNum->Text->IndexOf('-') != 0))
				 {
					 e->Handled = true;
				 }
				 else
				 {
					 return;
				 }
			 if (e->KeyChar == '.')
			 {
				 e->KeyChar = ',';
			 }
			 if (e->KeyChar == ',')
			 {
				 if ((txtNum->Text == "") || (txtNum->Text->IndexOf(',') != -1))
				 {
					 e->Handled = true;


				 }
				 return;
			 }
			 if (e->KeyChar == 0x08)
			 {
				 return;
			 }
			 e->Handled = true;

		 }


		//ЛАБА 1


private: System::Void bGen_Click(System::Object^  sender, System::EventArgs^  e) {
	txtmassiva->Text = "";
	bchange->Text = "";

	//txtmassivb->Text = "";
	//label8->Text = "0";
	txtmassiva->Text = "";
	//txtmassivb->Text = "";
	long long int a, b;
	if ((alen->Text == "" || Convert::ToInt32(alen->Text) == 0)) {
		MessageBox::Show("Введите размер массива", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (alen->Text != "") {
			n = Convert::ToInt32(alen->Text);//берем количество из txtNum
		}
		if (amin->Text != "") {
			a = Convert::ToInt32(amin->Text);//мин
		}
		if (amax->Text != "") {
			b = Convert::ToInt32(amax->Text);//макс
		}
		if (amin->Text == "") a = 0;
		if (amax->Text == "") b = 0;
		if (alen->Text == "") n = 0;
		String^ temp;
		Random^ rand = gcnew Random();
		for (int i = 0; i < n; i++) {
			temp += Convert::ToString(rand->Next(a, b + 1)) + " ";//выводим рандомное число
		}										//в txtNum
		txtmassiva->Text = temp->Remove(temp->Length - 1);


		

		

	}
}

private: System::Void bGen1_Click(System::Object^  sender, System::EventArgs^  e) {
	//txtmassiva->Text = "";
	txtmassivb->Text = "";
	bchange->Text = "";

	//label8->Text = "0";
	//txtmassiva->Text = "";
	txtmassivb->Text = "";
	long long int a1, b1;
	if ((alen->Text == "" || Convert::ToInt32(alen->Text) == 0)) {
		MessageBox::Show("Введите размер массива", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {

		if (alen->Text != "") {
			n = Convert::ToInt32(alen->Text);//берем количество из txtNum
		}
		if (bmin->Text != "") {
			a1 = Convert::ToInt32(bmin->Text);//мин
		}
		if (bmax->Text != "") {
			b1 = Convert::ToInt32(bmax->Text);//макс
		}
		if (bmin->Text == "") a1 = 0;
		if (bmax->Text == "") b1 = 0;
		if (alen->Text == "") n = 0;
		String^ temp1;
		Random^ rand1 = gcnew Random();
		for (int j = 0; j < n; j++) {
			temp1 += Convert::ToString(rand1->Next(a1, b1 + 1)) + " ";//выводим рандомное число
		}										//в txtNum
		txtmassivb->Text = temp1->Remove(temp1->Length - 1);
	}
}
private: System::Void btnwork_Click(System::Object^  sender, System::EventArgs^  e) {
	
	{
		bchange->Text = "";
		//нормализация a

		array<String^>^ strings1 = txtmassiva->Text->Split(' ');
		Converter<String^, Int64>^ converter =
			gcnew Converter<String^, Int64>(Convert::ToInt64);

		array<String^>^ cleaned = gcnew array<String^>(strings1->Length);

		long long int index = 0;
		for each(String^ s in strings1) {
			if (!String::IsNullOrEmpty(s)) {
				cleaned[index++] = s;
			}
		}
		Array::Resize(cleaned, index);

		array<Int64>^ massiv1;
		massiv1 = Array::ConvertAll(cleaned, converter);
		txtmassiva->Text = "";
		for (int i = 0; i < cleaned->Length; ++i) {
			txtmassiva->Text += Convert::ToString(cleaned[i]) + " ";
		}
		long long int count = 0;
		alen->Text = Convert::ToString(massiv1->Length);
		Int64 max = 0, min = 100000;

		for (int i = 0; i < massiv1->Length; ++i) {
			if (massiv1[i] < min)
				min = massiv1[i];
			if (massiv1[i] > max)
				max = massiv1[i];
		}
		amin->Text = Convert::ToString(min);
		amax->Text = Convert::ToString(max);




		//нормализация b


		array<String^>^ strings2 = txtmassivb->Text->Split(' ');
		Converter<String^, Int64>^ converter2 =
			gcnew Converter<String^, Int64>(Convert::ToInt64);

		array<String^>^ cleaned2 = gcnew array<String^>(strings2->Length);

		int index2 = 0;
		for each(String^ s2 in strings2) {
			if (!String::IsNullOrEmpty(s2)) {
				cleaned2[index2++] = s2;
			}
		}
		Array::Resize(cleaned2, index2);

		array<Int64>^ massiv2;
		massiv2 = Array::ConvertAll(cleaned2, converter2);
		txtmassivb->Text = "";
		for (int i = 0; i < cleaned2->Length; ++i) {
			txtmassivb->Text += Convert::ToString(cleaned2[i]) + " ";
		}
		int count2 = 0;
		alen->Text = Convert::ToString(massiv2->Length);
		Int64 max2 = 0, min2 = 100000;

		for (int i = 0; i < massiv2->Length; ++i) {
			if (massiv2[i] < min2)
				min2 = massiv2[i];
			if (massiv2[i] > max2)
				max2 = massiv2[i];
		}
		bmin->Text = Convert::ToString(min2);
		bmax->Text = Convert::ToString(max2);
		if (massiv1->Length != massiv2->Length)
			MessageBox::Show("Длины массивов не совпадают", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else

		{
			for (int i = 0; i < massiv1->Length; ++i)
			{
				if (massiv1[i] <= 0) massiv2[i] *= 10;
				else massiv2[i] = 0;
				bchange->Text += massiv2[i].ToString() + " ";

			}




		}

	}


}

private: System::Void txtmassiva_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	bchange->Text = "";
}
private: System::Void txtmassivb_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	bchange->Text = "";

}
private: System::Void alen_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txtmassiva->Text = "";
	txtmassivb->Text = "";
	bchange->Text = "";
}
private: System::Void alen_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	
	
	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;


}
private: System::Void amin_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((amin->Text == "") && (amin->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else
		{
			return;
		}
	
	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;
	
}
private: System::Void amax_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((amax->Text == "") && (amax->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else
		{
			return;
		}

	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;

}
private: System::Void bmin_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((bmin->Text == "") && (bmin->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else
		{
			return;
		}

	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;

}
private: System::Void bmax_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((bmax->Text == "") && (bmax->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else
		{
			return;
		}

	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;
}
private: System::Void txtmassiva_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	
		if ((txtmassiva->Text == "") && (txtmassiva->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else
		{
			return;
		}
	
	if (e->KeyChar == 0x08)
	{
		e->Handled = true;
	}
	e->Handled = true;
}
private: System::Void nGen_Click(System::Object^  sender, System::EventArgs^  e) {


	txtmassivn->Text = "";
	//bchange->Text = "";

	//txtmassivb->Text = "";
	//label8->Text = "0";
	//txtmassiva->Text = "";
	//txtmassivb->Text = "";
	int a, b;
	if ((nlen->Text == "" || Convert::ToInt32(nlen->Text) == 0)) {
		MessageBox::Show("Введите размер массива", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (nlen->Text != "") {
			n = Convert::ToInt32(nlen->Text);//берем количество из txtNum
		}
		if (nmin->Text != "") {
			a = Convert::ToInt32(nmin->Text);//мин
		}
		if (nmax->Text != "") {
			b = Convert::ToInt32(nmax->Text);//макс
		}
		if (nmin->Text == "") a = 0;
		if (nmax->Text == "") b = 0;
		if (nlen->Text == "") n = 0;
		String^ tempn;
		Random^ randn = gcnew Random();
		for (int i = 0; i < n; i++) {
			tempn += Convert::ToString(randn->Next(a, b + 1)) + " ";//выводим рандомное число
		}										//в txtNum
		txtmassivn->Text = tempn->Remove(tempn->Length - 1);






	}
}




private: System::Void nlen_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txtmassivn->Text = "";
}
private: System::Void nlen_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}


	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;
}
private: System::Void nmin_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((nmin->Text == "") && (nmin->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else
		{
			return;
		}

	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;
}
private: System::Void nmax_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((nmax->Text == "") && (nmax->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else
		{
			return;
		}

	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
