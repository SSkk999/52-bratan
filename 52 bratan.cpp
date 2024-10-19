
using namespace std;
#include <iostream>

int main()
{
    //const int N = 10, M = 10;
    //int arr[N]{ 11,22,31,14,56,6,7,8,9,10 }, arr2[M]{ 12,11,13,14,15,16,17,18,19,20 };
    //const int SIZE = N + M;
    //int arr3[SIZE];
    //int* parr1 = arr, * parr2 = arr2, * parr3 = arr3;
    //int k = 0;
    //for (int i = 0; i < N; i++) {
    //    int j;
    //    for (j = 0; j < M; j++) {
    //        if (parr1[i] == parr2[j]) {
    //            break;
    //        }
    //    }
    //    if (j == M) {
    //        parr3[k] = parr1[i];
    //        ++k;
    //    }
    //}
    //for (int i = 0; i < k; i++) {
    //    cout << parr3[i] << " ";
    //}
    const int N = 10, M = 10;
    int s = 0;
    int f = 0;
    int arr[N]{ 11,22,31,14,56,6,7,8,9,10 }, arr2[M]{ 12,11,13,14,15,16,17,18,19,20 };
    const int SIZE = N + M;
    int arr3[SIZE];
    int* parr1 = arr, * parr2 = arr2, * parr3 = arr3;
    int k = 0;
    for (int i = 0; i < N; i++) {
        int j;
        for (j = 0; j < M; j++) {
            if (parr1[i] == parr2[j]) {
                break;
            }
        }
        if (j == M) {
            parr3[k] = parr1[i];
            ++k;
        }

    }
    for (int i = 0; i < N; i++) {
        int j;
        int f = 0;
        for ( j = 0; j < M; j++) {
            if (parr2[i] == parr1[j]) {
                break;
            }
        }
        if (j == M) {
            f = k;
            parr3[f] = parr2[i];
            ++f;
            ++k;
        }
        
    }
    for (int i = 0; i < k ; i++) {
        cout << parr3[i] << " ";
    }
}































        //int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
        //int arr2[10] = { 10,22,33,44,55,66,77,88,99,100 };
        //int arr3[SIZE];
        //int* fd = arr;
        //int* poka = arr2;
        //int* hello = arr3;
        //int sum = 0;
        //for (int i = 0; i < 10; i++)
        //{
        //    cout << "enter mashuv1 :" << endl;
        //    cin >> *(fd + i);
        //}
        //for (int i = 0; i < 10; i++)
        //{
        //    cout << "enter mashuv2 :" << endl;
        //    cin >> *(poka + i);
        //    
        //}
    
        //for (int i = 0; i < 10; i++)
        //{
        //    for (int j = 0; j< 10; j++)
        //    {
        //        if (*(fd + i) != *(poka + j) ) {
        //                *(hello + sum) = *(fd + i);
        //                sum + 1;
        //                
        //            }
        //                
        //            
        //        }
        //        
    
        //    }
        //for (int j = 0; j < 10; j++)
        //{
    
        //        cout << "sd:" << *(hello + j) << endl;
        //    


        //}
        //   
        //}

        

    
    



//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr2[10] = { 10,22,33,44,55,66,77,88,99,100 };
//    int arr3[SIZE];
//    int* fd = arr;
//    int* poka = arr2;
//    int* hello = arr3;
//    int idex = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "enter mashuv1 :" << endl;
//        cin >> *(fd + i);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "enter mashuv2 :" << endl;
//        cin >> *(poka + i);
//
//    }
//
//    for (int i = 0; i < 10; i++) {
//        for (int j = 10; j < 20; j++) {
//            *(hello + i) = *(fd + i);
//            *(hello + i + 10) = *(poka + i);
//
//        }
//    }
//
//    for (int y = 0; y < 10; y++)
//    {
//        for (int j = 10; j < 20; j++)
//        {
//            if (*(hello + y) != *(hello + j))
//            {
//                for (int k = 10; k < 20; k++)
//                {
//                    if (*(hello + y) != *(poka + k)) {
//                        *(hello + y) = *(hello + y);
//                        idex = y;
//                        if (y != idex)
//                        {
//                            idex = y;
//                        }
//                    }
//                    else {
//                        break;
//                    }
//
//
//
//
//                }
//            }
//            else {
//                break;
//            }
//
//
//        }
//    }
//    cout << endl;
//    for (int i = 0; i < idex; i++)
//    {
//
//        cout << *(hello + i) << endl;
//
//
//
//    }
//}