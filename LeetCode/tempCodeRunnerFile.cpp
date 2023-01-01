long long int sum=0 ;
        int temp = x, mod;
        while (x > 0)
        {
           mod = x % 10;
            sum =sum*10 +mod;
            x /= 10;
        }

        if (temp == sum)
            return true;
        else
            return false;