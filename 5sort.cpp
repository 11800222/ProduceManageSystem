#include "main.h"
#include "PlainFrame.h"
bool sortdevice(first *head,plainFrame *fr)
{
    first *lis=bianli(head,5,-1,fr);
    if(lis==NULL)
    {
        coutt(fr,"并没有设备",2);
        return false;
    }
    else
    {
        device *rlis=lis->ddata;
        sort(rlis,rlis+totaldevice);
        char k[20];
          coutt(fr,"设备号-价格:",2);
        for(int i=0; i<totaldevice; ++i)
            {
                itoa(rlis[i].number,k,10);
                  coutt(fr,k,1);
                itoa(rlis[i].price,k,10);
                coutt(fr,k,2);
            }
            coutt(fr," ",2);
    }
    return true;
}
