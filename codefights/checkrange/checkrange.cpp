#define q int
q checkrange(std::vector<q> A, q a, q b) {
    q r=0;
    for(q i=0; i<A.size(); i++) if (A[i]>=a && A[i]<=b) r++;
    return r;

}

