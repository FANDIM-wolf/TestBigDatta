object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Form6'
  ClientHeight = 484
  ClientWidth = 696
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 40
    Top = 232
    Width = 601
    Height = 217
  end
  object Label1: TLabel
    Left = 40
    Top = 8
    Width = 281
    Height = 26
    Caption = 'Memory  Size of the  Space '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 335
    Top = 51
    Width = 81
    Height = 24
    Caption = 'Power'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 335
    Top = 91
    Width = 145
    Height = 24
    Caption = 'Space in MB'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 40
    Top = 56
    Width = 281
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 40
    Top = 96
    Width = 281
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 40
    Top = 136
    Width = 281
    Height = 25
    Caption = 'Show it'
    TabOrder = 2
    OnClick = Button1Click
  end
end
