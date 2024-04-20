#ifndef __CEDCOMMON_H__
#define __CEDCOMMON_H__

int mode;
bool select = true;

void commonh()
{
    if (mode)
    {
        mode = 3;
    }
    else
    {
        mode = 2;
    }
    select = false;
}

#endif