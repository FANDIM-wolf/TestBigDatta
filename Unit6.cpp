//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
		 int power , space_in_MB;

		 power =StrToInt(Edit1->Text);
		 space_in_MB=StrToInt(Edit2->Text);
		 Image1->Canvas->Pen->Width = 1;
		 Image1->Canvas->Pen->Color = clGreen; // Color
		 Image1->Canvas->Rectangle(power,power,space_in_MB,space_in_MB); //Draw reactangle

}
//---------------------------------------------------------------------------
