#include <bits/stdc++.h>

using namespace std;

class Heap {
    public:
    vector<int> a;
    int maxi;
    int parent(int i) {
        return (i - 1) / 2;
    }

    int left(int i) {
        return 2 * i + 1;
    }

    int right(int i) {
        return 2 * i + 2;
    }

    Heap(int maxi) {
        this->maxi = maxi;
    }

    void insert(int k) {
        if (a.size() == maxi) {
            cout << -1 << '\n';
            return;
        }
        a.push_back(k);
        cout << siftUp(a.size() - 1) << '\n';
        
    }

    int siftUp(int i) {
        if (i > 0 and a[parent(i)] < a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
            return siftUp(i);
        }
        return i + 1;
    }

    int heapify(int i) {
        if (left(i) > a.size() - 1)
            return i + 1;

        int j = left(i);
        if (right(i) < a.size() and a[right(i)] > a[left(i)])
            j = right(i);

        if (a[i] < a[j]) {
            swap(a[i], a[j]);
            return heapify(j);
        }
        return i + 1;
    }

    int del(int i) {
        if (i < 0 or i > get_size() - 1)
            return -1;
        int root_value = a[i];
        if (get_size() == 1) {
            a.pop_back();
            return root_value;
        }
        swap(a[i], a[a.size() - 1]);
        a.pop_back();
        siftUp(i);
        heapify(i);
        return root_value;
    }

    int get_size() {
    	return a.size();
    }

    void print() {
        for (int i = 0; i < a.size(); i++) 
            cout << a[i] << " ";
    }

    bool isEmpty() {
        return a.empty();
    }


    int extractMax() {
        if (isEmpty()){ 
            return -1;
        }
        int root_value = a[0];
        if (a.size() == 1) {
            a.pop_back();
            cout << 0 << " ";
            return root_value;
        }
        swap(a[0], a[a.size() - 1]);
        a.pop_back();
        cout << heapify(0) << " ";
        return root_value;
    }

  

    
};

int main() {
    int n, q;
    cin >> n >> q;
    Heap *heap = new Heap(n);
    while (q--) {
        int k;
        cin >> k;
        if (k == 1)
            cout << heap->extractMax() << '\n';
        else if (k == 2) {
            int x;
            cin >> x;
            heap->insert(x);
        }
    }
    heap->print();
    cout << '\n';
    return 0;
}