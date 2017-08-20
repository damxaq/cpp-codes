#define q std::vector<
q q int>> MatrixMultiplication(q q int>> A, q q int>> B) {
    q q int>> r;
    q int> h;
    int w;
    for (int i=0; i<3; i++){
        h.clear();
        for (int l=0; l<3; l++){
            w=0;
            for (int j=0; j<3; j++) w+=A[i][j]*B[j][l];
            h.push_back(w);
        }
        r.push_back(h);
    }
    return r;
}

