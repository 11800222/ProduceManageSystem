#include "main.h"
#include "PlainFrame.h"
bool classify(first *head,production *pro,type* typ,plainFrame *fr)
{
    char st[20];
    int jh=0;
    bool proflag=false,typflag=false;
    first *temp1=head;
    while(1)
    {
        if(temp1==NULL||temp1->pdata==NULL)break;
        if(strcmp(temp1->pdata->name,pro->name)!=0)
        {
            temp1=temp1->next;
            continue;
        }
        proflag=true;
        first *temp2=temp1->deep;
        // cout<<"\nin production "<<temp1->pdata->name<<":"<<endl;
        while(1)
        {
            if(temp2==NULL||temp2->tdata==NULL)break;
            if((typ!=NULL)&&(strcmp(temp2->tdata->name,typ->name)!=0))
            {
                temp2=temp2->next;
                continue;
            }
            first *temp3=temp2->deep;
            typflag=true;
            int uu=temp2->son;
            //  cout<<"in type "<<temp2->tdata->name<<":"<<endl;
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
                temp3=temp3->next;
            }
            coutt(fr,"}",2);
            jh=0;
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    if(proflag==false)
    {
        coutt(fr,"没找到该生产厂家",2);
        return false;
    }
    else if(typflag==false)
    {
       coutt(fr,"没找到该设备类型",2);
        return false;
    }
    return true;
}
