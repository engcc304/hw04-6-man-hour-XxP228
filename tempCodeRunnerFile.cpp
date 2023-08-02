int main() {
    char employeeID[11];
    int hoursWorked;
    float hourlyIncome, salary;

    // Get employee information
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &hoursWorked);

    printf("Salary amount/hr: ");
    scanf("%f", &hourlyIncome);

    // Calculate salary
    salary = hoursWorked * hourlyIncome;

    // Display the result
    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}