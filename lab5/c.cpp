#include <iostream>
#include <vector>

using namespace std;
int ind;
class MaxHeap {
    public:
    vector<int> a;

    int parent(int i){
        return (i - 1) / 2;
    }

    int left(int i){
        return i * 2 + 1;
    }

    int right(int i){
        return i * 2 + 2;
    }

    int getMin(){
        return a[0];
    }

    void siftUp(int i){
        while (i > 0 and a[parent(i)] < a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }
    void insert(int k){
        a.push_back(k);
        int i = a.size() - 1;
        siftUp(i);
    }

    void heapify(int i){
        if (left(i) > a.size() - 1){
            ind = i;
            return;
        }
        
        int j = left(i);
        if (right(i) < a.size() and a[left(i)] < a[right(i)])
            j = right(i);
        if (a[i] < a[j]){
            swap(a[i], a[j]);
            ind = j;
            heapify(j);
        }
    }
    // void increaseKey(int i, int new_value) {
    //     a[i] = new_value;
    //     heapify(i);
    // }

    // void decreaseKey(int i, int new_value) {
    //     a[i] = new_value;
    //     while (i > 0 && a[parent(i)] < a[i]) {
    //         swap(a[parent(i)], a[i]);
    //         i = parent(i);
    //     }
    // }

    int extractMax(){
        int root_value = getMin();
        swap(a[0], a[a.size() - 1]);
        a.pop_back();
        ind = 0;
        if (a.size() > 0)
            heapify(0);
        return root_value;
    }
};

int main(){
    MaxHeap *heap = new MaxHeap();
    int n, x;
    int s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        heap->insert(x);
    }
    for (int i = 1; i < n; i++) {
        s = heap->extractMax();
        cout << ind + 1 << " " << s << '\n';
    }
    return 0;
}