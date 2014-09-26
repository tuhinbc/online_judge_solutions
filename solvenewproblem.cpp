#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a;
    char n[100],infl[]=".in",mainfl[]=".cpp",tmp[100];
    FILE *fp;
    printf("Enter Problem number : ");
    gets(n);

    strcpy(tmp,n);
    strcat(tmp,mainfl);
    fp=fopen(tmp,"w");
    fprintf(fp,"#include<stdio.h>\n");
    fprintf(fp,"#include<iostream>\n");
    fprintf(fp,"#include<stdlib.h>\n");
    fprintf(fp,"#include<set>\n");
    fprintf(fp,"#include<map>\n");
    fprintf(fp,"#include<algorithm>\n");
    fprintf(fp,"#include<stack>\n");
    fprintf(fp,"#include<queue>\n");
//    fprintf(fp,"#include<>\n");
//    fprintf(fp,"#include<>\n");
//    fprintf(fp,"#include<>\n");
//    fprintf(fp,"#include<>\n");
//    fprintf(fp,"#include<>\n");
//    fprintf(fp,"#include<>\n");
//    fprintf(fp,"#include<>\n");
//    fprintf(fp,"#include<>\n");
    fprintf(fp,"using namespace std;\n");
    fprintf(fp,"int main()\n{\n");
    fprintf(fp,"    #ifdef tuhin\n");
    fprintf(fp,"    freopen(\"%d.in\",\"r\",stdin);\n",atoi(n));
    fprintf(fp,"    #endif\n");
    fprintf(fp,"    return 0;\n");
    fprintf(fp,"}");
    fclose(fp);
    system(tmp);



    strcpy(tmp,n);
    strcat(tmp,infl);
    fp=fopen(tmp,"w");
    fclose(fp);
    system(tmp);


    return 0;
}
