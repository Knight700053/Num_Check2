int func_odd()
{
    int a;

    cout << "Enter an integer: ";
    cin >> a;

    if ( a % 2 == 0)
        cout << a << " is even.";
    else
        cout << a << " is odd.";

    return 0;
}
