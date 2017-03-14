#include "main.h"
#include "PlainFrame.h"
bool save(first *head,plainFrame *fr)
{
    first *temp1=head;
    FILE *fp1,*fp2,*fp3;
    remove(filename[0]);
    remove(filename[1]);
    remove(filename[2]);
    if((fp1=fopen(filename[0],"a"))==NULL)coutt(fr,"打开文件失败",2);
    if((fp2=fopen(filename[1],"a"))==NULL)coutt(fr,"打开文件失败",2);
    if((fp3=fopen(filename[2],"a"))==NULL)coutt(fr,"打开文件失败",2);
    while(1)
    {
        if(temp1==NULL||temp1->pdata==NULL)break;
        fwrite(temp1->pdata,sizeof(production),1,fp1);
        first *temp2=temp1->deep;
        while(1)
        {
            if(temp2==NULL||temp2->tdata==NULL)break;
            fwrite(temp2->tdata,sizeof(type),1,fp2);
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
                    fwrite(temp3->ddata,sizeof(device),1,fp3);
                }
                temp3=temp3->next;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return true;
}
