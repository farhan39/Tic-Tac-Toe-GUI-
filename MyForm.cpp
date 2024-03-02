#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

//Project by 21L-5247 (no partner)

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //TicTacToeby21L5247 is your project name
    TicTacToeby21L5247::MyForm form;
    Application::Run(% form);
}
