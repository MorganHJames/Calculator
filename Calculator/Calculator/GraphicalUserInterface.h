#pragma once
#include "CalculatorLib.h"
#include  <msclr\marshal_cppstd.h>
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

    private: System::Windows::Forms::Button^  memory;
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
			this->memory = (gcnew System::Windows::Forms::Button());
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
			this->shift->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shift->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->shift->Location = System::Drawing::Point(1, 276);
			this->shift->Name = L"shift";
			this->shift->Size = System::Drawing::Size(113, 43);
			this->shift->TabIndex = 77;
			this->shift->Text = L"↑";
			this->shift->UseVisualStyleBackColor = false;
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
			this->tan->Text = L"tan\r\n↑";
			this->tan->UseVisualStyleBackColor = false;
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
			this->modulus->Text = L"Mod\r\n↑";
			this->modulus->UseVisualStyleBackColor = false;
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
			this->Exp->Text = L"Exp\n↑";
			this->Exp->UseVisualStyleBackColor = false;
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
			this->cos->Text = L"cos\r\n↑";
			this->cos->UseVisualStyleBackColor = false;
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
			this->log->Text = L"log\r\n↑";
			this->log->UseVisualStyleBackColor = false;
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
			this->sin->Text = L"sin\r\n↑";
			this->sin->UseVisualStyleBackColor = false;
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
			this->tenpowerx->Text = L"10^x\r\n↑";
			this->tenpowerx->UseVisualStyleBackColor = false;
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
			this->squareroot->Text = L"√\r\n↑";
			this->squareroot->UseVisualStyleBackColor = false;
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
			this->display->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
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
			this->memoryclear->Location = System::Drawing::Point(-2, 152);
			this->memoryclear->Name = L"memoryclear";
			this->memoryclear->Size = System::Drawing::Size(95, 40);
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
			this->memoryrecall->Location = System::Drawing::Point(93, 152);
			this->memoryrecall->Name = L"memoryrecall";
			this->memoryrecall->Size = System::Drawing::Size(95, 40);
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
			this->memorysubtract->Location = System::Drawing::Point(283, 152);
			this->memorysubtract->Name = L"memorysubtract";
			this->memorysubtract->Size = System::Drawing::Size(95, 40);
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
			this->memorystore->Location = System::Drawing::Point(378, 152);
			this->memorystore->Name = L"memorystore";
			this->memorystore->Size = System::Drawing::Size(95, 40);
			this->memorystore->TabIndex = 89;
			this->memorystore->Text = L"MS";
			this->memorystore->UseVisualStyleBackColor = false;
			this->memorystore->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::memorystore_Click);
			// 
			// memory
			// 
			this->memory->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory->Location = System::Drawing::Point(473, 152);
			this->memory->Name = L"memory";
			this->memory->Size = System::Drawing::Size(95, 40);
			this->memory->TabIndex = 88;
			this->memory->Text = L"M⯆";
			this->memory->UseVisualStyleBackColor = false;
			this->memory->Click += gcnew System::EventHandler(this, &GraphicalUserInterface::memory_Click);
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
			this->degrees->Size = System::Drawing::Size(77, 41);
			this->degrees->TabIndex = 95;
			this->degrees->Text = L"DEG";
			this->degrees->UseVisualStyleBackColor = false;
			// 
			// hyperbolic
			// 
			this->hyperbolic->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->hyperbolic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->hyperbolic->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hyperbolic->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->hyperbolic->Location = System::Drawing::Point(78, 111);
			this->hyperbolic->Name = L"hyperbolic";
			this->hyperbolic->Size = System::Drawing::Size(77, 41);
			this->hyperbolic->TabIndex = 94;
			this->hyperbolic->Text = L"HYP";
			this->hyperbolic->UseVisualStyleBackColor = false;
			// 
			// exponentialnotation
			// 
			this->exponentialnotation->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->exponentialnotation->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->exponentialnotation->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exponentialnotation->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->exponentialnotation->Location = System::Drawing::Point(155, 111);
			this->exponentialnotation->Name = L"exponentialnotation";
			this->exponentialnotation->Size = System::Drawing::Size(77, 41);
			this->exponentialnotation->TabIndex = 93;
			this->exponentialnotation->Text = L"F-E";
			this->exponentialnotation->UseVisualStyleBackColor = false;
			// 
			// memory8
			// 
			this->memory8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory8->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory8->Location = System::Drawing::Point(492, 113);
			this->memory8->Name = L"memory8";
			this->memory8->Size = System::Drawing::Size(37, 37);
			this->memory8->TabIndex = 96;
			this->memory8->Text = L"M8";
			this->memory8->UseVisualStyleBackColor = false;
			// 
			// memory7
			// 
			this->memory7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory7->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory7->Location = System::Drawing::Point(455, 113);
			this->memory7->Name = L"memory7";
			this->memory7->Size = System::Drawing::Size(37, 37);
			this->memory7->TabIndex = 97;
			this->memory7->Text = L"M7";
			this->memory7->UseVisualStyleBackColor = false;
			// 
			// memory5
			// 
			this->memory5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory5->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory5->Location = System::Drawing::Point(381, 113);
			this->memory5->Name = L"memory5";
			this->memory5->Size = System::Drawing::Size(37, 37);
			this->memory5->TabIndex = 99;
			this->memory5->Text = L"M5";
			this->memory5->UseVisualStyleBackColor = false;
			// 
			// memory6
			// 
			this->memory6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory6->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory6->Location = System::Drawing::Point(418, 113);
			this->memory6->Name = L"memory6";
			this->memory6->Size = System::Drawing::Size(37, 37);
			this->memory6->TabIndex = 98;
			this->memory6->Text = L"M6";
			this->memory6->UseVisualStyleBackColor = false;
			// 
			// memory3
			// 
			this->memory3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory3->Location = System::Drawing::Point(307, 113);
			this->memory3->Name = L"memory3";
			this->memory3->Size = System::Drawing::Size(37, 37);
			this->memory3->TabIndex = 101;
			this->memory3->Text = L"M3";
			this->memory3->UseVisualStyleBackColor = false;
			// 
			// memory4
			// 
			this->memory4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory4->Location = System::Drawing::Point(344, 113);
			this->memory4->Name = L"memory4";
			this->memory4->Size = System::Drawing::Size(37, 37);
			this->memory4->TabIndex = 100;
			this->memory4->Text = L"M4";
			this->memory4->UseVisualStyleBackColor = false;
			// 
			// memory2
			// 
			this->memory2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory2->Location = System::Drawing::Point(270, 113);
			this->memory2->Name = L"memory2";
			this->memory2->Size = System::Drawing::Size(37, 37);
			this->memory2->TabIndex = 102;
			this->memory2->Text = L"M2";
			this->memory2->UseVisualStyleBackColor = false;
			// 
			// memory1
			// 
			this->memory1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memory1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memory1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memory1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memory1->Location = System::Drawing::Point(233, 113);
			this->memory1->Name = L"memory1";
			this->memory1->Size = System::Drawing::Size(37, 37);
			this->memory1->TabIndex = 103;
			this->memory1->Text = L"M1";
			this->memory1->UseVisualStyleBackColor = false;
			// 
			// memoryadd
			// 
			this->memoryadd->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->memoryadd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->memoryadd->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memoryadd->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->memoryadd->Location = System::Drawing::Point(188, 152);
			this->memoryadd->Name = L"memoryadd";
			this->memoryadd->Size = System::Drawing::Size(95, 40);
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
			this->memory9->Location = System::Drawing::Point(529, 113);
			this->memory9->Name = L"memory9";
			this->memory9->Size = System::Drawing::Size(37, 37);
			this->memory9->TabIndex = 105;
			this->memory9->Text = L"M9";
			this->memory9->UseVisualStyleBackColor = false;
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
			// GraphicalUserInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(565, 489);
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
			this->Controls->Add(this->memory);
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
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text + this->display->Text);
			this->display->Text = gcnew String(calculate(unmanaged).c_str());
			this->lblShowOp->Text = "";
			this->ree->Text = "";
		}
		catch (...)
		{
			this->display->Text = "Math Error";
		}
    }
    private: System::Void plus_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
		if (this->lblShowOp->Text == "")
		{
			this->lblShowOp->Text = this->display->Text + " + ";
			this->display->Text = "0";
		}
		else if (this->display->Text == "0")
		{

		}
		else
		{
			this->lblShowOp->Text = this->lblShowOp->Text + this->display->Text + " + ";
			std::string unmanaged = msclr::interop::marshal_as<std::string>(this->lblShowOp->Text + this->display->Text);
			this->ree->Text = gcnew String(calculate(unmanaged).c_str());
			this->display->Text = "0";
		}

    }
    private: System::Void negative_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
		if (this->lblShowOp->Text == "")
		{
			this->lblShowOp->Text = this->display->Text + " - ";
			this->display->Text = "0";
		}
		else if (this->display->Text == "0")
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
    private: System::Void multiply_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
		if (this->lblShowOp->Text == "")
		{
			this->lblShowOp->Text = this->display->Text + " * ";
			this->display->Text = "0";
		}
		else if (this->display->Text == "0")
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
    private: System::Void divide_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
		if (this->lblShowOp->Text == "")
		{
			this->lblShowOp->Text = this->display->Text + " / ";
			this->display->Text = "0";
		}
		else if (this->display->Text == "0")
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
    private: System::Void period_Click_1(System::Object^  sender, System::EventArgs^  e)
    {
        this->display->Text = display->Text + ".";
    }
    private: System::Void rightBrace_Click(System::Object^  sender, System::EventArgs^  e)
    {
		/*
		this->lblShowOp->Text = this->lblShowOp->Text + display->Text + " ) ";
		*/
    }
    private: System::Void leftBracket_Click(System::Object^  sender, System::EventArgs^  e)
    {
		/*
		this->lblShowOp->Text = this->lblShowOp->Text + " ( ";
    */
	}
    private: System::Void clearE_Click(System::Object^  sender, System::EventArgs^  e)
    {
        this->display->Text = "0";
    }
    private: System::Void backspace_Click(System::Object^  sender, System::EventArgs^  e)
    {
		this->display->Text = display->Text->Remove(display->Text->Length - 1, 1);
    }
    private: System::Void xsquared_Click(System::Object^  sender, System::EventArgs^  e)
    {
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
private: System::Void memory_Click(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void memoryclear_Click(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void memoryrecall_Click(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void memorysubtract_Click(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void memorystore_Click(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void memoryadd_Click(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void plusminus_Click(System::Object^  sender, System::EventArgs^  e)
{
	/*std::string unmanaged = msclr::interop::marshal_as<std::string>(this->display->Text);
	
	double temp = StringToNumber(unmanaged);



	this->display->Text = gcnew String(calculate(unmanaged).c_str());
	*/
}

};
}
