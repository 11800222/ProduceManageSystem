#include "main.h"
#include "PlainFrame.h"
first* finddevice(first *head,int number,plainFrame *fr)
{
    first *ans=bianli(head,4,number,fr);
    if(ans==NULL)
        coutt(fr,"查询失败，没找到该设备号",2);
    return ans;
}
