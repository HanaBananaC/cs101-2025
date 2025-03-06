#include <stdio.h>

int main() {
    FILE *fp;
    
    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};

    fp = fopen("a.bin", "wb");
    if (fp == NULL) {
        printf("檔案開啟失敗\n");
        return 1;
    }
    fwrite(a, sizeof(int), 3, fp);
    fwrite(b, sizeof(char), 3, fp);
    fwrite(c, sizeof(float), 3, fp);
    fclose(fp);

    int a_read[3];
    char b_read[4] = "";  // 字串結尾要多一個 '\0'
    float c_read[3];

    fp = fopen("a.bin", "rb");
    if (fp == NULL) {
        printf("檔案開啟失敗\n");
        return 1;
    }
    fread(a_read, sizeof(int), 3, fp);
    fread(b_read, sizeof(char), 3, fp);
    fread(c_read, sizeof(float), 3, fp);
    fclose(fp);

    // 輸出結果
    printf("讀取後的陣列內容：\n");

    printf("int 陣列: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", a_read[i]);
    }
    printf("\n");

    printf("char 陣列: %s\n", b_read);

    printf("float 陣列: ");
    for (int i = 0; i < 3; i++) {
        printf("%.6f ", c_read[i]);  // 保持精確輸出
    }
    printf("\n");

    return 0;
}
