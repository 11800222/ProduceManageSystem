#include "main.h"
#include "PlainFrame.h"
void copydevice(device *source,device *des)
{
strcpy(des->production,source->production);
strcpy(des->type,source->type);
strcpy(des->name,source->name);
des->number=source->number;
des->price=source->price;
des->year=source->year;
des->disable=source->disable;
des->ruintime=source->ruintime;
}
first *insertproduction(first *head,production *target)//find production in first grade,not found return NULL
{
    int pos=0;
    first *tt=head;
    while(tt->pdata!=NULL)
    {
        ++pos;
        if(strcmp(tt->pdata->name,target->name)==0)
            return tt;
        tt=tt->next;
        if(tt==NULL)return NULL;
    }
    target->road[0]=pos;
    target->road[1]=-1;
    target->road[2]=-1;
    tt->pdata=target;
    return tt;
}
first *inserttype(first *pro,type *target)//find type in second grade,not found return NULL
{
    int pos=0;
    first *tt=pro->deep;
    while(tt->tdata!=NULL)
    {
        ++pos;
        if(strcmp(tt->tdata->name,target->name)==0)
            return tt;
        tt=tt->next;
        if(tt==NULL)return NULL;
    }
    target->road[0]=pro->pdata->road[0];
    target->road[1]=pos;
    target->road[2]=-1;
    tt->tdata=target;
    ++pro->son;
    return tt;
}
bool insertdevice(first *typ,device *target)//find device in third grade,full return false
{
    int pos=0;
    first *tt=typ->deep;
    while(tt->ddata!=NULL)
    {
        ++pos;
        tt=tt->next;
        if(tt==NULL)return false;
    }
    target->road[0]=typ->tdata->road[0];
    target->road[1]=typ->tdata->road[1];
    target->road[2]=pos;
    tt->ddata=target;
    ++typ->son;
    ++totaldevice;
    return true;
}
bool fininsert(first *head,device *target,plainFrame *fr)
{
    if(bianli(head,4,target->number,fr)!=NULL)
    {
        cout<<"the decvice "<<target->number<<" has been in existence!"<<endl;
        return false;
    }
    production *proo;
    cp(proo);
    strcpy(proo->name,target->production);
    first *pro=insertproduction(head,proo);
    if(pro==NULL)
    {
        cout<<"production is full"<<endl;
        return false;
    }
    type *typp;
    ct(typp);
    strcpy(typp->name,target->type);
    first *typ=inserttype(pro,typp);
    if(typ==NULL)
    {
        cout<<"type is full"<<endl;
        return false;
    }
    if(insertdevice(typ,target)==false)
    {
        cout<<"device is full"<<endl;
        return false;
    }
    return true;
}

