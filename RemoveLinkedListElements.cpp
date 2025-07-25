
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode* temp=new ListNode(-1,NULL);
        temp->next=head;
        ListNode* prev=temp;
        while(head!=NULL)
        {
            if(head->val==val){
              prev->next=head->next;
            }
            else{
            prev=head;}
            
            head=head->next;
           
        }
        return temp->next;
        
    }
};
