#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct class1
    {
        char name[20];
        char subject[11][30];
        int suballo[11];
        int te[100];
        int subno;
        int p;
        int allo;
    };
    struct class1 c[50];

    struct teach
    {
        char name[20];
        int sub[11];
        int clas[11];
        int subno;
        int p;
        int allo;
    };
    struct teach t[100];
    struct pd
    {
        struct
        {
            int clp;
            int tep;
            int subp;
        } ro[70];
    } pr[9];

    int roomno, alloroom[10], teachno, classno, i, j, l, r;
    int listsub[700], listclass[700], z = 0, temp = 1;
    int zc[50], temp1, temp2, temp3, cl, period = 9, subject1, flag, tred[100];
    float cavg[50], tavg[100];
    int k, m, ii, nn, oo;

    for (i = 1; i < 100; i++)
    {
        printf("\n\n\\n\n\n\Enter the class name,Leave blank to quit from this form");
        gets(c[i].name);

        l = strlen(c[i].name);
        if (l == 0)
        {
            printf("\n\n\You choose to quit");

            break;
        }

        for (j = 1; j < 10; j++)
        {
            printf("\n\n\n\enter the subject name of this class,Leave blank to quit from this form");
            gets(c[i].subject[j]);
            l = strlen(c[i].subject[j]);
            if (l == 0)
            {
                printf("\n\n\nYou choose to quit");

                break;
            }
            c[i].subno = j + 1;
            classno = i + 1;
        }
    }
    printf("\n\n\n\nEnter the total number of roomno and teacher");
    scanf("%d %d", &roomno, &teachno);

    z = 0;
    for (i = 1; i < classno; i++)
    {
        for (j = 1; j < c[i].subno; j++)
        {
            z = z + 1;
            listsub[z] = j;
            listclass[z] = i;
        }
    }
re:
    k = z / teachno;
    m = z % teachno;
    if (k < 1)
    {

        printf(" totle subjects is less then total teachers plz renter the teacher no");
        scanf("%d", &teachno);
        goto re;
    }
    if (z / 9 < 1)
    {

        printf("no of rooms is less then requirement plz renter no of rooms ");
        scanf("%d", &roomno);
        goto re;
    }

    for (i = 1; i <= teachno; i++)
    {
        printf("\n\n\n enter the name of teacher");

        scanf("%s", &t[i].name);
        temp = 1;
        if (m < i)
        {
            temp = 0;
        }

        temp = temp + k;

        printf("\n\nchose subject  %d   ", temp);

        for (j = 1; j <= temp; j++)
        {
        cc:
            printf("\n\n\n");

            for (ii = 1; ii <= z; ii++)
            {
                nn = listsub[ii];
                oo = listclass[ii];
                printf("\t %d     %s", ii, c[oo].subject[nn]);
            }

            printf("\n\nEnter %d  subject  no. ", j);
            scanf("%d", &temp1);

            if (temp1 > z)
            {
                printf("\n\nenter rong choice");
                goto cc;
            }

            temp3 = t[i].sub[j] = listsub[temp1];
            temp2 = t[i].clas[j] = listclass[temp1];

            c[temp2].te[temp3] = i;

            z = z - 1;

            for (ii = temp1; ii <= z; ii++)
            {
                listsub[ii] = listsub[ii + 1];
                listclass[ii] = listclass[ii + 1];
            }
        }
        t[i].subno = j;
    }

    //---------------------------------process-----------------------------------------------------
    cavg[0] = 0;
    tavg[0] = 0;
    for (i = 1; i < classno; i++)

    {
        c[i].p = c[i].subno;
        c[i].allo = 0;
        for (j = 1; j <= 9; j++)
        {
            c[i].suballo[j] = 0;
        }
    }
    for (i = 1; i <= teachno; i++)
    {
        t[i].p = t[i].subno;
        t[i].allo = 0;
    }

    for (l = 1; l <= period; l++)
    {
        //avg();
        for (i = 1; i < classno; i++)
        {
            cavg[i] = (c[i].p * 100) / period;
        }
        for (i = 1; i <= teachno; i++)
        {
            tavg[i] = (t[i].p * 100) / period;
            if (tavg[i] == 100)
            {
                tred[i] = 1;
                flag = 2;
            }
            else
            {
                tred[i] = 0;
            }
        }

        for (r = 1; r <= roomno; r++)
        {

            //-------------------------------------------
            if (flag == 2)
            {
                temp2 = -99;
                for (i = 1; i <= teachno; i++)
                {
                    if (tred[i] == 1)
                    {
                        if (t[i].allo < l)
                        {
                            temp2 = i;
                            temp1 = 0;
                            for (j = 1; j < t[temp2].subno; j++)
                            {
                                temp3 = t[temp2].clas[j];
                                if (cavg[temp3] > cavg[temp1] && c[temp3].allo < l)
                                {
                                    temp1 = i;
                                    subject1 = t[temp2].sub[j];
                                }
                            }
                            if (temp1 == 0)
                            {
                                printf(" create a problem related with this teacher %s   plz change the data ", &t[temp2].name);
                                exit(0);
                            }
                            else
                            {
                                goto al;
                            }
                        }
                    }
                }
                if (temp2 == -99)
                {
                    goto vv;
                }
            }

        //------------------------------------------------
        vv:
            temp1 = 0;
            for (i = 1; i <= classno; i++)
            {
                if (c[i].allo < l && c[i].p > 1)
                {
                    if (cavg[i] > cavg[temp1])
                    {
                        temp1 = i;
                    }
                }
            }
            if (temp1 > 0)
            {
                c[temp1].allo = 1;
                temp2 = 0;
                subject1 = 0;
                for (j = 1; j < c[temp1].subno; j++)
                {

                    if (c[temp1].suballo[j] == 0)
                    {
                        cl = c[temp1].te[j];

                        if (t[cl].allo < l)
                        {
                            if (tavg[cl] > tavg[temp2])
                            {
                                temp2 = cl;
                                subject1 = j;
                            }
                        }
                    }
                }
            }
            else
            {
                break;
            }
            if (temp2 == 0)
            {
                goto vv;
            }
            //------------------------------allocation----------------------------------
        al:
            pr[l].ro[r].clp = temp1;
            pr[l].ro[r].tep = temp2;
            pr[l].ro[r].subp = subject1;
            c[temp1].p = c[temp1].p - 1;
            t[temp2].p = t[temp2].p - 1;
            c[temp1].allo = l;
            t[temp2].allo = l;
            c[temp1].suballo[subject1] = 1;
        }
    }
    printf("\n\n\n\n\n\\n\n\n\n\n\n \t\t according to period");
    for (l = 1; l <= period; l++)
    {
        printf("\n\n\n\n\t\t data of %d period", l);
        for (r = 1; r <= roomno; r++)
        {
            printf("\n\n\t data of %d room\n", r);
            temp1 = pr[l].ro[r].clp;
            temp2 = pr[l].ro[r].subp;
            temp3 = pr[l].ro[r].tep;
            printf("class name is %s", c[temp1].name);
            printf("\nteacher name is %s", t[temp3].name);
            printf("\nsubject name is %s", c[temp1].subject[temp2]);
        }
    }
}