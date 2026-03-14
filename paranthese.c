bool isValid(char* s) {
    int stack[20];
    int n=strlen(s);
    int top=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            stack[++top]=s[i];
        }
        else if(s[i]==')'||s[i]=='}'||s[i]==']'){
            if(top==-1){
                return false;
            }
            char t=stack[top];
            top=top-1;
            if (s[i] == ')' && t != '(') return false;
            if (s[i] == '}' && t != '{') return false;
            if (s[i] == ']' && t != '[') return false;
        }
    }
    return top==-1;
    
}
