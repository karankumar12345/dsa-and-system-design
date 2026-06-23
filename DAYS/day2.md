question 4 maximum subarray 
in this problem we need to find the the maxsumarray of ant length but only maxsum of array then we simpetl think like if we traversal the array and stroe evert step maxsum and used current sum and if currnet sum 0 is less then we simetel reset tha one and check agan if we find then ok other wise we have alredya maxsum have 
code samplee  for(int i=0;i<nums.size();i++){
            maxsum+=nums[i];
            Sum=max(Sum,maxsum);
            if(maxsum<0){
                maxsum=0;
            }
        }

quesiton 5 sort color 
in this we siemtpel used s end mind and make loignn 
   int l=0,mid=0,h=nums.size()-1;
    while(mid<=h){
        if(nums[mid]==0){
            swap(nums[l],nums[mid]);
            l++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[h]);
            h--;
        }
    }
    