#include "main.h"
#include "PlainFrame.h"
int totaldevice;
IMPLEMENT_APP(MyApp)
bool MyApp::OnInit()
{
   totaldevice=0;
    first *top;
    top=load();
    plainFrame *lainFrame = new plainFrame(NULL);
    lainFrame->Show(true);
    lainFrame->head=top;
    return true;
}
