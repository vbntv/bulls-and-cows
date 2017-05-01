void main()
{
srand(time(NULL));
int a, b, c, d;


a = 0 + rand() % 9;

do
{
b = 0 + rand() % 9;
} while (b == a);

do
{
c = 0 + rand() % 9;
} while (c == a || c == b);

do
{
d = 0 + rand() % 9;
} while (d == a || d == b || d == c);


int ch = 0, u, x, y, z;
int bu = 0, co = 0;
printf("Rand ch %d\n", a * 1000 + b * 100 + c * 10 + d);
while (ch != (a * 1000 + b * 100 + c * 10 + d))
{
printf("Vvedite chetyrehznachnoe chislo = ");
scanf("%d", &ch); 
printf("\n");
u = ch / 1000;
x = ch / 100 % 10;
y = ch / 10 % 10;
z = ch % 10;

if (u == a)
bu++;
if (x == b)
bu++;
if (y == c)
bu++;
if (z == d)
bu++;

if (u == b || u == c || u == d)
co++;
if (x == a || x == c || x == d)
co++;
if (y == b || y == a || y == d)
co++;
if (z == b || z == c || z == a)
co++;

printf("%d bull\n", bu);
printf("%d corova\n", co);
printf("\n");
printf("\n");
co = 0;
bu = 0;
}



_getch();
}
