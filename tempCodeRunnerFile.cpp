int left = 0;
    int right = 6 ;
    while(right>left){
        //if((pow(arr[left],2))>=pow(arr[right],2)){
            if(abs(v[left])>=abs(v[right])){
            v[left] = pow(v[left], 2);
            v[right] = pow(v[right], 2);
            swap(v[left],v[right]);
            left++;
            right--;
        }
    }