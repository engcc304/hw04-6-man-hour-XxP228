/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/
#include <stdio.h>
void printfcomma(int n) {
    if (n < 0) {
        printf("-");
        printfcomma(-n);
        return;
    }
    if (n < 1000) {
        printf("%d", n);
        return;
    }
    printfcomma(n / 1000);
    printf(",%03d", n % 1000);
}

int main() {
    char Employees_ID[11];
    int working_hrs = 0;
    int amount_hr = 0;

    printf("Please Enter ID: ");
    scanf("%s", Employees_ID);

    printf("Please Enter hour: ");
    scanf("%d", &working_hrs);

    printf("Please Enter Salary amount/hr: ");
    scanf("%d", &amount_hr);

    printf("Expected Output:\n");
    printf("Employees ID = %s\n", Employees_ID);
    printf("Salary = U$ ");
    printfcomma(working_hrs * amount_hr);
    printf("\n");

    return 0;
}
