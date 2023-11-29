int count=0;
            for (int i = 0; i < n; i++)
            {
                /* code */
                if(arr[i] == 0)
                {
                    return -1;
                }
                else
                {
                    i = i+arr[i];
                }
                count++;
            }
            return count;