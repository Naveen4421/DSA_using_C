struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* temp=NULL;
    struct ListNode* pre=NULL;
    while(head!=NULL && head->val==val){
        temp=head;
        head=head->next;
        free(temp);
    }
    
    pre=head;
    while(pre!=NULL && pre->next!=NULL){
        temp=pre->next;
        if(temp->val==val){
            pre->next=pre->next->next;
            free(temp);
        }else{
            pre=temp;
            temp=temp->next;
        }
    }
        return head;


}
