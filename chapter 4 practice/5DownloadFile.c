#include <stdio.h>

void main(void)
{
    float speed;
    float size;

    printf("Enter yoru expected download speed and size of the file: ");
    scanf("%f %f", &speed, &size);
    printf("At %.2f Mbit/s, a file of %.2f MB downloads in %.2f seconds.",
            speed, size, size / (speed / 8));
}