void rFilter(char *s) {
    int length = strlen(s);
    int kytucuoi = -1;

    for (int i = 0; i < length; ++i) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            kytucuoi = i;
        }
    }
    for (int i = kytucuoi + 1; i < length; ++i) {
        s[i] = '_';
    }
}