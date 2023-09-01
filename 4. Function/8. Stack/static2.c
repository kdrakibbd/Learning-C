#include <stdio.h>

void use_static(void)
{
    static int count = 1;

    printf("Count = %d\n", count);

    count += 2;
}

int main ()
{
    use_static();
    use_static();
    use_static();
    use_static();
    use_static();
    use_static();
    use_static();

    return 0;
}
