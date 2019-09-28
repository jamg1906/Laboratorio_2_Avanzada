#pragma once
#include "Carrera.h"

namespace Laboratorio2JavierMorales1210219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Empezar_btn;
	protected:
	private: System::Windows::Forms::RichTextBox^ texto_carrera;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Empezar_btn = (gcnew System::Windows::Forms::Button());
			this->texto_carrera = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Empezar_btn
			// 
			this->Empezar_btn->BackColor = System::Drawing::Color::Aqua;
			this->Empezar_btn->Location = System::Drawing::Point(68, 40);
			this->Empezar_btn->Name = L"Empezar_btn";
			this->Empezar_btn->Size = System::Drawing::Size(162, 46);
			this->Empezar_btn->TabIndex = 0;
			this->Empezar_btn->Text = L"INICIAR CARRERA";
			this->Empezar_btn->UseVisualStyleBackColor = false;
			this->Empezar_btn->Click += gcnew System::EventHandler(this, &MyForm::Empezar_btn_Click);
			// 
			// texto_carrera
			// 
			this->texto_carrera->BackColor = System::Drawing::Color::Lime;
			this->texto_carrera->Font = (gcnew System::Drawing::Font(L"HP Simplified", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto_carrera->Location = System::Drawing::Point(68, 101);
			this->texto_carrera->Name = L"texto_carrera";
			this->texto_carrera->Size = System::Drawing::Size(874, 283);
			this->texto_carrera->TabIndex = 1;
			this->texto_carrera->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(262, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"H =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(426, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"T = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(299, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Liebre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(466, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Tortuga";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(68, 399);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Javier Andrés Morales, 1210219.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(615, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 18);
			this->label6->TabIndex = 7;
			this->label6->Text = L"¡OUCH! = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(685, 56);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(257, 18);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Liebre y tortuga en la misma posición.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->ClientSize = System::Drawing::Size(1017, 436);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->texto_carrera);
			this->Controls->Add(this->Empezar_btn);
			this->Name = L"MyForm";
			this->Text = L"Liebre vs. Tortuga";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Empezar_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		Carrera* C = new Carrera();
		C->Reiniciar_Vector();
		C->Mostrar_Vector();
		System::String^ res = "";
		do
		{
			C->Movimientos();
			res = res + "\n" + C->Mostrar_Vector();
		} while (C->Fin() == false);
		texto_carrera->Text = res;
		//System::Windows::Forms::MessageBox::Show(res);
	}
	};
}
