string decimal_to_binary(long number)
{
    int x[100];
    int dem = 0;
    string result;
    if( number == 0) {
        result = "0";
    }
    while (number) {
        x[dem] = number % 2;
        number /= 2;
        dem++;
    }
    for (int i = dem - 1; i >= 0; i--) {
        result += to_string(x[i]);
        
    }
    return result;
}