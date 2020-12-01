//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TestBigData.h"
#include "Windows.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    Label3->Caption = "Intel Core I5";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	   //Form3->ShowModal();

		WinExec("C:\Project3.exe",1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label3Click(TObject *Sender)
{
  Label3->Caption = "Intel Core I5";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	//Form4->ShowModal();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
  Form5->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
  Form6->ShowModal();
}
//---------------------------------------------------------------------------

