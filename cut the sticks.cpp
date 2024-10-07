#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;
/*
 * Complete the function below.
 * Please store the size of the int array to be returned in result_size pointer. For example,
 * int a[3] = {1, 2, 3};
 * *result_size = 3;
 * return a;
 * 
 */
int* cutSticks(int lengths_size, int* lengths, int* result_size) {
    int* result = new int[lengths_size];
    int count = 0;
    int min_length;
    while (true) {
        min_length = 1001;
        int sticks_cut = 0;
        for (int i = 0; i < lengths_size; i++) {
            if (lengths[i] > 0) {
                sticks_cut++;
                if (lengths[i] < min_length) {
                    min_length = lengths[i];
                }
            }
        }
        if (sticks_cut == 0) {
            break;
        }
        result[count++] = sticks_cut;
        for (int i = 0; i < lengths_size; i++) {
            lengths[i] -= min_length;
        }
    }
    *result_size = count;
    return result;
}

int main()
{
  int *res, res_size, lengths_size = 0, i;
  cin>>lengths_size;

  int lengths[lengths_size];
  for(i = 0; i < lengths_size; i++) 
    cin>>lengths[i];

  res = cutSticks(lengths_size, lengths, &res_size);
  for (i = 0; i < res_size; i++) 
    cout<<res[i]<<endl;

  return 0;
}