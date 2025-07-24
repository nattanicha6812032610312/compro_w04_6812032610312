#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate() {
     const int LOCAL_BONUS = 50;

     printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
     printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);
    
    // Try to print >> LOCAL_BONUS in main >> DISCUSS the result
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);
     return 0;
}
/*1. ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?
   - GLOBAL_RATE เป็นค่าคงที่ระดับ global ใช้งานได้จากทุกฟังก์ชันในโปรแกรม
   - LOCAL_BONUS เป็นค่าคงที่ระดับ local ใช้ได้เฉพาะในฟังก์ชัน calculate()

  2. เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80; ?
   - โปรแกรมจะเกิด compile-time error เพราะค่าคงที่ (const) ไม่สามารถเปลี่ยนค่าได้หลังจากประกาศแล้ว

  3. ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้?
   - เพราะ LOCAL_BONUS ถูกประกาศเป็น local ในฟังก์ชัน calculate() และมี scope อยู่แค่ในฟังก์ชันนั้น

  4. อธิบาย และแสดงการทดลอง:
   - ถ้า uncomment บรรทัด `printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);`
     โปรแกรมจะ compile ไม่ผ่าน และแสดง error ว่า LOCAL_BONUS ไม่ถูกประกาศใน main()
*/