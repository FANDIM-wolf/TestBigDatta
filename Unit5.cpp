//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormCreate(TObject *Sender)
{
      // полотнище флага
Image1->Canvas->Pen->Width = 1;
Image1->Canvas->Pen->Color = clBlack;
Image1->Canvas->Brush->Color = clCream;
Image1->Canvas->Rectangle(30,30,150,150);
Image1->Canvas->Pen->Width =2; // ширина колец
//чтобы круг, нарисованный методом Ellipse, не был закрашен
Image1->Canvas->Brush->Style = bsClear;
// рисуем кольца
Image1->Canvas->Pen->Color = clBlue;
Image1->Canvas->Ellipse(40,40,80,80);
Image1->Canvas->Pen->Color = clBlack;
Image1->Canvas->Ellipse(70,40,110, 80);
Image1->Canvas->Pen->Color = clRed;
Image1->Canvas->Ellipse(100,40,140, 80);
Image1->Canvas->Pen->Color = clYellow;
Image1->Canvas->Ellipse(55,65,95,105);
Image1->Canvas->Pen->Color = clGreen;
Image1->Canvas->Ellipse(85,65,125,105);
}
//---------------------------------------------------------------------------
