#include "GraphicalUserInterface.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]//When this program is run allocate a specific thread to it so that all the user interactions will be handled automatically.

int main(array<String^>^ args)//Allows for garbage collection.
{
	Application::EnableVisualStyles();//Tells the operating system that this is a GUI based program.
	Application::SetCompatibleTextRenderingDefault(false);//Tells windows program to render all the controls in the same way that operating system uses controls.

	Calculator::GraphicalUserInterface form;//Creates an object of the class called form.

	Application::Run(%form);//Makes the form run.
}