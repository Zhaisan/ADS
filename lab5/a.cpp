#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
    public:
    vector<int> a;

    int parent(int i) {
        return (i - 1) / 2;
    }

    int left(int i) {
        return 2 * i + 1;
    }

    int right(int i) {
        return 2 * i + 2;
    }

    int getMin() {
        return a[0];
    }

    // void siftUp(int i) {
    //     while (i > 0 && a[parent(i)] > a[i]) {
    //         swap(a[parent(i)], a[i]);
    //         i = parent(i);
    //     }
    // }

    void insert(int k) {
        a.push_back(k);
        int i = a.size() - 1;
        while (i > 0 && a[parent(i)] < a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    int upPriority(int ind, int k){
        a[ind] += k;
        while(ind > 0 and a[parent(ind)] < a[ind]){
            swap(a[parent(ind)], a[ind]);
            ind = parent(ind);
        }
        return ind;
    }
    // void heapify(int i) {
    //     if (left(i) > a.size() - 1)
    //         return;
        
    //     int j = left(i);
    //     if (right(i) < a.size() && a[left(i)] > a[right(i)])
    //         j = right(i);
    //     if (a[i] > a[j]) {
    //         swap(a[i], a[j]);
    //         heapify(j);
    //     }
    // }

    // int extractMin() {
    //     int root_value = getMin();
    //     swap(a[0], a[a.size() - 1]);
    //     a.pop_back();
    //     if (a.size() > 0)
    //         heapify(0);
    //     return root_value;
    // }

    // void increaseKey(int i, int new_value) {
    //     a[i] = new_value;
    //     heapify(i);
    // }

    // void decreaseKey(int i, int new_value) {
    //     a[i] = new_value;
    //     while (i > 0 && a[parent(i)] > a[i]) {
    //         swap(a[parent(i)], a[i]);
    //         i = parent(i);
    //     }
    // }

};

int main() {
    int n, k;
    cin >> n;
    MaxHeap *heap = new MaxHeap();
    for (int i = 0; i < n; i++) {
        cin >> k;
        heap->insert(k);
    }
    int T;
    cin >> T;
    while(T--){
        int ind, k;
        cin >> ind >> k;
        cout << heap -> upPriority(ind - 1, k) + 1 << '\n';
    }

    for (int i = 0; i < n; i++) {
        cout << heap-> a[i] << " ";        
    }
    return 0;
}
