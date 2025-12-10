#include <iostream>

using namespace std;

int main()
{
    int N = 0, check = -1, now = 1;
    int arr1[1000];
    int arr2[1000];

    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }

    for(int i = 0; i < N; i++)
    {
        while (check >= 0 && arr2[check] == now)
        {
            arr2[check] = 0;
            check--;
            now++;
        }
        
        if(arr1[i] == now)
        {
            now++;
            continue;
        }
        else if(check == -1 || arr2[check] > arr1[i])
        {
            check++;
            arr2[check] = arr1[i];
            continue;
        }
        else
        {
            cout << "Sad" << endl;
            return 0;
        }
    }
    
    cout << "Nice" << endl;

    return 0;
}