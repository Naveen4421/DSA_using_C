struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode*temp;
    struct ListNode *curr=head;
    struct ListNode *pre=NULL;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=pre;
        pre=curr;
        curr=temp;
    }
    return pre;


    
}
