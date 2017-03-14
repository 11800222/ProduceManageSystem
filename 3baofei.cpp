#include "main.h"
#include "PlainFrame.h"
bool baofei(first *head,int number,plainFrame *fr)
{
    if(bianli(head,3,number,fr)==NULL)
    {
        coutt(fr,"报废失败，没找到该设备号",2);
        return false;
    }
        return true;
}
