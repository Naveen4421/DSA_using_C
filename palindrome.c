bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    char s[20];
    sprintf(s,"%d",x);
    int left=0; int right=strlen(s)-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        
        }
        left++;
        right--;
    }
    return true;
}
