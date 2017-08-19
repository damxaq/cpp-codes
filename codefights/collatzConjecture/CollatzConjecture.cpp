std::string i, CollatzConjecture(int n) {
while (n>1){
    i+=std::to_string(n);
    n=n%2?3*n+1:n/2;
    i+=n>1?" ":"";
}
    return i;
}

