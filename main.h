#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <wx/wx.h>
#include<stdlib.h>
using namespace std;
class MyApp : public wxApp
{
  public:
    virtual bool OnInit();
};
extern int totaldevice;

#endif // MAIN_H_INCLUDED
