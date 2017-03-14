#include "main.h"
#include "PlainFrame.h"
first *bianli(first *head,int FN,int number,plainFrame *fr)
{
    char st[20];
    int jh=0;
    first *temp1=head;
    device *second;
    first *bao=(first*)malloc(sizeof(first));
    int jj=0;
    if(FN==5)
    {
        second=(device*)malloc(totaldevice*sizeof(device));
        bao->ddata=second;
    }
    while(1)
    {
        if(temp1==NULL||temp1->pdata==NULL)break;
      first *temp2=temp1->deep;
        while(1)
        {
            if(temp2==NULL||temp2->tdata==NULL)break;
         first *temp3=temp2->deep;
            int uu=temp2->son;
            while(uu!=0)
            {
                if(temp3==NULL)
                {
                    break;
                }
                if(temp3->ddata==NULL)
                {
                    temp3=temp3->next;
                    continue;
                }
                else
                {
                    --uu;
                    if(FN==9||FN==5)
                    {
                        if(FN==5)
                            second[jj++]=*(temp3->ddata);
                        else
                        {
                            if(jh==0)
                            {
                                coutt(fr,temp3->ddata->production,1);
                                coutt(fr,temp3->ddata->type,1);
                                coutt(fr,"{",1);
                                ++jh;
                            }
                            itoa(temp3->ddata->number,st,10);
                            coutt(fr,st,1);
                        }
                    }
                    if(temp3->ddata->number==number)
                    {
                        if(FN==7)
                        {
                            free(temp3->ddata);
                            temp3->ddata=NULL;
                            return temp2;
                        }
                        if(FN==4)return temp3;
                        if(FN==3)
                        {
                            temp3->ddata->disable=true;
                            return temp3;
                        }
                    }
                }
                temp3=temp3->next;
            }
            if(FN==9&&jh!=0)
            coutt(fr,"}",2);
            jh=0;
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    if(FN==5)return bao;
    return NULL;
}
