// заголовний файл для реалізації інтерфейсу головного вікна

#include "calc.h"
#include "InvForm.h"

#pragma once

namespace IP54_Chyzh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace msclr::interop;
	using namespace System::Diagnostics;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			//TODO: добавьте код конструктора
		}

	protected:		
		~MyForm() {	// Освободить все используемые ресурсы.
			if (components) {
				delete components;
			}
		}

	protected:
		// головне меню
	private: System::Windows::Forms::MenuStrip^  menuStripGlav;
		// пункти головного меню (з підпунктами)
	private: System::Windows::Forms::ToolStripMenuItem^  mFile;
	private: System::Windows::Forms::ToolStripMenuItem^  mNewTask;
	private: System::Windows::Forms::ToolStripMenuItem^  mOpen;
	private: System::Windows::Forms::ToolStripMenuItem^  mRandom;
	private: System::Windows::Forms::ToolStripMenuItem^  mCalc;
	private: System::Windows::Forms::ToolStripMenuItem^  mHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  mAutor;
	private: System::Windows::Forms::ToolStripMenuItem^  mRegulations;
	private: System::Windows::Forms::ToolStripMenuItem^  mExit;
		 // кнопки дій
	private: System::Windows::Forms::Button^  bNewTask;
	private: System::Windows::Forms::Button^  bRandom;
	private: System::Windows::Forms::Button^  bOpen;
	private: System::Windows::Forms::Button^  bCalc;
		// шар (лівий), що об'єднує всі кнопки дій
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelLeft;
		// GroupBox з двом RadioButton-нами вибору методу обчислення оберненої матриці
	private: System::Windows::Forms::GroupBox^  groupBoxMetod;
	private: System::Windows::Forms::RadioButton^  radioShulc;
	private: System::Windows::Forms::RadioButton^  radioGaus;
		// шар, що об'єднує напис і NumericUpDown для введення розмірності матриці 
	private: System::Windows::Forms::Label^  labelSize;
	private: System::Windows::Forms::NumericUpDown^  matrixSize;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelMatrixSize;
	private: System::Windows::Forms::DataGridView^  matrix_table;
			 // DataGridView для введення значень елементів вхідної матриці

		 // шар (правий), що об'єднує шари GroupBox, tableLayoutPanelMatrixSize та DataGridView   
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelRigth;
		 // шар, що об'єднує лівий і правий шари
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutGlav;
	private: System::Windows::Forms::ToolStripMenuItem^  mSaveTask;



	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		// ------------ Обязательный метод для поддержки конструктора (не изменяйте содержимое данного метода при помощи редактора кода) ------------
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStripGlav = (gcnew System::Windows::Forms::MenuStrip());
			this->mFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mNewTask = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mOpen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mRandom = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mCalc = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mSaveTask = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mAutor = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mRegulations = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bRandom = (gcnew System::Windows::Forms::Button());
			this->bOpen = (gcnew System::Windows::Forms::Button());
			this->bNewTask = (gcnew System::Windows::Forms::Button());
			this->bCalc = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanelLeft = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBoxMetod = (gcnew System::Windows::Forms::GroupBox());
			this->radioShulc = (gcnew System::Windows::Forms::RadioButton());
			this->radioGaus = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanelMatrixSize = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelSize = (gcnew System::Windows::Forms::Label());
			this->matrixSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->tableLayoutGlav = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanelRigth = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->matrix_table = (gcnew System::Windows::Forms::DataGridView());
			this->menuStripGlav->SuspendLayout();
			this->tableLayoutPanelLeft->SuspendLayout();
			this->groupBoxMetod->SuspendLayout();
			this->tableLayoutPanelMatrixSize->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixSize))->BeginInit();
			this->tableLayoutGlav->SuspendLayout();
			this->tableLayoutPanelRigth->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix_table))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStripGlav
			// 
			this->menuStripGlav->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mFile, this->mHelp,
					this->mExit
			});
			this->menuStripGlav->Location = System::Drawing::Point(0, 0);
			this->menuStripGlav->Name = L"menuStripGlav";
			this->menuStripGlav->Size = System::Drawing::Size(804, 27);
			this->menuStripGlav->TabIndex = 3;
			this->menuStripGlav->Text = L"menuStrip1";
			// 
			// mFile
			// 
			this->mFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->mNewTask, this->mOpen,
					this->mRandom, this->mCalc, this->mSaveTask
			});
			this->mFile->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mFile->Name = L"mFile";
			this->mFile->Size = System::Drawing::Size(61, 23);
			this->mFile->Text = L"&Файл";
			// 
			// mNewTask
			// 
			this->mNewTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mNewTask.Image")));
			this->mNewTask->Name = L"mNewTask";
			this->mNewTask->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->mNewTask->Size = System::Drawing::Size(379, 24);
			this->mNewTask->Text = L"Нове завдання";
			this->mNewTask->Click += gcnew System::EventHandler(this, &MyForm::NewTask_Click);
			// 
			// mOpen
			// 
			this->mOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mOpen.Image")));
			this->mOpen->Name = L"mOpen";
			this->mOpen->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->mOpen->Size = System::Drawing::Size(379, 24);
			this->mOpen->Text = L"Відкрити файл з умовою";
			this->mOpen->Click += gcnew System::EventHandler(this, &MyForm::open_Click);
			// 
			// mRandom
			// 
			this->mRandom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mRandom.Image")));
			this->mRandom->Name = L"mRandom";
			this->mRandom->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->mRandom->Size = System::Drawing::Size(379, 24);
			this->mRandom->Text = L"Заповнити випадковими числами";
			this->mRandom->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
			// 
			// mCalc
			// 
			this->mCalc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mCalc.Image")));
			this->mCalc->Name = L"mCalc";
			this->mCalc->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
			this->mCalc->Size = System::Drawing::Size(379, 24);
			this->mCalc->Text = L"Обчислити обернену матрицю";
			this->mCalc->Click += gcnew System::EventHandler(this, &MyForm::Calc_Click);
			// 
			// mSaveTask
			// 
			this->mSaveTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mSaveTask.Image")));
			this->mSaveTask->Name = L"mSaveTask";
			this->mSaveTask->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->mSaveTask->Size = System::Drawing::Size(379, 24);
			this->mSaveTask->Text = L"Зберегти умову до ...";
			this->mSaveTask->Click += gcnew System::EventHandler(this, &MyForm::SaveTask_Click);
			// 
			// mHelp
			// 
			this->mHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->mAutor, this->mRegulations });
			this->mHelp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mHelp->Name = L"mHelp";
			this->mHelp->Size = System::Drawing::Size(78, 23);
			this->mHelp->Text = L"&Довідка";
			// 
			// mAutor
			// 
			this->mAutor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mAutor.Image")));
			this->mAutor->Name = L"mAutor";
			this->mAutor->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::I));
			this->mAutor->Size = System::Drawing::Size(272, 24);
			this->mAutor->Text = L"Про &автора";
			this->mAutor->Click += gcnew System::EventHandler(this, &MyForm::Autor_Click);
			// 
			// mRegulations
			// 
			this->mRegulations->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mRegulations.Image")));
			this->mRegulations->Name = L"mRegulations";
			this->mRegulations->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->mRegulations->Size = System::Drawing::Size(272, 24);
			this->mRegulations->Text = L"Правила &користування";
			this->mRegulations->Click += gcnew System::EventHandler(this, &MyForm::Regulations_Click);
			// 
			// mExit
			// 
			this->mExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mExit->Name = L"mExit";
			this->mExit->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->mExit->Size = System::Drawing::Size(61, 23);
			this->mExit->Text = L"Ви&хід";
			this->mExit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// bRandom
			// 
			this->bRandom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bRandom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bRandom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bRandom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bRandom.Image")));
			this->bRandom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bRandom->Location = System::Drawing::Point(3, 154);
			this->bRandom->MinimumSize = System::Drawing::Size(80, 70);
			this->bRandom->Name = L"bRandom";
			this->bRandom->Size = System::Drawing::Size(154, 70);
			this->bRandom->TabIndex = 1;
			this->bRandom->Text = L"Заповнити\r\nвипадковими\r\n&числами";
			this->bRandom->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bRandom->UseVisualStyleBackColor = true;
			this->bRandom->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
			// 
			// bOpen
			// 
			this->bOpen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bOpen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bOpen.Image")));
			this->bOpen->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bOpen->Location = System::Drawing::Point(3, 239);
			this->bOpen->MinimumSize = System::Drawing::Size(80, 70);
			this->bOpen->Name = L"bOpen";
			this->bOpen->Size = System::Drawing::Size(154, 70);
			this->bOpen->TabIndex = 2;
			this->bOpen->Text = L"&Відкрити\r\n файл \r\nз умовою";
			this->bOpen->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bOpen->UseVisualStyleBackColor = true;
			this->bOpen->Click += gcnew System::EventHandler(this, &MyForm::open_Click);
			// 
			// bNewTask
			// 
			this->bNewTask->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bNewTask->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bNewTask->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bNewTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bNewTask.Image")));
			this->bNewTask->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bNewTask->Location = System::Drawing::Point(3, 68);
			this->bNewTask->MinimumSize = System::Drawing::Size(80, 70);
			this->bNewTask->Name = L"bNewTask";
			this->bNewTask->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bNewTask->Size = System::Drawing::Size(154, 70);
			this->bNewTask->TabIndex = 0;
			this->bNewTask->Text = L"&Нове\r\nзавдання";
			this->bNewTask->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bNewTask->UseVisualStyleBackColor = true;
			this->bNewTask->Click += gcnew System::EventHandler(this, &MyForm::NewTask_Click);
			// 
			// bCalc
			// 
			this->bCalc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bCalc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bCalc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bCalc.Image")));
			this->bCalc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bCalc->Location = System::Drawing::Point(3, 412);
			this->bCalc->MinimumSize = System::Drawing::Size(80, 70);
			this->bCalc->Name = L"bCalc";
			this->bCalc->Size = System::Drawing::Size(154, 70);
			this->bCalc->TabIndex = 3;
			this->bCalc->Text = L"&Обчислити\r\nобернену\r\nматрицю";
			this->bCalc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bCalc->UseVisualStyleBackColor = true;
			this->bCalc->Click += gcnew System::EventHandler(this, &MyForm::Calc_Click);
			// 
			// tableLayoutPanelLeft
			// 
			this->tableLayoutPanelLeft->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->tableLayoutPanelLeft->AutoScroll = true;
			this->tableLayoutPanelLeft->AutoSize = true;
			this->tableLayoutPanelLeft->ColumnCount = 1;
			this->tableLayoutPanelLeft->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelLeft->Controls->Add(this->bRandom, 0, 3);
			this->tableLayoutPanelLeft->Controls->Add(this->bCalc, 0, 7);
			this->tableLayoutPanelLeft->Controls->Add(this->bOpen, 0, 5);
			this->tableLayoutPanelLeft->Controls->Add(this->bNewTask, 0, 1);
			this->tableLayoutPanelLeft->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanelLeft->MinimumSize = System::Drawing::Size(160, 380);
			this->tableLayoutPanelLeft->Name = L"tableLayoutPanelLeft";
			this->tableLayoutPanelLeft->RowCount = 8;
			this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				65)));
			this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				10)));
			this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				9)));
			this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelLeft->Size = System::Drawing::Size(160, 485);
			this->tableLayoutPanelLeft->TabIndex = 4;
			// 
			// groupBoxMetod
			// 
			this->groupBoxMetod->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxMetod->Controls->Add(this->radioShulc);
			this->groupBoxMetod->Controls->Add(this->radioGaus);
			this->groupBoxMetod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxMetod->Location = System::Drawing::Point(3, 3);
			this->groupBoxMetod->MinimumSize = System::Drawing::Size(0, 50);
			this->groupBoxMetod->Name = L"groupBoxMetod";
			this->groupBoxMetod->Size = System::Drawing::Size(613, 61);
			this->groupBoxMetod->TabIndex = 4;
			this->groupBoxMetod->TabStop = false;
			this->groupBoxMetod->Text = L"Вибір методу обчислення оберненої матриці";
			// 
			// radioShulc
			// 
			this->radioShulc->AutoSize = true;
			this->radioShulc->Location = System::Drawing::Point(368, 25);
			this->radioShulc->Name = L"radioShulc";
			this->radioShulc->Size = System::Drawing::Size(134, 23);
			this->radioShulc->TabIndex = 6;
			this->radioShulc->Text = L"метод &Шульца";
			this->radioShulc->UseVisualStyleBackColor = true;
			// 
			// radioGaus
			// 
			this->radioGaus->AutoSize = true;
			this->radioGaus->Checked = true;
			this->radioGaus->Location = System::Drawing::Point(66, 25);
			this->radioGaus->Name = L"radioGaus";
			this->radioGaus->Size = System::Drawing::Size(182, 23);
			this->radioGaus->TabIndex = 5;
			this->radioGaus->TabStop = true;
			this->radioGaus->Text = L"метод &Жордана-Гауса";
			this->radioGaus->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanelMatrixSize
			// 
			this->tableLayoutPanelMatrixSize->ColumnCount = 4;
			this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				199)));
			this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				116)));
			this->tableLayoutPanelMatrixSize->Controls->Add(this->labelSize, 0, 0);
			this->tableLayoutPanelMatrixSize->Controls->Add(this->matrixSize, 1, 0);
			this->tableLayoutPanelMatrixSize->Location = System::Drawing::Point(3, 70);
			this->tableLayoutPanelMatrixSize->Name = L"tableLayoutPanelMatrixSize";
			this->tableLayoutPanelMatrixSize->RowCount = 1;
			this->tableLayoutPanelMatrixSize->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelMatrixSize->Size = System::Drawing::Size(613, 37);
			this->tableLayoutPanelMatrixSize->TabIndex = 7;
			// 
			// labelSize
			// 
			this->labelSize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelSize->AutoSize = true;
			this->labelSize->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSize->Location = System::Drawing::Point(3, 9);
			this->labelSize->Name = L"labelSize";
			this->labelSize->Size = System::Drawing::Size(211, 19);
			this->labelSize->TabIndex = 1;
			this->labelSize->Text = L"Розмірність вхідної матриці:";
			// 
			// matrixSize
			// 
			this->matrixSize->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->matrixSize->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->matrixSize->Location = System::Drawing::Point(220, 5);
			this->matrixSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32000, 0, 0, 0 });
			this->matrixSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->matrixSize->Name = L"matrixSize";
			this->matrixSize->Size = System::Drawing::Size(75, 26);
			this->matrixSize->TabIndex = 7;
			this->matrixSize->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->matrixSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->matrixSize->ValueChanged += gcnew System::EventHandler(this, &MyForm::matrixSizeValueChanged);
			this->matrixSize->Leave += gcnew System::EventHandler(this, &MyForm::matrixSizeValueChanged);
			// 
			// tableLayoutGlav
			// 
			this->tableLayoutGlav->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutGlav->AutoSize = true;
			this->tableLayoutGlav->ColumnCount = 3;
			this->tableLayoutGlav->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutGlav->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutGlav->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutGlav->Controls->Add(this->tableLayoutPanelLeft, 0, 0);
			this->tableLayoutGlav->Controls->Add(this->tableLayoutPanelRigth, 1, 0);
			this->tableLayoutGlav->Location = System::Drawing::Point(0, 27);
			this->tableLayoutGlav->MinimumSize = System::Drawing::Size(700, 480);
			this->tableLayoutGlav->Name = L"tableLayoutGlav";
			this->tableLayoutGlav->RowCount = 2;
			this->tableLayoutGlav->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutGlav->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutGlav->Size = System::Drawing::Size(810, 511);
			this->tableLayoutGlav->TabIndex = 6;
			// 
			// tableLayoutPanelRigth
			// 
			this->tableLayoutPanelRigth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanelRigth->AutoSize = true;
			this->tableLayoutPanelRigth->ColumnCount = 1;
			this->tableLayoutPanelRigth->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanelRigth->Controls->Add(this->tableLayoutPanelMatrixSize, 0, 1);
			this->tableLayoutPanelRigth->Controls->Add(this->groupBoxMetod, 0, 0);
			this->tableLayoutPanelRigth->Controls->Add(this->matrix_table, 0, 2);
			this->tableLayoutPanelRigth->Location = System::Drawing::Point(169, 3);
			this->tableLayoutPanelRigth->Name = L"tableLayoutPanelRigth";
			this->tableLayoutPanelRigth->RowCount = 3;
			this->tableLayoutPanelRigth->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelRigth->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelRigth->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelRigth->Size = System::Drawing::Size(618, 485);
			this->tableLayoutPanelRigth->TabIndex = 0;
			// 
			// matrix_table
			// 
			this->matrix_table->AllowUserToAddRows = false;
			this->matrix_table->AllowUserToDeleteRows = false;
			this->matrix_table->AllowUserToResizeColumns = false;
			this->matrix_table->AllowUserToResizeRows = false;
			this->matrix_table->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->matrix_table->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->matrix_table->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->matrix_table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->matrix_table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->matrix_table->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->matrix_table->DefaultCellStyle = dataGridViewCellStyle2;
			this->matrix_table->Location = System::Drawing::Point(3, 113);
			this->matrix_table->Name = L"matrix_table";
			this->matrix_table->RowHeadersVisible = false;
			this->matrix_table->RowHeadersWidth = 10;
			this->matrix_table->Size = System::Drawing::Size(613, 369);
			this->matrix_table->TabIndex = 8;
			this->matrix_table->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::matrix_table_CellContentClick);
			this->matrix_table->CellStateChanged += gcnew System::Windows::Forms::DataGridViewCellStateChangedEventHandler(this, &MyForm::matrix_table_CellStateChanged);
			this->matrix_table->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::matrix_table_CellValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 532);
			this->Controls->Add(this->tableLayoutGlav);
			this->Controls->Add(this->menuStripGlav);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStripGlav;
			this->MinimumSize = System::Drawing::Size(820, 570);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обернення матриці";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->menuStripGlav->ResumeLayout(false);
			this->menuStripGlav->PerformLayout();
			this->tableLayoutPanelLeft->ResumeLayout(false);
			this->groupBoxMetod->ResumeLayout(false);
			this->groupBoxMetod->PerformLayout();
			this->tableLayoutPanelMatrixSize->ResumeLayout(false);
			this->tableLayoutPanelMatrixSize->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixSize))->EndInit();
			this->tableLayoutGlav->ResumeLayout(false);
			this->tableLayoutGlav->PerformLayout();
			this->tableLayoutPanelRigth->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/*		
		Элементы управления для использования в формах Windows Forms
		https://msdn.microsoft.com/ru-ru/library/3xdhey7w%28v=vs.110%29.aspx

		MessageBox::
		https://msdn.microsoft.com/ru-ru/library/ydf69t86%28v=vs.110%29.aspx

		OpenFileDialog		
		https://msdn.microsoft.com/ru-ru/library/61097ykx%28v=vs.110%29.aspx
		http://victor192007.narod.ru/files/cs13.html
		
		SaveFileDialog
		https://msdn.microsoft.com/ru-ru/library/w6sh4y16%28v=vs.110%29.aspx
		http://metanit.com/sharp/windowsforms/4.20.php
	
		Windows Forms (форум)
		http://www.programmersforum.ru/archive/index.php/f-104.html
		
		Ответы на 7 самых частых вопроса по WinForms
		http://www.cyberforum.ru/windows-forms/thread110436.html
*/
	// ================== додаткові сервісні функції ===============================
			// ---------- підпрограма перевірки на коректність вмісту Grid-a і запису його елементів в матрицю ----------------
	private: double** GridToMatrix(int N) {
				 bool err = false;				// прапорець помилки (помилка відсутня)
				 double **matrix = new double*[N];		// створити нову матрицю
				 for (int i = 0; i < N && !err; i++) {	// цикл по рядках матриці
					 matrix[i] = new double[N];			// створення нового рядка матриці 
					 for (int j = 0; j < N && !err; j++) {
						 err = !Double::TryParse(Convert::ToString(matrix_table->Rows[i]->Cells[j]->Value), matrix[i][j]);	// конвертувати елемент в double і перевірити правильність  
						 if (err) { // якщо при конвертації виникла помилка, повідомити про це і припинити конвертацію (вийти із циклу)
							 System::String ^st1 = gcnew System::String("Елемент [");	// сформувати текст повідомлення про помилку
							 st1 = st1->Concat(st1->Concat(st1->Concat(st1->Concat(st1, Convert::ToString(i)), "]["), Convert::ToString(j)), "] містить некоректне значення");
							 MessageBox::Show(st1, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 }
					 }
				 }
				 return (err) ? NULL : matrix;	// повернути: NULL, якщо виникла помилка, інакше, адресу матриці А 
	}
			 // ---------- підпрограма запису матриці розмірності N до Grіd-a ----------------
	private: System::Void MatrixToGrid(double** matrix, int N) {
				 matrixSize->Value = N;			// записати розмірність в matrixSize 
				 for (int i = 0; i < N; i++)	// цикл по всіх елементах матриці
				 for (int j = 0; j < N; j++)
					 matrix_table->Rows[i]->Cells[j]->Value = matrix[i][j];  // записати в [i][j]-ий елемент Grіd-a значення з вхідної матриці
				 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
	}
			 // ---------- підпрограма запису матриці розмірності N до вказаного файлу file ----------------
	private: System::Void SaveTo(double ** matrix, String ^file, int N) {
				 System::String ^st1 = gcnew System::String("");		// рядок для запису чилел 
				 System::IO::StreamWriter ^streamWrite = gcnew System::IO::StreamWriter(file, false);	// відкрити потік (файл) для запису (якщо файл вже існує - перезаписати його)
				 streamWrite->WriteLine(Convert::ToString(N));	// записати у файл розмірність матриці А
				 for (int i = 0; i < N; i++) {		// цикл по N-рядках матриці А  
					 st1 = "";	// очистити рядок
					 for (int j = 0; j < N; j++) {	// cформувати і записати всі рядки матриці
						 st1 = st1->Concat(st1, Convert::ToString(matrix[i][j])); // добавити до рядка наступний елемент матриці
						 st1 += (j < N - 1) ? " " : "";	// добавити проміжок після кожного значеннями (крім останнього)
					 }
					 streamWrite->WriteLine(st1->Replace(",", "."));		// записати сформований рядок у файл (потік)
				 }
				 streamWrite->Close();	// закрити потік (файл)
				 MessageBox::Show("Запис умови до файлу виконано вдало.", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
// ========================================================================================
			 // ---------- підпрограма події початкового завантаження головної форми ----------------
			 // (початковий стан головної форми, підготовка об'єктів до нового завдання) 
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 NewTask_Click(sender, e);
	}
			 // ---------- підпрограма події зміни значення в полі лічильника matrixSize ----------------
	private: System::Void matrixSizeValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 matrix_table->ColumnCount = Convert::ToInt32(matrixSize->Value);	// встановити к-сть колонок в Grid-і таблиці (вхідної матриці) згідно із значенням в полі matrixSize
				 matrix_table->RowCount = Convert::ToInt32(matrixSize->Value);		// ----//---- рядків в Grid-і ----//----
				 matrix_table->AutoResizeColumns();		// вирівняти клітини Grid-a
	}
			 // ---------- підпрограма перехоплення натиснутої клаівші і заміни '.' на ',' ----------------
	private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (e->KeyChar == '.')
					 e->KeyChar = ','; 
	}
			 // ---------- підпрограма події зміни значення в клітині Grid-a ----------------
	private: System::Void matrix_table_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 matrix_table->Tag = 1;		// якщо значення в клітині змінилось, загнати в Tag 1
	}
			 // ---------- підпрограма події переходу до іншої клітини Grid-у ----------------
	private: System::Void matrix_table_CellStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellStateChangedEventArgs^  e) {
				 if (matrix_table->Tag) {	// якщо Tag !=0 (значення в клітині було змінено)
					 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
					 matrix_table->Tag = Convert::ToInt32(0);	// загнати в Tag 0 (змін не було)
				 }
}
			 // ---------- підпрограма події вибору пункту меню "Про автора" (виведення повідомлення) ----------------
	private: System::Void Autor_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("\t     Курсова робота на тему\n\"Обернення матриці (методами Жардана-Гауса та Шульца)\"\n\tВиконала студентка групи ІП-54\n\t\tфакультету - ФІОТ\n\t\t    НТУУ\"КПІ\"\n\t         Чиж Юлія Михайлівна\n\n\te-mail: yulia_yulia01@ukr.net\n      телефон: +3(098) 322 00 48, +3(095) 043 75 77" , "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
			 // ---------- підпрограма події вибору пункту меню "Правила користування"----------------
	private: System::Void Regulations_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("\tДля обчислення оберненої матриці необхідно заповнити числами таблицю матриці. Перед уведенням числа з клавіатури або заповнення матриці випадковими числами потрібно встановити розмірність вхідної матриці. Заповнення випадковими числами виконується з проміжку[0…100]. Задля зручності по коміркам таблиці можна рухатися за допомогою клавіш Tab або Enter. Для заповнення матриці числами, збереженими у файлі, потрібно вибрати пункт «Відкрити файл з умовою» з меню «Файл» або натиснути відповідну кнопку в лівій панелі, знайти і вибрати потрібний файл.\n"
					 "\tДля збереження значень елементів вхідної матриці у файлі потрібно вибрати пункт «Зберегти умову до…» з меню «Файл», який відкриє діалогове вікно вибору користувачем файлу(за замовчуванням – файл з розширенням *.tsk). Якщо вказаний файл вже існує в обраній папці, його буде перезаписано.\n"
					 "\tДля обчислення оберненої матриці виконавець повинен вибрати метод обчислення та обрати пункт «Обчислити обернену матрицю» з меню «Файл» або натиснути відповідну кнопку в лівій панелі.Якщо всі елементи матриці заповнені і є коректними числами, то на екран буде виведено додаткове вікно із результатом обчислення.Для збереження результатів обчислення потрібно натиснути кнопку «Зберегти обернену матрицю у файлі», яка відкриє діалогове вікно вибору користувачем файлу(за замовчуванням – файл з розширенням *.res). Якщо вказаний файл вже існує в обраній папці, його буде перезаписано.\n"
					 "\tПісля натиску кнопки «Вихід» у вікні з результатом обчислення оберненої матриці виконається закриття поточного модального вікна і передача управління головному вінку програми.\n"
					 "\tДля обчислення оберненої матриці за іншою умовою доречно обрати пункт «Нове завдання» з меню «Файл» або натиснути відповідну кнопку в лівій панелі. В результаті, розмірність вхідної матриці буде змінено на  2х2 та очищено її від даних.\n\n"
					 "У програмі наявні наступні «гарячі клавіші»:\n - Alt + “Ф” – меню «Файл»;\n - Alt + “Д” – меню «Довідка»;\n - Ctrl + N або Alt + “Н”(кирилиця) – нове завдання;\n - Ctrl + O або Alt + “В”(кирилиця) – відкрити файл з умовою;\n - Ctrl + R або Alt + “З” – заповнити випадковими числами;\n - Ctrl + M або Alt + “О”(кирилиця) – обчислити обернену матрицю;\n - Ctrl + S – зберегти умову до…;\n - Alt + “З” – зберегти обернену матрицю у файлі; \n - Ctrl + I – про автора;\n - F1 – правила користування;\n - Ctrl + Х або Alt + “Х”(кирилиця) – закрити поточне вікно(вихід)",
					 "Правила користування програмою", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
			 // ---------- підпрограма події вибору пункту меню або кнопки "Нове завдання" (підготовка об'єктів до нового завдання) ------
	private: System::Void NewTask_Click(System::Object^  sender, System::EventArgs^  NewTask_Click) {
				 matrix_table->ColumnCount = 0;	// встановити розмірність Grid-а таблиці (вхідної матриці)
				 matrix_table->RowCount = 0;		// к-сть рядків Grid-a	
				 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
				 if (Convert::ToInt32(matrixSize->Value) == 2)	// якщо в полі лічильика розмірності Grid-a записано 2, то
					 matrixSizeValueChanged(sender, NewTask_Click);		// примусово оновити стан Grid-a для нового значення розмірності
				 else matrixSize->Value = 2;		// інакше встановити розмірність Grid-a "2"
				 ActiveControl = matrixSize;
	}
			 // ---------- підпрограма події вибору пункту меню або кнопки "Заповнити випадковими числами" --------------
	private: System::Void random_Click(System::Object^  sender, System::EventArgs^  e) {
				 int N = Convert::ToInt32(matrixSize->Value); // отримати розмірність Grid-a за значенням лічильника matrixSize
				 Random^ randObj = gcnew Random;	// ініциалізація генератора випадкових чисел
				 for (int i = 0; i < N; i++) {		// цикл по всіх елементах Grid-а
					 for (int j = 0; j < N; j++)
						 matrix_table->Rows[i]->Cells[j]->Value = randObj->Next(0, 100);     // щоб були десяткові дроби: + randObj->Next(0, 100)/100.0
				 }
				 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
	}
			 // ---------- діалог вибору файлу із завданням і зчитування з нього інформації ----------------
	private: System::Void open_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog ^openFileDialog = gcnew System::Windows::Forms::OpenFileDialog();
				 openFileDialog->Title = "Відкрити файл із вхідною матрицею";	// встановити заголовок вікна
				 openFileDialog->InitialDirectory = Path::Combine(Application::StartupPath, "\Task");	// встановити початкову папку для читання (папка Task повинна бути в папці із exe-файлом)
				 openFileDialog->Filter = "Файли із завданням|*.tsk|Всі файли (*.*)|*.*";	// встановити два фільтри
				 openFileDialog->FilterIndex = 1;	// встановити перший фільтр основним (поточним)
				 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // якщо в діалозі читання вибрано файл і натиснуто Ок
					 System::IO::StreamReader ^ sreamRead = gcnew System::IO::StreamReader(openFileDialog->FileName); // відкрити потік читання з файлу
					 System::String ^str = gcnew System::String(sreamRead->ReadLine());	// прочитати перший рядок (там записано одне число - розрядність матриці (Grid-a))
					 int N = Convert::ToInt32(str); // конвертувати цей рядок в число
					 if (N >= 2) {	// якщо прочитана розмірність >= 2
						 str = sreamRead->ReadToEnd();	// прочитати з відкритого потоку (файлу) решту записаної інформації (до кінця файлу)
						 marshal_context ^context = gcnew marshal_context(); // змиінна, через яку виконаємо конвертацію рядка в char*
						 const char *strChar = context->marshal_as<const char*>(str); // конвертувати рядок в масив char, отримати покажчик на нього
						 double **A = inpMatrixInFile(N, strChar);	// створити і заповнити динамічну матрицю значеннями з сhar* (через читання з потоку)
						 if (A) // якщо отримана адреса not NULL, то
							 MatrixToGrid(A, N);	// занести значення елементів масиву в Grid
						 else N = 0;	// інакше, обнулити розмірність 
					 }
					 sreamRead->Close();		// закрити потік читання
					 if (!N) // якщо при читанні з файлу виникла помилка
						 MessageBox::Show("Некоректні вхідні дані", "Помилка читання файлу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
	}
			 // ---------- діалог вибору файла для запису в нього умови завдання ----------------
	private: System::Void SaveTask_Click(System::Object^  sender, System::EventArgs^  e) {
				 int N = Convert::ToInt32(matrixSize->Value); // конвертувати розмірність Grid-a в число
				 if (GridToMatrix(N)) { // якщо всі елементи Grid-a коректні double-числа, то записати їх у файл
					 SaveFileDialog ^saveFileDialogTo = gcnew System::Windows::Forms::SaveFileDialog();
					 saveFileDialogTo->Title = "Збереження умови до файлу";
					 saveFileDialogTo->InitialDirectory = Path::Combine(Application::StartupPath, "\Task");	// встановити початкову папку для читання (папка Task повинна бути в папці із exe-файлом)
					 saveFileDialogTo->Filter = "Файли із завдання|*.tsk|Файли із рішенням|*.res|Всі файли|*.*"; // встановити три фільтри
					 saveFileDialogTo->FilterIndex = 1;	// встановити основним (поточним) перший фільтр 
					 if (saveFileDialogTo->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialogTo->FileName->Length > 0) {// відкрити діалог запису до файлу
						 double **A = GridToMatrix(N);	// конвертувати Grіd в матрицю double 
						 if (A) // якщо конвертацію проведено успішно (A!=NULL)
							 SaveTo(A, saveFileDialogTo->FileName, Convert::ToInt32(N));		// виконати запис інформації з матриці до файлу
					 }
					 else
						 MessageBox::Show("Умову до файлу НЕ ЗБЕРЕЖЕНО!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
	}
			 // ---------- підпрограма обчислення оберненої матриці ----------------
	private: System::Void Calc_Click(System::Object^  sender, System::EventArgs^  e) {
				 Stopwatch ^ timePerParse;
				 int N = Convert::ToInt32(matrixSize->Value); // конвертувати розмірність Grid-a в число
				 /*bool err = !Double::TryParse(Convert::ToString(textBoxEps->Text), EPS);
				 EPS = (err) ? 1e-5 : EPS;*/
				 double **A = GridToMatrix(N);	// конвертувати Grіd в матрицю double
				 if (A) {	// якщо конвертацію проведено успішно (A!=NULL)
					 if (detMatrix(A, N) == 0)	// якщо визначник матриці == 0, то матриці, оберненої до даної, не існує
						 MessageBox::Show("Визначник матриці дорівнює нулю.\nМатриці, оберненої до даної, не існує ", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 else {		// інакше, обчислити обернену матрицю за вибраним методом
						 timePerParse = Stopwatch::StartNew();		// створити об'єкт для виміру витраченого на обчислення часу і запустити таймер
						 double **Inv = (radioShulc->Checked) ? Shulca(A, N) : JordanaGausa(A, N);	// якщо для обчислення вибраний метод Шульца, обчислити оберену матрицю за цим методом, інакше обчислити оберену матрицю за методом Жордана-Гауса
						 timePerParse->Stop();		// зупинити таймер
						 calc_time = timePerParse->ElapsedMilliseconds;		// визначити час обчислення (значення мілісекунд таймера)
						 //Inv = RoundMatrix(Inv, N, 100000);
						 InvForm_Show(Inv, N, (radioShulc->Checked) ? "Обернену матрицю методом Шульца\n\tуспішно створено." : "Обернену матрицю методом Жордана-Гауса\n\tуспішно створено." );	// створити і вивести вікно з оберненою матрицею
					 }
				 }
	}
			 // -------------- підпрограма ініціалізації і виведення окремого вікна із значеннями елементів оберненої матриці -----------------------------
	private: System::Void InvForm_Show(double **A, int N, String ^str) {
				 InvForm ^invForm = gcnew(InvForm);		// створити форму для виводу оберненої матриці
				 invForm->matrix_InvTable->Text = str;	// записати в Text Grіd-a тест повідомлення
				 invForm->matrix_InvTable->Tag = N;		// записати в Tag Grіd-a розмірність матриці
				 invForm->matrix_InvTable->ColumnCount = Convert::ToInt32(N);	// встановити к-сть колонок в Grid-і (таблиці оберненої матриці) згідно із розмірністю вхідної матриці
				 invForm->matrix_InvTable->RowCount = Convert::ToInt32(N);		// встановити к-сть колонок в Grid-і (таблиці оберненої матриці) згідно із розмірністю вхідної матриці
				 for (int i = 0; i < N; i++) {	// цикл по всіх елементах матриці
					 for (int j = 0; j < N; j++)
						 invForm->matrix_InvTable->Rows[i]->Cells[j]->Value = A[i][j];  // записати в [i][j]-ий елемент Grіd-a значення з оберненої матриці
				 }
				 //invForm->Show();		// вивод вікна invForm, як немодальної форми 
				 invForm->ShowDialog();	// вивод вікна invForm, як модальної форми 
	}
			 // ---------- підпрограма події вибору пункту меню "Вихід" (закриття головної форми) ----------------
	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();	// закрити головну форму (всю програму)
	}

private: System::Void matrix_table_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}