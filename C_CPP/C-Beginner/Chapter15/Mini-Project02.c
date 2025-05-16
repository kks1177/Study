// Mini-Project02.c
// 사진 편집 툴 Ver 1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

void print_menu(); // 메뉴 출력

void equal();    // 이미지를 동일하게 만드는 함수
void negative(); // 이미지 반전 함수
void mirror1();  // 이미지 좌우 대칭 함수
void mirror2();  // 이미지 상하 대칭 함수

void loadImage();    // 입력 영상을 배열에 불러온다.
void displayImage(); // 결과 이미지를 모니터에 출력
void saveImage();    // 결과 이미지 저장

// 512x512 raw 이미지 파일
const char *fname = "C:\\temp\\bird.raw";

// 입력과 출력 이미지 배열
unsigned char inImage[512][512], outImage[512][512];

FILE *rfp, *wfp;
int i = 0, k = 0;

// 그래픽 출력을 위한 변수
HWND hwnd;
HDC hdc;

int main()
{
    char select = 0;

    // 그래픽 출력을 위한 준비
    hwnd = GetForegroundWindow();
    hdc = GetWindowDC(hwnd);

    // 파일을 불러온다.
    loadImage();

    while (select != 4)
    {
        print_menu();
        select = getche();

        switch (select)
        {
        case '0':
            equal();
            displayImage();
            break;
        case '1':
            negative();
            displayImage();
            break;
        case '2':
            mirror1();
            displayImage();
            break;
        case '3':
            mirror2();
            displayImage();
            break;
        case 'S':
        case 's':
            saveImage();
            displayImage();
            break;
        case 'X':
        case 'x':
            return 0;
        default:
            printf("\n 잘못 입력했어요. 다시 선택하세요 \n");
            displayImage();
        }
    }
    return 0;
}

// 입력 파일을 배열에서 읽는다.
void loadImage()
{
    rfp = fopen(fname, "rb");
    fread(inImage, sizeof(char), 512 * 512, rfp);
    fclose(rfp);
}

// 출력 배열의 내용을 모니터에 출력
void displayImage()
{
    int value = 0;
    system("cls");

    for (i = 0; i < 512; i++)
    {
        for (k = 0; k < 512; k++)
        {
            value = outImage[i][k];
            SetPixel(hdc, k + 50, i + 200, RGB(value, value, value));
        }
    }
}

// 사용자 선택을 위한 메뉴 출력
void print_menu()
{
    puts("\n ### 사진 편집 툴 Ver 1.0 ### \n");
    printf("0. 원본 영상 \n");
    printf("1. 영상 반전 \n");
    printf("2. 영상 좌우 대칭 \n");
    printf("3. 영상 상하 대칭 \n");
    printf("S. 결과 영상 저장 \n");
    printf("X. 끝내기 \n");
}

// 이미지를 동일하게 하는 함수
void equal()
{
    for (i = 0; i < 512; i++)
        for (k = 0; k < 512; k++)
            outImage[i][k] = 255 - inImage[i][k];
}

// 이미지 좌우 대칭시키는 함수
void mirror1()
{
    for (i = 0; i < 512; i++)
        for (k = 0; k < 512; k++)
            outImage[i][k] = inImage[i][511 - k];
}

// 이미지 상하 대칭시키는 함수
void mirror2()
{
    for (i = 0; i < 512; i++)
        for (k = 0; k < 512; k++)
            outImage[i][k] = inImage[511 - i][k];
}

// 결과 이미지를 저장하는 함수
void saveImage()
{
    wfp = fopen("C:\\temp\\result.raw", "wb");
    fwrite(outImage, sizeof(char), 512 * 512, wfp);
    fclose(wfp);

    MessageBoxW(hwnd, L"결과 영상이 <C:\\temp\\result.raw> 로 저장됨", L"출력창", NULL);
}