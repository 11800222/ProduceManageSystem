#include "main.h"
#include "PlainFrame.h"
first* finddevice(first *head,int number,plainFrame *fr)
{
    first *ans=bianli(head,4,number,fr);
    if(ans==NULL)
        coutt(fr,"��ѯʧ�ܣ�û�ҵ����豸��",2);
    return ans;
}
