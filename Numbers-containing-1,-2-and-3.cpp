void findAll()
{
    mp[1] = mp[2] = mp[3] = 1;
    for (int i = 11; i <= 1000000; i++)
    {
        // The number should only contain digits 1-3
        // to check it's last digit must be 1 or 2 or 3 and
        // 1/10 of the number should be set in the map
        if (i % 10 >= 1 && i % 10 <= 3 && mp[i / 10] == 1)
        {
            mp[i] = 1;
        }
    }
}
