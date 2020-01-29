
void xyz(int p1, int *p2)
{
    ++p1;
    ++*p2;
    printf("%d%d", p1, *p2);
}

void main()
{
    int a = 10;
    xyz(a++, &a);
    xyz(a++, &a);
    printf("%d", a);
}