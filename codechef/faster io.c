#define gc getchar_unlocked
long int readint() {
	long int n = 0;
	long int ch = gc();
	while (ch < '0' || ch > '9') ch = gc();
	while (ch >= '0' && ch <= '9') {
		n = (n << 3) + (n << 1) + (ch - '0');
		ch = gc();
	}
	return n;
}
