#include <bits/stdc++.h>

using namespace std;

int main() {
    int webServers;
    cin >> webServers;

    int cpuCount = 0, memoryCount = 0, hddCount = 0;

    for (int i = 0; i < webServers; ++i) {
        char cpu, memory, hdd;
        cin >> cpu >> memory >> hdd;

        if (cpu == 'J') cpuCount++;
        if (memory == 'J') memoryCount++;
        if (hdd == 'J') hddCount++;
    }

    cout << min(cpuCount, min(memoryCount, hddCount)) << endl;

    return 0;
}