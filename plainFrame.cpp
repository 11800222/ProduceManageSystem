#include "plainFrame.h"
using namespace std;
//(*InternalHeaders(plainFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(plainFrame)
const long plainFrame::ID_BUTTON2 = wxNewId();
const long plainFrame::ID_TEXTCTRL1 = wxNewId();
const long plainFrame::ID_BUTTON3 = wxNewId();
const long plainFrame::ID_BUTTON4 = wxNewId();
const long plainFrame::ID_BUTTON5 = wxNewId();
const long plainFrame::ID_BUTTON6 = wxNewId();
const long plainFrame::ID_BUTTON8 = wxNewId();
const long plainFrame::ID_BUTTON9 = wxNewId();
const long plainFrame::ID_BUTTON10 = wxNewId();
const long plainFrame::ID_BUTTON11 = wxNewId();
const long plainFrame::ID_BUTTON12 = wxNewId();
const long plainFrame::ID_BUTTON13 = wxNewId();
const long plainFrame::ID_TEXTCTRL2 = wxNewId();
const long plainFrame::ID_BUTTON1 = wxNewId();
const long plainFrame::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(plainFrame,wxFrame)
    //(*EventTable(plainFrame)
    //*)
END_EVENT_TABLE()
plainFrame::plainFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(plainFrame)
    Create(parent, wxID_ANY, _("7-"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(900,450));
    SetForegroundColour(wxColour(255,255,255));
    SetBackgroundColour(wxColour(208,208,208));
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(368,176), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetForegroundColour(wxColour(255,255,255));
    Panel1->SetBackgroundColour(wxColour(250,250,250));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("�ر�"), wxPoint(840,0), wxSize(59,48), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(288,168), wxSize(208,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    wxFont TextCtrl1Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    TextCtrl1->SetFont(TextCtrl1Font);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("����"), wxPoint(496,168), wxSize(104,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("����ѡ�����"), wxPoint(600,168), wxSize(107,32), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button5 = new wxButton(Panel1, ID_BUTTON5, _("1-�豸¼��"), wxPoint(40,24), wxSize(112,32), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button6 = new wxButton(Panel1, ID_BUTTON6, _("2-�豸����ͳ��"), wxPoint(216,24), wxSize(104,32), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    Button8 = new wxButton(Panel1, ID_BUTTON8, _("4-�豸����"), wxPoint(528,24), wxSize(112,32), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    Button9 = new wxButton(Panel1, ID_BUTTON9, _("7-�豸ɾ��"), wxPoint(368,72), wxSize(112,32), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    Button10 = new wxButton(Panel1, ID_BUTTON10, _("5-�豸��������"), wxPoint(40,72), wxSize(112,32), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    Button11 = new wxButton(Panel1, ID_BUTTON11, _("6-�豸��Ϣ�޸�"), wxPoint(216,72), wxSize(104,32), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Button12 = new wxButton(Panel1, ID_BUTTON12, _("8-�����豸���ݵ��ļ�"), wxPoint(528,72), wxSize(136,32), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    Button13 = new wxButton(Panel1, ID_BUTTON13, _("9-չʾ�����豸"), wxPoint(144,168), wxSize(139,32), 0, wxDefaultValidator, _T("ID_BUTTON13"));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(0,200), wxSize(904,248), wxTE_MULTILINE|wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetForegroundColour(wxColour(255,255,255));
    TextCtrl2->SetBackgroundColour(wxColour(0,0,0));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("3-�豸����"), wxPoint(368,24), wxSize(112,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));

    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton4Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton6Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton8Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton9Click);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton10Click);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton11Click);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton12Click);
    Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton13Click);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&plainFrame::OnButton1Click1);
    //*)

//wxTE_MULTILINE|wxTE_READONLY
}

plainFrame::~plainFrame()
{
    //(*Destroy(plainFrame)
    //*)
}
void plainFrame::OnButton2Click(wxCommandEvent& event)
{
    Close(true);
}

void plainFrame::OnButton3Click(wxCommandEvent& event)
{
    wxString dd;
    dd=this->TextCtrl1->GetValue();
    switch(condition)
    {
    case 5:
    {
        switch(defaultinsert)
        {
        case 7:
        {
            cd(this->dev);
            strcpy(dev->production,dd.mb_str());
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�����豸����");
            break;
        }
        case 6:
        {
            strcpy(dev->type,dd.mb_str());
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�����豸����");
            break;
        }
        case 5:
        {
            strcpy(dev->name,dd.mb_str());
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�����豸��");
            break;
        }
        case 4:
        {
            dev->number=wxAtoi(dd);
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�����豸�۸�");
            break;
        }
        case 3:
        {
            dev->price=wxAtoi(dd);
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�����豸�������");
            break;
        }
        case 2:
        {
            dev->year=wxAtoi(dd);
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�����豸���뱨��ʱ��");
            break;
        }
        case 1:
        {
            dev->ruintime=wxAtoi(dd);
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�豸��Ϣ�������");
            fininsert(this->head,dev,this);
            defaultinsert=-1;
            condition=0;
            break;
        }
        }
        break;
    }
    case 6:
    {
        if(defaultinsert==2)
        {
            cp(this->pro);
            strcpy(pro->name,dd.mb_str());
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�豸����(0��ʾ���У�");
        }
        else
        {
            ct(this->typ);
            strcpy(typ->name,dd.mb_str());
            --this->defaultinsert;
            this->TextCtrl1->SetValue("�Ѵ�ӡ����ͳ��");
            if(strcmp(typ->name,"0")==0)
                classify(this->head,this->pro,NULL,this);
            else classify(this->head,this->pro,this->typ,this);
            condition=0;
            defaultinsert=-1;
        }
        break;
    }
    case 7:
    {
        if(defaultinsert==1)
        {
            int num=wxAtoi(dd);
            if(deletedevice(this->head,num,this)==true)
                coutt(this,"ɾ���ɹ�",2);
            condition=0;
            defaultinsert=-1;
        }
        break;
    }
    case 3:
    {
        if(defaultinsert==1)
        {
            int num=wxAtoi(dd);
            if(baofei(this->head,num,this)==true)
                coutt(this,"���ϳɹ�",2);
            condition=0;
            defaultinsert=-1;
        }
        break;
    }
    case 4:
    {
        if(defaultinsert==1)
        {
            int num=wxAtoi(dd);
            first *ii=finddevice(this->head,num,this);
            if(ii!=NULL)
            {
                char kk[20];
                coutt(this,"��������:",1);
                coutt(this,ii->ddata->production,1);
                coutt(this,"�豸����:",1);
                coutt(this,ii->ddata->type,1);
                coutt(this,"�豸��:",1);
                coutt(this,ii->ddata->name,1);
                coutt(this,"�豸��:",1);
                itoa(ii->ddata->number,kk,10);
                coutt(this,kk,1);
                coutt(this,"�豸�۸�:",1);
                itoa(ii->ddata->price,kk,10);
                coutt(this,kk,1);
                coutt(this,"�豸�������:",1);
                itoa(ii->ddata->year,kk,10);
                coutt(this,kk,1);
                coutt(this,"�豸����ʱ��:",1);
                itoa(ii->ddata->ruintime,kk,10);
                coutt(this,kk,1);
            }
            condition=0;
            defaultinsert=-1;
        }
        break;
    }
    }
}
void plainFrame::OnButton13Click(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    display(head,this);
}
void plainFrame::OnButton5Click(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    this->condition=5;
    this->defaultinsert=7;
    this->TextCtrl1->SetValue("������������");
}
void plainFrame::OnButton6Click(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    this->condition=6;
    this->defaultinsert=2;
    this->TextCtrl1->SetValue("������������");
}
void plainFrame::OnButton12Click(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    save(this->head,this);
    coutt(this,"����ɹ�",2);
}
void plainFrame::OnButton9Click(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    this->condition=7;
    defaultinsert=1;
    this->TextCtrl1->SetValue("�����豸��");
}
void plainFrame::OnButton1Click1(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    this->condition=3;
    defaultinsert=1;
    this->TextCtrl1->SetValue("�����豸��");
}

void plainFrame::OnButton8Click(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    this->condition=4;
    defaultinsert=1;
    this->TextCtrl1->SetValue("�����豸��");
}

void plainFrame::OnButton10Click(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    sortdevice(this->head,this);

}

void plainFrame::OnButton4Click(wxCommandEvent& event)
{
    this->condition=0;
    defaultinsert=-1;
    this->TextCtrl1->SetValue("��������ѡ�����");
}

void plainFrame::OnButton11Click(wxCommandEvent& event)
{
    if(condition!=0)
    {
        coutt(this,"\n�����������",2);
        return;
    }
    coutt(this,"����ɾ��(����7��Ҫ�޸ĵ��豸��������¼��(����1���޸ĺ���豸",2);
}
