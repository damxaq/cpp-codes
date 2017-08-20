#define q std::vector<
bool TicTacToe(q q char>> b) {
    int x=0,o=0;
    for (int i=0; i<3; i++)
        for (int l=0; l<3; l++){
            if (b[i][l]=='x') x++;
            if (b[i][l]=='o') o++;
        }
    if  (o>x || x>o+1) return 0;
    return 1;
}

