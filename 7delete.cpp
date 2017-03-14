#include "main.h"
#include "PlainFrame.h"
bool deletedevice(first *head,int number,plainFrame *fr)
{
    first *target=bianli(head,7,number,fr);
    if(target==NULL)
    {
        coutt(fr,"删除失败，没找到该设备号",2);
        return false;
    }
    --(target->son);
    --totaldevice;
    return true;
}
