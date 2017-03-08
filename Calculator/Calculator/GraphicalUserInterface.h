#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GraphicalUserInterface
	/// </summary>
	public ref class GraphicalUserInterface : public System::Windows::Forms::Form
	{
	public:
		GraphicalUserInterface(void)
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
		~GraphicalUserInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtHelloWorld;
	protected:

	private: System::Windows::Forms::Button^  btnHelloWorld;


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
			this->txtHelloWorld = (gcnew System::Windows::Forms::TextBox());
			this->btnHelloWorld = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtHelloWorld
			// 
			this->txtHelloWorld->Location = System::Drawing::Point(56, 12);
			this->txtHelloWorld->Name = L"txtHelloWorld";
			this->txtHelloWorld->Size = System::Drawing::Size(163, 20);
			this->txtHelloWorld->TabIndex = 0;
			this->txtHelloWorld->TextChanged += gcnew System::EventHandler(this, &GraphicalUserInterface::textBox1_TextChanged);
			// 
			// btnHelloWorld
			// 
			this->btnHelloWorld->Location = System::Drawing::Point(93, 123);
			this->btnHelloWorld->Name = L"btnHelloWorld";
			this->btnHelloWorld->Size = System::Drawing::Size(75, 23);
			this->btnHelloWorld->TabIndex = 1;
			this->btnHelloWorld->Text = L"Hello World";
			this->btnHelloWorld->UseVisualStyleBackColor = true;
			this->btnHelloWorld->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button1_Click);
			// 
			// GraphicalUserInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnHelloWorld);
			this->Controls->Add(this->txtHelloWorld);
			this->Name = L"GraphicalUserInterface";
			this->Text = L"GraphicalUserInterface";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->txtHelloWorld->Text = "Hello World";
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
	};
}
