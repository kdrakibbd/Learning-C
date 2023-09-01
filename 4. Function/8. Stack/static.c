#include <stdio.h>

void use_static()
{
    static int count = 1;
    printf("Main () calls use_static() %d\n", count);
    count++;
}

int main ()
{
    use_static();
    use_static();
    use_static();
    use_static();
    use_static();

    return 0;
}
