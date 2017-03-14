#include "main.h"
#include "PlainFrame.h"
void initfirst(first *dd,int g)
{
    dd->grade=g;
    dd->son=0;
    dd->pdata=NULL;
    dd->tdata=NULL;
    dd->ddata=NULL;
    dd->next=NULL;
    dd->deep=NULL;
}
first* locat(first* head,int a,int b,int c)
{
    first *pos=head;
    for(int i=0; i<a; ++i)
    {
        pos=pos->next;
    }
    for(int j=0; j<=b; ++j)
    {
        if(j==0)
            pos=pos->deep;
        else pos=pos->next;
    }
    for(int k=0; k<=c; ++k)
    {
        if(k==0)pos=pos->deep;
        else pos=pos->next;
    }
    return pos;
}
first * load()
{
    first *head;
    int pamount=0, tamount=0,damount=0;
    first *mid,*mid2,*mid3;
    for(int i=0; i<MAXP; ++i)
    {
        first* zhi=(first*)malloc(sizeof(first));
        initfirst(zhi,1);
        if(zhi==NULL)cout<<"fail";
        if(i!=0)
        {
            mid->next=zhi;
            mid=zhi;
        }
        else
        {
            mid=zhi;
            head=mid;
        }
        for(int j=0; j<MAXT; ++j)
        {
            first* zhi2=(first*)malloc(sizeof(first));
            initfirst(zhi2,2);
            if(zhi2==NULL)cout<<"fail";
            if(j!=0)
            {
                mid2->next=zhi2;
                mid2=zhi2;
            }
            else
            {
                mid2=zhi2;
                mid->deep=mid2;
            }
            for(int k=0; k<MAXD; ++k)
            {
                first* zhi3=(first*)malloc(sizeof(first));
                initfirst(zhi3,3);
                if(zhi3==NULL)cout<<"fail";
                if(k!=0)
                {
                    mid3->next=zhi3;
                    mid3=zhi3;
                }
                else
                {
                    mid3=zhi3;
                    mid2->deep=mid3;
                }
            }
        }
    }
    FILE *fp;
    first *frige;
    for(int i=0; i<3; ++i)
    {
        if((fp=fopen(filename[i],"r"))==NULL)
        {
            cout<<"there is no file"<<endl;
            break;
        }
        switch(i)
        {
        case 0:
        {
            production *d;

            while(!feof(fp))
            {
                cp(d);
                if(1!=fread(d,sizeof(production),1,fp))break;
                frige=locat(head,d->road[0],d->road[1],d->road[2]);
                frige->pdata=d;
            }
            break;
        }
        case 1:
        {
            type *d;

            while(!feof(fp))
            {
                ct(d);
                if(1!=fread(d,sizeof(type),1,fp))break;
                frige=locat(head,d->road[0],-1,-1);
                ++(frige->son);
                frige=locat(head,d->road[0],d->road[1],d->road[2]);
                frige->tdata=d;
            }
            break;
        }
        case 2:
        {

            device *d;
            while(!feof(fp))
            {
                cd(d);
                if(1!=fread(d,sizeof(device),1,fp))break;
                frige=locat(head,d->road[0],d->road[1],-1);
                ++(frige->son);
                ++totaldevice;
                frige=locat(head,d->road[0],d->road[1],d->road[2]);
                frige->ddata=d;
            }
            break;
        }
        }
        fclose(fp);
    }

    return head;
}
