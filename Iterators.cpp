//
// Created by i7 on 1/27/2024.
//
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

void iteratorTopic(){
    vector<int> arr ={1,2,3,4,5,6};
    vector<int>::iterator ptr;
    cout << "The vector elements are: ";
    for(ptr=arr.begin(); ptr<arr.end(); ptr++){
        cout << *ptr << " ";

    }
}
void vectorTopic(){
    vector<int> vec;
    for (int i = 0; i <100 ; ++i) {
        vec.push_back(i);
    }
    int countEvenNum =0;
    int countOddNum =0;
    for (auto num:vec) {
      if(num%2==0){
          countEvenNum++;
      } else{
          countOddNum++;
      }
    }
    cout << "Number of even numbers: " << countEvenNum << endl;
    cout << "Numbers of odd numbers: " << countOddNum<< endl;
}
void memoryManagement(){
    vector<double> years(10,2024);
    cout << years[1] << endl;
    cout << years.size()<< endl;
    cout << years.capacity()<< endl;
//    cout << years.shrink_to_fit()<< endl;
}

int main(){
    memoryManagement();
    return 0;

}
