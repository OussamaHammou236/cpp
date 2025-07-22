#include <iostream>
#include <vector>

void buildOpstackSequence(int start, int end, std::vector<int>& sequence) {
    if (start > end) return;

    int mid = (start + end) / 2;
    sequence.push_back(mid);

    // ندخلو لليسار
    buildOpstackSequence(start, mid - 1, sequence);

    // ثم لليمين
    buildOpstackSequence(mid + 1, end, sequence);
}

int main() {
    int k = 1; // عدد الصغار لي بغيت ندخلهم
    std::vector<int> sequence;

    buildOpstackSequence(0, k - 1, sequence);

    std::cout << "opstack sequence: ";
    for (int i : sequence) std::cout << i << " ";
    std::cout << "\n";

    return 0;
}
