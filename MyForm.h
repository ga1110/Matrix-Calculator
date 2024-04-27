#pragma once

namespace Fact {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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


	protected:

	protected:







	private: System::Windows::Forms::ErrorProvider^ errorProvider1;









	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::Button^ btnRemoveRow;


	private: System::Windows::Forms::Button^ btnAddRow;


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker3;
	private: System::Windows::Forms::Button^ ResultPlusButton;















	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::ToolTip^ toolTip1;

	private: System::Windows::Forms::Button^ btmAddColomn;

	private: System::Windows::Forms::Button^ btnRemoveColomn;

	private: System::Windows::Forms::DataGridView^ grdRoutes2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridView^ grdRoutes1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Button^ LoadButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ grdRoutes3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ResultMinusButton;
	private: System::Windows::Forms::Button^ LoadAnswerButton;
	private: System::Windows::Forms::Label^ LabelX;
	private: System::Windows::Forms::Button^ MultButton;


	private: System::Windows::Forms::TextBox^ textBoxX;
	private: System::Windows::Forms::Button^ ResultMultButton;
	private: System::Windows::Forms::DataGridView^ grdRoutesVector;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ MultVectorButton;
	private: System::Windows::Forms::Button^ VectorMultButton;
	private: System::Windows::Forms::Button^ VectorPlusButton;
	private: System::Windows::Forms::Button^ VectorMinusButton;
private: System::Windows::Forms::Button^ TransMButton;
private: System::Windows::Forms::Button^ RangButton;

private: System::Windows::Forms::Button^ OpredButton;
private: System::Windows::Forms::TextBox^ RangBox;

private: System::Windows::Forms::TextBox^ OpredBox;
private: System::Windows::Forms::Button^ SbrosButton;









	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->btnAddRow = (gcnew System::Windows::Forms::Button());
			this->btnRemoveRow = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker3 = (gcnew System::ComponentModel::BackgroundWorker());
			this->ResultPlusButton = (gcnew System::Windows::Forms::Button());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btmAddColomn = (gcnew System::Windows::Forms::Button());
			this->btnRemoveColomn = (gcnew System::Windows::Forms::Button());
			this->grdRoutes2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->grdRoutes1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LoadButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->grdRoutes3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ResultMinusButton = (gcnew System::Windows::Forms::Button());
			this->LoadAnswerButton = (gcnew System::Windows::Forms::Button());
			this->MultButton = (gcnew System::Windows::Forms::Button());
			this->LabelX = (gcnew System::Windows::Forms::Label());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->ResultMultButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->MultVectorButton = (gcnew System::Windows::Forms::Button());
			this->grdRoutesVector = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VectorMultButton = (gcnew System::Windows::Forms::Button());
			this->VectorPlusButton = (gcnew System::Windows::Forms::Button());
			this->VectorMinusButton = (gcnew System::Windows::Forms::Button());
			this->TransMButton = (gcnew System::Windows::Forms::Button());
			this->OpredButton = (gcnew System::Windows::Forms::Button());
			this->RangButton = (gcnew System::Windows::Forms::Button());
			this->OpredBox = (gcnew System::Windows::Forms::TextBox());
			this->RangBox = (gcnew System::Windows::Forms::TextBox());
			this->SbrosButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdRoutes2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdRoutes1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdRoutes3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdRoutesVector))->BeginInit();
			this->SuspendLayout();
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// btnAddRow
			// 
			this->btnAddRow->Location = System::Drawing::Point(709, 95);
			this->btnAddRow->Name = L"btnAddRow";
			this->btnAddRow->Size = System::Drawing::Size(124, 23);
			this->btnAddRow->TabIndex = 5;
			this->btnAddRow->Text = L"Добавить строку";
			this->btnAddRow->UseVisualStyleBackColor = true;
			this->btnAddRow->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnRemoveRow
			// 
			this->btnRemoveRow->Location = System::Drawing::Point(839, 95);
			this->btnRemoveRow->Name = L"btnRemoveRow";
			this->btnRemoveRow->Size = System::Drawing::Size(124, 23);
			this->btnRemoveRow->TabIndex = 6;
			this->btnRemoveRow->Text = L"Удалить строку";
			this->btnRemoveRow->UseVisualStyleBackColor = true;
			this->btnRemoveRow->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveRow_Click);
			// 
			// ResultPlusButton
			// 
			this->ResultPlusButton->Location = System::Drawing::Point(316, 111);
			this->ResultPlusButton->Name = L"ResultPlusButton";
			this->ResultPlusButton->Size = System::Drawing::Size(254, 23);
			this->ResultPlusButton->TabIndex = 14;
			this->ResultPlusButton->Text = L"Выполнить сложение матриц";
			this->ResultPlusButton->UseVisualStyleBackColor = true;
			this->ResultPlusButton->Click += gcnew System::EventHandler(this, &MyForm::ResultPlusButton_Click);
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// btmAddColomn
			// 
			this->btmAddColomn->Location = System::Drawing::Point(709, 124);
			this->btmAddColomn->Name = L"btmAddColomn";
			this->btmAddColomn->Size = System::Drawing::Size(124, 23);
			this->btmAddColomn->TabIndex = 15;
			this->btmAddColomn->Text = L"Добавить столбец";
			this->btmAddColomn->UseVisualStyleBackColor = true;
			this->btmAddColomn->Click += gcnew System::EventHandler(this, &MyForm::btmAddColomn_Click);
			// 
			// btnRemoveColomn
			// 
			this->btnRemoveColomn->Location = System::Drawing::Point(839, 124);
			this->btnRemoveColomn->Name = L"btnRemoveColomn";
			this->btnRemoveColomn->Size = System::Drawing::Size(124, 23);
			this->btnRemoveColomn->TabIndex = 16;
			this->btnRemoveColomn->Text = L"Удалить стобец";
			this->btnRemoveColomn->UseVisualStyleBackColor = true;
			this->btnRemoveColomn->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveColomn_Click);
			// 
			// grdRoutes2
			// 
			this->grdRoutes2->AllowUserToAddRows = false;
			this->grdRoutes2->AllowUserToDeleteRows = false;
			this->grdRoutes2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdRoutes2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->grdRoutes2->Location = System::Drawing::Point(12, 225);
			this->grdRoutes2->Name = L"grdRoutes2";
			this->grdRoutes2->Size = System::Drawing::Size(298, 132);
			this->grdRoutes2->TabIndex = 17;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// grdRoutes1
			// 
			this->grdRoutes1->AllowUserToAddRows = false;
			this->grdRoutes1->AllowUserToDeleteRows = false;
			this->grdRoutes1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdRoutes1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->grdRoutes1->Location = System::Drawing::Point(12, 56);
			this->grdRoutes1->Name = L"grdRoutes1";
			this->grdRoutes1->Size = System::Drawing::Size(298, 132);
			this->grdRoutes1->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 50;
			// 
			// LoadButton
			// 
			this->LoadButton->Location = System::Drawing::Point(316, 82);
			this->LoadButton->Name = L"LoadButton";
			this->LoadButton->Size = System::Drawing::Size(254, 23);
			this->LoadButton->TabIndex = 19;
			this->LoadButton->Text = L"Загрузить исходные";
			this->LoadButton->UseVisualStyleBackColor = true;
			this->LoadButton->Click += gcnew System::EventHandler(this, &MyForm::LoadButton_Click);
			// 
			// label1
			// 
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Исходная матрица/вектор";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Матрица для операций";
			// 
			// grdRoutes3
			// 
			this->grdRoutes3->AllowUserToAddRows = false;
			this->grdRoutes3->AllowUserToDeleteRows = false;
			this->grdRoutes3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdRoutes3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->grdRoutes3->Location = System::Drawing::Point(12, 409);
			this->grdRoutes3->Name = L"grdRoutes3";
			this->grdRoutes3->ReadOnly = true;
			this->grdRoutes3->Size = System::Drawing::Size(298, 132);
			this->grdRoutes3->TabIndex = 22;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 50;
			// 
			// label3
			// 
			this->label3->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 393);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Результирующая матрица";
			// 
			// ResultMinusButton
			// 
			this->ResultMinusButton->Location = System::Drawing::Point(316, 140);
			this->ResultMinusButton->Name = L"ResultMinusButton";
			this->ResultMinusButton->Size = System::Drawing::Size(254, 23);
			this->ResultMinusButton->TabIndex = 24;
			this->ResultMinusButton->Text = L"Выполнить вычетание матриц";
			this->ResultMinusButton->UseVisualStyleBackColor = true;
			this->ResultMinusButton->Click += gcnew System::EventHandler(this, &MyForm::ResultMinusButton_Click);
			// 
			// LoadAnswerButton
			// 
			this->LoadAnswerButton->Location = System::Drawing::Point(316, 56);
			this->LoadAnswerButton->Name = L"LoadAnswerButton";
			this->LoadAnswerButton->Size = System::Drawing::Size(254, 23);
			this->LoadAnswerButton->TabIndex = 25;
			this->LoadAnswerButton->Text = L"Загрузить из ответа";
			this->LoadAnswerButton->UseVisualStyleBackColor = true;
			this->LoadAnswerButton->Click += gcnew System::EventHandler(this, &MyForm::LoadAnswerButton_Click);
			// 
			// MultButton
			// 
			this->MultButton->Location = System::Drawing::Point(316, 169);
			this->MultButton->Name = L"MultButton";
			this->MultButton->Size = System::Drawing::Size(254, 23);
			this->MultButton->TabIndex = 26;
			this->MultButton->Text = L"Умножить на число";
			this->MultButton->UseVisualStyleBackColor = true;
			this->MultButton->Click += gcnew System::EventHandler(this, &MyForm::MultButton_Click);
			// 
			// LabelX
			// 
			this->LabelX->AutoSize = true;
			this->LabelX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LabelX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LabelX->Location = System::Drawing::Point(576, 174);
			this->LabelX->Name = L"LabelX";
			this->LabelX->Size = System::Drawing::Size(25, 15);
			this->LabelX->TabIndex = 27;
			this->LabelX->Text = L"X =";
			// 
			// textBoxX
			// 
			this->textBoxX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxX->Location = System::Drawing::Point(600, 173);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(119, 20);
			this->textBoxX->TabIndex = 28;
			// 
			// ResultMultButton
			// 
			this->ResultMultButton->Location = System::Drawing::Point(316, 198);
			this->ResultMultButton->Name = L"ResultMultButton";
			this->ResultMultButton->Size = System::Drawing::Size(254, 23);
			this->ResultMultButton->TabIndex = 29;
			this->ResultMultButton->Text = L"Выполнить умножение матриц";
			this->ResultMultButton->UseVisualStyleBackColor = true;
			this->ResultMultButton->Click += gcnew System::EventHandler(this, &MyForm::ResultMultButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Location = System::Drawing::Point(576, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 15);
			this->label4->TabIndex = 31;
			this->label4->Text = L"X =";
			// 
			// MultVectorButton
			// 
			this->MultVectorButton->Location = System::Drawing::Point(316, 227);
			this->MultVectorButton->Name = L"MultVectorButton";
			this->MultVectorButton->Size = System::Drawing::Size(254, 23);
			this->MultVectorButton->TabIndex = 30;
			this->MultVectorButton->Text = L"Умножить на вектор";
			this->MultVectorButton->UseVisualStyleBackColor = true;
			this->MultVectorButton->Click += gcnew System::EventHandler(this, &MyForm::MultVectorButton_Click);
			// 
			// grdRoutesVector
			// 
			this->grdRoutesVector->AllowUserToAddRows = false;
			this->grdRoutesVector->AllowUserToDeleteRows = false;
			this->grdRoutesVector->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdRoutesVector->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn4 });
			this->grdRoutesVector->Location = System::Drawing::Point(600, 232);
			this->grdRoutesVector->Name = L"grdRoutesVector";
			this->grdRoutesVector->Size = System::Drawing::Size(96, 132);
			this->grdRoutesVector->TabIndex = 32;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 50;
			// 
			// VectorMultButton
			// 
			this->VectorMultButton->Location = System::Drawing::Point(316, 256);
			this->VectorMultButton->Name = L"VectorMultButton";
			this->VectorMultButton->Size = System::Drawing::Size(254, 23);
			this->VectorMultButton->TabIndex = 33;
			this->VectorMultButton->Text = L"Скалярное произведение векторов";
			this->VectorMultButton->UseVisualStyleBackColor = true;
			this->VectorMultButton->Click += gcnew System::EventHandler(this, &MyForm::VectorMultButton_Click);
			// 
			// VectorPlusButton
			// 
			this->VectorPlusButton->Location = System::Drawing::Point(316, 285);
			this->VectorPlusButton->Name = L"VectorPlusButton";
			this->VectorPlusButton->Size = System::Drawing::Size(254, 23);
			this->VectorPlusButton->TabIndex = 34;
			this->VectorPlusButton->Text = L"Сложение векторов";
			this->VectorPlusButton->UseVisualStyleBackColor = true;
			this->VectorPlusButton->Click += gcnew System::EventHandler(this, &MyForm::VectorPlusButton_Click);
			// 
			// VectorMinusButton
			// 
			this->VectorMinusButton->Location = System::Drawing::Point(316, 314);
			this->VectorMinusButton->Name = L"VectorMinusButton";
			this->VectorMinusButton->Size = System::Drawing::Size(254, 23);
			this->VectorMinusButton->TabIndex = 35;
			this->VectorMinusButton->Text = L"Вычитание векторов";
			this->VectorMinusButton->UseVisualStyleBackColor = true;
			this->VectorMinusButton->Click += gcnew System::EventHandler(this, &MyForm::VectorMinusButton_Click);
			// 
			// TransMButton
			// 
			this->TransMButton->Location = System::Drawing::Point(316, 343);
			this->TransMButton->Name = L"TransMButton";
			this->TransMButton->Size = System::Drawing::Size(254, 23);
			this->TransMButton->TabIndex = 36;
			this->TransMButton->Text = L"Транспонированная матрица";
			this->TransMButton->UseVisualStyleBackColor = true;
			this->TransMButton->Click += gcnew System::EventHandler(this, &MyForm::TransMButton_Click);
			// 
			// OpredButton
			// 
			this->OpredButton->Location = System::Drawing::Point(316, 372);
			this->OpredButton->Name = L"OpredButton";
			this->OpredButton->Size = System::Drawing::Size(254, 23);
			this->OpredButton->TabIndex = 37;
			this->OpredButton->Text = L"Определить";
			this->OpredButton->UseVisualStyleBackColor = true;
			this->OpredButton->Click += gcnew System::EventHandler(this, &MyForm::OpredButton_Click);
			// 
			// RangButton
			// 
			this->RangButton->Location = System::Drawing::Point(316, 401);
			this->RangButton->Name = L"RangButton";
			this->RangButton->Size = System::Drawing::Size(254, 23);
			this->RangButton->TabIndex = 38;
			this->RangButton->Text = L"Ранг";
			this->RangButton->UseVisualStyleBackColor = true;
			this->RangButton->Click += gcnew System::EventHandler(this, &MyForm::RangButton_Click);
			// 
			// OpredBox
			// 
			this->OpredBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->OpredBox->Location = System::Drawing::Point(576, 372);
			this->OpredBox->Name = L"OpredBox";
			this->OpredBox->Size = System::Drawing::Size(119, 20);
			this->OpredBox->TabIndex = 39;
			// 
			// RangBox
			// 
			this->RangBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RangBox->Location = System::Drawing::Point(576, 401);
			this->RangBox->Name = L"RangBox";
			this->RangBox->Size = System::Drawing::Size(119, 20);
			this->RangBox->TabIndex = 40;
			// 
			// SbrosButton
			// 
			this->SbrosButton->Location = System::Drawing::Point(779, 153);
			this->SbrosButton->Name = L"SbrosButton";
			this->SbrosButton->Size = System::Drawing::Size(124, 23);
			this->SbrosButton->TabIndex = 41;
			this->SbrosButton->Text = L"Сброс";
			this->SbrosButton->UseVisualStyleBackColor = true;
			this->SbrosButton->Click += gcnew System::EventHandler(this, &MyForm::SbrosButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1183, 717);
			this->Controls->Add(this->SbrosButton);
			this->Controls->Add(this->RangBox);
			this->Controls->Add(this->OpredBox);
			this->Controls->Add(this->RangButton);
			this->Controls->Add(this->OpredButton);
			this->Controls->Add(this->TransMButton);
			this->Controls->Add(this->VectorMinusButton);
			this->Controls->Add(this->VectorPlusButton);
			this->Controls->Add(this->VectorMultButton);
			this->Controls->Add(this->grdRoutesVector);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->MultVectorButton);
			this->Controls->Add(this->ResultMultButton);
			this->Controls->Add(this->textBoxX);
			this->Controls->Add(this->LabelX);
			this->Controls->Add(this->MultButton);
			this->Controls->Add(this->LoadAnswerButton);
			this->Controls->Add(this->ResultMinusButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->grdRoutes3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LoadButton);
			this->Controls->Add(this->grdRoutes1);
			this->Controls->Add(this->grdRoutes2);
			this->Controls->Add(this->btnRemoveColomn);
			this->Controls->Add(this->btmAddColomn);
			this->Controls->Add(this->ResultPlusButton);
			this->Controls->Add(this->btnRemoveRow);
			this->Controls->Add(this->btnAddRow);
			this->Name = L"MyForm";
			this->Text = L"Таблица";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdRoutes2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdRoutes1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdRoutes3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdRoutesVector))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void AddRows() {
	this->grdRoutes1->Rows->Add(1);
	this->grdRoutes2->Rows->Add(1);
	this->grdRoutes3->Rows->Add(1);
	this->grdRoutesVector->Rows->Add(1);
}
private: System::Void AddColomn() {
	DataGridViewTextBoxColumn^ newColumn = gcnew DataGridViewTextBoxColumn();
	newColumn->HeaderText = ""; // Установка заголовка столбца
	newColumn->Name = "NewColumn"; // Установка имени столбца
	this->grdRoutes1->Columns->Add(newColumn);
	this->grdRoutes1->Columns[this->grdRoutes1->ColumnCount - 1]->Width = 50;
	DataGridViewTextBoxColumn^ newColumn2 = gcnew DataGridViewTextBoxColumn();
	newColumn2->HeaderText = ""; // Установка заголовка столбца
	newColumn2->Name = "NewColumn"; // Установка имени столбца
	this->grdRoutes2->Columns->Add(newColumn2);
	this->grdRoutes2->Columns[this->grdRoutes2->ColumnCount - 1]->Width = 50;
	DataGridViewTextBoxColumn^ newColumn3 = gcnew DataGridViewTextBoxColumn();
	newColumn3->HeaderText = ""; // Установка заголовка столбца
	newColumn3->Name = "NewColumn"; // Установка имени столбца
	this->grdRoutes3->Columns->Add(newColumn3);
	this->grdRoutes3->Columns[this->grdRoutes3->ColumnCount - 1]->Width = 50;
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	AddRows();
}
private: System::Void btmAddColomn_Click(System::Object^ sender, System::EventArgs^ e) {
	AddColomn();
}
private: System::Void btnRemoveRow_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->grdRoutes1->CurrentRow->IsNewRow) {
		int i = this->grdRoutes1->CurrentRow->Index;
		this->grdRoutes1->Rows->Remove(this->grdRoutes1->Rows[i]);
	}
	if (!this->grdRoutes2->CurrentRow->IsNewRow) {
		int i = this->grdRoutes2->CurrentRow->Index;
		this->grdRoutes2->Rows->Remove(this->grdRoutes2->Rows[i]);
	}
	if (!this->grdRoutes3->CurrentRow->IsNewRow) {
		int i = this->grdRoutes3->CurrentRow->Index;
		this->grdRoutes3->Rows->Remove(this->grdRoutes3->Rows[i]);
	}
	if (!this->grdRoutesVector->CurrentRow->IsNewRow) {
		int i = this->grdRoutesVector->CurrentRow->Index;
		this->grdRoutesVector->Rows->Remove(this->grdRoutesVector->Rows[i]);
	}
}

private: System::Void btnRemoveColomn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->grdRoutes1->ColumnCount > 0) {
		this->grdRoutes1->Columns->RemoveAt(this->grdRoutes1->ColumnCount - 1);
	}

	if (this->grdRoutes2->ColumnCount > 0) {
		this->grdRoutes2->Columns->RemoveAt(this->grdRoutes3->ColumnCount - 1);
	}
	if (this->grdRoutes3->ColumnCount > 0) {
		this->grdRoutes3->Columns->RemoveAt(this->grdRoutes3->ColumnCount - 1);
	}
}
private: System::Void CheckM(bool TwoGrids) {
	int cellValue1;
	for (int i = 0; i < grdRoutes1->RowCount; i++)
	{
		for (int j = 0; j < grdRoutes1->ColumnCount; j++)
		{
			if ((grdRoutes1->Rows[i]->Cells[j]->Value != nullptr && Int32::TryParse(grdRoutes1->Rows[i]->Cells[j]->Value->ToString(), cellValue1)))
			{
				continue;
			}
			else {
				MessageBox::Show("Некорректное значение в первой матрице в строке " + (i + 1) + ", столбце " + (j + 1),
					"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
			}
		}
	}
	if (TwoGrids == true) {
		for (int i = 0; i < grdRoutes2->RowCount; i++)
		{
			for (int j = 0; j < grdRoutes2->ColumnCount; j++)
			{
				if ((grdRoutes2->Rows[i]->Cells[j]->Value != nullptr && Int32::TryParse(grdRoutes2->Rows[i]->Cells[j]->Value->ToString(), cellValue1)))
				{
					continue;
				}
				else {
					MessageBox::Show("Некорректное значение во второй матрице в строке " + (i + 1) + ", столбце " + (j + 1),
						"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
				}
			}
		}
	}
}
private: System::Void ResultPlusButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(true);
	int cellValue1;
	int cellValue2;
	int cellValue3;
	for (int i = 0; i < grdRoutes1->RowCount; i++)
	{
		for (int j = 0; j < grdRoutes1->ColumnCount; j++)
		{
			Int32::TryParse(grdRoutes1->Rows[i]->Cells[j]->Value->ToString(), cellValue1);
			Int32::TryParse(grdRoutes2->Rows[i]->Cells[j]->Value->ToString(), cellValue2);
			cellValue3 = cellValue1 + cellValue2;
			grdRoutes3->Rows[i]->Cells[j]->Value = cellValue3;
		}
	}
	
}
private: System::Void ResultMinusButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(true);
	int cellValue1;
	int cellValue2;
	int cellValue3;
	for (int i = 0; i < grdRoutes1->RowCount; i++)
	{
		for (int j = 0; j < grdRoutes1->ColumnCount; j++)
		{
			Int32::TryParse(grdRoutes1->Rows[i]->Cells[j]->Value->ToString(), cellValue1);
			Int32::TryParse(grdRoutes2->Rows[i]->Cells[j]->Value->ToString(), cellValue2);
			cellValue3 = cellValue1 - cellValue2;
			grdRoutes3->Rows[i]->Cells[j]->Value = cellValue3;
		}
	}
}



private: System::Void LoadButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Устанавливаем количество строк и столбцов для таблицы
	while (!(grdRoutes1->RowCount >= 5)) {
		AddRows();
	}
	while (!(grdRoutes1->ColumnCount >= 5)) {
		AddColomn();
	}
	// Загружаем значения в таблицу построчно
	grdRoutes1->Rows[0]->SetValues("4", "5", "9", "2", "1");
	grdRoutes1->Rows[1]->SetValues("2", "4", "1", "3", "2");
	grdRoutes1->Rows[2]->SetValues("4", "3", "7", "2", "0");
	grdRoutes1->Rows[3]->SetValues("9", "5", "2", "7", "4");
	grdRoutes1->Rows[4]->SetValues("4", "6", "8", "1", "3");

	grdRoutes2->Rows[0]->SetValues("1", "2", "3", "4", "5");
	grdRoutes2->Rows[1]->SetValues("1", "2", "3", "4", "5");
	grdRoutes2->Rows[2]->SetValues("1", "2", "3", "4", "5");
	grdRoutes2->Rows[3]->SetValues("1", "2", "3", "4", "5");
	grdRoutes2->Rows[4]->SetValues("1", "2", "3", "4", "5");

	grdRoutes3->Rows[0]->SetValues("", "", "", "", "");
	grdRoutes3->Rows[1]->SetValues("", "", "", "", "");
	grdRoutes3->Rows[2]->SetValues("", "", "", "", "");
	grdRoutes3->Rows[3]->SetValues("", "", "", "", "");
	grdRoutes3->Rows[4]->SetValues("", "", "", "", "");

	grdRoutesVector->Rows[0]->SetValues("5");
	grdRoutesVector->Rows[1]->SetValues("4");
	grdRoutesVector->Rows[2]->SetValues("7");
	grdRoutesVector->Rows[3]->SetValues("3");
	grdRoutesVector->Rows[4]->SetValues("1");

	OpredBox->Text = "";

	RangBox->Text = "";

	int x = 7;
	textBoxX->Text = x.ToString();

	while (grdRoutes1->RowCount > 5) {
		grdRoutes1->Rows->RemoveAt(grdRoutes1->RowCount - 1);
		grdRoutes2->Rows->RemoveAt(grdRoutes2->RowCount - 1);
		grdRoutes3->Rows->RemoveAt(grdRoutes3->RowCount - 1);
	}

	// Удаление столбцов, если их количество больше 5
	while (grdRoutes1->ColumnCount > 5) {
		grdRoutes1->Columns->RemoveAt(grdRoutes1->ColumnCount - 1);
		grdRoutes2->Columns->RemoveAt(grdRoutes2->ColumnCount - 1);
		grdRoutes3->Columns->RemoveAt(grdRoutes3->ColumnCount - 1);
	}
	while (grdRoutes3->RowCount > 5) {
		grdRoutes3->Rows->RemoveAt(grdRoutes3->RowCount - 1);
	}
	while (grdRoutes3->ColumnCount > 5) {
		grdRoutes3->Columns->RemoveAt(grdRoutes3->ColumnCount - 1);
	}
}
private: System::Void LoadAnswerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < grdRoutes1->RowCount; i++)
	{
		for (int j = 0; j < grdRoutes1->ColumnCount; j++)
		{
			grdRoutes1->Rows[i]->Cells[j]->Value = grdRoutes3->Rows[i]->Cells[j]->Value;
		}
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void MultButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int x;
	if (!Int32::TryParse(textBoxX->Text, x)) {
		MessageBox::Show("Некоректное значение в текстовом блоке",
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
	}
	CheckM(false);
	int cellValue1;
	for (int i = 0; i < grdRoutes1->RowCount; i++)
	{
		for (int j = 0; j < grdRoutes1->ColumnCount; j++)
		{
			Int32::TryParse(grdRoutes1->Rows[i]->Cells[j]->Value->ToString(), cellValue1);
			grdRoutes3->Rows[i]->Cells[j]->Value = cellValue1 * x;
		}
	}
}
private: System::Void ResultMultButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(true);
	int cellValue1;
	int cellValue2;
	for (int i = 0; i < grdRoutes1->RowCount; i++) {
		for (int j = 0; j < grdRoutes1->RowCount; j++) {
			int sum = 0;
			for (int k = 0; k < grdRoutes1->ColumnCount; k++) {
				Int32::TryParse(grdRoutes1->Rows[i]->Cells[k]->Value->ToString(), cellValue1);
				Int32::TryParse(grdRoutes2->Rows[k]->Cells[j]->Value->ToString(), cellValue2);
				sum += cellValue1 * cellValue2;

			}
			grdRoutes3->Rows[i]->Cells[j]->Value = sum;
		}
	}
}
private: System::Void MultVectorButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(false);
	int cellValue1;
	int cellValue2;
	for (int i = 0; i < grdRoutesVector->RowCount; i++) {
		if ((grdRoutesVector->Rows[i]->Cells[0]->Value != nullptr && Int32::TryParse(grdRoutesVector->Rows[i]->Cells[0]->Value->ToString(), cellValue1)))
		{
			continue;
		}
		else {
			MessageBox::Show("Некорректное значение в векторе",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
		}
	}
	for (int i = 0; i < grdRoutes1->RowCount; i++) {
		for (int j = 0; j < grdRoutes1->ColumnCount; j++) {
			Int32::TryParse(grdRoutesVector->Rows[j]->Cells[0]->Value->ToString(), cellValue1);
			Int32::TryParse(grdRoutes1->Rows[i]->Cells[0]->Value->ToString(), cellValue2);
			grdRoutes3->Rows[i]->Cells[j]->Value = cellValue2 * cellValue1;
		}
	}
}
private: System::Void VectorMultButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(false);
	int cellValue1;
	int cellValue2;
	for (int i = 0; i < grdRoutesVector->RowCount; i++) {
		if ((grdRoutesVector->Rows[i]->Cells[0]->Value != nullptr && Int32::TryParse(grdRoutesVector->Rows[i]->Cells[0]->Value->ToString(), cellValue1)))
		{
			continue;
		}
		else {
			MessageBox::Show("Некорректное значение в векторе",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
		}
	}
	if (grdRoutes1->ColumnCount != 1) {
		MessageBox::Show("Не вектор",
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
	}
	int sum = 0;
	for (int i = 0; i < grdRoutes1->RowCount; i++) {
		Int32::TryParse(grdRoutesVector->Rows[i]->Cells[0]->Value->ToString(), cellValue1);
		Int32::TryParse(grdRoutes1->Rows[i]->Cells[0]->Value->ToString(), cellValue2);
		sum += cellValue1 * cellValue2;
	}
	grdRoutes3->Rows[0]->Cells[0]->Value = sum;
}
private: System::Void VectorPlusButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(false);
	int cellValue1;
	int cellValue2;
	for (int i = 0; i < grdRoutesVector->RowCount; i++) {
		if ((grdRoutesVector->Rows[i]->Cells[0]->Value != nullptr && Int32::TryParse(grdRoutesVector->Rows[i]->Cells[0]->Value->ToString(), cellValue1)))
		{
			continue;
		}
		else {
			MessageBox::Show("Некорректное значение в векторе",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
		}
	}
	if (grdRoutes1->ColumnCount != 1) {
		MessageBox::Show("Не вектор",
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
	}
	int sum;
	for (int i = 0; i < grdRoutes1->RowCount; i++) {
		Int32::TryParse(grdRoutesVector->Rows[i]->Cells[0]->Value->ToString(), cellValue1);
		Int32::TryParse(grdRoutes1->Rows[i]->Cells[0]->Value->ToString(), cellValue2);
		grdRoutes3->Rows[i]->Cells[0]->Value = cellValue1 + cellValue2;
	}
}
private: System::Void VectorMinusButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(false);
	int cellValue1;
	int cellValue2;
	for (int i = 0; i < grdRoutesVector->RowCount; i++) {
		if ((grdRoutesVector->Rows[i]->Cells[0]->Value != nullptr && Int32::TryParse(grdRoutesVector->Rows[i]->Cells[0]->Value->ToString(), cellValue1)))
		{
			continue;
		}
		else {
			MessageBox::Show("Некорректное значение в векторе",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
		}
	}
	if (grdRoutes1->ColumnCount != 1) {
		MessageBox::Show("Не вектор",
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; // Прекращаем выполнение кода, чтобы не продолжать после ошибки
	}
	int sum;
	for (int i = 0; i < grdRoutes1->RowCount; i++) {
		Int32::TryParse(grdRoutesVector->Rows[i]->Cells[0]->Value->ToString(), cellValue1);
		Int32::TryParse(grdRoutes1->Rows[i]->Cells[0]->Value->ToString(), cellValue2);
		grdRoutes3->Rows[i]->Cells[0]->Value = cellValue1 - cellValue2;
	}
}
private: System::Void TransMButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(false);
	int cellValue1;
	while (grdRoutes3->ColumnCount < grdRoutes3->RowCount) {
		DataGridViewTextBoxColumn^ newColumn3 = gcnew DataGridViewTextBoxColumn();
		newColumn3->HeaderText = ""; // Установка заголовка столбца
		newColumn3->Name = "NewColumn"; // Установка имени столбца
		this->grdRoutes3->Columns->Add(newColumn3);
		this->grdRoutes3->Columns[this->grdRoutes3->ColumnCount - 1]->Width = 50;
	}
	while (grdRoutes3->RowCount < grdRoutes3->ColumnCount) {
		this->grdRoutes3->Rows->Add(1);
	}
	for (int i = 0; i < grdRoutes1->RowCount; i++) {
		for (int j = 0; j < grdRoutes1->ColumnCount; j++) {
			Int32::TryParse(grdRoutes1->Rows[i]->Cells[j]->Value->ToString(), cellValue1);
			grdRoutes3->Rows[i]->Cells[j]->Value = cellValue1;
		}
	}
}
double CalculateMatrixDeterminant(DataGridView^ dgv, int size) {
	double det = 0;

	if (size == 1) {
		return Convert::ToDouble(dgv->Rows[0]->Cells[0]->Value);
	}
	else if (size == 2) {
		return (Convert::ToDouble(dgv->Rows[0]->Cells[0]->Value)) * (Convert::ToDouble(dgv->Rows[0]->Cells[1]->Value)) - (Convert::ToDouble(dgv->Rows[1]->Cells[0]->Value)) * (Convert::ToDouble(dgv->Rows[1]->Cells[1]->Value));
	}
	else {
		det = 0;
		for (int k = 0; k < size; k++) {
			double prod = 1;
			for (int i = 0; i < size; i++) {
				prod *= Convert::ToDouble(dgv->Rows[i]->Cells[(k + i) % size]->Value);
			}
			det += prod;
		}
		for (int k = 0; k < size; k++) {
			double prod = 1;
			for (int i = 0; i < size; i++) {
				prod *= Convert::ToDouble(dgv->Rows[i]->Cells[(k - i + size) % size]->Value);
			}
			det -= prod;
		}
		return det;
	}
}
private: System::Void OpredButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckM(false);
	int rowCount = grdRoutes1->RowCount;
	int colCount = grdRoutes1->ColumnCount;

	// Проверка на квадратность матрицы
	if (rowCount != colCount) {
		MessageBox::Show("Матрица должна быть квадратной для вычисления определителя.");
		return;
	}
	// Вычисление определителя матрицы
	double determinant = CalculateMatrixDeterminant(grdRoutes1, rowCount);
	OpredBox->Text = determinant.ToString();
}
private: System::Void RangButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int cols = grdRoutes1->ColumnCount;
	int rows = grdRoutes1->RowCount;

	array<array<int>^>^ tempMatrix = gcnew array<array<int>^>(rows);
    for (int i = 0; i < rows; i++) {
        tempMatrix[i] = gcnew array<int>(cols);
        for (int j = 0; j < cols; j++) {
            tempMatrix[i][j] = Convert::ToInt32(grdRoutes1->Rows[i]->Cells[j]->Value);
        }
    }

    int rank = cols;
    bool* rowSelected = new bool[rows];
    for (int i = 0; i < rows; i++) {
        rowSelected[i] = false;
    }

    for (int i = 0; i < cols; i++) {
        int j;
        for (j = 0; j < rows; j++) {
            if (!rowSelected[j] && tempMatrix[j][i] != 0) {
                break;
            }
        }

        if (j != rows) {
            rowSelected[j] = true;

            for (int k = i + 1; k < cols; k++) {
                for (int l = 0; l < rows; l++) {
                    if (!rowSelected[l] && tempMatrix[l][k] != 0) {
                        int ratio = tempMatrix[l][k] / tempMatrix[j][i];
                        for (int m = i; m < cols; m++) {
                            tempMatrix[l][m] -= ratio * tempMatrix[j][m];
                        }
                    }
                }
            }
        } else {
            rank--;
        }
    }

	RangBox->Text = rank.ToString();
}

private: System::Void SbrosButton_Click(System::Object^ sender, System::EventArgs^ e) {
	while (grdRoutes1->RowCount > 1) {
		grdRoutes1->Rows->RemoveAt(grdRoutes1->RowCount - 1);
		grdRoutes2->Rows->RemoveAt(grdRoutes2->RowCount - 1);
		grdRoutes3->Rows->RemoveAt(grdRoutes3->RowCount - 1);
		grdRoutesVector->Rows->RemoveAt(grdRoutes3->RowCount - 1);
	}
	while (grdRoutes1->ColumnCount > 1) {
		grdRoutes1->Columns->RemoveAt(grdRoutes1->ColumnCount - 1);
		grdRoutes2->Columns->RemoveAt(grdRoutes2->ColumnCount - 1);
		grdRoutes3->Columns->RemoveAt(grdRoutes3->ColumnCount - 1);
		grdRoutesVector->Columns->RemoveAt(grdRoutes3->ColumnCount - 1);
	}
	while (grdRoutes3->RowCount > 1) {
		grdRoutes3->Rows->RemoveAt(grdRoutes3->RowCount - 1);
	}
	while (grdRoutes3->ColumnCount > 1) {
		grdRoutes3->Columns->RemoveAt(grdRoutes3->ColumnCount - 1);
	}
	grdRoutes1->Rows[0]->SetValues("");

	grdRoutes2->Rows[0]->SetValues("");

	grdRoutes3->Rows[0]->SetValues("");

	grdRoutesVector->Rows[0]->SetValues("");

	OpredBox->Text = "";

	RangBox->Text = "";

	textBoxX->Text = "";
	
}
};
}
