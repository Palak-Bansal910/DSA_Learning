#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void BubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void InsertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void SelectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
void CountSort(vector<int>& arr) {
    int n = arr.size();
    int maxElement = INT_MIN;
    for(int i : arr){
        maxElement = max(maxElement, i);    
    }
    vector<int> count(maxElement + 1, 0);
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    vector<int> output;
    output.reserve(n);
    for (int i = 0; i <= maxElement; i++) {
        if (count[i] > 0) {
            int freq = count[i];
            for (int j = 0; j < freq; j++) {
                output.push_back(i);
            }
        }
    }
    arr = output;
}
int main(){
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: "<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Choose a sorting algorithm:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Insertion Sort\n";
    cout << "3. Selection Sort\n";
    cout << "4. Count Sort\n";
    int choice;
    cin >> choice;
    switch(choice){
        case 1:
            BubbleSort(arr);
            break;
        case 2:
            InsertionSort(arr);
            break;
        case 3:
            SelectionSort(arr);
            break;
        case 4:
            CountSort(arr);
            break;
        default:
            cout << "Invalid choice\n";
            return 0;
    }
    cout << "Sorted array: ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}