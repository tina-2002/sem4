#include<stdio.h>

void main() {
    int n, i, j, time = 0, min, current;
    int pid[10], bt[10], at[10], wt[10], tat[10];
    float avg_waiting_time = 0, avg_turnaround_time = 0;

    printf("Enter total number of processes: ");
    scanf("%d", &n);

    // Taking input for process details
    for(i = 0; i < n; i++) {
        printf("Enter details of process[%d]:\n", i+1);
        printf("Process ID: ");
        scanf("%d", &pid[i]);
        printf("Arrival Time: ");
        scanf("%d", &at[i]);
        printf("Burst Time: ");
        scanf("%d", &bt[i]);
    }

    // Sorting the processes based on their arrival time
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(at[i] > at[j]) {
                // Swapping the process IDs
                int temp_pid = pid[i];
                pid[i] = pid[j];
                pid[j] = temp_pid;
                // Swapping the arrival times
                int temp_at = at[i];
                at[i] = at[j];
                at[j] = temp_at;
                // Swapping the burst times
                int temp_bt = bt[i];
                bt[i] = bt[j];
                bt[j] = temp_bt;
            }
        }
    }

    // Calculating waiting time and turnaround time for each process
    for(i = 0; i < n; i++) {
        current = i;
        // Finding the process with the shortest burst time
        for(j = i+1; j < n; j++) {
            if(at[j] <= time && bt[j] < bt[current]) {
                current = j;
            }
        }
        // Updating the current time
        time += bt[current];
        // Swapping the current process with the i-th process
        int temp_pid = pid[i];
        pid[i] = pid[current];
        pid[current] = temp_pid;
        int temp_at = at[i];
        at[i] = at[current];
        at[current] = temp_at;
        int temp_bt = bt[i];
        bt[i] = bt[current];
        bt[current] = temp_bt;
        // Calculating waiting time and turnaround time for the current process
        wt[i] = time - at[i] - bt[i];
        tat[i] = time - at[i];
        // Updating the average waiting time and average turnaround time
        avg_waiting_time += wt[i];
        avg_turnaround_time += tat[i];
    }

    // Calculating the final average waiting time and average turnaround time
    avg_waiting_time /= n;
    avg_turnaround_time /= n;

    // Displaying the results
    printf("\nProcess\t\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++) {
        printf("P[%d]\t\t%d\t\t%d\t\t%d\t\t%d\n", pid[i], at[i], bt[i], wt[i], tat[i]);
    }
    printf("\nAverage Waiting Time = %0.2f\n", avg_waiting_time);
    printf("Average Turnaround Time = %0.2f\n", avg_turnaround_time);
}
