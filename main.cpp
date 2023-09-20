#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char math_sign;
    
    cout << "Enter the operation sign" << endl;
    cin >> math_sign;
    
    switch(math_sign){
        case '+' :{
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
            cout << "Result" << endl;
            cout << a + b;
        break;
        }
        case '-' :{
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
            cout << "Result" << endl;
            cout << a - b;
        break;
        }
        case '*' :{
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
            cout << "Result" << endl;
            cout << a * b;
        break;
        }
        case '/' :{
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
            cout << "Result" << endl;
            cout << a / b;
        break;
        }
        case '!' :{
        cout << "Enter variable" << endl;
        cin >> a;
        int res = 1;
        for (int i = 0; i < a; i ++){
            res *= a;
        }
            cout << "Result" << endl;
            cout << res << endl;
        break;
        }
        case '^':{
        cout << "Enter variable" << endl;
        cin >> a;
        cout << "Enter degree" << endl;
        cin >> b;
        int result = 1;
        for (int i = 0; i < b; i++){
            result *= a;
        }
            cout << "Result" << endl;
            cout << result;
        break;
        }
        case '%' :{
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
            cout << "Result" << endl;
            cout << a % b;
        break;
        }
    }
    return 0;
}