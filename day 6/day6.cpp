
#include <iostream>
using namespace std;

int triangle_pattern()
{
    int n = 10;
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (val % 2 == 0)
            {
                cout << false;
            }
            else
            {
                cout << true;
            }
            val++;
        }
        cout << endl;
    }
}

int rhombus_pattern()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void butterfly_patter()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void diamond_pattern()
{

    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((i * 2) - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((i * 2) - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pallidromin_pattern()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void user_want()
{
int n;
do{
    cout<<"Enter a No ";
    cin>>n;
    if(n%10==0){
        break;
    }
    cout<<"you entered "<<n<<endl;
} while(true);

}

int main()
{
    
user_want();

   // pallidromin_pattern();
    // diamond_pattern();
    // butterfly_patter();
    //  rhombus_pattern();
    //  triangle_pattern();

    return 0;
}
