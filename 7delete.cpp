#include "main.h"
#include "PlainFrame.h"
bool deletedevice(first *head,int number,plainFrame *fr)
{
    first *target=bianli(head,7,number,fr);
    if(target==NULL)
    {
        coutt(fr,"ɾ��ʧ�ܣ�û�ҵ����豸��",2);
        return false;
    }
    --(target->son);
    --totaldevice;
    return true;
}
