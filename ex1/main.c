#include <stdio.h>

int main() {
    FILE *fp;
    
    int arr_writea[3] = {0, 1, 2};
    char arr_writeb[3] = {'A', 'B', 'C'};
    float arr_writec[3] = {1.1, 1.2, 1.3};

    int arr_reada[3];
    char arr_readb[3];
    float arr_readc[3];

    fp = fopen("a.bin", "wb+");
    
    fwrite(arr_writea, sizeof(arr_writea), 3, fp);
    fwrite(arr_writeb, sizeof(arr_writeb), 3, fp);
    fwrite(arr_writec, sizeof(arr_writec), 3, fp);

    fseek(fp, 0, SEEK_SET);

    fread(arr_reada, sizeof(arr_reada), 3, fp);
    fread(arr_readb, sizeof(arr_readb), 3, fp);
    fread(arr_readc, sizeof(arr_readc), 3, fp);

    for (int i = 0; i < 3; i++) {
        printf("%d ", arr_reada[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%c ", arr_readb[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%.6f ", arr_readc[i]);
    }
    printf("\n");

    return 0;
}