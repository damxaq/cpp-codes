#define q : return m/d
#define w case
int ThreeInOne(std::vector<int> a, char o, int s) {
    int m=0,i=0,d=a.size();
    while (i<d) m+=a[i++];
    switch(o){
        w '+' q +s;
        w '-' q -s;
        w '*' q *s;
        w '/' q /s;        
    }
}

