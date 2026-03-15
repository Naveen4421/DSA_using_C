int calPoints(char** operations, int operationsSize) {
    int stack[operationsSize];
    int top=-1;
    for(int i=0;i<operationsSize;i++){
        if(operations[i][0]=='+'){
            stack[top+1]=stack[top]+stack[top-1];
            top=top+1;
        }
        else if(operations[i][0]=='C'){
            top=top-1;
    }
    else if(operations[i][0]=='D'){
        stack[top+1]=stack[top]*2;
        top=top+1;
    }
    else{
        stack[++top]=atoi(operations[i]);

    }
    
    
    
}
int sum = 0;
    for (int i = 0; i <= top; i++)
        sum += stack[i];

    return sum;
        
}
