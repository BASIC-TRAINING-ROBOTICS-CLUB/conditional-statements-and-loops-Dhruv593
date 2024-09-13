#include <stdio.h>

struct id{
    int en_no;
    float cpi;
    float spi;
};

int main() {
    struct id lad;
    struct id dvd;

    lad.en_no = 211460;
    lad.cpi = 9.7;
    lad.spi = 9.9;

    printf("Dhruv Lad \n");
    printf("Enrollment no. : %d \n", lad.en_no);
    printf("CPI : %.1f \n", lad.cpi);
    printf("SPI : %.1f \n\n", lad.spi);

    dvd.en_no = 211234;
    dvd.cpi = 9.3;
    dvd.spi = 9.4;

    printf("Dhruv Daherawala \n");
    printf("Enrollment no. : %d \n", dvd.en_no);
    printf("CPI : %.1f \n", dvd.cpi);
    printf("SPI : %.1f \n", dvd.spi);
}