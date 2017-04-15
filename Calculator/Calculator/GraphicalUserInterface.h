#pragma once
#include "CalculatorLib.h"
#include "MemoryFunctions.h"
#include  <msclr\marshal_cppstd.h>
#include <cmath>
using namespace msclr::interop;

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
    private: System::Windows::Forms::Button^  equals;
    private: System::Windows::Forms::Button^  plus;
    private: System::Windows::Forms::Button^  negative;
    private: System::Windows::Forms::Button^  multiply;
    private: System::Windows::Forms::Button^  divide;
    private: System::Windows::Forms::Button^  backspace;
    protected:

    protected:





    private: System::Windows::Forms::Button^  nine;

    private: System::Windows::Forms::Button^  six;

    private: System::Windows::Forms::Button^  three;
    private: System::Windows::Forms::Button^  period;


    private: System::Windows::Forms::Button^  clear;


    private: System::Windows::Forms::Button^  eight;

    private: System::Windows::Forms::Button^  five;

    private: System::Windows::Forms::Button^  two;

    private: System::Windows::Forms::Button^  zero;
    private: System::Windows::Forms::Button^  clearE;


    private: System::Windows::Forms::Button^  seven;

    private: System::Windows::Forms::Button^  four;

    private: System::Windows::Forms::Button^  one;

    private: System::Windows::Forms::Button^  rightBrace;
    private: System::Windows::Forms::Button^  shift;


    private: System::Windows::Forms::Button^  pi;

    private: System::Windows::Forms::Button^  factorial;

    private: System::Windows::Forms::Button^  plusminus;

    private: System::Windows::Forms::Button^  leftBracket;
    private: System::Windows::Forms::Button^  tan;


    private: System::Windows::Forms::Button^  modulus;
    private: System::Windows::Forms::Button^  Exp;
    private: System::Windows::Forms::Button^  cos;



    private: System::Windows::Forms::Button^  log;
    private: System::Windows::Forms::Button^  sin;


    private: System::Windows::Forms::Button^  tenpowerx;
    private: System::Windows::Forms::Button^  xtothepowerofy;


    private: System::Windows::Forms::Button^  squareroot;
    private: System::Windows::Forms::Button^  xsquared;
    private: System::Windows::Forms::TextBox^  display;



    private: System::Windows::Forms::Button^  memoryclear;

    private: System::Windows::Forms::Button^  memoryrecall;

    private: System::Windows::Forms::Button^  memorysubtract;

    private: System::Windows::Forms::Button^  memorystore;


private: System::Windows::Forms::Button^  degrees;
private: System::Windows::Forms::Button^  hyperbolic;




private: System::Windows::Forms::Button^  exponentialnotation;

private: System::Windows::Forms::Button^  memory8;
private: System::Windows::Forms::Button^  memory7;
private: System::Windows::Forms::Button^  memory5;



private: System::Windows::Forms::Button^  memory6;
private: System::Windows::Forms::Button^  memory3;


private: System::Windows::Forms::Button^  memory4;
private: System::Windows::Forms::Button^  memory2;
private: System::Windows::Forms::Button^  memory1;



private: System::Windows::Forms::Button^  memoryadd;
private: System::Windows::Forms::Button^  memory9;
private: System::Windows::Forms::Label^  lblShowOp;
private: System::Windows::Forms::Label^  ree;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;


























    protected:




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
			this->equals = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->negative = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->period = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->clearE = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->rightBrace = (gcnew System::Windows::Forms::Button());
			this->shift = (gcnew System::Windows::Forms::Button());
			this->pi = (gcnew System::Windows::Forms::Button());
			this->factorial = (gcnew System::Windows::Forms::Button());
			this->plusminus = (gcnew System::Windows::Forms::Button());
			this->leftBracket = (gcnew System::Windows::Forms::Button());
			this->tan = (gcnew System::Windows::Forms::Button());
			this->modulus = (gcnew System::Windows::Forms::Button());
			this->Exp = (gcnew System::Windows::Forms::Button());
			this->cos = (gcnew System::Windows::Forms::Button());
			this->log = (gcnew System::Windows::Forms::Button());
			this->sin = (gcnew System::Windows::Forms::Button());
			this->tenpowerx = (gcnew System::Windows::Forms::Button());
			this->xtothepowerofy = (gcnew System::Windows::Forms::Button());
			this->squareroot = (gcnew System::Windows::Forms::Button());
			this->xsquared = (gcnew System::Windows::Forms::Button());
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->memoryclear = (gcnew System::Windows::Forms::Button());
			this->memoryrecall = (gcnew System::Windows::Forms::Button());
			this->memorysubtract = (gcnew System::Windows::Forms::Button());
			this->memorystore = (gcnew System::Windows::Forms::Button());
			this->degrees = (gcnew System::Windows::Forms::Button());
			this->hyperbolic = (gcnew System::Windows::Forms::Button());
			this->exponentialnotation = (gcnew System::Windows::Forms::Button());
			this->memory8 = (gcnew System::Windows::Forms::Button());
			this->memory7 = (gcnew System::Windows::Forms::Button());
			this->memory5 = (gcnew System::Windows::Forms::Button());
			this->memory6 = (gcnew System::Windows::Forms::Button());
			this->memory3 = (gcnew System::Windows::Forms::Button());
			this->memory4 = (gcnew System::Windows::Forms::Button());
			this->memory2 = (gcnew System::Windows::Forms::Button());
			this->memory1 = (gcnew System::Windows::Forms::Button());
			this->memoryadd = (gcnew System::Windows::Forms::Button());
			this->memory9 = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->ree = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// equals
			// 
			this->equals->BackColor = System::Drawing::SystemColors::ControlLight;
			this->equals->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->equals->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->equals->Location = System::Drawing::Point(453, 448);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(113, 43);
			this->equals->TabIndex = 53;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = false;
			this->equals->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::equals_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::SystemColors::ControlLight;
			this->plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->plus->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->plus->Location = System::Drawing::Point(453, 405);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(113, 43);
			this->plus->TabIndex = 54;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::plus_Click_1);
			// 
			// negative
			// 
			this->negative->BackColor = System::Drawing::SystemColors::ControlLight;
			this->negative->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->negative->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->negative->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->negative->Location = System::Drawing::Point(453, 362);
			this->negative->Name = L"negative";
			this->negative->Size = System::Drawing::Size(113, 43);
			this->negative->TabIndex = 55;
			this->negative->Text = L"-";
			this->negative->UseVisualStyleBackColor = false;
			this->negative->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::negative_Click_1);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::SystemColors::ControlLight;
			this->multiply->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->multiply->Location = System::Drawing::Point(453, 319);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(113, 43);
			this->multiply->TabIndex = 56;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::multiply_Click_1);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::SystemColors::ControlLight;
			this->divide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->divide->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->divide->Location = System::Drawing::Point(453, 276);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(113, 43);
			this->divide->TabIndex = 57;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::divide_Click_1);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::SystemColors::ControlLight;
			this->backspace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspace->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->backspace->Location = System::Drawing::Point(340, 276);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(113, 43);
			this->backspace->TabIndex = 62;
			this->backspace->Text = L"⌫";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::backspace_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::SystemColors::ControlLight;
			this->nine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->nine->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->nine->Location = System::Drawing::Point(340, 319);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(113, 43);
			this->nine->TabIndex = 61;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::SystemColors::ControlLight;
			this->six->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->six->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->six->Location = System::Drawing::Point(340, 362);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(113, 43);
			this->six->TabIndex = 60;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::SystemColors::ControlLight;
			this->three->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->three->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->three->Location = System::Drawing::Point(340, 405);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(113, 43);
			this->three->TabIndex = 59;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// period
			// 
			this->period->BackColor = System::Drawing::SystemColors::ControlLight;
			this->period->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->period->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->period->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->period->Location = System::Drawing::Point(340, 448);
			this->period->Name = L"period";
			this->period->Size = System::Drawing::Size(113, 43);
			this->period->TabIndex = 58;
			this->period->Text = L".";
			this->period->UseVisualStyleBackColor = false;
			this->period->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::period_Click_1);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::SystemColors::ControlLight;
			this->clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clear->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->clear->Location = System::Drawing::Point(227, 276);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(113, 43);
			this->clear->TabIndex = 67;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::clear_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::SystemColors::ControlLight;
			this->eight->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->eight->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->eight->Location = System::Drawing::Point(227, 319);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(113, 43);
			this->eight->TabIndex = 66;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::SystemColors::ControlLight;
			this->five->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->five->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->five->Location = System::Drawing::Point(227, 362);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(113, 43);
			this->five->TabIndex = 65;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::SystemColors::ControlLight;
			this->two->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->two->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->two->Location = System::Drawing::Point(227, 405);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(113, 43);
			this->two->TabIndex = 64;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::SystemColors::ControlLight;
			this->zero->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->zero->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->zero->Location = System::Drawing::Point(227, 448);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(113, 43);
			this->zero->TabIndex = 63;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// clearE
			// 
			this->clearE->BackColor = System::Drawing::SystemColors::ControlLight;
			this->clearE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clearE->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearE->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->clearE->Location = System::Drawing::Point(114, 276);
			this->clearE->Name = L"clearE";
			this->clearE->Size = System::Drawing::Size(113, 43);
			this->clearE->TabIndex = 72;
			this->clearE->Text = L"CE";
			this->clearE->UseVisualStyleBackColor = false;
			this->clearE->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::clearE_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::SystemColors::ControlLight;
			this->seven->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->seven->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->seven->Location = System::Drawing::Point(114, 319);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(113, 43);
			this->seven->TabIndex = 71;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::SystemColors::ControlLight;
			this->four->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->four->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->four->Location = System::Drawing::Point(114, 362);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(113, 43);
			this->four->TabIndex = 70;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::SystemColors::ControlLight;
			this->one->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->one->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->one->Location = System::Drawing::Point(114, 405);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(113, 43);
			this->one->TabIndex = 69;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::button_click);
			// 
			// rightBrace
			// 
			this->rightBrace->BackColor = System::Drawing::SystemColors::ControlLight;
			this->rightBrace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rightBrace->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rightBrace->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rightBrace->Location = System::Drawing::Point(114, 448);
			this->rightBrace->Name = L"rightBrace";
			this->rightBrace->Size = System::Drawing::Size(113, 43);
			this->rightBrace->TabIndex = 68;
			this->rightBrace->Text = L")";
			this->rightBrace->UseVisualStyleBackColor = false;
			this->rightBrace->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::rightBrace_Click);
			// 
			// shift
			// 
			this->shift->BackColor = System::Drawing::SystemColors::ControlLight;
			this->shift->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->shift->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shift->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->shift->Location = System::Drawing::Point(1, 276);
			this->shift->Name = L"shift";
			this->shift->Size = System::Drawing::Size(113, 43);
			this->shift->TabIndex = 77;
			this->shift->Text = L"↑";
			this->shift->UseVisualStyleBackColor = false;
			this->shift->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::shift_Click);
			// 
			// pi
			// 
			this->pi->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pi->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pi->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pi->Location = System::Drawing::Point(1, 319);
			this->pi->Name = L"pi";
			this->pi->Size = System::Drawing::Size(113, 43);
			this->pi->TabIndex = 76;
			this->pi->Text = L"PI";
			this->pi->UseVisualStyleBackColor = false;
			this->pi->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::pi_Click);
			// 
			// factorial
			// 
			this->factorial->BackColor = System::Drawing::SystemColors::ControlLight;
			this->factorial->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->factorial->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->factorial->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->factorial->Location = System::Drawing::Point(1, 362);
			this->factorial->Name = L"factorial";
			this->factorial->Size = System::Drawing::Size(113, 43);
			this->factorial->TabIndex = 75;
			this->factorial->Text = L"n!";
			this->factorial->UseVisualStyleBackColor = false;
			this->factorial->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::factorial_Click);
			// 
			// plusminus
			// 
			this->plusminus->BackColor = System::Drawing::SystemColors::ControlLight;
			this->plusminus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->plusminus->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusminus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->plusminus->Location = System::Drawing::Point(1, 405);
			this->plusminus->Name = L"plusminus";
			this->plusminus->Size = System::Drawing::Size(113, 43);
			this->plusminus->TabIndex = 74;
			this->plusminus->Text = L"±";
			this->plusminus->UseVisualStyleBackColor = false;
			this->plusminus->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::plusminus_Click);
			// 
			// leftBracket
			// 
			this->leftBracket->BackColor = System::Drawing::SystemColors::ControlLight;
			this->leftBracket->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->leftBracket->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leftBracket->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->leftBracket->Location = System::Drawing::Point(1, 448);
			this->leftBracket->Name = L"leftBracket";
			this->leftBracket->Size = System::Drawing::Size(113, 43);
			this->leftBracket->TabIndex = 73;
			this->leftBracket->Text = L"(";
			this->leftBracket->UseVisualStyleBackColor = false;
			this->leftBracket->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::leftBracket_Click);
			// 
			// tan
			// 
			this->tan->BackColor = System::Drawing::SystemColors::Control;
			this->tan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tan->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tan->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tan->Location = System::Drawing::Point(453, 190);
			this->tan->Name = L"tan";
			this->tan->Size = System::Drawing::Size(113, 43);
			this->tan->TabIndex = 78;
			this->tan->Text = L"tan\r\n";
			this->tan->UseVisualStyleBackColor = false;
			this->tan->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::tan_Click);
			// 
			// modulus
			// 
			this->modulus->BackColor = System::Drawing::SystemColors::Control;
			this->modulus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->modulus->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modulus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->modulus->Location = System::Drawing::Point(453, 233);
			this->modulus->Name = L"modulus";
			this->modulus->Size = System::Drawing::Size(113, 43);
			this->modulus->TabIndex = 79;
			this->modulus->Text = L"Mod\r\n";
			this->modulus->UseVisualStyleBackColor = false;
			this->modulus->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::modulus_Click);
			// 
			// Exp
			// 
			this->Exp->BackColor = System::Drawing::SystemColors::Control;
			this->Exp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Exp->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Exp->Location = System::Drawing::Point(340, 233);
			this->Exp->Name = L"Exp";
			this->Exp->Size = System::Drawing::Size(113, 43);
			this->Exp->TabIndex = 81;
			this->Exp->Text = L"Exp\n";
			this->Exp->UseVisualStyleBackColor = false;
			this->Exp->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Exp_Click);
			// 
			// cos
			// 
			this->cos->BackColor = System::Drawing::SystemColors::Control;
			this->cos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cos->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cos->Location = System::Drawing::Point(340, 190);
			this->cos->Name = L"cos";
			this->cos->Size = System::Drawing::Size(113, 43);
			this->cos->TabIndex = 80;
			this->cos->Text = L"cos\r\n";
			this->cos->UseVisualStyleBackColor = false;
			this->cos->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::cos_Click);
			// 
			// log
			// 
			this->log->BackColor = System::Drawing::SystemColors::Control;
			this->log->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->log->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->log->Location = System::Drawing::Point(227, 233);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(113, 43);
			this->log->TabIndex = 83;
			this->log->Text = L"log\r\n";
			this->log->UseVisualStyleBackColor = false;
			this->log->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::log_Click);
			// 
			// sin
			// 
			this->sin->BackColor = System::Drawing::SystemColors::Control;
			this->sin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->sin->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->sin->Location = System::Drawing::Point(227, 190);
			this->sin->Name = L"sin";
			this->sin->Size = System::Drawing::Size(113, 43);
			this->sin->TabIndex = 82;
			this->sin->Text = L"sin";
			this->sin->UseVisualStyleBackColor = false;
			this->sin->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::sin_Click);
			// 
			// tenpowerx
			// 
			this->tenpowerx->BackColor = System::Drawing::SystemColors::Control;
			this->tenpowerx->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tenpowerx->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tenpowerx->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tenpowerx->Location = System::Drawing::Point(114, 233);
			this->tenpowerx->Name = L"tenpowerx";
			this->tenpowerx->Size = System::Drawing::Size(113, 43);
			this->tenpowerx->TabIndex = 85;
			this->tenpowerx->Text = L"10^x\r\n";
			this->tenpowerx->UseVisualStyleBackColor = false;
			this->tenpowerx->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::tenpowerx_Click);
			// 
			// xtothepowerofy
			// 
			this->xtothepowerofy->BackColor = System::Drawing::SystemColors::Control;
			this->xtothepowerofy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xtothepowerofy->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xtothepowerofy->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->xtothepowerofy->Location = System::Drawing::Point(114, 190);
			this->xtothepowerofy->Name = L"xtothepowerofy";
			this->xtothepowerofy->Size = System::Drawing::Size(113, 43);
			this->xtothepowerofy->TabIndex = 84;
			this->xtothepowerofy->Text = L"x^y";
			this->xtothepowerofy->UseVisualStyleBackColor = false;
			this->xtothepowerofy->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::xtothepowerofy_Click);
			// 
			// squareroot
			// 
			this->squareroot->BackColor = System::Drawing::SystemColors::Control;
			this->squareroot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->squareroot->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->squareroot->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->squareroot->Location = System::Drawing::Point(1, 233);
			this->squareroot->Name = L"squareroot";
			this->squareroot->Size = System::Drawing::Size(113, 43);
			this->squareroot->TabIndex = 87;
			this->squareroot->Text = L"√\r\n";
			this->squareroot->UseVisualStyleBackColor = false;
			this->squareroot->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::squareroot_Click);
			// 
			// xsquared
			// 
			this->xsquared->BackColor = System::Drawing::SystemColors::Control;
			this->xsquared->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xsquared->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xsquared->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->xsquared->Location = System::Drawing::Point(1, 190);
			this->xsquared->Name = L"xsquared";
			this->xsquared->Size = System::Drawing::Size(113, 43);
			this->xsquared->TabIndex = 86;
			this->xsquared->Text = L"x^2";
			this->xsquared->UseVisualStyleBackColor = false;
			this->xsquared->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::xsquared_Click);
			// 
			// display
			// 
			this->display->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->display->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display->Location = System::Drawing::Point(1, 0);
			this->display->Multiline = true;
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(565, 110);
			this->display->TabIndex = 0;
			this->display->Text = L"0";
			this->display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->display->TextChanged += gcnew System::EventHandler(this, &GraphicalUserInterface::textBox1_TextChanged);
			// 
			// memoryclear
			// 
			this->memoryclear->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memoryclear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memoryclear->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memoryclear->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memoryclear->Location = System::Drawing::Point(1, 150);
			this->memoryclear->Name = L"memoryclear";
			this->memoryclear->Size = System::Drawing::Size(113, 40);
			this->memoryclear->TabIndex = 92;
			this->memoryclear->Text = L"MC";
			this->memoryclear->UseVisualStyleBackColor = false;
			this->memoryclear->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::memoryclear_Click);
			// 
			// memoryrecall
			// 
			this->memoryrecall->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memoryrecall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memoryrecall->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memoryrecall->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memoryrecall->Location = System::Drawing::Point(114, 150);
			this->memoryrecall->Name = L"memoryrecall";
			this->memoryrecall->Size = System::Drawing::Size(113, 40);
			this->memoryrecall->TabIndex = 91;
			this->memoryrecall->Text = L"MR";
			this->memoryrecall->UseVisualStyleBackColor = false;
			this->memoryrecall->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::memoryrecall_Click);
			// 
			// memorysubtract
			// 
			this->memorysubtract->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memorysubtract->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memorysubtract->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memorysubtract->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memorysubtract->Location = System::Drawing::Point(340, 150);
			this->memorysubtract->Name = L"memorysubtract";
			this->memorysubtract->Size = System::Drawing::Size(113, 40);
			this->memorysubtract->TabIndex = 90;
			this->memorysubtract->Text = L"M-";
			this->memorysubtract->UseVisualStyleBackColor = false;
			this->memorysubtract->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::memorysubtract_Click);
			// 
			// memorystore
			// 
			this->memorystore->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memorystore->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memorystore->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memorystore->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memorystore->Location = System::Drawing::Point(453, 150);
			this->memorystore->Name = L"memorystore";
			this->memorystore->Size = System::Drawing::Size(113, 40);
			this->memorystore->TabIndex = 89;
			this->memorystore->Text = L"MS";
			this->memorystore->UseVisualStyleBackColor = false;
			this->memorystore->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::memorystore_Click);
			// 
			// degrees
			// 
			this->degrees->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->degrees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->degrees->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->degrees->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->degrees->Location = System::Drawing::Point(1, 111);
			this->degrees->Name = L"degrees";
			this->degrees->Size = System::Drawing::Size(75, 41);
			this->degrees->TabIndex = 95;
			this->degrees->Text = L"DEG";
			this->degrees->UseVisualStyleBackColor = false;
			this->degrees->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::degrees_Click);
			// 
			// hyperbolic
			// 
			this->hyperbolic->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->hyperbolic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->hyperbolic->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hyperbolic->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->hyperbolic->Location = System::Drawing::Point(76, 111);
			this->hyperbolic->Name = L"hyperbolic";
			this->hyperbolic->Size = System::Drawing::Size(75, 41);
			this->hyperbolic->TabIndex = 94;
			this->hyperbolic->Text = L"HYP";
			this->hyperbolic->UseVisualStyleBackColor = false;
			this->hyperbolic->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::hyperbolic_Click);
			// 
			// exponentialnotation
			// 
			this->exponentialnotation->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->exponentialnotation->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->exponentialnotation->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exponentialnotation->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->exponentialnotation->Location = System::Drawing::Point(151, 111);
			this->exponentialnotation->Name = L"exponentialnotation";
			this->exponentialnotation->Size = System::Drawing::Size(75, 41);
			this->exponentialnotation->TabIndex = 93;
			this->exponentialnotation->Text = L"F-E";
			this->exponentialnotation->UseVisualStyleBackColor = false;
			this->exponentialnotation->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::exponentialnotation_Click);
			// 
			// memory8
			// 
			this->memory8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory8->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory8->Location = System::Drawing::Point(490, 111);
			this->memory8->Name = L"memory8";
			this->memory8->Size = System::Drawing::Size(38, 41);
			this->memory8->TabIndex = 96;
			this->memory8->Text = L"M8";
			this->memory8->UseVisualStyleBackColor = false;
			this->memory8->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// memory7
			// 
			this->memory7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory7->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory7->Location = System::Drawing::Point(452, 111);
			this->memory7->Name = L"memory7";
			this->memory7->Size = System::Drawing::Size(38, 41);
			this->memory7->TabIndex = 97;
			this->memory7->Text = L"M7";
			this->memory7->UseVisualStyleBackColor = false;
			this->memory7->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// memory5
			// 
			this->memory5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory5->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory5->Location = System::Drawing::Point(376, 111);
			this->memory5->Name = L"memory5";
			this->memory5->Size = System::Drawing::Size(38, 41);
			this->memory5->TabIndex = 99;
			this->memory5->Text = L"M5";
			this->memory5->UseVisualStyleBackColor = false;
			this->memory5->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// memory6
			// 
			this->memory6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory6->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory6->Location = System::Drawing::Point(414, 111);
			this->memory6->Name = L"memory6";
			this->memory6->Size = System::Drawing::Size(38, 41);
			this->memory6->TabIndex = 98;
			this->memory6->Text = L"M6";
			this->memory6->UseVisualStyleBackColor = false;
			this->memory6->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// memory3
			// 
			this->memory3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory3->Location = System::Drawing::Point(300, 111);
			this->memory3->Name = L"memory3";
			this->memory3->Size = System::Drawing::Size(38, 41);
			this->memory3->TabIndex = 101;
			this->memory3->Text = L"M3";
			this->memory3->UseVisualStyleBackColor = false;
			this->memory3->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// memory4
			// 
			this->memory4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory4->Location = System::Drawing::Point(338, 111);
			this->memory4->Name = L"memory4";
			this->memory4->Size = System::Drawing::Size(38, 41);
			this->memory4->TabIndex = 100;
			this->memory4->Text = L"M4";
			this->memory4->UseVisualStyleBackColor = false;
			this->memory4->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// memory2
			// 
			this->memory2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory2->Location = System::Drawing::Point(262, 111);
			this->memory2->Name = L"memory2";
			this->memory2->Size = System::Drawing::Size(38, 41);
			this->memory2->TabIndex = 102;
			this->memory2->Text = L"M2";
			this->memory2->UseVisualStyleBackColor = false;
			this->memory2->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// memory1
			// 
			this->memory1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory1->Location = System::Drawing::Point(224, 111);
			this->memory1->Name = L"memory1";
			this->memory1->Size = System::Drawing::Size(38, 41);
			this->memory1->TabIndex = 103;
			this->memory1->Text = L"M1";
			this->memory1->UseVisualStyleBackColor = false;
			this->memory1->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// memoryadd
			// 
			this->memoryadd->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memoryadd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memoryadd->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memoryadd->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memoryadd->Location = System::Drawing::Point(227, 150);
			this->memoryadd->Name = L"memoryadd";
			this->memoryadd->Size = System::Drawing::Size(113, 40);
			this->memoryadd->TabIndex = 104;
			this->memoryadd->Text = L"M+";
			this->memoryadd->UseVisualStyleBackColor = false;
			this->memoryadd->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::memoryadd_Click);
			// 
			// memory9
			// 
			this->memory9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory9->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory9->Location = System::Drawing::Point(528, 111);
			this->memory9->Name = L"memory9";
			this->memory9->Size = System::Drawing::Size(38, 41);
			this->memory9->TabIndex = 105;
			this->memory9->Text = L"M9";
			this->memory9->UseVisualStyleBackColor = false;
			this->memory9->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::Memory_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::White;
			this->lblShowOp->Location = System::Drawing::Point(6, 67);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 14);
			this->lblShowOp->TabIndex = 106;
			// 
			// ree
			// 
			this->ree->AutoSize = true;
			this->ree->BackColor = System::Drawing::Color::White;
			this->ree->Location = System::Drawing::Point(6, 91);
			this->ree->Name = L"ree";
			this->ree->Size = System::Drawing::Size(0, 14);
			this->ree->TabIndex = 107;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(95, 204);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 14);
			this->label1->TabIndex = 108;
			this->label1->Text = L"↑";
			this->label1->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(208, 204);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 14);
			this->label2->TabIndex = 109;
			this->label2->Text = L"↑";
			this->label2->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(321, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 14);
			this->label3->TabIndex = 110;
			this->label3->Text = L"↑";
			this->label3->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(435, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 14);
			this->label4->TabIndex = 111;
			this->label4->Text = L"↑";
			this->label4->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(548, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 14);
			this->label5->TabIndex = 112;
			this->label5->Text = L"↑";
			this->label5->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(548, 247);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 14);
			this->label6->TabIndex = 117;
			this->label6->Text = L"↑";
			this->label6->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(435, 247);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 14);
			this->label7->TabIndex = 116;
			this->label7->Text = L"↑";
			this->label7->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(321, 247);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 14);
			this->label8->TabIndex = 115;
			this->label8->Text = L"↑";
			this->label8->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(208, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 14);
			this->label9->TabIndex = 114;
			this->label9->Text = L"↑";
			this->label9->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(95, 247);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 14);
			this->label10->TabIndex = 113;
			this->label10->Text = L"↑";
			this->label10->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::label10_Click);
			// 
			// GraphicalUserInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(565, 489);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ree);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->memory9);
			this->Controls->Add(this->memoryadd);
			this->Controls->Add(this->memory1);
			this->Controls->Add(this->memory2);
			this->Controls->Add(this->memory3);
			this->Controls->Add(this->memory4);
			this->Controls->Add(this->memory5);
			this->Controls->Add(this->memory6);
			this->Controls->Add(this->memory7);
			this->Controls->Add(this->memory8);
			this->Controls->Add(this->degrees);
			this->Controls->Add(this->hyperbolic);
			this->Controls->Add(this->exponentialnotation);
			this->Controls->Add(this->memoryclear);
			this->Controls->Add(this->memoryrecall);
			this->Controls->Add(this->memorysubtract);
			this->Controls->Add(this->memorystore);
			this->Controls->Add(this->squareroot);
			this->Controls->Add(this->xsquared);
			this->Controls->Add(this->tenpowerx);
			this->Controls->Add(this->xtothepowerofy);
			this->Controls->Add(this->log);
			this->Controls->Add(this->sin);
			this->Controls->Add(this->Exp);
			this->Controls->Add(this->cos);
			this->Controls->Add(this->modulus);
			this->Controls->Add(this->tan);
			this->Controls->Add(this->shift);
			this->Controls->Add(this->pi);
			this->Controls->Add(this->factorial);
			this->Controls->Add(this->plusminus);
			this->Controls->Add(this->leftBracket);
			this->Controls->Add(this->clearE);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->four);
			this->Controls->Add(this->one);
			this->Controls->Add(this->rightBrace);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->five);
			this->Controls->Add(this->two);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->six);
			this->Controls->Add(this->three);
			this->Controls->Add(this->period);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->negative);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->display);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"GraphicalUserInterface";
			this->Text = L"GraphicalUserInterface";
			this->Load += gcnew System::EventHandler(this, &GraphicalUserInterface::GraphicalUserInterface_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

    private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
    {
    }
    private: System::Void GraphicalUserInterface_Load(System::Object^  sender, System::EventArgs^  e)
    {
    }

    private: System::Void equals_Click(System::Object^  sender, System::EventArgs^  e)
    {
		try
		{
			if (this->display->Text->EndsWith("0") && this->lblShowOp->Text == "")
			{

			}
			else if (this->display->Text == "0" && this->lblShowOp->Text->EndsWith(") "))
			{
				std::string unmanaged = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text);
				this->display->Text = gcnew String(calculate(unmanaged).c_str());
				this->lblShowOp->Text = "";
				this->ree->Text = "";
			}
			else
			{
				std::string unmanaged = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text + this->display->Text);
				this->display->Text = gcnew String(calculate(unmanaged).c_str());
				this->lblShowOp->Text = "";
				this->ree->Text = "";
			}
		}
		catch (...)
		{
			this->display->Text = "Math Error";
		}
    }
    private: System::Void plus_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
		int rb = 0, lb = 0;

		std::string str = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text);
		for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		{
			if (*it == '(')
				lb += 1;

			else if (*it == ')')
				rb += 1;
		}
		if (rb == lb)
		{
		    if (this->lblShowOp->Text->EndsWith(") "))
		    {
		    
		    	this->lblShowOp->Text = this->lblShowOp->Text + " + ";
		    }
			else if (this->display->Text == "0")
		    {
		    
		    }
		    else if (this->display->Text->EndsWith(" ^ "))
		    {
		    
		    }
		    else if (this->lblShowOp->Text == "")
			{
				this->lblShowOp->Text = this->display->Text + " + ";
				this->display->Text = "0";
			}
			else if (this->lblShowOp->Text->EndsWith(") "))
			{

				this->lblShowOp->Text = this->lblShowOp->Text + " + ";
			}
			else
			{
				this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " + ";
				std::string unmanaged = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text + this->display->Text);
				this->ree->Text = gcnew String(calculate(unmanaged).c_str());
				this->display->Text = "0";
			}
		}
		else
		{
			this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " + ";
			this->display->Text = "0";
		}

    }
    private: System::Void negative_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
		int rb = 0, lb = 0;

		std::string str = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text);
		for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		{
			if (*it == '(')
				lb += 1;

			else if (*it == ')')
				rb += 1;
		}
		if (rb == lb)
		{
		    if (this->lblShowOp->Text->EndsWith(") "))
		    {
		        this->lblShowOp->Text = this->lblShowOp->Text + " - ";
		    }
		    else if (this->display->Text == "0")
			{

			}
			else if (this->display->Text->EndsWith(" ^ "))
			{
				this->display->Text = this->display->Text + "-";
			}
			else if (this->lblShowOp->Text == "")
			{
				this->lblShowOp->Text = this->display->Text + " - ";
				this->display->Text = "0";
			}
			else if (this->display->Text == "0")
			{

			}
			else if (this->display->Text->EndsWith(" ^ "))
			{

			}
			else
			{
				this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " - ";
				std::string unmanaged = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text + this->display->Text);
				this->ree->Text = gcnew String(calculate(unmanaged).c_str());
				this->display->Text = "0";
			}
		}
		else
		{
			this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " - ";
			this->display->Text = "0";
		}
    }
    private: System::Void multiply_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
		int rb = 0, lb = 0;

		std::string str = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text);
		for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		{
			if (*it == '(')
				lb += 1;

			else if (*it == ')')
				rb += 1;
		}
		if (rb == lb)
		{
		    if (this->lblShowOp->Text->EndsWith(") "))
		    {
		    	this->lblShowOp->Text = this->lblShowOp->Text + " * ";
		    }
		    else if (this->display->Text == "0")
			{

			}
			else if (this->display->Text->EndsWith(" ^ "))
			{

			}
			else if (this->lblShowOp->Text == "")
			{
				this->lblShowOp->Text = this->display->Text + " * ";
				this->display->Text = "0";
			}
			else if (this->lblShowOp->Text->EndsWith(") "))
			{

				this->lblShowOp->Text = this->lblShowOp->Text + " * ";
			}
			else if (this->display->Text == "0")
			{

			}
			else if (this->display->Text->EndsWith(" ^ "))
			{

			}
			else
			{
				this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " * ";
				std::string unmanaged = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text + this->display->Text);
				this->ree->Text = gcnew String(calculate(unmanaged).c_str());
				this->display->Text = "0";
			}
		}
		else
		{
			this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " * ";
			this->display->Text = "0";
		}
    }
    private: System::Void divide_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
		int rb = 0, lb = 0;

		std::string str = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text);
		for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		{
			if (*it == '(')
				lb += 1;

			else if (*it == ')')
				rb += 1;
		}
		if (rb == lb)
		{
		    if (this->lblShowOp->Text->EndsWith(") "))
		    {
		    	this->lblShowOp->Text = this->lblShowOp->Text + " / ";
		    }
		    else if (this->display->Text == "0")
			{

			}
			else if (this->display->Text->EndsWith(" ^ "))
			{

			}
			else if (this->lblShowOp->Text == "")
			{
				this->lblShowOp->Text = this->display->Text + " / ";
				this->display->Text = "0";
			}
			else if (this->display->Text == "0")
			{

			}
			else if (this->display->Text->EndsWith(" ^ "))
			{

			}
			else
			{
				this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " / ";
				std::string unmanaged = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text + this->display->Text);
				this->ree->Text = gcnew String(calculate(unmanaged).c_str());
				this->display->Text = "0";
			}
		}
		else
		{
			this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " / ";
			this->display->Text = "0";
		}
    }
    private: System::Void period_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
        if (this->display->Text->EndsWith(" ^ ") || this->display->Text->EndsWith(") ") || this->display->Text->EndsWith("-"))
        {
        
        }
		else
		{
            this->display->Text = display->Text + ".";
		}
    }
    private: System::Void rightBrace_Click(System::Object^  sender, System::EventArgs^  e)
    {
		int rb = 0, lb = 0;

		std::string str = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text);
		for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		{
			if (*it == '(')
				lb += 1;

			else if (*it == ')')
				rb += 1;
		}
		if (rb != lb)
		{
			this->lblShowOp->Text = this->lblShowOp->Text + display->Text + " ) ";
			this->display->Text = "0";
		}
		else
		{

		}
    }
    private: System::Void leftBracket_Click(System::Object^  sender, System::EventArgs^  e)
    {
		
		this->lblShowOp->Text = this->lblShowOp->Text + " ( ";
    
	}
    private: System::Void clearE_Click(System::Object^  sender, System::EventArgs^  e)
    {
        this->display->Text = "0";
    }
    private: System::Void backspace_Click(System::Object^  sender, System::EventArgs^  e)
    {
		if (this->display->Text->Length == 1)
		{
			this->display->Text = display->Text->Remove(display->Text->Length - 1, 1);
			this->display->Text = "0";
		}
		else
		{
			this->display->Text = display->Text->Remove(display->Text->Length - 1, 1);
		}
    }
    private: System::Void xsquared_Click(System::Object^  sender, System::EventArgs^  e)
    {
	    this->display->Text = this->display->Text + " ^ 2";
    }
private: System::Void clear_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->display->Text = "0";
	this->lblShowOp->Text = "";
	this->ree->Text = "";
}
private: System::Void button_click(System::Object^  sender, System::EventArgs^  e)
{
	Button ^ Numbers = safe_cast<Button^>(sender);
	if (this->display->Text == "0")
	{
		this->display->Text = Numbers->Text;
	}
	else
	{
		this->display->Text = display->Text + Numbers->Text;
	}
}
//Mem0ry functions.
System::String^ curentMemory = "M1";//Current memory.
private: System::Void Memory_Click(System::Object^  sender, System::EventArgs^  e)
{
	Button ^ Mems = safe_cast<Button^>(sender);
	//When a memory is selected swaps the current Memory to that one e.g. M1,M2.
	curentMemory = Mems->Text;
}
private: System::Void memoryclear_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (curentMemory == "M1")
	{
		setMem1("0");
	}
	else if (curentMemory == "M2")
	{
		setMem2("0");
	}
	else if (curentMemory == "M3")
	{
		setMem3("0");
	}
	else if (curentMemory == "M4")
	{
		setMem4("0");
	}
	else if (curentMemory == "M5")
	{
		setMem5("0");
	}
	else if (curentMemory == "M6")
	{
		setMem6("0");
	}
	else if (curentMemory == "M7")
	{
		setMem7("0");
	}
	else if (curentMemory == "M8")
	{
		setMem8("0");
	}
	else
	{
		setMem9("0");
	}
}
private: System::Void memoryrecall_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (curentMemory == "M1")
	{
		this->display->Text = gcnew String(getMem1().c_str());
	}
	else if (curentMemory == "M2")
	{
		this->display->Text = gcnew String(getMem2().c_str());
	}
	else if (curentMemory == "M3")
	{
		this->display->Text = gcnew String(getMem3().c_str());
	}
	else if (curentMemory == "M4")
	{
		this->display->Text = gcnew String(getMem4().c_str());
	}
	else if (curentMemory == "M5")
	{
		this->display->Text = gcnew String(getMem5().c_str());
	}
	else if (curentMemory == "M6")
	{
		this->display->Text = gcnew String(getMem6().c_str());
	}
	else if (curentMemory == "M7")
	{
		this->display->Text = gcnew String(getMem7().c_str());
	}
	else if (curentMemory == "M8")
	{
		this->display->Text = gcnew String(getMem8().c_str());
	}
	else 
	{
		this->display->Text = gcnew String(getMem9().c_str());
	}
}
private: System::Void memorysubtract_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (curentMemory == "M1")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>( " - " + this->display->Text);
		setMem1(calculate(getMem1() + unmanaged));
	}
	else if (curentMemory == "M2")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" - " + this->display->Text);
		setMem2(calculate(getMem2() + unmanaged));
	}
	else if (curentMemory == "M3")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" - " + this->display->Text);
		setMem3(calculate(getMem3() + unmanaged));
	}
	else if (curentMemory == "M4")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" - " + this->display->Text);
		setMem4(calculate(getMem4() + unmanaged));
	}
	else if (curentMemory == "M5")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" - " + this->display->Text);
		setMem5(calculate(getMem5() + unmanaged));
	}
	else if (curentMemory == "M6")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" - " + this->display->Text);
		setMem6(calculate(getMem6() + unmanaged));
	}
	else if (curentMemory == "M7")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" - " + this->display->Text);
		setMem7(calculate(getMem7() + unmanaged));
	}
	else if (curentMemory == "M8")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" - " + this->display->Text);
		setMem8(calculate(getMem8() + unmanaged));
	}
	else
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" - " + this->display->Text);
		setMem9(calculate(getMem9() + unmanaged));
	}
}
private: System::Void memorystore_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (curentMemory == "M1")
	{
		setMem1(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
	else if (curentMemory == "M2")
	{
		setMem2(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
	else if (curentMemory == "M3")
	{
		setMem3(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
	else if (curentMemory == "M4")
	{
		setMem4(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
	else if (curentMemory == "M5")
	{
		setMem5(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
	else if (curentMemory == "M6")
	{
		setMem6(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
	else if (curentMemory == "M7")
	{
		setMem7(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
	else if (curentMemory == "M8")
	{
		setMem8(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
	else
	{
		setMem9(msclr::interop::marshal_as<std::string>(this->display->Text));
	}
}
private: System::Void memoryadd_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (curentMemory == "M1")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem1(calculate(getMem1() + unmanaged));
	}
	else if (curentMemory == "M2")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem2(calculate(getMem2() + unmanaged));
	}
	else if (curentMemory == "M3")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem3(calculate(getMem3() + unmanaged));
	}
	else if (curentMemory == "M4")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem4(calculate(getMem4() + unmanaged));
	}
	else if (curentMemory == "M5")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem5(calculate(getMem5() + unmanaged));
	}
	else if (curentMemory == "M6")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem6(calculate(getMem6() + unmanaged));
	}
	else if (curentMemory == "M7")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem7(calculate(getMem7() + unmanaged));
	}
	else if (curentMemory == "M8")
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem8(calculate(getMem8() + unmanaged));
	}
	else
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(" + " + this->display->Text);
		setMem9(calculate(getMem9() + unmanaged));
	}
}
private: System::Void plusminus_Click(System::Object^  sender, System::EventArgs^  e)
{
	std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text + " * -1");

	this->display->Text = gcnew String(calculate(unmanaged).c_str());
}
int drg = 1;
private: System::Void degrees_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->degrees->Text == "DEG")
	{
		drg = 2;
		this->degrees->Text = "RAD";
	}
	else if (this->degrees->Text == "RAD")
	{
		drg = 3;
		this->degrees->Text = "GRAD";
	}
	else
	{
		drg = 1;
		this->degrees->Text = "DEG";
	}
}
		 
bool shifted = false;
private: System::Void shift_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (shifted == false)
	{
		shifted = true;
		shift->ForeColor = System::Drawing::Color::Blue;
		label1->ForeColor = System::Drawing::Color::Blue;
		label2->ForeColor = System::Drawing::Color::Blue;
		label3->ForeColor = System::Drawing::Color::Blue;
		label4->ForeColor = System::Drawing::Color::Blue;
		label5->ForeColor = System::Drawing::Color::Blue;
		label6->ForeColor = System::Drawing::Color::Blue;
		label7->ForeColor = System::Drawing::Color::Blue;
		label8->ForeColor = System::Drawing::Color::Blue;
		label9->ForeColor = System::Drawing::Color::Blue;
		label10->ForeColor = System::Drawing::Color::Blue;
		modulus->Text = "deg";
		Exp->Text = "dms";
		log->Text = "Ln";
		tenpowerx->Text = "e" + u8"\u221A"+ "x";
		squareroot->Text = "1/x";
		if (hype)
		{
			tan->Text = "tanh^-1";
			cos->Text = "cosh^-1";
			sin->Text = "sinh^-1";
		}
		else
		{
			tan->Text = "tan^-1";
			cos->Text = "cos^-1";
			sin->Text = "sin^-1";
		}
		xtothepowerofy->Text = "y" + u8"\u221A" + "x";
		xsquared->Text = "x^3";
	}
	else if(shifted)
	{
		shifted = false;
		shift->ForeColor = System::Drawing::Color::Black;
		label1->ForeColor = System::Drawing::Color::Silver;
		label2->ForeColor = System::Drawing::Color::Silver;
		label3->ForeColor = System::Drawing::Color::Silver;
		label4->ForeColor = System::Drawing::Color::Silver;
		label5->ForeColor = System::Drawing::Color::Silver;
		label6->ForeColor = System::Drawing::Color::Silver;
		label7->ForeColor = System::Drawing::Color::Silver;
		label8->ForeColor = System::Drawing::Color::Silver;
		label9->ForeColor = System::Drawing::Color::Silver;
		label10->ForeColor = System::Drawing::Color::Silver;
		modulus->Text = "Mod";
		Exp->Text = "Exp";
		log->Text = "log";
		tenpowerx->Text = "10^x";
		squareroot->Text = u8"\u221A";
		if (hype)
		{
			tan->Text = "tanh";
			cos->Text = "cosh";
			sin->Text = "sinh";
		}
		else
		{
			tan->Text = "tan";
			cos->Text = "cos";
			sin->Text = "sin";
		}
		xtothepowerofy->Text = "x^y";
		xsquared->Text = "x^2";
	}
}
bool hype = false;
private: System::Void hyperbolic_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (hype == false)
	{
		hype = true;
		if (shifted)
		{
			tan->Text = "tanh^-1";
			cos->Text = "cosh^-1";
			sin->Text = "sinh^-1";
		}
		else
		{
			tan->Text = "tanh";
			cos->Text = "cosh";
			sin->Text = "sinh";
		}
		hyperbolic->ForeColor = System::Drawing::Color::Blue;
	}
	else if (hype == true)
	{
		if (shifted)
		{
			tan->Text = "tan^-1";
			cos->Text = "cos^-1";
			sin->Text = "sin^-1";
		}
		else
		{
			tan->Text = "tan";
			cos->Text = "cos";
			sin->Text = "sin";
		}
		hype = false;
		hyperbolic->ForeColor = System::Drawing::Color::Black;
	}
}
bool exp = false;
private: System::Void exponentialnotation_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (exp == false)
	{
		exp = true;
		exponentialnotation->ForeColor = System::Drawing::Color::Blue;
	}
	else if (exp == true)
	{
		exp = false;
		exponentialnotation->ForeColor = System::Drawing::Color::Black;
	}
}


private: System::Void factorial_Click(System::Object^  sender, System::EventArgs^  e)
{
	std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text + " * -1");

	float i = std::stof(unmanaged);

	this->display->Text = gcnew String(std::to_string(std::tgamma(i + 1)).c_str());
}
private: System::Void pi_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->display->Text = "3.1415926535897932384626433832795";
}

private: System::Void xtothepowerofy_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->display->Text == "0")
	{
	}
	else if (this->display->Text->EndsWith("^ "))
	{
	}
	else
	{
		this->display->Text = this->display->Text + " ^ ";
	}
}
private: System::Void tenpowerx_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->display->Text = "10 ^ " + this->display->Text;
}
private: System::Void sin_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (drg == 1)
	{
		if (sin->Text == "sin")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::sinf(i) * 180 / 3.1415926535897932384626433832795).c_str());
		
		}
		else if (sin->Text == "sinh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::sinhf(i)).c_str());

		}
		else if (sin->Text == "sin^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::asinf(i) * 180 / 3.1415926535897932384626433832795).c_str());
		}
		else if (sin->Text == "sinh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::asinhf(i)).c_str());
		}
	}
	else if (drg == 2)
	{
		
		if (sin->Text == "sin")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::sinf(i)).c_str());

		}
		else if (sin->Text == "sinh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::sinhf(i)).c_str());

		}
		else if (sin->Text == "sin^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::asinf(i)).c_str());
		}
		else if (sin->Text == "sinh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::asinhf(i)).c_str());
		}
	}
	else if (drg ==3)
	{
		if (sin->Text == "sin")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::sinf(i) * 200 / 3.1415926535897932384626433832795).c_str());

		}
		else if (sin->Text == "sinh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::sinhf(i)).c_str());

		}
		else if (sin->Text == "sin^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::asinf(i) * 200 / 3.1415926535897932384626433832795).c_str());
		}
		else if (sin->Text == "sinh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::asinhf(i)).c_str());
		}
	}
}

private: System::Void tan_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (drg == 1)
	{
		if (tan->Text == "tan")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanf(i) * 180 / 3.1415926535897932384626433832795).c_str());

		}
		else if (tan->Text == "tanh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanhf(i)).c_str());

		}
		else if (tan->Text == "tan^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::atanf(i) * 180 / 3.1415926535897932384626433832795).c_str());
		}
		else if (tan->Text == "tanh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::atanhf(i)).c_str());
		}
		else
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanf(i) * 180 / 3.1415926535897932384626433832795).c_str());

		}
	}
	else if (drg == 2)
	{

		if (tan->Text == "tan")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanf(i)).c_str());

		}
		else if (tan->Text == "tanh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanhf(i)).c_str());

		}
		else if (tan->Text == "tan^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::atanf(i)).c_str());
		}
		else if (tan->Text == "tanh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::atanhf(i)).c_str());
		}
		else
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanf(i)).c_str());
		}
	}
	else if (drg == 3)
	{
		if (tan->Text == "tan")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanf(i) * 200 / 3.1415926535897932384626433832795).c_str());

		}
		else if (tan->Text == "tanh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanhf(i)).c_str());

		}
		else if (tan->Text == "tan^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::atanf(i) * 200 / 3.1415926535897932384626433832795).c_str());
		}
		else if (tan->Text == "tanh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::atanhf(i)).c_str());
		}
		else
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::tanf(i) * 200 / 3.1415926535897932384626433832795).c_str());
		}
	}
}
private: System::Void squareroot_Click(System::Object^  sender, System::EventArgs^  e)
{

}
private: System::Void log_Click(System::Object^  sender, System::EventArgs^  e)
{

}
private: System::Void Exp_Click(System::Object^  sender, System::EventArgs^  e)
{

}
private: System::Void cos_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (drg == 1)
	{
		if (cos->Text == "cos")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::cosf(i) * 180 / 3.1415926535897932384626433832795).c_str());

		}
		else if (cos->Text == "cosh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::coshf(i)).c_str());

		}
		else if (cos->Text == "cos^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::acosf(i) * 180 / 3.1415926535897932384626433832795).c_str());
		}
		else if (cos->Text == "cosh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::acoshf(i)).c_str());
		}
		else
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::cosf(i) * 180 / 3.1415926535897932384626433832795).c_str());
		}
	}
	else if (drg == 2)
	{

		if (cos->Text == "cos")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::cosf(i)).c_str());

		}
		else if (cos->Text == "cosh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::coshf(i)).c_str());

		}
		else if (cos->Text == "cos^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::acosf(i)).c_str());
		}
		else if (cos->Text == "cosh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::acoshf(i)).c_str());
		}
		else
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::cosf(i)).c_str());
		}
	}
	else if (drg == 3)
	{
		if (cos->Text == "cos")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::cosf(i) * 200 / 3.1415926535897932384626433832795).c_str());

		}
		else if (cos->Text == "cosh")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::coshf(i)).c_str());

		}
		else if (cos->Text == "cos^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::acosf(i) * 200 / 3.1415926535897932384626433832795).c_str());
		}
		else if (cos->Text == "cosh^-1")
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::acoshf(i)).c_str());
		}
		else
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);

			float i = std::stof(unmanaged);

			this->display->Text = gcnew String(std::to_string(std::cosf(i) * 200 / 3.1415926535897932384626433832795).c_str());
		}
	}
}
private: System::Void modulus_Click(System::Object^  sender, System::EventArgs^  e)
{

}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e)
{
	xtothepowerofy->PerformClick();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
{
	xsquared->PerformClick();
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e)
{
	cos->PerformClick();
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e)
{
	sin->PerformClick();
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e)
{
	tan->PerformClick();
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e)
{
	modulus->PerformClick();
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e)
{
	Exp->PerformClick();
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e)
{
	log->PerformClick();
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e)
{
	tenpowerx->PerformClick();
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e)
{
	squareroot->PerformClick();
}
};
}
