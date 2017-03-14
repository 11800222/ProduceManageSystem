#include "main.h"
#include "PlainFrame.h"
void coutt(plainFrame *fr,char *a,int i){
    wxString da=wxString(a);
        fr->TextCtrl2->AppendText(a);
        if(i==1)
        fr->TextCtrl2->AppendText(wxT("    "));
        else
        fr->TextCtrl2->AppendText(wxT("\n"));
}
