// integer tambah/function yang memliki nilai kembalian

int tambah()
{
    return 2 + 3;
}

int tambah(int a, int b)
{
    return a + b;
}
int kurang(int a, int b)
{
    return a - b;
}
int kali(int a, int b)
{
    return a * b;
}
float bagi(int a, int b)
{
    return a / b;
    // return (float)a / (float)b;(//!deprecated(kuno))( *type  casting)
    return static_cast<float>(a) / static_cast<float>(b);
}
// produre== fungsi yang tidak memiliki nilai kembalian
