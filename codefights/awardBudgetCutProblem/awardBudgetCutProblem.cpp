#define q for (i=0; i<g.size(); i++)
int s=0,c,t=1,i, awardBudgetCutProblem(auto g, int b) {
    c=b;
    while (1){
        q if (g[i]>c) g[i]=c;
        q s+=g[i];
        if (s<=b) return t?-1:c;
        t=0;
        c--;
        s=0;
    }
}

