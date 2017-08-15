int g,TicTacToMidnight(auto t) {
    g=10*(t[0]*60+t[1]*6+t[3])+t[4]-32208;
    return g?1440-g:0;
}

