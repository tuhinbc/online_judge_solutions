#include <cstdio>
int p1(int max)
{
    int res;
        if(max<2) res=0;
        else if(max==	2	) res=	1	;
        else if(max<=	4	) res=	2	;
        else if(max<=	8	) res=	3	;
        else if(max<=	16	) res=	4	;
        else if(max<=	32	) res=	5	;
        else if(max<=	64	) res=	6	;
        else if(max<=	128	) res=	7	;
        else if(max<=	256	) res=	8	;
        else if(max<=	512	) res=	9	;
        else if(max<=	1024	) res=	10	;
        else if(max<=	2048	) res=	11	;
        else if(max<=	4096	) res=	12	;
        else if(max<=	8192	) res=	13	;
        else if(max<=	16384	) res=	14	;
        else if(max<=	32768	) res=	15	;
        else if(max<=	65536	) res=	16	;
        else if(max<=	131072	) res=	17	;
        else if(max<=	262144	) res=	18	;
        else if(max<=	524288	) res=	19	;
        else if(max<=	1048576	) res=	20	;
        else if(max<=	2097152	) res=	21	;
        else if(max<=	4194304	) res=	22	;
        else if(max<=	8388608	) res=	23	;
        else if(max<=	16777216	) res=	24	;
        else if(max<=	33554432	) res=	25	;
        else if(max<=	67108864	) res=	26	;
        else if(max<=	134217728	) res=	27	;
        else if(max<=	268435456	) res=	28	;
        else if(max<=	536870912	) res=	29	;
        else if(max<=	1073741824	) res=	30	;
        else if(max<=	2147483648	) res=	31	;
        else res =4294967296;
        return res;
}
int p2(int z)
{
    int steps;
    for(steps = z > 1; (z = (z + 1) >> 1) > 1; ++steps);
    return steps;
}
int main()
{
    int a,b,c;
    for(a=1;a<10000000;a++)
    {
        if(p1(a)!=p2(a)) printf("%d : %d %d\n",a,p1(a),p2(a));
    }
	return 0;
}
