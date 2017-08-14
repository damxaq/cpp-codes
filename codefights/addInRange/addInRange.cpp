long addInRange(long l, long u) {
    return (u++*u)/2-(l<0?(-l--*-l)/2:l>1?(l--*l)/2:0);
}

