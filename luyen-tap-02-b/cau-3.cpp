bool is_prime(int n) {
    if ( n < 2 ) {
        return 0;
    }
    else {
        for ( int i = 2; i <= sqrt(n); i++) {
            if( n % i == 0) {
                return 0;
                break;
            }
        }
        return 1;
    }
}

void print_prime(int n){
    for ( int i = 0; i < n; i++) {
        if (is_prime(i)) {
            cout << i << endl;
        }
    }
}