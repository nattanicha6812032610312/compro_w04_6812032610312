#include <stdio.h>    // ใช้สำหรับ printf

int main() {  
    //ประกาศตัวแปร
    char nameInitial = 'N';         // ตัวอักษรแรกของชื่อ
    int age = 18;                   // อายุเป็นจำนวนเต็ม
    float weight = 40.8;            // น้ำหนักแบบทศนิยม
    char gender[] = "Female";       // เพศ ใช้เป็นข้อความ

    //แสดงผลลัพธ์
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);         // %.1f แสดงทศนิยม 1 ตำแหน่ง
    printf("gender = %s\n", gender);

    return 0;
}