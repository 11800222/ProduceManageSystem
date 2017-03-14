#ifndef PLAINFRAME_H
#define PLAINFRAME_H

//(*Headers(plainFrame)
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)
#define MAXP 20
#define MAXT 20
#define MAXD 20
#include<algorithm>
typedef struct production
{
    int road[3];
  char name[20];
    production()=default;
    production(int a,char *da)
    {
        road[0]=a;
        road[1]=-1;
        road[2]=-1;
        strcpy(name,da);
    };
}*pptr;
typedef struct type
{
    int road[3];
    char name[20];
    type()=default;
    type(int a,int b,char *da)
    {
        road[0]=a;
        road[1]=b;
        road[2]=-1;
        strcpy(name,da);
    };
}*tptr;
typedef struct device
{
    int road[3];
    char production[20];
    char type[20];
    char name[20];
    int number;
    int price;
    int year;
    bool disable=false;
    int ruintime;
    bool operator <(const device &a)const
    {
        return price<a.price;
    }
    device()=default;
    device(int a,int b,int c)
    {
        road[0]=a;
        road[1]=b;
        road[2]=c;
    };
}*dptr;
struct first
{
    int grade;
    int son;
    pptr pdata;
    tptr tdata;
    dptr ddata;
    first *next;
    first *deep;
    first()=default;
};
class plainFrame: public wxFrame
{
public:
    first *head;
    int condition=0;
    int  defaultinsert=-1;
    production *pro;
    type *typ;
    device *dev;
    int devicenumber;
    plainFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~plainFrame();
    //(*Declarations(plainFrame)
    wxButton* Button4;
    wxButton* Button1;
    wxPanel* Panel1;
    wxButton* Button2;
    wxButton* Button6;
    wxButton* Button10;
    wxButton* Button11;
    wxButton* Button5;
    wxButton* Button3;
    wxButton* Button9;
    wxTextCtrl* TextCtrl2;
    wxTextCtrl* TextCtrl1;
    wxButton* Button13;
    wxButton* Button8;
    wxButton* Button12;
    //*)

protected:

    //(*Identifiers(plainFrame)
    static const long ID_BUTTON2;
    static const long ID_TEXTCTRL1;
    static const long ID_BUTTON3;
    static const long ID_BUTTON4;
    static const long ID_BUTTON5;
    static const long ID_BUTTON6;
    static const long ID_BUTTON8;
    static const long ID_BUTTON9;
    static const long ID_BUTTON10;
    static const long ID_BUTTON11;
    static const long ID_BUTTON12;
    static const long ID_BUTTON13;
    static const long ID_TEXTCTRL2;
    static const long ID_BUTTON1;
    static const long ID_PANEL1;
    //*)

private:

    //(*Handlers(plainFrame)
    void OnButton2Click(wxCommandEvent& event);
    void OnButton1Click(wxCommandEvent& event);
    void OnTextCtrl1Text(wxCommandEvent& event);
    void OnTextCtrl1TextEnter(wxCommandEvent& event);
    void OnTextCtrl1Text1(wxCommandEvent& event);
    void OnButton3Click(wxCommandEvent& event);
    void OnTextCtrl2Text(wxCommandEvent& event);
    void OnButton13Click(wxCommandEvent& event);
    void OnButton5Click(wxCommandEvent& event);
    void OnTextCtrl1Text2(wxCommandEvent& event);
    void OnTextCtrl1Text3(wxCommandEvent& event);
    void OnButton6Click(wxCommandEvent& event);
    void OnButton12Click(wxCommandEvent& event);
    void OnButton7Click(wxCommandEvent& event);
    void OnButton9Click(wxCommandEvent& event);
    void OnButton1Click1(wxCommandEvent& event);
    void OnButton8Click(wxCommandEvent& event);
    void OnButton10Click(wxCommandEvent& event);
    void OnButton4Click(wxCommandEvent& event);
    void OnButton11Click(wxCommandEvent& event);
    //*)

    DECLARE_EVENT_TABLE()
};
  void coutt(plainFrame *fr,char *a,int i);

const char filename[3][100]= {"production","type","device"};

first * load();
first* locat(first* head,int a,int b,int c);
first *bianli(first *head,int FN,int number,plainFrame *fr);
first* finddevice(first *head,int number,plainFrame *fr);
first *insertproduction(first *head,production *target);
first *inserttype(first *pro,type *target);
bool insertdevice(first *typ,device *target);
bool fininsert(first *head,device *target,plainFrame *fr);
bool baofei(first *head,int number,plainFrame *fr);
void initfirst(first *dd,int g);
void display(first *head,plainFrame *fr);
bool deletedevice(first *head,int number,plainFrame *fr);
bool sortdevice(first *head,plainFrame *fr);
bool classify(first *head,production *pro,type* typ,plainFrame *fr);
bool save(first *head,plainFrame *fr);
void copydevice(device *source,device *des);
bool change(first *head,plainFrame *fr);
int menu_select();
device* inputdevice();
bool inclassify(first *top);
#define cp(d) do{\
    d=(production*)malloc(sizeof(production));\
    if(d==NULL)cout<<"malloc failed";\
}while(0)

#define ct(d) do{\
    d=(type*)malloc(sizeof(type));\
    if(d==NULL)cout<<"malloc failed";\
}while(0)

#define cd(d) do{\
    d=(device*)malloc(sizeof(device));\
    if(d==NULL)cout<<"malloc failed";\
}while(0)
#endif
