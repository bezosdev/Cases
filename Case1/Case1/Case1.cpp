#include <iostream>
#include <clocale>


using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    int N;
    cout << "Введите длину массива: ";
    cin >> N;
    int* A = new int[N];
    cout << "Введите значения массива через пробел: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cout << "Ваш массив:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    int mx = INT_MIN;
    int mxi = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > mx)
        {
            mx = A[i];
            mxi = i;
        }
    }
    cout << endl << "Максимальный элемент массива: " << mx << "[" << mxi << "]" << endl;
    int mn = INT_MAX;
    int mni = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= mn)
        {
            mn = A[i];
            mni = i;
        }
    }
    cout << "Минимальный элемент массива: " << mn << "[" << mni << "]" << endl;
    int L = 0;
    int R = 0;
    if (abs(mxi - mni) <= 1)
    {
        cout << "Элементов между максимумом и минимумом нет";
    }
    else
    {
        if (mni < mxi)
        {
            L = mni;
            R = mxi;
        }
        else if (mni > mxi)
        {
            L = mxi;
            R = mni;
        }
        int summ = 0;
        for (int i = L+1; i < R; i++)
        {
            if (A[i] < 0)
            {
                summ = summ + A[i];
            }
            
        }
        cout << "Сумма отрицательных элементов между максимумом и минимумом: " << summ;

    }





}
