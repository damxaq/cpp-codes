int CocaMinion(int d, int p, int g, int c) {
    return p>g?g*c>d?d/g:(d-g*c)/p+c:d/p;
}

