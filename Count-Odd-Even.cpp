void countOddEven(int a[], int sizeof_array)
{
    int odds = 0;
    int evens = 0;
    for (int i = 0; i < sizeof_array; i++)
    {
        if (a[i] % 2 == 1)
        {
            odds++;
        }
        else
        {
            evens++;
        }
    }
    cout << odds << " " << evens << endl;
}
