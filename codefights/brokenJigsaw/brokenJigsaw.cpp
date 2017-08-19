int brokenJigsaw(auto p) {
    int o=p.size(), m=9, z, l=0, i=0, j;
    for (; i<o; i++){
        z=0;
        for (j=0; j<p[0].size(); j++) if (p[i][j]=='O') z++;
        l+=z;
        m=z<m?z:m;
    }
    return l-o*m;
}

