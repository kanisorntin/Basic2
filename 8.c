#include <stdio.h>

int main(){
    int N, i;
    int studentId, score, totalClasses, absentClasses;
    float attendancePercent;
    int passCount = 0;
    int failCount = 0;

    if (scanf("%d", &N) != 1){
        return 1;
    }

    for (i = 0; i < N; i++){

        if (scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4){
            break;
        }
        attendancePercent = (float)(totalClasses - absentClasses) / totalClasses * 100.0;

        if (score >= 50 && attendancePercent >= 75) {
            printf("Student %d:PASS\n", studentId);
            passCount++;
        } else if (score < 50 && attendancePercent >= 75){
            printf("Student %d:FAIL-Low Score\n",studentId);
            failCount++;
        } else if (score >= 50 && attendancePercent < 75) {
            printf("Student %d:FAIL-Low Attendance(70.00%%)\n",studentId ,attendancePercent);
            failCount++;
        } else {
            printf("Student %d:FAIL-Both Score and Attentdance\n",studentId);
            failCount++;
        }
    }
    printf("\n--- Summary ---\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total FAIL: %d\n", failCount);
    return 0;
}