#include <stdio.h>

void countCall() {   //ประกาศตัวแปรแบบ static ซึ่งจะเก็บค่าคงไว้ระหว่างการเรียกฟังก์ชันแต่ละครั้ง
    static int counter = 0;
    counter++;  //แสดงค่าของ counter ซึ่งจะเพิ่มขึ้นทุกครั้งที่เรียกฟังก์ชัน
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();   // ครั้งที่ 1 => counter = 1
    printf("After first call:\n");
    countCall();   // ครั้งที่ 2 => counter = 2
    return 0;
}