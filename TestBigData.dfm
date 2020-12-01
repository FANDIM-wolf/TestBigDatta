object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Test Big Data '
  ClientHeight = 583
  ClientWidth = 723
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 24
    Width = 211
    Height = 32
    Caption = 'TEST BIG DATA'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlack
    Font.Height = -29
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 344
    Top = 91
    Width = 122
    Height = 25
    Caption = 'Proccessor:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 479
    Top = 91
    Width = 185
    Height = 25
    Caption = 'Name of Proccessor'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    OnClick = Label3Click
  end
  object Button1: TButton
    Left = 0
    Top = 555
    Width = 15
    Height = 20
    Caption = 'Test Calculate Power'
    TabOrder = 0
  end
  object Button2: TButton
    Left = 24
    Top = 192
    Width = 211
    Height = 25
    Caption = 'Get Voltage of TBD'
    TabOrder = 1
  end
  object Panel1: TPanel
    Left = 0
    Top = 546
    Width = 723
    Height = 37
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 2
  end
  object Button3: TButton
    Left = 24
    Top = 96
    Width = 211
    Height = 25
    Caption = 'Test Calculate Power'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 24
    Top = 145
    Width = 211
    Height = 25
    Caption = 'Test Thread Calculate Power'
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 8
    Top = 544
    Width = 75
    Height = 25
    Caption = 'option'
    TabOrder = 5
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 24
    Top = 240
    Width = 211
    Height = 25
    Caption = 'Memory Size'
    TabOrder = 6
    OnClick = Button6Click
  end
  object ImageList1: TImageList
    BkColor = clHotLight
    Left = 1
    Top = 580
  end
end
