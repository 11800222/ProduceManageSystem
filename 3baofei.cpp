#include "main.h"
#include "PlainFrame.h"
bool baofei(first *head,int number,plainFrame *fr)
{
    if(bianli(head,3,number,fr)==NULL)
    {
        coutt(fr,"����ʧ�ܣ�û�ҵ����豸��",2);
        return false;
    }
        return true;
}
