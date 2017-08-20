int maxDistance(int N, int K, int P) {
    N--;
    float w=0;
    while (N>=0){
        w+=fabs(((100/P)*K)/(2*N-1.0));
        N--;
    }
    return w;
}
